#include "java-core.hpp"
#include <memory>
#include "android.animation.Animator.hpp"
#include "android.animation.LayoutTransition.hpp"
#include "android.animation.TimeInterpolator.hpp"
#include "android.content.ClipData.hpp"
#include "android.content.ClipDescription.hpp"
#include "android.content.ComponentName.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.content.res.Configuration.hpp"
#include "android.content.res.Resources.hpp"
#include "android.content.res.TypedArray.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.Canvas.hpp"
#include "android.graphics.Matrix.hpp"
#include "android.graphics.Paint.hpp"
#include "android.graphics.Point.hpp"
#include "android.graphics.Rect.hpp"
#include "android.graphics.Region.hpp"
#include "android.graphics.SurfaceTexture.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Handler.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.Parcelable.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.util.DisplayMetrics.hpp"
#include "android.util.SparseArray.hpp"
#include "android.view.AbsSavedState.hpp"
#include "android.view.ActionMode.hpp"
#include "android.view.ActionProvider.hpp"
#include "android.view.CollapsibleActionView.hpp"
#include "android.view.ContextMenu.hpp"
#include "android.view.ContextThemeWrapper.hpp"
#include "android.view.Display.hpp"
#include "android.view.DragEvent.hpp"
#include "android.view.FocusFinder.hpp"
#include "android.view.GestureDetector.hpp"
#include "android.view.Gravity.hpp"
#include "android.view.HapticFeedbackConstants.hpp"
#include "android.view.InflateException.hpp"
#include "android.view.InputDevice.hpp"
#include "android.view.InputEvent.hpp"
#include "android.view.InputQueue.hpp"
#include "android.view.KeyCharacterMap.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.view.LayoutInflater.hpp"
#include "android.view.Menu.hpp"
#include "android.view.MenuInflater.hpp"
#include "android.view.MenuItem.hpp"
#include "android.view.MotionEvent.hpp"
#include "android.view.OrientationEventListener.hpp"
#include "android.view.OrientationListener.hpp"
#include "android.view.ScaleGestureDetector.hpp"
#include "android.view.SoundEffectConstants.hpp"
#include "android.view.SubMenu.hpp"
#include "android.view.Surface.hpp"
#include "android.view.SurfaceHolder.hpp"
#include "android.view.SurfaceView.hpp"
#include "android.view.TextureView.hpp"
#include "android.view.TouchDelegate.hpp"
#include "android.view.VelocityTracker.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewConfiguration.hpp"
#include "android.view.ViewDebug.hpp"
#include "android.view.ViewGroup.hpp"
#include "android.view.ViewManager.hpp"
#include "android.view.ViewParent.hpp"
#include "android.view.ViewPropertyAnimator.hpp"
#include "android.view.ViewStub.hpp"
#include "android.view.ViewTreeObserver.hpp"
#include "android.view.Window.hpp"
#include "android.view.WindowManager.hpp"
#include "android.view.accessibility.AccessibilityEvent.hpp"
#include "android.view.accessibility.AccessibilityNodeInfo.hpp"
#include "android.view.animation.Animation.hpp"
#include "android.view.animation.LayoutAnimationController.hpp"
#include "android.view.inputmethod.EditorInfo.hpp"
#include "android.view.inputmethod.InputConnection.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.List.hpp"
#include "org.xmlpull.v1.XmlPullParser.hpp"

jclass android::view::View_OnGenericMotionListener::_class = nullptr;
jclass android::view::TouchDelegate::_class = nullptr;
jclass android::view::View_OnTouchListener::_class = nullptr;
jclass android::view::LayoutInflater_Factory::_class = nullptr;
jclass android::view::WindowManager_BadTokenException::_class = nullptr;
jclass android::view::View_AccessibilityDelegate::_class = nullptr;
jclass android::view::ContextMenu::_class = nullptr;
jclass android::view::InflateException::_class = nullptr;
jclass android::view::LayoutInflater_Filter::_class = nullptr;
jclass android::view::HapticFeedbackConstants::_class = nullptr;
jclass android::view::InputQueue::_class = nullptr;
jclass android::view::GestureDetector_OnDoubleTapListener::_class = nullptr;
jclass android::view::ViewConfiguration::_class = nullptr;
jclass android::view::ViewTreeObserver_OnPreDrawListener::_class = nullptr;
jclass android::view::MenuInflater::_class = nullptr;
jclass android::view::MotionEvent_PointerProperties::_class = nullptr;
jclass android::view::View_OnCreateContextMenuListener::_class = nullptr;
jclass android::view::LayoutInflater::_class = nullptr;
jclass android::view::OrientationEventListener::_class = nullptr;
jclass android::view::InputEvent::_class = nullptr;
jclass android::view::WindowManager::_class = nullptr;
jclass android::view::ViewDebug_ExportedProperty::_class = nullptr;
jclass android::view::SurfaceView::_class = nullptr;
jclass android::view::KeyEvent::_class = nullptr;
jclass android::view::LayoutInflater_Factory2::_class = nullptr;
jclass android::view::ViewDebug_CapturedViewProperty::_class = nullptr;
jclass android::view::MenuItem_OnActionExpandListener::_class = nullptr;
jclass android::view::View_MeasureSpec::_class = nullptr;
jclass android::view::GestureDetector_OnGestureListener::_class = nullptr;
jclass android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::_class = nullptr;
jclass android::view::VelocityTracker::_class = nullptr;
jclass android::view::View_OnClickListener::_class = nullptr;
jclass android::view::SurfaceHolder_Callback2::_class = nullptr;
jclass android::view::ActionMode::_class = nullptr;
jclass android::view::CollapsibleActionView::_class = nullptr;
jclass android::view::MotionEvent::_class = nullptr;
jclass android::view::KeyEvent_Callback::_class = nullptr;
jclass android::view::ContextMenu_ContextMenuInfo::_class = nullptr;
jclass android::view::InputDevice::_class = nullptr;
jclass android::view::DragEvent::_class = nullptr;
jclass android::view::View_DragShadowBuilder::_class = nullptr;
jclass android::view::SoundEffectConstants::_class = nullptr;
jclass android::view::OrientationListener::_class = nullptr;
jclass android::view::SurfaceHolder_Callback::_class = nullptr;
jclass android::view::ViewStub::_class = nullptr;
jclass android::view::KeyCharacterMap::_class = nullptr;
jclass android::view::Window::_class = nullptr;
jclass android::view::KeyEvent_DispatcherState::_class = nullptr;
jclass android::view::SurfaceHolder::_class = nullptr;
jclass android::view::View_OnFocusChangeListener::_class = nullptr;
jclass android::view::ViewGroup_OnHierarchyChangeListener::_class = nullptr;
jclass android::view::View::_class = nullptr;
jclass android::view::ViewPropertyAnimator::_class = nullptr;
jclass android::view::InputDevice_MotionRange::_class = nullptr;
jclass android::view::ActionProvider::_class = nullptr;
jclass android::view::ViewGroup::_class = nullptr;
jclass android::view::ActionMode_Callback::_class = nullptr;
jclass android::view::Surface_OutOfResourcesException::_class = nullptr;
jclass android::view::View_OnAttachStateChangeListener::_class = nullptr;
jclass android::view::TextureView::_class = nullptr;
jclass android::view::WindowManager_LayoutParams::_class = nullptr;
jclass android::view::ViewDebug_IntToString::_class = nullptr;
jclass android::view::View_OnKeyListener::_class = nullptr;
jclass android::view::ViewStub_OnInflateListener::_class = nullptr;
jclass android::view::Menu::_class = nullptr;
jclass android::view::GestureDetector_SimpleOnGestureListener::_class = nullptr;
jclass android::view::MotionEvent_PointerCoords::_class = nullptr;
jclass android::view::FocusFinder::_class = nullptr;
jclass android::view::ViewParent::_class = nullptr;
jclass android::view::View_OnSystemUiVisibilityChangeListener::_class = nullptr;
jclass android::view::Surface::_class = nullptr;
jclass android::view::ViewTreeObserver_OnTouchModeChangeListener::_class = nullptr;
jclass android::view::GestureDetector::_class = nullptr;
jclass android::view::View_OnHoverListener::_class = nullptr;
jclass android::view::Display::_class = nullptr;
jclass android::view::SurfaceHolder_BadSurfaceTypeException::_class = nullptr;
jclass android::view::Window_Callback::_class = nullptr;
jclass android::view::ScaleGestureDetector_OnScaleGestureListener::_class = nullptr;
jclass android::view::ViewDebug_RecyclerTraceType::_class = nullptr;
jclass android::view::ViewTreeObserver_OnScrollChangedListener::_class = nullptr;
jclass android::view::AbsSavedState::_class = nullptr;
jclass android::view::View_BaseSavedState::_class = nullptr;
jclass android::view::TextureView_SurfaceTextureListener::_class = nullptr;
jclass android::view::InputQueue_Callback::_class = nullptr;
jclass android::view::KeyCharacterMap_UnavailableException::_class = nullptr;
jclass android::view::ScaleGestureDetector::_class = nullptr;
jclass android::view::View_OnLayoutChangeListener::_class = nullptr;
jclass android::view::ViewTreeObserver_OnGlobalFocusChangeListener::_class = nullptr;
jclass android::view::View_OnDragListener::_class = nullptr;
jclass android::view::ViewDebug_HierarchyTraceType::_class = nullptr;
jclass android::view::MenuItem::_class = nullptr;
jclass android::view::MenuItem_OnMenuItemClickListener::_class = nullptr;
jclass android::view::Gravity::_class = nullptr;
jclass android::view::ViewTreeObserver::_class = nullptr;
jclass android::view::ViewManager::_class = nullptr;
jclass android::view::ViewDebug::_class = nullptr;
jclass android::view::View_OnLongClickListener::_class = nullptr;
jclass android::view::KeyCharacterMap_KeyData::_class = nullptr;
jclass android::view::ViewGroup_LayoutParams::_class = nullptr;
jclass android::view::ViewGroup_MarginLayoutParams::_class = nullptr;
jclass android::view::ContextThemeWrapper::_class = nullptr;
jclass android::view::SubMenu::_class = nullptr;
jclass android::view::ViewDebug_FlagToString::_class = nullptr;
jclass android::view::ViewTreeObserver_OnGlobalLayoutListener::_class = nullptr;

bool android::view::View_OnGenericMotionListener::onGenericMotion(const ::android::view::View& arg0, const ::android::view::MotionEvent& arg1) const {
    if (!::android::view::View_OnGenericMotionListener::_class) ::android::view::View_OnGenericMotionListener::_class = java::fetch_class("android/view/View$OnGenericMotionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotion", "(Landroid/view/View;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::TouchDelegate::TouchDelegate(const ::android::graphics::Rect& arg0, const ::android::view::View& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::view::TouchDelegate::_class) ::android::view::TouchDelegate::_class = java::fetch_class("android/view/TouchDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Rect;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::view::TouchDelegate::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::TouchDelegate::_class) ::android::view::TouchDelegate::_class = java::fetch_class("android/view/TouchDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View_OnTouchListener::onTouch(const ::android::view::View& arg0, const ::android::view::MotionEvent& arg1) const {
    if (!::android::view::View_OnTouchListener::_class) ::android::view::View_OnTouchListener::_class = java::fetch_class("android/view/View$OnTouchListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouch", "(Landroid/view/View;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::view::View android::view::LayoutInflater_Factory::onCreateView(const ::java::lang::String& arg0, const ::android::content::Context& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::view::LayoutInflater_Factory::_class) ::android::view::LayoutInflater_Factory::_class = java::fetch_class("android/view/LayoutInflater$Factory");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::WindowManager_BadTokenException::WindowManager_BadTokenException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::view::WindowManager_BadTokenException::_class) ::android::view::WindowManager_BadTokenException::_class = java::fetch_class("android/view/WindowManager$BadTokenException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::WindowManager_BadTokenException::WindowManager_BadTokenException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::view::WindowManager_BadTokenException::_class) ::android::view::WindowManager_BadTokenException::_class = java::fetch_class("android/view/WindowManager$BadTokenException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::View_AccessibilityDelegate::View_AccessibilityDelegate() : ::java::lang::Object((jobject)0) {
    if (!::android::view::View_AccessibilityDelegate::_class) ::android::view::View_AccessibilityDelegate::_class = java::fetch_class("android/view/View$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::view::View_AccessibilityDelegate::sendAccessibilityEvent(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::view::View_AccessibilityDelegate::_class) ::android::view::View_AccessibilityDelegate::_class = java::fetch_class("android/view/View$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEvent", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::View_AccessibilityDelegate::sendAccessibilityEventUnchecked(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::view::View_AccessibilityDelegate::_class) ::android::view::View_AccessibilityDelegate::_class = java::fetch_class("android/view/View$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEventUnchecked", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::view::View_AccessibilityDelegate::dispatchPopulateAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::view::View_AccessibilityDelegate::_class) ::android::view::View_AccessibilityDelegate::_class = java::fetch_class("android/view/View$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::View_AccessibilityDelegate::onPopulateAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::view::View_AccessibilityDelegate::_class) ::android::view::View_AccessibilityDelegate::_class = java::fetch_class("android/view/View$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::View_AccessibilityDelegate::onInitializeAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::view::View_AccessibilityDelegate::_class) ::android::view::View_AccessibilityDelegate::_class = java::fetch_class("android/view/View$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::View_AccessibilityDelegate::onInitializeAccessibilityNodeInfo(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityNodeInfo& arg1) const {
    if (!::android::view::View_AccessibilityDelegate::_class) ::android::view::View_AccessibilityDelegate::_class = java::fetch_class("android/view/View$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityNodeInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::view::View_AccessibilityDelegate::onRequestSendAccessibilityEvent(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::view::View_AccessibilityDelegate::_class) ::android::view::View_AccessibilityDelegate::_class = java::fetch_class("android/view/View$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestSendAccessibilityEvent", "(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::view::ContextMenu android::view::ContextMenu::setHeaderTitle(int32_t arg0) const {
    if (!::android::view::ContextMenu::_class) ::android::view::ContextMenu::_class = java::fetch_class("android/view/ContextMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeaderTitle", "(I)Landroid/view/ContextMenu;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ContextMenu _ret(ret);
    return _ret;
}

::android::view::ContextMenu android::view::ContextMenu::setHeaderTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::ContextMenu::_class) ::android::view::ContextMenu::_class = java::fetch_class("android/view/ContextMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeaderTitle", "(Ljava/lang/CharSequence;)Landroid/view/ContextMenu;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ContextMenu _ret(ret);
    return _ret;
}

::android::view::ContextMenu android::view::ContextMenu::setHeaderIcon(int32_t arg0) const {
    if (!::android::view::ContextMenu::_class) ::android::view::ContextMenu::_class = java::fetch_class("android/view/ContextMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeaderIcon", "(I)Landroid/view/ContextMenu;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ContextMenu _ret(ret);
    return _ret;
}

::android::view::ContextMenu android::view::ContextMenu::setHeaderIcon(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::view::ContextMenu::_class) ::android::view::ContextMenu::_class = java::fetch_class("android/view/ContextMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeaderIcon", "(Landroid/graphics/drawable/Drawable;)Landroid/view/ContextMenu;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ContextMenu _ret(ret);
    return _ret;
}

::android::view::ContextMenu android::view::ContextMenu::setHeaderView(const ::android::view::View& arg0) const {
    if (!::android::view::ContextMenu::_class) ::android::view::ContextMenu::_class = java::fetch_class("android/view/ContextMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeaderView", "(Landroid/view/View;)Landroid/view/ContextMenu;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ContextMenu _ret(ret);
    return _ret;
}

void android::view::ContextMenu::clearHeader() const {
    if (!::android::view::ContextMenu::_class) ::android::view::ContextMenu::_class = java::fetch_class("android/view/ContextMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearHeader", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::InflateException::InflateException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::view::InflateException::_class) ::android::view::InflateException::_class = java::fetch_class("android/view/InflateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::InflateException::InflateException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::view::InflateException::_class) ::android::view::InflateException::_class = java::fetch_class("android/view/InflateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::InflateException::InflateException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::view::InflateException::_class) ::android::view::InflateException::_class = java::fetch_class("android/view/InflateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::InflateException::InflateException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::view::InflateException::_class) ::android::view::InflateException::_class = java::fetch_class("android/view/InflateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::view::LayoutInflater_Filter::onLoadClass(const ::java::lang::Class& arg0) const {
    if (!::android::view::LayoutInflater_Filter::_class) ::android::view::LayoutInflater_Filter::_class = java::fetch_class("android/view/LayoutInflater$Filter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLoadClass", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::GestureDetector_OnDoubleTapListener::onSingleTapConfirmed(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_OnDoubleTapListener::_class) ::android::view::GestureDetector_OnDoubleTapListener::_class = java::fetch_class("android/view/GestureDetector$OnDoubleTapListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSingleTapConfirmed", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::GestureDetector_OnDoubleTapListener::onDoubleTap(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_OnDoubleTapListener::_class) ::android::view::GestureDetector_OnDoubleTapListener::_class = java::fetch_class("android/view/GestureDetector$OnDoubleTapListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDoubleTap", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::GestureDetector_OnDoubleTapListener::onDoubleTapEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_OnDoubleTapListener::_class) ::android::view::GestureDetector_OnDoubleTapListener::_class = java::fetch_class("android/view/GestureDetector$OnDoubleTapListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDoubleTapEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewConfiguration::ViewConfiguration() : ::java::lang::Object((jobject)0) {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::view::ViewConfiguration android::view::ViewConfiguration::get(const ::android::content::Context& arg0){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/content/Context;)Landroid/view/ViewConfiguration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::ViewConfiguration _ret(ret);
    return _ret;
}

int32_t android::view::ViewConfiguration::getScrollBarSize(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getScrollBarSize", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getScaledScrollBarSize() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledScrollBarSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::ViewConfiguration::getScrollBarFadeDuration(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getScrollBarFadeDuration", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getScrollDefaultDelay(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getScrollDefaultDelay", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getFadingEdgeLength(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFadingEdgeLength", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getScaledFadingEdgeLength() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledFadingEdgeLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::ViewConfiguration::getPressedStateDuration(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPressedStateDuration", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getLongPressTimeout(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLongPressTimeout", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getKeyRepeatTimeout(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getKeyRepeatTimeout", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getKeyRepeatDelay(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getKeyRepeatDelay", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getTapTimeout(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTapTimeout", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getJumpTapTimeout(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getJumpTapTimeout", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getDoubleTapTimeout(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDoubleTapTimeout", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getEdgeSlop(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getEdgeSlop", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getScaledEdgeSlop() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledEdgeSlop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::ViewConfiguration::getTouchSlop(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTouchSlop", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getScaledTouchSlop() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledTouchSlop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::ViewConfiguration::getScaledPagingTouchSlop() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledPagingTouchSlop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::ViewConfiguration::getScaledDoubleTapSlop() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledDoubleTapSlop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::ViewConfiguration::getWindowTouchSlop(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getWindowTouchSlop", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getScaledWindowTouchSlop() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledWindowTouchSlop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::ViewConfiguration::getMinimumFlingVelocity(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMinimumFlingVelocity", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getScaledMinimumFlingVelocity() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledMinimumFlingVelocity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::ViewConfiguration::getMaximumFlingVelocity(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMaximumFlingVelocity", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getScaledMaximumFlingVelocity() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledMaximumFlingVelocity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::ViewConfiguration::getMaximumDrawingCacheSize(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMaximumDrawingCacheSize", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::ViewConfiguration::getScaledMaximumDrawingCacheSize() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledMaximumDrawingCacheSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::ViewConfiguration::getScaledOverscrollDistance() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledOverscrollDistance", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::ViewConfiguration::getScaledOverflingDistance() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledOverflingDistance", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::view::ViewConfiguration::getZoomControlsTimeout(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getZoomControlsTimeout", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::view::ViewConfiguration::getGlobalActionKeyTimeout(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGlobalActionKeyTimeout", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

float android::view::ViewConfiguration::getScrollFriction(){
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getScrollFriction", "()F");
    return java::jni->CallStaticFloatMethod(_class, mid);
}

bool android::view::ViewConfiguration::hasPermanentMenuKey() const {
    if (!::android::view::ViewConfiguration::_class) ::android::view::ViewConfiguration::_class = java::fetch_class("android/view/ViewConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasPermanentMenuKey", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::ViewTreeObserver_OnPreDrawListener::onPreDraw() const {
    if (!::android::view::ViewTreeObserver_OnPreDrawListener::_class) ::android::view::ViewTreeObserver_OnPreDrawListener::_class = java::fetch_class("android/view/ViewTreeObserver$OnPreDrawListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreDraw", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::MenuInflater::MenuInflater(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::view::MenuInflater::_class) ::android::view::MenuInflater::_class = java::fetch_class("android/view/MenuInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::view::MenuInflater::inflate(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::android::view::MenuInflater::_class) ::android::view::MenuInflater::_class = java::fetch_class("android/view/MenuInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(ILandroid/view/Menu;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::MotionEvent_PointerProperties::MotionEvent_PointerProperties() : ::java::lang::Object((jobject)0) {
    if (!::android::view::MotionEvent_PointerProperties::_class) ::android::view::MotionEvent_PointerProperties::_class = java::fetch_class("android/view/MotionEvent$PointerProperties");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::view::MotionEvent_PointerProperties::clear() const {
    if (!::android::view::MotionEvent_PointerProperties::_class) ::android::view::MotionEvent_PointerProperties::_class = java::fetch_class("android/view/MotionEvent$PointerProperties");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::MotionEvent_PointerProperties::copyFrom(const ::android::view::MotionEvent_PointerProperties& arg0) const {
    if (!::android::view::MotionEvent_PointerProperties::_class) ::android::view::MotionEvent_PointerProperties::_class = java::fetch_class("android/view/MotionEvent$PointerProperties");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFrom", "(Landroid/view/MotionEvent$PointerProperties;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View_OnCreateContextMenuListener::onCreateContextMenu(const ::android::view::ContextMenu& arg0, const ::android::view::View& arg1, const ::android::view::ContextMenu_ContextMenuInfo& arg2) const {
    if (!::android::view::View_OnCreateContextMenuListener::_class) ::android::view::View_OnCreateContextMenuListener::_class = java::fetch_class("android/view/View$OnCreateContextMenuListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateContextMenu", "(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::view::LayoutInflater android::view::LayoutInflater::from(const ::android::content::Context& arg0){
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "from", "(Landroid/content/Context;)Landroid/view/LayoutInflater;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::LayoutInflater _ret(ret);
    return _ret;
}

::android::view::LayoutInflater android::view::LayoutInflater::cloneInContext(const ::android::content::Context& arg0) const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "cloneInContext", "(Landroid/content/Context;)Landroid/view/LayoutInflater;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::LayoutInflater _ret(ret);
    return _ret;
}

::android::content::Context android::view::LayoutInflater::getContext() const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

::android::view::LayoutInflater_Factory android::view::LayoutInflater::getFactory() const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFactory", "()Landroid/view/LayoutInflater$Factory;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::LayoutInflater_Factory _ret(ret);
    return _ret;
}

::android::view::LayoutInflater_Factory2 android::view::LayoutInflater::getFactory2() const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFactory2", "()Landroid/view/LayoutInflater$Factory2;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::LayoutInflater_Factory2 _ret(ret);
    return _ret;
}

void android::view::LayoutInflater::setFactory(const ::android::view::LayoutInflater_Factory& arg0) const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFactory", "(Landroid/view/LayoutInflater$Factory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::LayoutInflater::setFactory2(const ::android::view::LayoutInflater_Factory2& arg0) const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFactory2", "(Landroid/view/LayoutInflater$Factory2;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::LayoutInflater_Filter android::view::LayoutInflater::getFilter() const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilter", "()Landroid/view/LayoutInflater$Filter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::LayoutInflater_Filter _ret(ret);
    return _ret;
}

void android::view::LayoutInflater::setFilter(const ::android::view::LayoutInflater_Filter& arg0) const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilter", "(Landroid/view/LayoutInflater$Filter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::view::LayoutInflater::inflate(int32_t arg0, const ::android::view::ViewGroup& arg1) const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(ILandroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::view::LayoutInflater::inflate(const ::org::xmlpull::v1::XmlPullParser& arg0, const ::android::view::ViewGroup& arg1) const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::view::LayoutInflater::inflate(int32_t arg0, const ::android::view::ViewGroup& arg1, bool arg2) const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(ILandroid/view/ViewGroup;Z)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::view::LayoutInflater::inflate(const ::org::xmlpull::v1::XmlPullParser& arg0, const ::android::view::ViewGroup& arg1, bool arg2) const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;Z)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::view::LayoutInflater::createView(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::android::view::LayoutInflater::_class) ::android::view::LayoutInflater::_class = java::fetch_class("android/view/LayoutInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "createView", "(Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::OrientationEventListener::OrientationEventListener(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::view::OrientationEventListener::_class) ::android::view::OrientationEventListener::_class = java::fetch_class("android/view/OrientationEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::OrientationEventListener::OrientationEventListener(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::view::OrientationEventListener::_class) ::android::view::OrientationEventListener::_class = java::fetch_class("android/view/OrientationEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::view::OrientationEventListener::enable() const {
    if (!::android::view::OrientationEventListener::_class) ::android::view::OrientationEventListener::_class = java::fetch_class("android/view/OrientationEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "enable", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::OrientationEventListener::disable() const {
    if (!::android::view::OrientationEventListener::_class) ::android::view::OrientationEventListener::_class = java::fetch_class("android/view/OrientationEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "disable", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::view::OrientationEventListener::canDetectOrientation() const {
    if (!::android::view::OrientationEventListener::_class) ::android::view::OrientationEventListener::_class = java::fetch_class("android/view/OrientationEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "canDetectOrientation", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::OrientationEventListener::onOrientationChanged(int32_t arg0) const {
    if (!::android::view::OrientationEventListener::_class) ::android::view::OrientationEventListener::_class = java::fetch_class("android/view/OrientationEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOrientationChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::InputEvent::getDeviceId() const {
    if (!::android::view::InputEvent::_class) ::android::view::InputEvent::_class = java::fetch_class("android/view/InputEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::InputDevice android::view::InputEvent::getDevice() const {
    if (!::android::view::InputEvent::_class) ::android::view::InputEvent::_class = java::fetch_class("android/view/InputEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDevice", "()Landroid/view/InputDevice;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::InputDevice _ret(ret);
    return _ret;
}

int32_t android::view::InputEvent::getSource() const {
    if (!::android::view::InputEvent::_class) ::android::view::InputEvent::_class = java::fetch_class("android/view/InputEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::InputEvent::describeContents() const {
    if (!::android::view::InputEvent::_class) ::android::view::InputEvent::_class = java::fetch_class("android/view/InputEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::Display android::view::WindowManager::getDefaultDisplay() const {
    if (!::android::view::WindowManager::_class) ::android::view::WindowManager::_class = java::fetch_class("android/view/WindowManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultDisplay", "()Landroid/view/Display;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::Display _ret(ret);
    return _ret;
}

void android::view::WindowManager::removeViewImmediate(const ::android::view::View& arg0) const {
    if (!::android::view::WindowManager::_class) ::android::view::WindowManager::_class = java::fetch_class("android/view/WindowManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeViewImmediate", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewDebug_ExportedProperty::resolveId() const {
    if (!::android::view::ViewDebug_ExportedProperty::_class) ::android::view::ViewDebug_ExportedProperty::_class = java::fetch_class("android/view/ViewDebug$ExportedProperty");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveId", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< ::android::view::ViewDebug_IntToString> android::view::ViewDebug_ExportedProperty::mapping() const {
    if (!::android::view::ViewDebug_ExportedProperty::_class) ::android::view::ViewDebug_ExportedProperty::_class = java::fetch_class("android/view/ViewDebug$ExportedProperty");
    static jmethodID mid = java::jni->GetMethodID(_class, "mapping", "()[Landroid/view/ViewDebug$IntToString;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::ViewDebug_IntToString> _ret(rets, ::android::view::ViewDebug_IntToString((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::ViewDebug_IntToString retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::android::view::ViewDebug_IntToString> android::view::ViewDebug_ExportedProperty::indexMapping() const {
    if (!::android::view::ViewDebug_ExportedProperty::_class) ::android::view::ViewDebug_ExportedProperty::_class = java::fetch_class("android/view/ViewDebug$ExportedProperty");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexMapping", "()[Landroid/view/ViewDebug$IntToString;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::ViewDebug_IntToString> _ret(rets, ::android::view::ViewDebug_IntToString((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::ViewDebug_IntToString retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::android::view::ViewDebug_FlagToString> android::view::ViewDebug_ExportedProperty::flagMapping() const {
    if (!::android::view::ViewDebug_ExportedProperty::_class) ::android::view::ViewDebug_ExportedProperty::_class = java::fetch_class("android/view/ViewDebug$ExportedProperty");
    static jmethodID mid = java::jni->GetMethodID(_class, "flagMapping", "()[Landroid/view/ViewDebug$FlagToString;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::ViewDebug_FlagToString> _ret(rets, ::android::view::ViewDebug_FlagToString((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::ViewDebug_FlagToString retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::view::ViewDebug_ExportedProperty::deepExport() const {
    if (!::android::view::ViewDebug_ExportedProperty::_class) ::android::view::ViewDebug_ExportedProperty::_class = java::fetch_class("android/view/ViewDebug$ExportedProperty");
    static jmethodID mid = java::jni->GetMethodID(_class, "deepExport", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::view::ViewDebug_ExportedProperty::prefix() const {
    if (!::android::view::ViewDebug_ExportedProperty::_class) ::android::view::ViewDebug_ExportedProperty::_class = java::fetch_class("android/view/ViewDebug$ExportedProperty");
    static jmethodID mid = java::jni->GetMethodID(_class, "prefix", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::view::ViewDebug_ExportedProperty::category() const {
    if (!::android::view::ViewDebug_ExportedProperty::_class) ::android::view::ViewDebug_ExportedProperty::_class = java::fetch_class("android/view/ViewDebug$ExportedProperty");
    static jmethodID mid = java::jni->GetMethodID(_class, "category", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::SurfaceView::SurfaceView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::SurfaceView::_class) ::android::view::SurfaceView::_class = java::fetch_class("android/view/SurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::SurfaceView::SurfaceView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::SurfaceView::_class) ::android::view::SurfaceView::_class = java::fetch_class("android/view/SurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::SurfaceView::SurfaceView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::SurfaceView::_class) ::android::view::SurfaceView::_class = java::fetch_class("android/view/SurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::view::SurfaceHolder android::view::SurfaceView::getHolder() const {
    if (!::android::view::SurfaceView::_class) ::android::view::SurfaceView::_class = java::fetch_class("android/view/SurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHolder", "()Landroid/view/SurfaceHolder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::SurfaceHolder _ret(ret);
    return _ret;
}

void android::view::SurfaceView::setVisibility(int32_t arg0) const {
    if (!::android::view::SurfaceView::_class) ::android::view::SurfaceView::_class = java::fetch_class("android/view/SurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisibility", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::SurfaceView::gatherTransparentRegion(const ::android::graphics::Region& arg0) const {
    if (!::android::view::SurfaceView::_class) ::android::view::SurfaceView::_class = java::fetch_class("android/view/SurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "gatherTransparentRegion", "(Landroid/graphics/Region;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::SurfaceView::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::view::SurfaceView::_class) ::android::view::SurfaceView::_class = java::fetch_class("android/view/SurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::SurfaceView::setZOrderMediaOverlay(bool arg0) const {
    if (!::android::view::SurfaceView::_class) ::android::view::SurfaceView::_class = java::fetch_class("android/view/SurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZOrderMediaOverlay", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::SurfaceView::setZOrderOnTop(bool arg0) const {
    if (!::android::view::SurfaceView::_class) ::android::view::SurfaceView::_class = java::fetch_class("android/view/SurfaceView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZOrderOnTop", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::KeyEvent::KeyEvent(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::InputEvent((jobject)0) {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::KeyEvent::KeyEvent(int64_t arg0, int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::InputEvent((jobject)0) {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JJIII)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::KeyEvent::KeyEvent(int64_t arg0, int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::InputEvent((jobject)0) {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JJIIII)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::KeyEvent::KeyEvent(int64_t arg0, int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::InputEvent((jobject)0) {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JJIIIIII)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::KeyEvent::KeyEvent(int64_t arg0, int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::InputEvent((jobject)0) {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JJIIIIIII)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::KeyEvent::KeyEvent(int64_t arg0, int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::InputEvent((jobject)0) {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JJIIIIIIII)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::KeyEvent::KeyEvent(int64_t arg0, const ::java::lang::String& arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::InputEvent((jobject)0) {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JLjava/lang/String;II)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::KeyEvent::KeyEvent(const ::android::view::KeyEvent& arg0, int64_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::InputEvent((jobject)0) {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/KeyEvent;JI)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::view::KeyEvent::getMaxKeyCode(){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMaxKeyCode", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::view::KeyEvent::getDeadChar(int32_t arg0, int32_t arg1){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDeadChar", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

::android::view::KeyEvent android::view::KeyEvent::changeTimeRepeat(const ::android::view::KeyEvent& arg0, int64_t arg1, int32_t arg2){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "changeTimeRepeat", "(Landroid/view/KeyEvent;JI)Landroid/view/KeyEvent;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::view::KeyEvent _ret(ret);
    return _ret;
}

::android::view::KeyEvent android::view::KeyEvent::changeTimeRepeat(const ::android::view::KeyEvent& arg0, int64_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "changeTimeRepeat", "(Landroid/view/KeyEvent;JII)Landroid/view/KeyEvent;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::KeyEvent _ret(ret);
    return _ret;
}

::android::view::KeyEvent android::view::KeyEvent::changeAction(const ::android::view::KeyEvent& arg0, int32_t arg1){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "changeAction", "(Landroid/view/KeyEvent;I)Landroid/view/KeyEvent;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::KeyEvent _ret(ret);
    return _ret;
}

::android::view::KeyEvent android::view::KeyEvent::changeFlags(const ::android::view::KeyEvent& arg0, int32_t arg1){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "changeFlags", "(Landroid/view/KeyEvent;I)Landroid/view/KeyEvent;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::KeyEvent _ret(ret);
    return _ret;
}

bool android::view::KeyEvent::isSystem() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSystem", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::KeyEvent::isGamepadButton(int32_t arg0){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isGamepadButton", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t android::view::KeyEvent::getDeviceId() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::KeyEvent::getSource() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::KeyEvent::setSource(int32_t arg0) const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::KeyEvent::getMetaState() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetaState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::KeyEvent::getModifiers() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModifiers", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::KeyEvent::getFlags() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::KeyEvent::getModifierMetaStateMask(){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getModifierMetaStateMask", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

bool android::view::KeyEvent::isModifierKey(int32_t arg0){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isModifierKey", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t android::view::KeyEvent::normalizeMetaState(int32_t arg0){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "normalizeMetaState", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

bool android::view::KeyEvent::metaStateHasNoModifiers(int32_t arg0){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "metaStateHasNoModifiers", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::view::KeyEvent::metaStateHasModifiers(int32_t arg0, int32_t arg1){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "metaStateHasModifiers", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::view::KeyEvent::hasNoModifiers() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNoModifiers", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::KeyEvent::hasModifiers(int32_t arg0) const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasModifiers", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::KeyEvent::isAltPressed() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAltPressed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::KeyEvent::isShiftPressed() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShiftPressed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::KeyEvent::isSymPressed() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSymPressed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::KeyEvent::isCtrlPressed() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCtrlPressed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::KeyEvent::isMetaPressed() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMetaPressed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::KeyEvent::isFunctionPressed() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFunctionPressed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::KeyEvent::isCapsLockOn() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCapsLockOn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::KeyEvent::isNumLockOn() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNumLockOn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::KeyEvent::isScrollLockOn() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollLockOn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::view::KeyEvent::getAction() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::view::KeyEvent::isCanceled() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCanceled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::KeyEvent::startTracking() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTracking", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::view::KeyEvent::isTracking() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTracking", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::KeyEvent::isLongPress() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongPress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::view::KeyEvent::getKeyCode() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::view::KeyEvent::getCharacters() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharacters", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::KeyEvent::getScanCode() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScanCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::KeyEvent::getRepeatCount() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRepeatCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::view::KeyEvent::getDownTime() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDownTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::view::KeyEvent::getEventTime() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEventTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::view::KeyCharacterMap android::view::KeyEvent::getKeyCharacterMap() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyCharacterMap", "()Landroid/view/KeyCharacterMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::KeyCharacterMap _ret(ret);
    return _ret;
}

uint16_t android::view::KeyEvent::getDisplayLabel() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayLabel", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

int32_t android::view::KeyEvent::getUnicodeChar() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUnicodeChar", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::KeyEvent::getUnicodeChar(int32_t arg0) const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUnicodeChar", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::view::KeyEvent::getKeyData(const ::android::view::KeyCharacterMap_KeyData& arg0) const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyData", "(Landroid/view/KeyCharacterMap$KeyData;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

uint16_t android::view::KeyEvent::getMatch(const std::vector< uint16_t>& arg0) const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMatch", "([C)C");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

uint16_t android::view::KeyEvent::getMatch(const std::vector< uint16_t>& arg0, int32_t arg1) const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMatch", "([CI)C");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallCharMethod(obj, mid, _arg0, _arg1);
}

uint16_t android::view::KeyEvent::getNumber() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumber", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

bool android::view::KeyEvent::isPrintingKey() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPrintingKey", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::KeyEvent::dispatch(const ::android::view::KeyEvent_Callback& arg0) const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatch", "(Landroid/view/KeyEvent$Callback;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::KeyEvent::dispatch(const ::android::view::KeyEvent_Callback& arg0, const ::android::view::KeyEvent_DispatcherState& arg1, const ::java::lang::Object& arg2) const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatch", "(Landroid/view/KeyEvent$Callback;Landroid/view/KeyEvent$DispatcherState;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::view::KeyEvent::toString() const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::view::KeyEvent::keyCodeToString(int32_t arg0){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "keyCodeToString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::KeyEvent::keyCodeFromString(const ::java::lang::String& arg0){
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "keyCodeFromString", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::view::KeyEvent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::KeyEvent::_class) ::android::view::KeyEvent::_class = java::fetch_class("android/view/KeyEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::View android::view::LayoutInflater_Factory2::onCreateView(const ::android::view::View& arg0, const ::java::lang::String& arg1, const ::android::content::Context& arg2, const ::android::util::AttributeSet& arg3) const {
    if (!::android::view::LayoutInflater_Factory2::_class) ::android::view::LayoutInflater_Factory2::_class = java::fetch_class("android/view/LayoutInflater$Factory2");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Landroid/view/View;Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::view::ViewDebug_CapturedViewProperty::retrieveReturn() const {
    if (!::android::view::ViewDebug_CapturedViewProperty::_class) ::android::view::ViewDebug_CapturedViewProperty::_class = java::fetch_class("android/view/ViewDebug$CapturedViewProperty");
    static jmethodID mid = java::jni->GetMethodID(_class, "retrieveReturn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::MenuItem_OnActionExpandListener::onMenuItemActionExpand(const ::android::view::MenuItem& arg0) const {
    if (!::android::view::MenuItem_OnActionExpandListener::_class) ::android::view::MenuItem_OnActionExpandListener::_class = java::fetch_class("android/view/MenuItem$OnActionExpandListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuItemActionExpand", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::MenuItem_OnActionExpandListener::onMenuItemActionCollapse(const ::android::view::MenuItem& arg0) const {
    if (!::android::view::MenuItem_OnActionExpandListener::_class) ::android::view::MenuItem_OnActionExpandListener::_class = java::fetch_class("android/view/MenuItem$OnActionExpandListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuItemActionCollapse", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::View_MeasureSpec::View_MeasureSpec() : ::java::lang::Object((jobject)0) {
    if (!::android::view::View_MeasureSpec::_class) ::android::view::View_MeasureSpec::_class = java::fetch_class("android/view/View$MeasureSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::view::View_MeasureSpec::makeMeasureSpec(int32_t arg0, int32_t arg1){
    if (!::android::view::View_MeasureSpec::_class) ::android::view::View_MeasureSpec::_class = java::fetch_class("android/view/View$MeasureSpec");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeMeasureSpec", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::view::View_MeasureSpec::getMode(int32_t arg0){
    if (!::android::view::View_MeasureSpec::_class) ::android::view::View_MeasureSpec::_class = java::fetch_class("android/view/View$MeasureSpec");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMode", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::view::View_MeasureSpec::getSize(int32_t arg0){
    if (!::android::view::View_MeasureSpec::_class) ::android::view::View_MeasureSpec::_class = java::fetch_class("android/view/View$MeasureSpec");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSize", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::String android::view::View_MeasureSpec::toString(int32_t arg0){
    if (!::android::view::View_MeasureSpec::_class) ::android::view::View_MeasureSpec::_class = java::fetch_class("android/view/View$MeasureSpec");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::view::GestureDetector_OnGestureListener::onDown(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_OnGestureListener::_class) ::android::view::GestureDetector_OnGestureListener::_class = java::fetch_class("android/view/GestureDetector$OnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDown", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::GestureDetector_OnGestureListener::onShowPress(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_OnGestureListener::_class) ::android::view::GestureDetector_OnGestureListener::_class = java::fetch_class("android/view/GestureDetector$OnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onShowPress", "(Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::GestureDetector_OnGestureListener::onSingleTapUp(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_OnGestureListener::_class) ::android::view::GestureDetector_OnGestureListener::_class = java::fetch_class("android/view/GestureDetector$OnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSingleTapUp", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::GestureDetector_OnGestureListener::onScroll(const ::android::view::MotionEvent& arg0, const ::android::view::MotionEvent& arg1, float arg2, float arg3) const {
    if (!::android::view::GestureDetector_OnGestureListener::_class) ::android::view::GestureDetector_OnGestureListener::_class = java::fetch_class("android/view/GestureDetector$OnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScroll", "(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::view::GestureDetector_OnGestureListener::onLongPress(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_OnGestureListener::_class) ::android::view::GestureDetector_OnGestureListener::_class = java::fetch_class("android/view/GestureDetector$OnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLongPress", "(Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::GestureDetector_OnGestureListener::onFling(const ::android::view::MotionEvent& arg0, const ::android::view::MotionEvent& arg1, float arg2, float arg3) const {
    if (!::android::view::GestureDetector_OnGestureListener::_class) ::android::view::GestureDetector_OnGestureListener::_class = java::fetch_class("android/view/GestureDetector$OnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFling", "(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::ScaleGestureDetector_SimpleOnScaleGestureListener() : ::java::lang::Object((jobject)0), ::android::view::ScaleGestureDetector_OnScaleGestureListener((jobject)0) {
    if (!::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::_class) ::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::_class = java::fetch_class("android/view/ScaleGestureDetector$SimpleOnScaleGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::onScale(const ::android::view::ScaleGestureDetector& arg0) const {
    if (!::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::_class) ::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::_class = java::fetch_class("android/view/ScaleGestureDetector$SimpleOnScaleGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScale", "(Landroid/view/ScaleGestureDetector;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::onScaleBegin(const ::android::view::ScaleGestureDetector& arg0) const {
    if (!::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::_class) ::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::_class = java::fetch_class("android/view/ScaleGestureDetector$SimpleOnScaleGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScaleBegin", "(Landroid/view/ScaleGestureDetector;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::onScaleEnd(const ::android::view::ScaleGestureDetector& arg0) const {
    if (!::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::_class) ::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener::_class = java::fetch_class("android/view/ScaleGestureDetector$SimpleOnScaleGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScaleEnd", "(Landroid/view/ScaleGestureDetector;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::VelocityTracker android::view::VelocityTracker::obtain(){
    if (!::android::view::VelocityTracker::_class) ::android::view::VelocityTracker::_class = java::fetch_class("android/view/VelocityTracker");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "()Landroid/view/VelocityTracker;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::view::VelocityTracker _ret(ret);
    return _ret;
}

void android::view::VelocityTracker::recycle() const {
    if (!::android::view::VelocityTracker::_class) ::android::view::VelocityTracker::_class = java::fetch_class("android/view/VelocityTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::VelocityTracker::clear() const {
    if (!::android::view::VelocityTracker::_class) ::android::view::VelocityTracker::_class = java::fetch_class("android/view/VelocityTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::VelocityTracker::addMovement(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::VelocityTracker::_class) ::android::view::VelocityTracker::_class = java::fetch_class("android/view/VelocityTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "addMovement", "(Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::VelocityTracker::computeCurrentVelocity(int32_t arg0) const {
    if (!::android::view::VelocityTracker::_class) ::android::view::VelocityTracker::_class = java::fetch_class("android/view/VelocityTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeCurrentVelocity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::VelocityTracker::computeCurrentVelocity(int32_t arg0, float arg1) const {
    if (!::android::view::VelocityTracker::_class) ::android::view::VelocityTracker::_class = java::fetch_class("android/view/VelocityTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeCurrentVelocity", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::view::VelocityTracker::getXVelocity() const {
    if (!::android::view::VelocityTracker::_class) ::android::view::VelocityTracker::_class = java::fetch_class("android/view/VelocityTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXVelocity", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::VelocityTracker::getYVelocity() const {
    if (!::android::view::VelocityTracker::_class) ::android::view::VelocityTracker::_class = java::fetch_class("android/view/VelocityTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYVelocity", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::VelocityTracker::getXVelocity(int32_t arg0) const {
    if (!::android::view::VelocityTracker::_class) ::android::view::VelocityTracker::_class = java::fetch_class("android/view/VelocityTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXVelocity", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::VelocityTracker::getYVelocity(int32_t arg0) const {
    if (!::android::view::VelocityTracker::_class) ::android::view::VelocityTracker::_class = java::fetch_class("android/view/VelocityTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYVelocity", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::view::View_OnClickListener::onClick(const ::android::view::View& arg0) const {
    if (!::android::view::View_OnClickListener::_class) ::android::view::View_OnClickListener::_class = java::fetch_class("android/view/View$OnClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::SurfaceHolder_Callback2::surfaceRedrawNeeded(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::view::SurfaceHolder_Callback2::_class) ::android::view::SurfaceHolder_Callback2::_class = java::fetch_class("android/view/SurfaceHolder$Callback2");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceRedrawNeeded", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ActionMode::ActionMode() : ::java::lang::Object((jobject)0) {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::view::ActionMode::setTag(const ::java::lang::Object& arg0) const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTag", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::view::ActionMode::getTag() const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::view::ActionMode::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ActionMode::setTitle(int32_t arg0) const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ActionMode::setSubtitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubtitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ActionMode::setSubtitle(int32_t arg0) const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubtitle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ActionMode::setCustomView(const ::android::view::View& arg0) const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ActionMode::invalidate() const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::ActionMode::finish() const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::Menu android::view::ActionMode::getMenu() const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMenu", "()Landroid/view/Menu;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::Menu _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::ActionMode::getTitle() const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::ActionMode::getSubtitle() const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubtitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::view::View android::view::ActionMode::getCustomView() const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCustomView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::MenuInflater android::view::ActionMode::getMenuInflater() const {
    if (!::android::view::ActionMode::_class) ::android::view::ActionMode::_class = java::fetch_class("android/view/ActionMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMenuInflater", "()Landroid/view/MenuInflater;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::MenuInflater _ret(ret);
    return _ret;
}

void android::view::CollapsibleActionView::onActionViewExpanded() const {
    if (!::android::view::CollapsibleActionView::_class) ::android::view::CollapsibleActionView::_class = java::fetch_class("android/view/CollapsibleActionView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActionViewExpanded", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::CollapsibleActionView::onActionViewCollapsed() const {
    if (!::android::view::CollapsibleActionView::_class) ::android::view::CollapsibleActionView::_class = java::fetch_class("android/view/CollapsibleActionView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActionViewCollapsed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::MotionEvent android::view::MotionEvent::obtain(int64_t arg0, int64_t arg1, int32_t arg2, int32_t arg3, const std::vector< ::android::view::MotionEvent_PointerProperties>& arg4, const std::vector< ::android::view::MotionEvent_PointerCoords>& arg5, int32_t arg6, int32_t arg7, float arg8, float arg9, int32_t arg10, int32_t arg11, int32_t arg12, int32_t arg13){
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(JJII[Landroid/view/MotionEvent$PointerProperties;[Landroid/view/MotionEvent$PointerCoords;IIFFIIII)Landroid/view/MotionEvent;");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    unsigned arg4s = arg4.size();
    if (!::android::view::MotionEvent_PointerProperties::_class) ::android::view::MotionEvent_PointerProperties::_class = java::fetch_class("android/view/MotionEvent$PointerProperties");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::android::view::MotionEvent_PointerProperties::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::android::view::MotionEvent_PointerProperties& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    unsigned arg5s = arg5.size();
    if (!::android::view::MotionEvent_PointerCoords::_class) ::android::view::MotionEvent_PointerCoords::_class = java::fetch_class("android/view/MotionEvent$PointerCoords");
    jobjectArray _arg5 = java::jni->NewObjectArray(arg5s, ::android::view::MotionEvent_PointerCoords::_class, nullptr);
    for (unsigned arg5i = 0; arg5i < arg5s; ++arg5i) {
      const ::android::view::MotionEvent_PointerCoords& arg5e = arg5[arg5i];
        jobject arg5d = arg5e.obj;
      java::jni->SetObjectArrayElement(_arg5, arg5i, arg5d);
    }
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    float _arg8 = arg8;
    float _arg9 = arg9;
    int32_t _arg10 = arg10;
    int32_t _arg11 = arg11;
    int32_t _arg12 = arg12;
    int32_t _arg13 = arg13;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11, _arg12, _arg13);
    ::android::view::MotionEvent _ret(ret);
    return _ret;
}

::android::view::MotionEvent android::view::MotionEvent::obtain(int64_t arg0, int64_t arg1, int32_t arg2, int32_t arg3, const std::vector< int32_t>& arg4, const std::vector< ::android::view::MotionEvent_PointerCoords>& arg5, int32_t arg6, float arg7, float arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12){
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(JJII[I[Landroid/view/MotionEvent$PointerCoords;IFFIIII)Landroid/view/MotionEvent;");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jintArray _arg4 = java::jni->NewIntArray(arg4.size());
    java::jni->SetIntArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    unsigned arg5s = arg5.size();
    if (!::android::view::MotionEvent_PointerCoords::_class) ::android::view::MotionEvent_PointerCoords::_class = java::fetch_class("android/view/MotionEvent$PointerCoords");
    jobjectArray _arg5 = java::jni->NewObjectArray(arg5s, ::android::view::MotionEvent_PointerCoords::_class, nullptr);
    for (unsigned arg5i = 0; arg5i < arg5s; ++arg5i) {
      const ::android::view::MotionEvent_PointerCoords& arg5e = arg5[arg5i];
        jobject arg5d = arg5e.obj;
      java::jni->SetObjectArrayElement(_arg5, arg5i, arg5d);
    }
    int32_t _arg6 = arg6;
    float _arg7 = arg7;
    float _arg8 = arg8;
    int32_t _arg9 = arg9;
    int32_t _arg10 = arg10;
    int32_t _arg11 = arg11;
    int32_t _arg12 = arg12;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11, _arg12);
    ::android::view::MotionEvent _ret(ret);
    return _ret;
}

::android::view::MotionEvent android::view::MotionEvent::obtain(int64_t arg0, int64_t arg1, int32_t arg2, float arg3, float arg4, float arg5, float arg6, int32_t arg7, float arg8, float arg9, int32_t arg10, int32_t arg11){
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(JJIFFFFIFFII)Landroid/view/MotionEvent;");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    float _arg6 = arg6;
    int32_t _arg7 = arg7;
    float _arg8 = arg8;
    float _arg9 = arg9;
    int32_t _arg10 = arg10;
    int32_t _arg11 = arg11;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11);
    ::android::view::MotionEvent _ret(ret);
    return _ret;
}

::android::view::MotionEvent android::view::MotionEvent::obtain(int64_t arg0, int64_t arg1, int32_t arg2, int32_t arg3, float arg4, float arg5, float arg6, float arg7, int32_t arg8, float arg9, float arg10, int32_t arg11, int32_t arg12){
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(JJIIFFFFIFFII)Landroid/view/MotionEvent;");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    float _arg6 = arg6;
    float _arg7 = arg7;
    int32_t _arg8 = arg8;
    float _arg9 = arg9;
    float _arg10 = arg10;
    int32_t _arg11 = arg11;
    int32_t _arg12 = arg12;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11, _arg12);
    ::android::view::MotionEvent _ret(ret);
    return _ret;
}

::android::view::MotionEvent android::view::MotionEvent::obtain(int64_t arg0, int64_t arg1, int32_t arg2, float arg3, float arg4, int32_t arg5){
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(JJIFFI)Landroid/view/MotionEvent;");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::android::view::MotionEvent _ret(ret);
    return _ret;
}

::android::view::MotionEvent android::view::MotionEvent::obtain(const ::android::view::MotionEvent& arg0){
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::MotionEvent _ret(ret);
    return _ret;
}

::android::view::MotionEvent android::view::MotionEvent::obtainNoHistory(const ::android::view::MotionEvent& arg0){
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtainNoHistory", "(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::MotionEvent _ret(ret);
    return _ret;
}

void android::view::MotionEvent::recycle() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::view::MotionEvent::getDeviceId() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeviceId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::MotionEvent::getSource() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::MotionEvent::setSource(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::MotionEvent::getAction() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::MotionEvent::getActionMasked() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionMasked", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::MotionEvent::getActionIndex() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::MotionEvent::getFlags() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::view::MotionEvent::getDownTime() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDownTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::view::MotionEvent::getEventTime() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEventTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

float android::view::MotionEvent::getX() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::MotionEvent::getY() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::MotionEvent::getPressure() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPressure", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::MotionEvent::getSize() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSize", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::MotionEvent::getTouchMajor() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTouchMajor", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::MotionEvent::getTouchMinor() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTouchMinor", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::MotionEvent::getToolMajor() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToolMajor", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::MotionEvent::getToolMinor() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToolMinor", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::MotionEvent::getOrientation() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrientation", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::MotionEvent::getAxisValue(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAxisValue", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

int32_t android::view::MotionEvent::getPointerCount() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPointerCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::MotionEvent::getPointerId(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPointerId", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::view::MotionEvent::getToolType(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToolType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::view::MotionEvent::findPointerIndex(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "findPointerIndex", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getX(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getY(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getPressure(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPressure", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getSize(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSize", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getTouchMajor(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTouchMajor", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getTouchMinor(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTouchMinor", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getToolMajor(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToolMajor", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getToolMinor(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToolMinor", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getOrientation(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrientation", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getAxisValue(int32_t arg0, int32_t arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAxisValue", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

void android::view::MotionEvent::getPointerCoords(int32_t arg0, const ::android::view::MotionEvent_PointerCoords& arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPointerCoords", "(ILandroid/view/MotionEvent$PointerCoords;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::MotionEvent::getPointerProperties(int32_t arg0, const ::android::view::MotionEvent_PointerProperties& arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPointerProperties", "(ILandroid/view/MotionEvent$PointerProperties;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::MotionEvent::getMetaState() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetaState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::MotionEvent::getButtonState() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getButtonState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::view::MotionEvent::getRawX() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::MotionEvent::getRawY() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::MotionEvent::getXPrecision() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXPrecision", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::MotionEvent::getYPrecision() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYPrecision", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t android::view::MotionEvent::getHistorySize() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistorySize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::view::MotionEvent::getHistoricalEventTime(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalEventTime", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getHistoricalX(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalX", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getHistoricalY(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalY", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getHistoricalPressure(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalPressure", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getHistoricalSize(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalSize", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getHistoricalTouchMajor(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalTouchMajor", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getHistoricalTouchMinor(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalTouchMinor", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getHistoricalToolMajor(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalToolMajor", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getHistoricalToolMinor(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalToolMinor", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getHistoricalOrientation(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalOrientation", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::view::MotionEvent::getHistoricalAxisValue(int32_t arg0, int32_t arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalAxisValue", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::view::MotionEvent::getHistoricalX(int32_t arg0, int32_t arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalX", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::view::MotionEvent::getHistoricalY(int32_t arg0, int32_t arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalY", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::view::MotionEvent::getHistoricalPressure(int32_t arg0, int32_t arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalPressure", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::view::MotionEvent::getHistoricalSize(int32_t arg0, int32_t arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalSize", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::view::MotionEvent::getHistoricalTouchMajor(int32_t arg0, int32_t arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalTouchMajor", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::view::MotionEvent::getHistoricalTouchMinor(int32_t arg0, int32_t arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalTouchMinor", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::view::MotionEvent::getHistoricalToolMajor(int32_t arg0, int32_t arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalToolMajor", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::view::MotionEvent::getHistoricalToolMinor(int32_t arg0, int32_t arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalToolMinor", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::view::MotionEvent::getHistoricalOrientation(int32_t arg0, int32_t arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalOrientation", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::view::MotionEvent::getHistoricalAxisValue(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalAxisValue", "(III)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::MotionEvent::getHistoricalPointerCoords(int32_t arg0, int32_t arg1, const ::android::view::MotionEvent_PointerCoords& arg2) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHistoricalPointerCoords", "(IILandroid/view/MotionEvent$PointerCoords;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::view::MotionEvent::getEdgeFlags() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEdgeFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::MotionEvent::setEdgeFlags(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEdgeFlags", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::MotionEvent::setAction(int32_t arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAction", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::MotionEvent::offsetLocation(float arg0, float arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "offsetLocation", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::MotionEvent::setLocation(float arg0, float arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocation", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::MotionEvent::transform(const ::android::graphics::Matrix& arg0) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "transform", "(Landroid/graphics/Matrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::MotionEvent::addBatch(int64_t arg0, float arg1, float arg2, float arg3, float arg4, int32_t arg5) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "addBatch", "(JFFFFI)V");
    int64_t _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::view::MotionEvent::addBatch(int64_t arg0, const std::vector< ::android::view::MotionEvent_PointerCoords>& arg1, int32_t arg2) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "addBatch", "(J[Landroid/view/MotionEvent$PointerCoords;I)V");
    int64_t _arg0 = arg0;
    unsigned arg1s = arg1.size();
    if (!::android::view::MotionEvent_PointerCoords::_class) ::android::view::MotionEvent_PointerCoords::_class = java::fetch_class("android/view/MotionEvent$PointerCoords");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::view::MotionEvent_PointerCoords::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::view::MotionEvent_PointerCoords& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::view::MotionEvent::toString() const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::view::MotionEvent::axisToString(int32_t arg0){
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "axisToString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::MotionEvent::axisFromString(const ::java::lang::String& arg0){
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "axisFromString", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::view::MotionEvent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::MotionEvent::_class) ::android::view::MotionEvent::_class = java::fetch_class("android/view/MotionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::view::KeyEvent_Callback::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::view::KeyEvent_Callback::_class) ::android::view::KeyEvent_Callback::_class = java::fetch_class("android/view/KeyEvent$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::KeyEvent_Callback::onKeyLongPress(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::view::KeyEvent_Callback::_class) ::android::view::KeyEvent_Callback::_class = java::fetch_class("android/view/KeyEvent$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyLongPress", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::KeyEvent_Callback::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::view::KeyEvent_Callback::_class) ::android::view::KeyEvent_Callback::_class = java::fetch_class("android/view/KeyEvent$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::KeyEvent_Callback::onKeyMultiple(int32_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::view::KeyEvent_Callback::_class) ::android::view::KeyEvent_Callback::_class = java::fetch_class("android/view/KeyEvent$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyMultiple", "(IILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::view::InputDevice android::view::InputDevice::getDevice(int32_t arg0){
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDevice", "(I)Landroid/view/InputDevice;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::InputDevice _ret(ret);
    return _ret;
}

std::vector< int32_t> android::view::InputDevice::getDeviceIds(){
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDeviceIds", "()[I");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::view::InputDevice::getId() const {
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::view::InputDevice::getName() const {
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::InputDevice::getSources() const {
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSources", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::InputDevice::getKeyboardType() const {
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyboardType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::KeyCharacterMap android::view::InputDevice::getKeyCharacterMap() const {
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyCharacterMap", "()Landroid/view/KeyCharacterMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::KeyCharacterMap _ret(ret);
    return _ret;
}

::android::view::InputDevice_MotionRange android::view::InputDevice::getMotionRange(int32_t arg0) const {
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMotionRange", "(I)Landroid/view/InputDevice$MotionRange;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::InputDevice_MotionRange _ret(ret);
    return _ret;
}

::android::view::InputDevice_MotionRange android::view::InputDevice::getMotionRange(int32_t arg0, int32_t arg1) const {
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMotionRange", "(II)Landroid/view/InputDevice$MotionRange;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::InputDevice_MotionRange _ret(ret);
    return _ret;
}

::java::util::List android::view::InputDevice::getMotionRanges() const {
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMotionRanges", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::view::InputDevice::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::InputDevice::describeContents() const {
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::view::InputDevice::toString() const {
    if (!::android::view::InputDevice::_class) ::android::view::InputDevice::_class = java::fetch_class("android/view/InputDevice");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::DragEvent::getAction() const {
    if (!::android::view::DragEvent::_class) ::android::view::DragEvent::_class = java::fetch_class("android/view/DragEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::view::DragEvent::getX() const {
    if (!::android::view::DragEvent::_class) ::android::view::DragEvent::_class = java::fetch_class("android/view/DragEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::DragEvent::getY() const {
    if (!::android::view::DragEvent::_class) ::android::view::DragEvent::_class = java::fetch_class("android/view/DragEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

::android::content::ClipData android::view::DragEvent::getClipData() const {
    if (!::android::view::DragEvent::_class) ::android::view::DragEvent::_class = java::fetch_class("android/view/DragEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClipData", "()Landroid/content/ClipData;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ClipData _ret(ret);
    return _ret;
}

::android::content::ClipDescription android::view::DragEvent::getClipDescription() const {
    if (!::android::view::DragEvent::_class) ::android::view::DragEvent::_class = java::fetch_class("android/view/DragEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClipDescription", "()Landroid/content/ClipDescription;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ClipDescription _ret(ret);
    return _ret;
}

::java::lang::Object android::view::DragEvent::getLocalState() const {
    if (!::android::view::DragEvent::_class) ::android::view::DragEvent::_class = java::fetch_class("android/view/DragEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalState", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::view::DragEvent::getResult() const {
    if (!::android::view::DragEvent::_class) ::android::view::DragEvent::_class = java::fetch_class("android/view/DragEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResult", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::view::DragEvent::toString() const {
    if (!::android::view::DragEvent::_class) ::android::view::DragEvent::_class = java::fetch_class("android/view/DragEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::DragEvent::describeContents() const {
    if (!::android::view::DragEvent::_class) ::android::view::DragEvent::_class = java::fetch_class("android/view/DragEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::DragEvent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::DragEvent::_class) ::android::view::DragEvent::_class = java::fetch_class("android/view/DragEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::View_DragShadowBuilder::View_DragShadowBuilder(const ::android::view::View& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::view::View_DragShadowBuilder::_class) ::android::view::View_DragShadowBuilder::_class = java::fetch_class("android/view/View$DragShadowBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::View_DragShadowBuilder::View_DragShadowBuilder() : ::java::lang::Object((jobject)0) {
    if (!::android::view::View_DragShadowBuilder::_class) ::android::view::View_DragShadowBuilder::_class = java::fetch_class("android/view/View$DragShadowBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::view::View android::view::View_DragShadowBuilder::getView() const {
    if (!::android::view::View_DragShadowBuilder::_class) ::android::view::View_DragShadowBuilder::_class = java::fetch_class("android/view/View$DragShadowBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::view::View_DragShadowBuilder::onProvideShadowMetrics(const ::android::graphics::Point& arg0, const ::android::graphics::Point& arg1) const {
    if (!::android::view::View_DragShadowBuilder::_class) ::android::view::View_DragShadowBuilder::_class = java::fetch_class("android/view/View$DragShadowBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "onProvideShadowMetrics", "(Landroid/graphics/Point;Landroid/graphics/Point;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::View_DragShadowBuilder::onDrawShadow(const ::android::graphics::Canvas& arg0) const {
    if (!::android::view::View_DragShadowBuilder::_class) ::android::view::View_DragShadowBuilder::_class = java::fetch_class("android/view/View$DragShadowBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawShadow", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::SoundEffectConstants::getContantForFocusDirection(int32_t arg0){
    if (!::android::view::SoundEffectConstants::_class) ::android::view::SoundEffectConstants::_class = java::fetch_class("android/view/SoundEffectConstants");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContantForFocusDirection", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::OrientationListener::OrientationListener(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::hardware::SensorListener((jobject)0) {
    if (!::android::view::OrientationListener::_class) ::android::view::OrientationListener::_class = java::fetch_class("android/view/OrientationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::OrientationListener::OrientationListener(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::hardware::SensorListener((jobject)0) {
    if (!::android::view::OrientationListener::_class) ::android::view::OrientationListener::_class = java::fetch_class("android/view/OrientationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::view::OrientationListener::enable() const {
    if (!::android::view::OrientationListener::_class) ::android::view::OrientationListener::_class = java::fetch_class("android/view/OrientationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "enable", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::OrientationListener::disable() const {
    if (!::android::view::OrientationListener::_class) ::android::view::OrientationListener::_class = java::fetch_class("android/view/OrientationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "disable", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::OrientationListener::onAccuracyChanged(int32_t arg0, int32_t arg1) const {
    if (!::android::view::OrientationListener::_class) ::android::view::OrientationListener::_class = java::fetch_class("android/view/OrientationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAccuracyChanged", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::OrientationListener::onSensorChanged(int32_t arg0, const std::vector< float>& arg1) const {
    if (!::android::view::OrientationListener::_class) ::android::view::OrientationListener::_class = java::fetch_class("android/view/OrientationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSensorChanged", "(I[F)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::OrientationListener::onOrientationChanged(int32_t arg0) const {
    if (!::android::view::OrientationListener::_class) ::android::view::OrientationListener::_class = java::fetch_class("android/view/OrientationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOrientationChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::SurfaceHolder_Callback::surfaceCreated(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::view::SurfaceHolder_Callback::_class) ::android::view::SurfaceHolder_Callback::_class = java::fetch_class("android/view/SurfaceHolder$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceCreated", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::SurfaceHolder_Callback::surfaceChanged(const ::android::view::SurfaceHolder& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::SurfaceHolder_Callback::_class) ::android::view::SurfaceHolder_Callback::_class = java::fetch_class("android/view/SurfaceHolder$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceChanged", "(Landroid/view/SurfaceHolder;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::view::SurfaceHolder_Callback::surfaceDestroyed(const ::android::view::SurfaceHolder& arg0) const {
    if (!::android::view::SurfaceHolder_Callback::_class) ::android::view::SurfaceHolder_Callback::_class = java::fetch_class("android/view/SurfaceHolder$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "surfaceDestroyed", "(Landroid/view/SurfaceHolder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewStub::ViewStub(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::ViewStub::_class) ::android::view::ViewStub::_class = java::fetch_class("android/view/ViewStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewStub::ViewStub(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::ViewStub::_class) ::android::view::ViewStub::_class = java::fetch_class("android/view/ViewStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewStub::ViewStub(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::ViewStub::_class) ::android::view::ViewStub::_class = java::fetch_class("android/view/ViewStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewStub::ViewStub(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::ViewStub::_class) ::android::view::ViewStub::_class = java::fetch_class("android/view/ViewStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::view::ViewStub::getInflatedId() const {
    if (!::android::view::ViewStub::_class) ::android::view::ViewStub::_class = java::fetch_class("android/view/ViewStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInflatedId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::ViewStub::setInflatedId(int32_t arg0) const {
    if (!::android::view::ViewStub::_class) ::android::view::ViewStub::_class = java::fetch_class("android/view/ViewStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInflatedId", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::ViewStub::getLayoutResource() const {
    if (!::android::view::ViewStub::_class) ::android::view::ViewStub::_class = java::fetch_class("android/view/ViewStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutResource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::ViewStub::setLayoutResource(int32_t arg0) const {
    if (!::android::view::ViewStub::_class) ::android::view::ViewStub::_class = java::fetch_class("android/view/ViewStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewStub::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::view::ViewStub::_class) ::android::view::ViewStub::_class = java::fetch_class("android/view/ViewStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewStub::setVisibility(int32_t arg0) const {
    if (!::android::view::ViewStub::_class) ::android::view::ViewStub::_class = java::fetch_class("android/view/ViewStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisibility", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::view::ViewStub::inflate() const {
    if (!::android::view::ViewStub::_class) ::android::view::ViewStub::_class = java::fetch_class("android/view/ViewStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::view::ViewStub::setOnInflateListener(const ::android::view::ViewStub_OnInflateListener& arg0) const {
    if (!::android::view::ViewStub::_class) ::android::view::ViewStub::_class = java::fetch_class("android/view/ViewStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnInflateListener", "(Landroid/view/ViewStub$OnInflateListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::KeyCharacterMap android::view::KeyCharacterMap::load(int32_t arg0){
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "load", "(I)Landroid/view/KeyCharacterMap;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::KeyCharacterMap _ret(ret);
    return _ret;
}

int32_t android::view::KeyCharacterMap::get(int32_t arg0, int32_t arg1) const {
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

uint16_t android::view::KeyCharacterMap::getNumber(int32_t arg0) const {
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumber", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

uint16_t android::view::KeyCharacterMap::getMatch(int32_t arg0, const std::vector< uint16_t>& arg1) const {
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMatch", "(I[C)C");
    int32_t _arg0 = arg0;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallCharMethod(obj, mid, _arg0, _arg1);
}

uint16_t android::view::KeyCharacterMap::getMatch(int32_t arg0, const std::vector< uint16_t>& arg1, int32_t arg2) const {
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMatch", "(I[CI)C");
    int32_t _arg0 = arg0;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    return java::jni->CallCharMethod(obj, mid, _arg0, _arg1, _arg2);
}

uint16_t android::view::KeyCharacterMap::getDisplayLabel(int32_t arg0) const {
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayLabel", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

int32_t android::view::KeyCharacterMap::getDeadChar(int32_t arg0, int32_t arg1){
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDeadChar", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

bool android::view::KeyCharacterMap::getKeyData(int32_t arg0, const ::android::view::KeyCharacterMap_KeyData& arg1) const {
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyData", "(ILandroid/view/KeyCharacterMap$KeyData;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::android::view::KeyEvent> android::view::KeyCharacterMap::getEvents(const std::vector< uint16_t>& arg0) const {
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEvents", "([C)[Landroid/view/KeyEvent;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::KeyEvent> _ret(rets, ::android::view::KeyEvent((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::KeyEvent retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::view::KeyCharacterMap::isPrintingKey(int32_t arg0) const {
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPrintingKey", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::view::KeyCharacterMap::getKeyboardType() const {
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyboardType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::KeyCharacterMap::getModifierBehavior() const {
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModifierBehavior", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::view::KeyCharacterMap::deviceHasKey(int32_t arg0){
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "deviceHasKey", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

std::vector< bool> android::view::KeyCharacterMap::deviceHasKeys(const std::vector< int32_t>& arg0){
    if (!::android::view::KeyCharacterMap::_class) ::android::view::KeyCharacterMap::_class = java::fetch_class("android/view/KeyCharacterMap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "deviceHasKeys", "([I)[Z");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jboolean* reta = java::jni->GetBooleanArrayElements((jbooleanArray)ret, nullptr);
    std::vector< bool> _ret(reta, reta+rets);
    java::jni->ReleaseBooleanArrayElements((jbooleanArray)ret, reta, JNI_ABORT);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::Window::Window(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::content::Context android::view::Window::getContext() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

::android::content::res::TypedArray android::view::Window::getWindowStyle() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowStyle", "()Landroid/content/res/TypedArray;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::TypedArray _ret(ret);
    return _ret;
}

void android::view::Window::setContainer(const ::android::view::Window& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContainer", "(Landroid/view/Window;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::Window android::view::Window::getContainer() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContainer", "()Landroid/view/Window;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::Window _ret(ret);
    return _ret;
}

bool android::view::Window::hasChildren() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasChildren", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::Window::setWindowManager(const ::android::view::WindowManager& arg0, const ::android::os::IBinder& arg1, const ::java::lang::String& arg2) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWindowManager", "(Landroid/view/WindowManager;Landroid/os/IBinder;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::Window::setWindowManager(const ::android::view::WindowManager& arg0, const ::android::os::IBinder& arg1, const ::java::lang::String& arg2, bool arg3) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWindowManager", "(Landroid/view/WindowManager;Landroid/os/IBinder;Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::android::view::WindowManager android::view::Window::getWindowManager() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowManager", "()Landroid/view/WindowManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::WindowManager _ret(ret);
    return _ret;
}

void android::view::Window::setCallback(const ::android::view::Window_Callback& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallback", "(Landroid/view/Window$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::Window_Callback android::view::Window::getCallback() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallback", "()Landroid/view/Window$Callback;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::Window_Callback _ret(ret);
    return _ret;
}

void android::view::Window::takeSurface(const ::android::view::SurfaceHolder_Callback2& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "takeSurface", "(Landroid/view/SurfaceHolder$Callback2;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::takeInputQueue(const ::android::view::InputQueue_Callback& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "takeInputQueue", "(Landroid/view/InputQueue$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::Window::isFloating() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFloating", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::Window::setLayout(int32_t arg0, int32_t arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayout", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::setGravity(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setType(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setFormat(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFormat", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setWindowAnimations(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWindowAnimations", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setSoftInputMode(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSoftInputMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::addFlags(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFlags", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::clearFlags(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearFlags", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setFlags(int32_t arg0, int32_t arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFlags", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::setDimAmount(float arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDimAmount", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setAttributes(const ::android::view::WindowManager_LayoutParams& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttributes", "(Landroid/view/WindowManager$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::WindowManager_LayoutParams android::view::Window::getAttributes() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributes", "()Landroid/view/WindowManager$LayoutParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::WindowManager_LayoutParams _ret(ret);
    return _ret;
}

bool android::view::Window::requestFeature(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestFeature", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::Window::makeActive() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeActive", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::view::Window::isActive() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::View android::view::Window::findViewById(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "findViewById", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::view::Window::setContentView(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentView", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setContentView(const ::android::view::View& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setContentView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::addContentView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "addContentView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::View android::view::Window::getCurrentFocus() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentFocus", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::LayoutInflater android::view::Window::getLayoutInflater() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutInflater", "()Landroid/view/LayoutInflater;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::LayoutInflater _ret(ret);
    return _ret;
}

void android::view::Window::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setTitleColor(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitleColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::openPanel(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "openPanel", "(ILandroid/view/KeyEvent;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::closePanel(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "closePanel", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::togglePanel(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "togglePanel", "(ILandroid/view/KeyEvent;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::invalidatePanelMenu(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidatePanelMenu", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::Window::performPanelShortcut(int32_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2, int32_t arg3) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "performPanelShortcut", "(IILandroid/view/KeyEvent;I)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::view::Window::performPanelIdentifierAction(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "performPanelIdentifierAction", "(III)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::Window::closeAllPanels() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeAllPanels", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::view::Window::performContextMenuIdentifierAction(int32_t arg0, int32_t arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "performContextMenuIdentifierAction", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setBackgroundDrawableResource(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundDrawableResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setBackgroundDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setFeatureDrawableResource(int32_t arg0, int32_t arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureDrawableResource", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::setFeatureDrawableUri(int32_t arg0, const ::android::net::Uri& arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureDrawableUri", "(ILandroid/net/Uri;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::setFeatureDrawable(int32_t arg0, const ::android::graphics::drawable::Drawable& arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureDrawable", "(ILandroid/graphics/drawable/Drawable;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::setFeatureDrawableAlpha(int32_t arg0, int32_t arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureDrawableAlpha", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::setFeatureInt(int32_t arg0, int32_t arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFeatureInt", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::takeKeyEvents(bool arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "takeKeyEvents", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::Window::superDispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "superDispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::Window::superDispatchKeyShortcutEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "superDispatchKeyShortcutEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::Window::superDispatchTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "superDispatchTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::Window::superDispatchTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "superDispatchTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::Window::superDispatchGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "superDispatchGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::View android::view::Window::getDecorView() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDecorView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::view::Window::peekDecorView() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekDecorView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::os::Bundle android::view::Window::saveHierarchyState() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveHierarchyState", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::view::Window::restoreHierarchyState(const ::android::os::Bundle& arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreHierarchyState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::Window::hasFeature(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFeature", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::Window::setChildDrawable(int32_t arg0, const ::android::graphics::drawable::Drawable& arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChildDrawable", "(ILandroid/graphics/drawable/Drawable;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::setChildInt(int32_t arg0, int32_t arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChildInt", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::view::Window::isShortcutKey(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShortcutKey", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window::setVolumeControlStream(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVolumeControlStream", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::Window::getVolumeControlStream() const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVolumeControlStream", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::Window::setUiOptions(int32_t arg0) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUiOptions", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window::setUiOptions(int32_t arg0, int32_t arg1) const {
    if (!::android::view::Window::_class) ::android::view::Window::_class = java::fetch_class("android/view/Window");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUiOptions", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::KeyEvent_DispatcherState::KeyEvent_DispatcherState() : ::java::lang::Object((jobject)0) {
    if (!::android::view::KeyEvent_DispatcherState::_class) ::android::view::KeyEvent_DispatcherState::_class = java::fetch_class("android/view/KeyEvent$DispatcherState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::view::KeyEvent_DispatcherState::reset() const {
    if (!::android::view::KeyEvent_DispatcherState::_class) ::android::view::KeyEvent_DispatcherState::_class = java::fetch_class("android/view/KeyEvent$DispatcherState");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::KeyEvent_DispatcherState::reset(const ::java::lang::Object& arg0) const {
    if (!::android::view::KeyEvent_DispatcherState::_class) ::android::view::KeyEvent_DispatcherState::_class = java::fetch_class("android/view/KeyEvent$DispatcherState");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::KeyEvent_DispatcherState::startTracking(const ::android::view::KeyEvent& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::view::KeyEvent_DispatcherState::_class) ::android::view::KeyEvent_DispatcherState::_class = java::fetch_class("android/view/KeyEvent$DispatcherState");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTracking", "(Landroid/view/KeyEvent;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::view::KeyEvent_DispatcherState::isTracking(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::KeyEvent_DispatcherState::_class) ::android::view::KeyEvent_DispatcherState::_class = java::fetch_class("android/view/KeyEvent$DispatcherState");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTracking", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::KeyEvent_DispatcherState::performedLongPress(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::KeyEvent_DispatcherState::_class) ::android::view::KeyEvent_DispatcherState::_class = java::fetch_class("android/view/KeyEvent$DispatcherState");
    static jmethodID mid = java::jni->GetMethodID(_class, "performedLongPress", "(Landroid/view/KeyEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::KeyEvent_DispatcherState::handleUpEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::KeyEvent_DispatcherState::_class) ::android::view::KeyEvent_DispatcherState::_class = java::fetch_class("android/view/KeyEvent$DispatcherState");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleUpEvent", "(Landroid/view/KeyEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::SurfaceHolder::addCallback(const ::android::view::SurfaceHolder_Callback& arg0) const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCallback", "(Landroid/view/SurfaceHolder$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::SurfaceHolder::removeCallback(const ::android::view::SurfaceHolder_Callback& arg0) const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeCallback", "(Landroid/view/SurfaceHolder$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::SurfaceHolder::isCreating() const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCreating", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::SurfaceHolder::setType(int32_t arg0) const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::SurfaceHolder::setFixedSize(int32_t arg0, int32_t arg1) const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFixedSize", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::SurfaceHolder::setSizeFromLayout() const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSizeFromLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::SurfaceHolder::setFormat(int32_t arg0) const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFormat", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::SurfaceHolder::setKeepScreenOn(bool arg0) const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeepScreenOn", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Canvas android::view::SurfaceHolder::lockCanvas() const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "lockCanvas", "()Landroid/graphics/Canvas;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Canvas _ret(ret);
    return _ret;
}

::android::graphics::Canvas android::view::SurfaceHolder::lockCanvas(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "lockCanvas", "(Landroid/graphics/Rect;)Landroid/graphics/Canvas;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Canvas _ret(ret);
    return _ret;
}

void android::view::SurfaceHolder::unlockCanvasAndPost(const ::android::graphics::Canvas& arg0) const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "unlockCanvasAndPost", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Rect android::view::SurfaceHolder::getSurfaceFrame() const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSurfaceFrame", "()Landroid/graphics/Rect;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Rect _ret(ret);
    return _ret;
}

::android::view::Surface android::view::SurfaceHolder::getSurface() const {
    if (!::android::view::SurfaceHolder::_class) ::android::view::SurfaceHolder::_class = java::fetch_class("android/view/SurfaceHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSurface", "()Landroid/view/Surface;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::Surface _ret(ret);
    return _ret;
}

void android::view::View_OnFocusChangeListener::onFocusChange(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::view::View_OnFocusChangeListener::_class) ::android::view::View_OnFocusChangeListener::_class = java::fetch_class("android/view/View$OnFocusChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFocusChange", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewGroup_OnHierarchyChangeListener::onChildViewAdded(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::view::ViewGroup_OnHierarchyChangeListener::_class) ::android::view::ViewGroup_OnHierarchyChangeListener::_class = java::fetch_class("android/view/ViewGroup$OnHierarchyChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChildViewAdded", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewGroup_OnHierarchyChangeListener::onChildViewRemoved(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::view::ViewGroup_OnHierarchyChangeListener::_class) ::android::view::ViewGroup_OnHierarchyChangeListener::_class = java::fetch_class("android/view/ViewGroup$OnHierarchyChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChildViewRemoved", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::View::View(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::View::View(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::View::View(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::view::View::getVerticalFadingEdgeLength() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVerticalFadingEdgeLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setFadingEdgeLength(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFadingEdgeLength", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getHorizontalFadingEdgeLength() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHorizontalFadingEdgeLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::View::getVerticalScrollbarWidth() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVerticalScrollbarWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setVerticalScrollbarPosition(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVerticalScrollbarPosition", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getVerticalScrollbarPosition() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVerticalScrollbarPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setOnFocusChangeListener(const ::android::view::View_OnFocusChangeListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnFocusChangeListener", "(Landroid/view/View$OnFocusChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::addOnLayoutChangeListener(const ::android::view::View_OnLayoutChangeListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnLayoutChangeListener", "(Landroid/view/View$OnLayoutChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::removeOnLayoutChangeListener(const ::android::view::View_OnLayoutChangeListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnLayoutChangeListener", "(Landroid/view/View$OnLayoutChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::addOnAttachStateChangeListener(const ::android::view::View_OnAttachStateChangeListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnAttachStateChangeListener", "(Landroid/view/View$OnAttachStateChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::removeOnAttachStateChangeListener(const ::android::view::View_OnAttachStateChangeListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnAttachStateChangeListener", "(Landroid/view/View$OnAttachStateChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View_OnFocusChangeListener android::view::View::getOnFocusChangeListener() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnFocusChangeListener", "()Landroid/view/View$OnFocusChangeListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View_OnFocusChangeListener _ret(ret);
    return _ret;
}

void android::view::View::setOnClickListener(const ::android::view::View_OnClickListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnClickListener", "(Landroid/view/View$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::hasOnClickListeners() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasOnClickListeners", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setOnLongClickListener(const ::android::view::View_OnLongClickListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnLongClickListener", "(Landroid/view/View$OnLongClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setOnCreateContextMenuListener(const ::android::view::View_OnCreateContextMenuListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCreateContextMenuListener", "(Landroid/view/View$OnCreateContextMenuListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::performClick() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "performClick", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::View::callOnClick() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "callOnClick", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::View::performLongClick() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "performLongClick", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::View::showContextMenu() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "showContextMenu", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::ActionMode android::view::View::startActionMode(const ::android::view::ActionMode_Callback& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActionMode", "(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ActionMode _ret(ret);
    return _ret;
}

void android::view::View::setOnKeyListener(const ::android::view::View_OnKeyListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnKeyListener", "(Landroid/view/View$OnKeyListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setOnTouchListener(const ::android::view::View_OnTouchListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnTouchListener", "(Landroid/view/View$OnTouchListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setOnGenericMotionListener(const ::android::view::View_OnGenericMotionListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnGenericMotionListener", "(Landroid/view/View$OnGenericMotionListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setOnHoverListener(const ::android::view::View_OnHoverListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnHoverListener", "(Landroid/view/View$OnHoverListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setOnDragListener(const ::android::view::View_OnDragListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDragListener", "(Landroid/view/View$OnDragListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::requestRectangleOnScreen(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestRectangleOnScreen", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::requestRectangleOnScreen(const ::android::graphics::Rect& arg0, bool arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestRectangleOnScreen", "(Landroid/graphics/Rect;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::View::clearFocus() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearFocus", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::view::View::hasFocus() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFocus", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::View::hasFocusable() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFocusable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::sendAccessibilityEvent(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEvent", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::sendAccessibilityEventUnchecked(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEventUnchecked", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::View::onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::accessibility::AccessibilityNodeInfo android::view::View::createAccessibilityNodeInfo() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAccessibilityNodeInfo", "()Landroid/view/accessibility/AccessibilityNodeInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::accessibility::AccessibilityNodeInfo _ret(ret);
    return _ret;
}

void android::view::View::onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/accessibility/AccessibilityNodeInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setAccessibilityDelegate(const ::android::view::View_AccessibilityDelegate& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessibilityDelegate", "(Landroid/view/View$AccessibilityDelegate;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::view::View::getContentDescription() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::view::View::setContentDescription(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isFocused() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocused", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::View android::view::View::findFocus() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFocus", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::view::View::setScrollContainer(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollContainer", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getDrawingCacheQuality() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawingCacheQuality", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setDrawingCacheQuality(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawingCacheQuality", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::getKeepScreenOn() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeepScreenOn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setKeepScreenOn(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeepScreenOn", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getNextFocusLeftId() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextFocusLeftId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setNextFocusLeftId(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNextFocusLeftId", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getNextFocusRightId() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextFocusRightId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setNextFocusRightId(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNextFocusRightId", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getNextFocusUpId() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextFocusUpId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setNextFocusUpId(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNextFocusUpId", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getNextFocusDownId() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextFocusDownId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setNextFocusDownId(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNextFocusDownId", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getNextFocusForwardId() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextFocusForwardId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setNextFocusForwardId(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNextFocusForwardId", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isShown() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setFitsSystemWindows(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFitsSystemWindows", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::fitsSystemWindows() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "fitsSystemWindows", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::view::View::getVisibility() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVisibility", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setVisibility(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisibility", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isEnabled() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setEnabled(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setFocusable(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setFocusableInTouchMode(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusableInTouchMode", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setSoundEffectsEnabled(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSoundEffectsEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isSoundEffectsEnabled() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSoundEffectsEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setHapticFeedbackEnabled(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHapticFeedbackEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isHapticFeedbackEnabled() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHapticFeedbackEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setWillNotDraw(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWillNotDraw", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::willNotDraw() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "willNotDraw", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setWillNotCacheDrawing(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWillNotCacheDrawing", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::willNotCacheDrawing() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "willNotCacheDrawing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::View::isClickable() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClickable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setClickable(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClickable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isLongClickable() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongClickable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setLongClickable(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLongClickable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setPressed(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPressed", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isPressed() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPressed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::View::isSaveEnabled() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSaveEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setSaveEnabled(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSaveEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::getFilterTouchesWhenObscured() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilterTouchesWhenObscured", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setFilterTouchesWhenObscured(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterTouchesWhenObscured", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isSaveFromParentEnabled() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSaveFromParentEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setSaveFromParentEnabled(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSaveFromParentEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isFocusable() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocusable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::View::isFocusableInTouchMode() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocusableInTouchMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::View android::view::View::focusSearch(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "focusSearch", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::view::View::dispatchUnhandledMove(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchUnhandledMove", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::util::ArrayList android::view::View::getFocusables(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFocusables", "(I)Ljava/util/ArrayList;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

void android::view::View::addFocusables(const ::java::util::ArrayList& arg0, int32_t arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFocusables", "(Ljava/util/ArrayList;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::View::addFocusables(const ::java::util::ArrayList& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFocusables", "(Ljava/util/ArrayList;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::View::findViewsWithText(const ::java::util::ArrayList& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "findViewsWithText", "(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::util::ArrayList android::view::View::getTouchables() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTouchables", "()Ljava/util/ArrayList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

void android::view::View::addTouchables(const ::java::util::ArrayList& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTouchables", "(Ljava/util/ArrayList;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::requestFocus() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestFocus", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::View::requestFocus(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestFocus", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::requestFocus(int32_t arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestFocus", "(ILandroid/graphics/Rect;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::View::requestFocusFromTouch() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestFocusFromTouch", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::onStartTemporaryDetach() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStartTemporaryDetach", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::View::onFinishTemporaryDetach() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFinishTemporaryDetach", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::KeyEvent_DispatcherState android::view::View::getKeyDispatcherState() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyDispatcherState", "()Landroid/view/KeyEvent$DispatcherState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::KeyEvent_DispatcherState _ret(ret);
    return _ret;
}

bool android::view::View::dispatchKeyEventPreIme(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEventPreIme", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::dispatchKeyShortcutEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyShortcutEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::dispatchTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::onFilterTouchEventForSecurity(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFilterTouchEventForSecurity", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::dispatchTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::dispatchGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::View::dispatchWindowFocusChanged(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::onWindowFocusChanged(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::hasWindowFocus() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasWindowFocus", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::dispatchDisplayHint(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchDisplayHint", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::dispatchWindowVisibilityChanged(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchWindowVisibilityChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getWindowVisibility() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowVisibility", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::getWindowVisibleDisplayFrame(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowVisibleDisplayFrame", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::dispatchConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isInTouchMode() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInTouchMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::content::Context android::view::View::getContext() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

bool android::view::View::onKeyPreIme(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyPreIme", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::View::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::View::onKeyLongPress(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyLongPress", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::View::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::View::onKeyMultiple(int32_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyMultiple", "(IILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::view::View::onKeyShortcut(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyShortcut", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::View::onCheckIsTextEditor() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCheckIsTextEditor", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::inputmethod::InputConnection android::view::View::onCreateInputConnection(const ::android::view::inputmethod::EditorInfo& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateInputConnection", "(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::inputmethod::InputConnection _ret(ret);
    return _ret;
}

bool android::view::View::checkInputConnectionProxy(const ::android::view::View& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkInputConnectionProxy", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::View::createContextMenu(const ::android::view::ContextMenu& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "createContextMenu", "(Landroid/view/ContextMenu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::onTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::onGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::onHoverEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onHoverEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::isHovered() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHovered", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setHovered(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHovered", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::onHoverChanged(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onHoverChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::View::cancelLongPress() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelLongPress", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::View::setTouchDelegate(const ::android::view::TouchDelegate& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTouchDelegate", "(Landroid/view/TouchDelegate;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::TouchDelegate android::view::View::getTouchDelegate() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTouchDelegate", "()Landroid/view/TouchDelegate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::TouchDelegate _ret(ret);
    return _ret;
}

void android::view::View::bringToFront() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "bringToFront", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::ViewParent android::view::View::getParent() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Landroid/view/ViewParent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::ViewParent _ret(ret);
    return _ret;
}

void android::view::View::setScrollX(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollX", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setScrollY(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollY", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getScrollX() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::View::getScrollY() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::View::getWidth() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::View::getHeight() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::getDrawingRect(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawingRect", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getMeasuredWidth() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::View::getMeasuredWidthAndState() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredWidthAndState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::View::getMeasuredHeight() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::View::getMeasuredHeightAndState() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredHeightAndState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::View::getMeasuredState() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::Matrix android::view::View::getMatrix() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMatrix", "()Landroid/graphics/Matrix;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Matrix _ret(ret);
    return _ret;
}

void android::view::View::setCameraDistance(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCameraDistance", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::View::getRotation() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotation", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::View::setRotation(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotation", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::View::getRotationY() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotationY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::View::setRotationY(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotationY", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::View::getRotationX() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotationX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::View::setRotationX(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotationX", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::View::getScaleX() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::View::setScaleX(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleX", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::View::getScaleY() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::View::setScaleY(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleY", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::View::getPivotX() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPivotX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::View::setPivotX(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPivotX", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::View::getPivotY() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPivotY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::View::setPivotY(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPivotY", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::View::getAlpha() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlpha", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::View::setAlpha(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getTop() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setTop(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTop", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getBottom() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBottom", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::view::View::isDirty() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setBottom(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBottom", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getLeft() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLeft", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setLeft(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLeft", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getRight() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setRight(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::View::getX() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::View::setX(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setX", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::View::getY() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::View::setY(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setY", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::View::getTranslationX() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTranslationX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::View::setTranslationX(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranslationX", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::View::getTranslationY() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTranslationY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::View::setTranslationY(float arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranslationY", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::getHitRect(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHitRect", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::getFocusedRect(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFocusedRect", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::getGlobalVisibleRect(const ::android::graphics::Rect& arg0, const ::android::graphics::Point& arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGlobalVisibleRect", "(Landroid/graphics/Rect;Landroid/graphics/Point;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::View::getGlobalVisibleRect(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGlobalVisibleRect", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::getLocalVisibleRect(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalVisibleRect", "(Landroid/graphics/Rect;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::View::offsetTopAndBottom(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "offsetTopAndBottom", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::offsetLeftAndRight(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "offsetLeftAndRight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::ViewGroup_LayoutParams android::view::View::getLayoutParams() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutParams", "()Landroid/view/ViewGroup$LayoutParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::ViewGroup_LayoutParams _ret(ret);
    return _ret;
}

void android::view::View::setLayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutParams", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::scrollTo(int32_t arg0, int32_t arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "scrollTo", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::View::scrollBy(int32_t arg0, int32_t arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "scrollBy", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::View::invalidate(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidate", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::invalidate(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidate", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::view::View::invalidate() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::view::View::isOpaque() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpaque", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::os::Handler android::view::View::getHandler() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHandler", "()Landroid/os/Handler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Handler _ret(ret);
    return _ret;
}

bool android::view::View::post(const ::java::lang::Runnable& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "post", "(Ljava/lang/Runnable;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::postDelayed(const ::java::lang::Runnable& arg0, int64_t arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "postDelayed", "(Ljava/lang/Runnable;J)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::View::removeCallbacks(const ::java::lang::Runnable& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeCallbacks", "(Ljava/lang/Runnable;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::View::postInvalidate() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "postInvalidate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::View::postInvalidate(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "postInvalidate", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::view::View::postInvalidateDelayed(int64_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "postInvalidateDelayed", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::postInvalidateDelayed(int64_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "postInvalidateDelayed", "(JIIII)V");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::view::View::computeScroll() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScroll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::view::View::isHorizontalFadingEdgeEnabled() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHorizontalFadingEdgeEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setHorizontalFadingEdgeEnabled(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHorizontalFadingEdgeEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isVerticalFadingEdgeEnabled() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVerticalFadingEdgeEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setVerticalFadingEdgeEnabled(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVerticalFadingEdgeEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isHorizontalScrollBarEnabled() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHorizontalScrollBarEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setHorizontalScrollBarEnabled(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHorizontalScrollBarEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isVerticalScrollBarEnabled() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVerticalScrollBarEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setVerticalScrollBarEnabled(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVerticalScrollBarEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setScrollbarFadingEnabled(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollbarFadingEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isScrollbarFadingEnabled() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollbarFadingEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setScrollBarStyle(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollBarStyle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getScrollBarStyle() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollBarStyle", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::view::View::canScrollHorizontally(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "canScrollHorizontally", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::canScrollVertically(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "canScrollVertically", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::os::IBinder android::view::View::getWindowToken() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowToken", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

::android::os::IBinder android::view::View::getApplicationWindowToken() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationWindowToken", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

void android::view::View::saveHierarchyState(const ::android::util::SparseArray& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveHierarchyState", "(Landroid/util/SparseArray;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::restoreHierarchyState(const ::android::util::SparseArray& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreHierarchyState", "(Landroid/util/SparseArray;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::view::View::getDrawingTime() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawingTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::view::View::setDuplicateParentStateEnabled(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuplicateParentStateEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isDuplicateParentStateEnabled() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDuplicateParentStateEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setLayerType(int32_t arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayerType", "(ILandroid/graphics/Paint;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::View::getLayerType() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayerType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::buildLayer() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "buildLayer", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::View::setDrawingCacheEnabled(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawingCacheEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isDrawingCacheEnabled() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDrawingCacheEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::graphics::Bitmap android::view::View::getDrawingCache() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawingCache", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::view::View::getDrawingCache(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawingCache", "(Z)Landroid/graphics/Bitmap;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

void android::view::View::destroyDrawingCache() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroyDrawingCache", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::View::setDrawingCacheBackgroundColor(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawingCacheBackgroundColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getDrawingCacheBackgroundColor() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawingCacheBackgroundColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::buildDrawingCache() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "buildDrawingCache", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::View::buildDrawingCache(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "buildDrawingCache", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isInEditMode() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInEditMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::View::isHardwareAccelerated() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHardwareAccelerated", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getSolidColor() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSolidColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::view::View::isLayoutRequested() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLayoutRequested", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::layout(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "layout", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::android::content::res::Resources android::view::View::getResources() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResources", "()Landroid/content/res/Resources;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

void android::view::View::invalidateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::scheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1, int64_t arg2) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::View::unscheduleDrawable(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::Runnable& arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "unscheduleDrawable", "(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::View::unscheduleDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "unscheduleDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::refreshDrawableState() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "refreshDrawableState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< int32_t> android::view::View::getDrawableState() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawableState", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::view::View::jumpDrawablesToCurrentState() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::View::setBackgroundColor(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setBackgroundResource(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setBackgroundDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::view::View::getBackground() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackground", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::view::View::setPadding(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPadding", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::view::View::getPaddingTop() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaddingTop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::View::getPaddingBottom() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaddingBottom", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::View::getPaddingLeft() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaddingLeft", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::View::getPaddingRight() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaddingRight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setSelected(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelected", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isSelected() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSelected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::View::setActivated(bool arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActivated", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::isActivated() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActivated", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::ViewTreeObserver android::view::View::getViewTreeObserver() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewTreeObserver", "()Landroid/view/ViewTreeObserver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::ViewTreeObserver _ret(ret);
    return _ret;
}

::android::view::View android::view::View::getRootView() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRootView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::view::View::getLocationOnScreen(const std::vector< int32_t>& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocationOnScreen", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::getLocationInWindow(const std::vector< int32_t>& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocationInWindow", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::view::View::findViewById(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "findViewById", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::view::View::findViewWithTag(const ::java::lang::Object& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "findViewWithTag", "(Ljava/lang/Object;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::view::View::setId(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setId", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getId() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object android::view::View::getTag() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::view::View::setTag(const ::java::lang::Object& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTag", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::view::View::getTag(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::view::View::setTag(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTag", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::View::getBaseline() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseline", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::requestLayout() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::View::forceLayout() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "forceLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::View::measure(int32_t arg0, int32_t arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "measure", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::View::combineMeasuredStates(int32_t arg0, int32_t arg1){
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "combineMeasuredStates", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::view::View::resolveSize(int32_t arg0, int32_t arg1){
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resolveSize", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::view::View::resolveSizeAndState(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resolveSizeAndState", "(III)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::view::View::getDefaultSize(int32_t arg0, int32_t arg1){
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultSize", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

void android::view::View::setMinimumHeight(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinimumHeight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::setMinimumWidth(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinimumWidth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::animation::Animation android::view::View::getAnimation() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnimation", "()Landroid/view/animation/Animation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::animation::Animation _ret(ret);
    return _ret;
}

void android::view::View::startAnimation(const ::android::view::animation::Animation& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "startAnimation", "(Landroid/view/animation/Animation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::clearAnimation() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearAnimation", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::View::setAnimation(const ::android::view::animation::Animation& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimation", "(Landroid/view/animation/Animation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::playSoundEffect(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "playSoundEffect", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::performHapticFeedback(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "performHapticFeedback", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::performHapticFeedback(int32_t arg0, int32_t arg1) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "performHapticFeedback", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::View::setSystemUiVisibility(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSystemUiVisibility", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::View::getSystemUiVisibility() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemUiVisibility", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setOnSystemUiVisibilityChangeListener(const ::android::view::View_OnSystemUiVisibilityChangeListener& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnSystemUiVisibilityChangeListener", "(Landroid/view/View$OnSystemUiVisibilityChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View::dispatchSystemUiVisibilityChanged(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchSystemUiVisibilityChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::View::startDrag(const ::android::content::ClipData& arg0, const ::android::view::View_DragShadowBuilder& arg1, const ::java::lang::Object& arg2, int32_t arg3) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "startDrag", "(Landroid/content/ClipData;Landroid/view/View$DragShadowBuilder;Ljava/lang/Object;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::view::View::onDragEvent(const ::android::view::DragEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDragEvent", "(Landroid/view/DragEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View::dispatchDragEvent(const ::android::view::DragEvent& arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchDragEvent", "(Landroid/view/DragEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::View android::view::View::inflate(const ::android::content::Context& arg0, int32_t arg1, const ::android::view::ViewGroup& arg2){
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "inflate", "(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

int32_t android::view::View::getOverScrollMode() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOverScrollMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::View::setOverScrollMode(int32_t arg0) const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOverScrollMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::ViewPropertyAnimator android::view::View::animate() const {
    if (!::android::view::View::_class) ::android::view::View::_class = java::fetch_class("android/view/View");
    static jmethodID mid = java::jni->GetMethodID(_class, "animate", "()Landroid/view/ViewPropertyAnimator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::setDuration(int64_t arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(J)Landroid/view/ViewPropertyAnimator;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

int64_t android::view::ViewPropertyAnimator::getDuration() const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::view::ViewPropertyAnimator::getStartDelay() const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartDelay", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::setStartDelay(int64_t arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartDelay", "(J)Landroid/view/ViewPropertyAnimator;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::setInterpolator(const ::android::animation::TimeInterpolator& arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/animation/TimeInterpolator;)Landroid/view/ViewPropertyAnimator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::setListener(const ::android::animation::Animator_AnimatorListener& arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListener", "(Landroid/animation/Animator$AnimatorListener;)Landroid/view/ViewPropertyAnimator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

void android::view::ViewPropertyAnimator::start() const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::ViewPropertyAnimator::cancel() const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::x(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "x", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::xBy(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "xBy", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::y(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "y", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::yBy(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "yBy", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::rotation(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotation", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::rotationBy(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationBy", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::rotationX(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationX", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::rotationXBy(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationXBy", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::rotationY(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationY", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::rotationYBy(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationYBy", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::translationX(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationX", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::translationXBy(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationXBy", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::translationY(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationY", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::translationYBy(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationYBy", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::scaleX(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleX", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::scaleXBy(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleXBy", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::scaleY(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleY", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::scaleYBy(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleYBy", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::alpha(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "alpha", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

::android::view::ViewPropertyAnimator android::view::ViewPropertyAnimator::alphaBy(float arg0) const {
    if (!::android::view::ViewPropertyAnimator::_class) ::android::view::ViewPropertyAnimator::_class = java::fetch_class("android/view/ViewPropertyAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "alphaBy", "(F)Landroid/view/ViewPropertyAnimator;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewPropertyAnimator _ret(ret);
    return _ret;
}

int32_t android::view::InputDevice_MotionRange::getAxis() const {
    if (!::android::view::InputDevice_MotionRange::_class) ::android::view::InputDevice_MotionRange::_class = java::fetch_class("android/view/InputDevice$MotionRange");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAxis", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::InputDevice_MotionRange::getSource() const {
    if (!::android::view::InputDevice_MotionRange::_class) ::android::view::InputDevice_MotionRange::_class = java::fetch_class("android/view/InputDevice$MotionRange");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::view::InputDevice_MotionRange::getMin() const {
    if (!::android::view::InputDevice_MotionRange::_class) ::android::view::InputDevice_MotionRange::_class = java::fetch_class("android/view/InputDevice$MotionRange");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMin", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::InputDevice_MotionRange::getMax() const {
    if (!::android::view::InputDevice_MotionRange::_class) ::android::view::InputDevice_MotionRange::_class = java::fetch_class("android/view/InputDevice$MotionRange");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMax", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::InputDevice_MotionRange::getRange() const {
    if (!::android::view::InputDevice_MotionRange::_class) ::android::view::InputDevice_MotionRange::_class = java::fetch_class("android/view/InputDevice$MotionRange");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRange", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::InputDevice_MotionRange::getFlat() const {
    if (!::android::view::InputDevice_MotionRange::_class) ::android::view::InputDevice_MotionRange::_class = java::fetch_class("android/view/InputDevice$MotionRange");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlat", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::InputDevice_MotionRange::getFuzz() const {
    if (!::android::view::InputDevice_MotionRange::_class) ::android::view::InputDevice_MotionRange::_class = java::fetch_class("android/view/InputDevice$MotionRange");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFuzz", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ActionProvider::ActionProvider(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::view::ActionProvider::_class) ::android::view::ActionProvider::_class = java::fetch_class("android/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::view::View android::view::ActionProvider::onCreateActionView() const {
    if (!::android::view::ActionProvider::_class) ::android::view::ActionProvider::_class = java::fetch_class("android/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateActionView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::view::ActionProvider::onPerformDefaultAction() const {
    if (!::android::view::ActionProvider::_class) ::android::view::ActionProvider::_class = java::fetch_class("android/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPerformDefaultAction", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::ActionProvider::hasSubMenu() const {
    if (!::android::view::ActionProvider::_class) ::android::view::ActionProvider::_class = java::fetch_class("android/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasSubMenu", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::ActionProvider::onPrepareSubMenu(const ::android::view::SubMenu& arg0) const {
    if (!::android::view::ActionProvider::_class) ::android::view::ActionProvider::_class = java::fetch_class("android/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPrepareSubMenu", "(Landroid/view/SubMenu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewGroup::ViewGroup(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewGroup::ViewGroup(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewGroup::ViewGroup(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::view::ViewGroup::getDescendantFocusability() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescendantFocusability", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::ViewGroup::setDescendantFocusability(int32_t arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDescendantFocusability", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::requestChildFocus(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildFocus", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewGroup::focusableViewAvailable(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "focusableViewAvailable", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::showContextMenuForChild(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "showContextMenuForChild", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::ActionMode android::view::ViewGroup::startActionModeForChild(const ::android::view::View& arg0, const ::android::view::ActionMode_Callback& arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActionModeForChild", "(Landroid/view/View;Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::ActionMode _ret(ret);
    return _ret;
}

::android::view::View android::view::ViewGroup::focusSearch(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "focusSearch", "(Landroid/view/View;I)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::view::ViewGroup::requestChildRectangleOnScreen(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1, bool arg2) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildRectangleOnScreen", "(Landroid/view/View;Landroid/graphics/Rect;Z)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::view::ViewGroup::requestSendAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestSendAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::ViewGroup::onRequestSendAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestSendAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::ViewGroup::dispatchUnhandledMove(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchUnhandledMove", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewGroup::clearChildFocus(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearChildFocus", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::clearFocus() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearFocus", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::View android::view::ViewGroup::getFocusedChild() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFocusedChild", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::view::ViewGroup::hasFocus() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFocus", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::View android::view::ViewGroup::findFocus() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFocus", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::view::ViewGroup::hasFocusable() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFocusable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::ViewGroup::addFocusables(const ::java::util::ArrayList& arg0, int32_t arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFocusables", "(Ljava/util/ArrayList;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewGroup::addFocusables(const ::java::util::ArrayList& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFocusables", "(Ljava/util/ArrayList;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::ViewGroup::findViewsWithText(const ::java::util::ArrayList& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "findViewsWithText", "(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::ViewGroup::dispatchWindowFocusChanged(bool arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::addTouchables(const ::java::util::ArrayList& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTouchables", "(Ljava/util/ArrayList;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::dispatchDisplayHint(int32_t arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchDisplayHint", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::dispatchWindowVisibilityChanged(int32_t arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchWindowVisibilityChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::dispatchConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::recomputeViewAttributes(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "recomputeViewAttributes", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::bringChildToFront(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "bringChildToFront", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::dispatchDragEvent(const ::android::view::DragEvent& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchDragEvent", "(Landroid/view/DragEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::dispatchSystemUiVisibilityChanged(int32_t arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchSystemUiVisibilityChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::dispatchKeyEventPreIme(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEventPreIme", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::dispatchKeyShortcutEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyShortcutEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::dispatchTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::onInterceptHoverEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptHoverEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::dispatchTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::setMotionEventSplittingEnabled(bool arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMotionEventSplittingEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::isMotionEventSplittingEnabled() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMotionEventSplittingEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::ViewGroup::requestDisallowInterceptTouchEvent(bool arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestDisallowInterceptTouchEvent", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::onInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::requestFocus(int32_t arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestFocus", "(ILandroid/graphics/Rect;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewGroup::setPadding(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPadding", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::view::ViewGroup::setClipChildren(bool arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClipChildren", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::setClipToPadding(bool arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClipToPadding", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::dispatchSetSelected(bool arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchSetSelected", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::dispatchSetActivated(bool arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchSetActivated", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::addView(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::addView(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewGroup::addView(const ::android::view::View& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::ViewGroup::addView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewGroup::addView(const ::android::view::View& arg0, int32_t arg1, const ::android::view::ViewGroup_LayoutParams& arg2) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::ViewGroup::updateViewLayout(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateViewLayout", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewGroup::setOnHierarchyChangeListener(const ::android::view::ViewGroup_OnHierarchyChangeListener& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnHierarchyChangeListener", "(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::removeView(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::removeViewInLayout(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeViewInLayout", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::removeViewsInLayout(int32_t arg0, int32_t arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeViewsInLayout", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewGroup::removeViewAt(int32_t arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeViewAt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::removeViews(int32_t arg0, int32_t arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeViews", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewGroup::setLayoutTransition(const ::android::animation::LayoutTransition& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutTransition", "(Landroid/animation/LayoutTransition;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::animation::LayoutTransition android::view::ViewGroup::getLayoutTransition() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutTransition", "()Landroid/animation/LayoutTransition;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::animation::LayoutTransition _ret(ret);
    return _ret;
}

void android::view::ViewGroup::removeAllViews() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllViews", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::ViewGroup::removeAllViewsInLayout() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllViewsInLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::ViewGroup::invalidateChild(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateChild", "(Landroid/view/View;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::ViewParent android::view::ViewGroup::invalidateChildInParent(const std::vector< int32_t>& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateChildInParent", "([ILandroid/graphics/Rect;)Landroid/view/ViewParent;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::ViewParent _ret(ret);
    return _ret;
}

void android::view::ViewGroup::offsetDescendantRectToMyCoords(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "offsetDescendantRectToMyCoords", "(Landroid/view/View;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewGroup::offsetRectIntoDescendantCoords(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "offsetRectIntoDescendantCoords", "(Landroid/view/View;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::view::ViewGroup::getChildVisibleRect(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1, const ::android::graphics::Point& arg2) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildVisibleRect", "(Landroid/view/View;Landroid/graphics/Rect;Landroid/graphics/Point;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::ViewGroup::layout(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "layout", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::view::ViewGroup::startLayoutAnimation() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "startLayoutAnimation", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::ViewGroup::scheduleLayoutAnimation() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleLayoutAnimation", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::ViewGroup::setLayoutAnimation(const ::android::view::animation::LayoutAnimationController& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutAnimation", "(Landroid/view/animation/LayoutAnimationController;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::animation::LayoutAnimationController android::view::ViewGroup::getLayoutAnimation() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutAnimation", "()Landroid/view/animation/LayoutAnimationController;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::animation::LayoutAnimationController _ret(ret);
    return _ret;
}

bool android::view::ViewGroup::isAnimationCacheEnabled() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnimationCacheEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::ViewGroup::setAnimationCacheEnabled(bool arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimationCacheEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::isAlwaysDrawnWithCacheEnabled() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAlwaysDrawnWithCacheEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::ViewGroup::setAlwaysDrawnWithCacheEnabled(bool arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlwaysDrawnWithCacheEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::ViewGroup::getPersistentDrawingCache() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPersistentDrawingCache", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::ViewGroup::setPersistentDrawingCache(int32_t arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPersistentDrawingCache", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::ViewGroup_LayoutParams android::view::ViewGroup::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewGroup_LayoutParams _ret(ret);
    return _ret;
}

int32_t android::view::ViewGroup::indexOfChild(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOfChild", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::view::ViewGroup::getChildCount() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::View android::view::ViewGroup::getChildAt(int32_t arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildAt", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

int32_t android::view::ViewGroup::getChildMeasureSpec(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getChildMeasureSpec", "(III)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::view::ViewGroup::clearDisappearingChildren() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearDisappearingChildren", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::ViewGroup::startViewTransition(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "startViewTransition", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::endViewTransition(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "endViewTransition", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::gatherTransparentRegion(const ::android::graphics::Region& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "gatherTransparentRegion", "(Landroid/graphics/Region;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::requestTransparentRegion(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestTransparentRegion", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::animation::Animation_AnimationListener android::view::ViewGroup::getLayoutAnimationListener() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutAnimationListener", "()Landroid/view/animation/Animation$AnimationListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::animation::Animation_AnimationListener _ret(ret);
    return _ret;
}

void android::view::ViewGroup::jumpDrawablesToCurrentState() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::ViewGroup::setAddStatesFromChildren(bool arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAddStatesFromChildren", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::addStatesFromChildren() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addStatesFromChildren", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::ViewGroup::childDrawableStateChanged(const ::android::view::View& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "childDrawableStateChanged", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewGroup::setLayoutAnimationListener(const ::android::view::animation::Animation_AnimationListener& arg0) const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutAnimationListener", "(Landroid/view/animation/Animation$AnimationListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewGroup::shouldDelayChildPressedState() const {
    if (!::android::view::ViewGroup::_class) ::android::view::ViewGroup::_class = java::fetch_class("android/view/ViewGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldDelayChildPressedState", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::ActionMode_Callback::onCreateActionMode(const ::android::view::ActionMode& arg0, const ::android::view::Menu& arg1) const {
    if (!::android::view::ActionMode_Callback::_class) ::android::view::ActionMode_Callback::_class = java::fetch_class("android/view/ActionMode$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateActionMode", "(Landroid/view/ActionMode;Landroid/view/Menu;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::ActionMode_Callback::onPrepareActionMode(const ::android::view::ActionMode& arg0, const ::android::view::Menu& arg1) const {
    if (!::android::view::ActionMode_Callback::_class) ::android::view::ActionMode_Callback::_class = java::fetch_class("android/view/ActionMode$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPrepareActionMode", "(Landroid/view/ActionMode;Landroid/view/Menu;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::ActionMode_Callback::onActionItemClicked(const ::android::view::ActionMode& arg0, const ::android::view::MenuItem& arg1) const {
    if (!::android::view::ActionMode_Callback::_class) ::android::view::ActionMode_Callback::_class = java::fetch_class("android/view/ActionMode$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActionItemClicked", "(Landroid/view/ActionMode;Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::ActionMode_Callback::onDestroyActionMode(const ::android::view::ActionMode& arg0) const {
    if (!::android::view::ActionMode_Callback::_class) ::android::view::ActionMode_Callback::_class = java::fetch_class("android/view/ActionMode$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroyActionMode", "(Landroid/view/ActionMode;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::Surface_OutOfResourcesException::Surface_OutOfResourcesException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::view::Surface_OutOfResourcesException::_class) ::android::view::Surface_OutOfResourcesException::_class = java::fetch_class("android/view/Surface$OutOfResourcesException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::Surface_OutOfResourcesException::Surface_OutOfResourcesException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::view::Surface_OutOfResourcesException::_class) ::android::view::Surface_OutOfResourcesException::_class = java::fetch_class("android/view/Surface$OutOfResourcesException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::view::View_OnAttachStateChangeListener::onViewAttachedToWindow(const ::android::view::View& arg0) const {
    if (!::android::view::View_OnAttachStateChangeListener::_class) ::android::view::View_OnAttachStateChangeListener::_class = java::fetch_class("android/view/View$OnAttachStateChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewAttachedToWindow", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::View_OnAttachStateChangeListener::onViewDetachedFromWindow(const ::android::view::View& arg0) const {
    if (!::android::view::View_OnAttachStateChangeListener::_class) ::android::view::View_OnAttachStateChangeListener::_class = java::fetch_class("android/view/View$OnAttachStateChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewDetachedFromWindow", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::TextureView::TextureView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::TextureView::TextureView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::TextureView::TextureView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool android::view::TextureView::isOpaque() const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpaque", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::TextureView::setOpaque(bool arg0) const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOpaque", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::TextureView::setLayerType(int32_t arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayerType", "(ILandroid/graphics/Paint;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::TextureView::getLayerType() const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayerType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::TextureView::buildLayer() const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "buildLayer", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::TextureView::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::TextureView::setTransform(const ::android::graphics::Matrix& arg0) const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransform", "(Landroid/graphics/Matrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Matrix android::view::TextureView::getTransform(const ::android::graphics::Matrix& arg0) const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransform", "(Landroid/graphics/Matrix;)Landroid/graphics/Matrix;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Matrix _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::view::TextureView::getBitmap() const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBitmap", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::view::TextureView::getBitmap(int32_t arg0, int32_t arg1) const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBitmap", "(II)Landroid/graphics/Bitmap;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::view::TextureView::getBitmap(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBitmap", "(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

bool android::view::TextureView::isAvailable() const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAvailable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::graphics::Canvas android::view::TextureView::lockCanvas() const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "lockCanvas", "()Landroid/graphics/Canvas;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Canvas _ret(ret);
    return _ret;
}

::android::graphics::Canvas android::view::TextureView::lockCanvas(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "lockCanvas", "(Landroid/graphics/Rect;)Landroid/graphics/Canvas;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Canvas _ret(ret);
    return _ret;
}

void android::view::TextureView::unlockCanvasAndPost(const ::android::graphics::Canvas& arg0) const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "unlockCanvasAndPost", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::SurfaceTexture android::view::TextureView::getSurfaceTexture() const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSurfaceTexture", "()Landroid/graphics/SurfaceTexture;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::SurfaceTexture _ret(ret);
    return _ret;
}

::android::view::TextureView_SurfaceTextureListener android::view::TextureView::getSurfaceTextureListener() const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSurfaceTextureListener", "()Landroid/view/TextureView$SurfaceTextureListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::TextureView_SurfaceTextureListener _ret(ret);
    return _ret;
}

void android::view::TextureView::setSurfaceTextureListener(const ::android::view::TextureView_SurfaceTextureListener& arg0) const {
    if (!::android::view::TextureView::_class) ::android::view::TextureView::_class = java::fetch_class("android/view/TextureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSurfaceTextureListener", "(Landroid/view/TextureView$SurfaceTextureListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::WindowManager_LayoutParams::WindowManager_LayoutParams() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::WindowManager_LayoutParams::WindowManager_LayoutParams(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::WindowManager_LayoutParams::WindowManager_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::WindowManager_LayoutParams::WindowManager_LayoutParams(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::WindowManager_LayoutParams::WindowManager_LayoutParams(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::WindowManager_LayoutParams::WindowManager_LayoutParams(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::WindowManager_LayoutParams::WindowManager_LayoutParams(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::view::WindowManager_LayoutParams::mayUseInputMethod(int32_t arg0){
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "mayUseInputMethod", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::view::WindowManager_LayoutParams::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::view::WindowManager_LayoutParams::getTitle() const {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::view::WindowManager_LayoutParams::describeContents() const {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::WindowManager_LayoutParams::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::WindowManager_LayoutParams::copyFrom(const ::android::view::WindowManager_LayoutParams& arg0) const {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFrom", "(Landroid/view/WindowManager$LayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String android::view::WindowManager_LayoutParams::debug(const ::java::lang::String& arg0) const {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "debug", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::view::WindowManager_LayoutParams::toString() const {
    if (!::android::view::WindowManager_LayoutParams::_class) ::android::view::WindowManager_LayoutParams::_class = java::fetch_class("android/view/WindowManager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::ViewDebug_IntToString::from() const {
    if (!::android::view::ViewDebug_IntToString::_class) ::android::view::ViewDebug_IntToString::_class = java::fetch_class("android/view/ViewDebug$IntToString");
    static jmethodID mid = java::jni->GetMethodID(_class, "from", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::view::ViewDebug_IntToString::to() const {
    if (!::android::view::ViewDebug_IntToString::_class) ::android::view::ViewDebug_IntToString::_class = java::fetch_class("android/view/ViewDebug$IntToString");
    static jmethodID mid = java::jni->GetMethodID(_class, "to", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::view::View_OnKeyListener::onKey(const ::android::view::View& arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::view::View_OnKeyListener::_class) ::android::view::View_OnKeyListener::_class = java::fetch_class("android/view/View$OnKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKey", "(Landroid/view/View;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::ViewStub_OnInflateListener::onInflate(const ::android::view::ViewStub& arg0, const ::android::view::View& arg1) const {
    if (!::android::view::ViewStub_OnInflateListener::_class) ::android::view::ViewStub_OnInflateListener::_class = java::fetch_class("android/view/ViewStub$OnInflateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInflate", "(Landroid/view/ViewStub;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::MenuItem android::view::Menu::add(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/CharSequence;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::Menu::add(int32_t arg0) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(I)Landroid/view/MenuItem;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::Menu::add(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::lang::CharSequence& arg3) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::Menu::add(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(IIII)Landroid/view/MenuItem;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::SubMenu android::view::Menu::addSubMenu(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSubMenu", "(Ljava/lang/CharSequence;)Landroid/view/SubMenu;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::SubMenu _ret(ret);
    return _ret;
}

::android::view::SubMenu android::view::Menu::addSubMenu(int32_t arg0) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSubMenu", "(I)Landroid/view/SubMenu;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::SubMenu _ret(ret);
    return _ret;
}

::android::view::SubMenu android::view::Menu::addSubMenu(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::lang::CharSequence& arg3) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSubMenu", "(IIILjava/lang/CharSequence;)Landroid/view/SubMenu;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::SubMenu _ret(ret);
    return _ret;
}

::android::view::SubMenu android::view::Menu::addSubMenu(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSubMenu", "(IIII)Landroid/view/SubMenu;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::SubMenu _ret(ret);
    return _ret;
}

int32_t android::view::Menu::addIntentOptions(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::content::ComponentName& arg3, const std::vector< ::android::content::Intent>& arg4, const ::android::content::Intent& arg5, int32_t arg6, const std::vector< ::android::view::MenuItem>& arg7) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIntentOptions", "(IIILandroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I[Landroid/view/MenuItem;)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    unsigned arg4s = arg4.size();
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::android::content::Intent::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::android::content::Intent& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    jobject _arg5 = arg5.obj;
    int32_t _arg6 = arg6;
    unsigned arg7s = arg7.size();
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    jobjectArray _arg7 = java::jni->NewObjectArray(arg7s, ::android::view::MenuItem::_class, nullptr);
    for (unsigned arg7i = 0; arg7i < arg7s; ++arg7i) {
      const ::android::view::MenuItem& arg7e = arg7[arg7i];
        jobject arg7d = arg7e.obj;
      java::jni->SetObjectArrayElement(_arg7, arg7i, arg7d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::view::Menu::removeItem(int32_t arg0) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeItem", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Menu::removeGroup(int32_t arg0) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeGroup", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Menu::clear() const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::Menu::setGroupCheckable(int32_t arg0, bool arg1, bool arg2) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGroupCheckable", "(IZZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::Menu::setGroupVisible(int32_t arg0, bool arg1) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGroupVisible", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::Menu::setGroupEnabled(int32_t arg0, bool arg1) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGroupEnabled", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::view::Menu::hasVisibleItems() const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasVisibleItems", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::MenuItem android::view::Menu::findItem(int32_t arg0) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "findItem", "(I)Landroid/view/MenuItem;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

int32_t android::view::Menu::size() const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::MenuItem android::view::Menu::getItem(int32_t arg0) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItem", "(I)Landroid/view/MenuItem;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

void android::view::Menu::close() const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::view::Menu::performShortcut(int32_t arg0, const ::android::view::KeyEvent& arg1, int32_t arg2) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "performShortcut", "(ILandroid/view/KeyEvent;I)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::view::Menu::isShortcutKey(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShortcutKey", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::Menu::performIdentifierAction(int32_t arg0, int32_t arg1) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "performIdentifierAction", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::Menu::setQwertyMode(bool arg0) const {
    if (!::android::view::Menu::_class) ::android::view::Menu::_class = java::fetch_class("android/view/Menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQwertyMode", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::GestureDetector_SimpleOnGestureListener::GestureDetector_SimpleOnGestureListener() : ::java::lang::Object((jobject)0), ::android::view::GestureDetector_OnDoubleTapListener((jobject)0), ::android::view::GestureDetector_OnGestureListener((jobject)0) {
    if (!::android::view::GestureDetector_SimpleOnGestureListener::_class) ::android::view::GestureDetector_SimpleOnGestureListener::_class = java::fetch_class("android/view/GestureDetector$SimpleOnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::view::GestureDetector_SimpleOnGestureListener::onSingleTapUp(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_SimpleOnGestureListener::_class) ::android::view::GestureDetector_SimpleOnGestureListener::_class = java::fetch_class("android/view/GestureDetector$SimpleOnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSingleTapUp", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::GestureDetector_SimpleOnGestureListener::onLongPress(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_SimpleOnGestureListener::_class) ::android::view::GestureDetector_SimpleOnGestureListener::_class = java::fetch_class("android/view/GestureDetector$SimpleOnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLongPress", "(Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::GestureDetector_SimpleOnGestureListener::onScroll(const ::android::view::MotionEvent& arg0, const ::android::view::MotionEvent& arg1, float arg2, float arg3) const {
    if (!::android::view::GestureDetector_SimpleOnGestureListener::_class) ::android::view::GestureDetector_SimpleOnGestureListener::_class = java::fetch_class("android/view/GestureDetector$SimpleOnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScroll", "(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::view::GestureDetector_SimpleOnGestureListener::onFling(const ::android::view::MotionEvent& arg0, const ::android::view::MotionEvent& arg1, float arg2, float arg3) const {
    if (!::android::view::GestureDetector_SimpleOnGestureListener::_class) ::android::view::GestureDetector_SimpleOnGestureListener::_class = java::fetch_class("android/view/GestureDetector$SimpleOnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFling", "(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::view::GestureDetector_SimpleOnGestureListener::onShowPress(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_SimpleOnGestureListener::_class) ::android::view::GestureDetector_SimpleOnGestureListener::_class = java::fetch_class("android/view/GestureDetector$SimpleOnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onShowPress", "(Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::GestureDetector_SimpleOnGestureListener::onDown(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_SimpleOnGestureListener::_class) ::android::view::GestureDetector_SimpleOnGestureListener::_class = java::fetch_class("android/view/GestureDetector$SimpleOnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDown", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::GestureDetector_SimpleOnGestureListener::onDoubleTap(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_SimpleOnGestureListener::_class) ::android::view::GestureDetector_SimpleOnGestureListener::_class = java::fetch_class("android/view/GestureDetector$SimpleOnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDoubleTap", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::GestureDetector_SimpleOnGestureListener::onDoubleTapEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_SimpleOnGestureListener::_class) ::android::view::GestureDetector_SimpleOnGestureListener::_class = java::fetch_class("android/view/GestureDetector$SimpleOnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDoubleTapEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::GestureDetector_SimpleOnGestureListener::onSingleTapConfirmed(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector_SimpleOnGestureListener::_class) ::android::view::GestureDetector_SimpleOnGestureListener::_class = java::fetch_class("android/view/GestureDetector$SimpleOnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSingleTapConfirmed", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::MotionEvent_PointerCoords::MotionEvent_PointerCoords() : ::java::lang::Object((jobject)0) {
    if (!::android::view::MotionEvent_PointerCoords::_class) ::android::view::MotionEvent_PointerCoords::_class = java::fetch_class("android/view/MotionEvent$PointerCoords");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::view::MotionEvent_PointerCoords::clear() const {
    if (!::android::view::MotionEvent_PointerCoords::_class) ::android::view::MotionEvent_PointerCoords::_class = java::fetch_class("android/view/MotionEvent$PointerCoords");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::MotionEvent_PointerCoords::copyFrom(const ::android::view::MotionEvent_PointerCoords& arg0) const {
    if (!::android::view::MotionEvent_PointerCoords::_class) ::android::view::MotionEvent_PointerCoords::_class = java::fetch_class("android/view/MotionEvent$PointerCoords");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFrom", "(Landroid/view/MotionEvent$PointerCoords;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::MotionEvent_PointerCoords::getAxisValue(int32_t arg0) const {
    if (!::android::view::MotionEvent_PointerCoords::_class) ::android::view::MotionEvent_PointerCoords::_class = java::fetch_class("android/view/MotionEvent$PointerCoords");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAxisValue", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::view::MotionEvent_PointerCoords::setAxisValue(int32_t arg0, float arg1) const {
    if (!::android::view::MotionEvent_PointerCoords::_class) ::android::view::MotionEvent_PointerCoords::_class = java::fetch_class("android/view/MotionEvent$PointerCoords");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAxisValue", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::FocusFinder android::view::FocusFinder::getInstance(){
    if (!::android::view::FocusFinder::_class) ::android::view::FocusFinder::_class = java::fetch_class("android/view/FocusFinder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/view/FocusFinder;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::view::FocusFinder _ret(ret);
    return _ret;
}

::android::view::View android::view::FocusFinder::findNextFocus(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::view::FocusFinder::_class) ::android::view::FocusFinder::_class = java::fetch_class("android/view/FocusFinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "findNextFocus", "(Landroid/view/ViewGroup;Landroid/view/View;I)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::view::FocusFinder::findNextFocusFromRect(const ::android::view::ViewGroup& arg0, const ::android::graphics::Rect& arg1, int32_t arg2) const {
    if (!::android::view::FocusFinder::_class) ::android::view::FocusFinder::_class = java::fetch_class("android/view/FocusFinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "findNextFocusFromRect", "(Landroid/view/ViewGroup;Landroid/graphics/Rect;I)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::view::FocusFinder::findNearestTouchable(const ::android::view::ViewGroup& arg0, int32_t arg1, int32_t arg2, int32_t arg3, const std::vector< int32_t>& arg4) const {
    if (!::android::view::FocusFinder::_class) ::android::view::FocusFinder::_class = java::fetch_class("android/view/FocusFinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "findNearestTouchable", "(Landroid/view/ViewGroup;III[I)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jintArray _arg4 = java::jni->NewIntArray(arg4.size());
    java::jni->SetIntArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::view::ViewParent::requestLayout() const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::view::ViewParent::isLayoutRequested() const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLayoutRequested", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::ViewParent::requestTransparentRegion(const ::android::view::View& arg0) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestTransparentRegion", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewParent::invalidateChild(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateChild", "(Landroid/view/View;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::ViewParent android::view::ViewParent::invalidateChildInParent(const std::vector< int32_t>& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateChildInParent", "([ILandroid/graphics/Rect;)Landroid/view/ViewParent;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::ViewParent _ret(ret);
    return _ret;
}

::android::view::ViewParent android::view::ViewParent::getParent() const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Landroid/view/ViewParent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::ViewParent _ret(ret);
    return _ret;
}

void android::view::ViewParent::requestChildFocus(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildFocus", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewParent::recomputeViewAttributes(const ::android::view::View& arg0) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "recomputeViewAttributes", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewParent::clearChildFocus(const ::android::view::View& arg0) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearChildFocus", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewParent::getChildVisibleRect(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1, const ::android::graphics::Point& arg2) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildVisibleRect", "(Landroid/view/View;Landroid/graphics/Rect;Landroid/graphics/Point;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::view::View android::view::ViewParent::focusSearch(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "focusSearch", "(Landroid/view/View;I)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::view::ViewParent::bringChildToFront(const ::android::view::View& arg0) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "bringChildToFront", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewParent::focusableViewAvailable(const ::android::view::View& arg0) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "focusableViewAvailable", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewParent::showContextMenuForChild(const ::android::view::View& arg0) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "showContextMenuForChild", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::ViewParent::createContextMenu(const ::android::view::ContextMenu& arg0) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "createContextMenu", "(Landroid/view/ContextMenu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::ActionMode android::view::ViewParent::startActionModeForChild(const ::android::view::View& arg0, const ::android::view::ActionMode_Callback& arg1) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActionModeForChild", "(Landroid/view/View;Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::ActionMode _ret(ret);
    return _ret;
}

void android::view::ViewParent::childDrawableStateChanged(const ::android::view::View& arg0) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "childDrawableStateChanged", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewParent::requestDisallowInterceptTouchEvent(bool arg0) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestDisallowInterceptTouchEvent", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewParent::requestChildRectangleOnScreen(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1, bool arg2) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildRectangleOnScreen", "(Landroid/view/View;Landroid/graphics/Rect;Z)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::view::ViewParent::requestSendAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::view::ViewParent::_class) ::android::view::ViewParent::_class = java::fetch_class("android/view/ViewParent");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestSendAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::View_OnSystemUiVisibilityChangeListener::onSystemUiVisibilityChange(int32_t arg0) const {
    if (!::android::view::View_OnSystemUiVisibilityChangeListener::_class) ::android::view::View_OnSystemUiVisibilityChangeListener::_class = java::fetch_class("android/view/View$OnSystemUiVisibilityChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSystemUiVisibilityChange", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::Surface::Surface(const ::android::graphics::SurfaceTexture& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::Surface::_class) ::android::view::Surface::_class = java::fetch_class("android/view/Surface");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/SurfaceTexture;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::view::Surface::isValid() const {
    if (!::android::view::Surface::_class) ::android::view::Surface::_class = java::fetch_class("android/view/Surface");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValid", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::Surface::release() const {
    if (!::android::view::Surface::_class) ::android::view::Surface::_class = java::fetch_class("android/view/Surface");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::graphics::Canvas android::view::Surface::lockCanvas(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::Surface::_class) ::android::view::Surface::_class = java::fetch_class("android/view/Surface");
    static jmethodID mid = java::jni->GetMethodID(_class, "lockCanvas", "(Landroid/graphics/Rect;)Landroid/graphics/Canvas;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Canvas _ret(ret);
    return _ret;
}

void android::view::Surface::unlockCanvasAndPost(const ::android::graphics::Canvas& arg0) const {
    if (!::android::view::Surface::_class) ::android::view::Surface::_class = java::fetch_class("android/view/Surface");
    static jmethodID mid = java::jni->GetMethodID(_class, "unlockCanvasAndPost", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Surface::unlockCanvas(const ::android::graphics::Canvas& arg0) const {
    if (!::android::view::Surface::_class) ::android::view::Surface::_class = java::fetch_class("android/view/Surface");
    static jmethodID mid = java::jni->GetMethodID(_class, "unlockCanvas", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::view::Surface::toString() const {
    if (!::android::view::Surface::_class) ::android::view::Surface::_class = java::fetch_class("android/view/Surface");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::Surface::describeContents() const {
    if (!::android::view::Surface::_class) ::android::view::Surface::_class = java::fetch_class("android/view/Surface");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::Surface::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::view::Surface::_class) ::android::view::Surface::_class = java::fetch_class("android/view/Surface");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Surface::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::Surface::_class) ::android::view::Surface::_class = java::fetch_class("android/view/Surface");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewTreeObserver_OnTouchModeChangeListener::onTouchModeChanged(bool arg0) const {
    if (!::android::view::ViewTreeObserver_OnTouchModeChangeListener::_class) ::android::view::ViewTreeObserver_OnTouchModeChangeListener::_class = java::fetch_class("android/view/ViewTreeObserver$OnTouchModeChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchModeChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::GestureDetector::GestureDetector(const ::android::view::GestureDetector_OnGestureListener& arg0, const ::android::os::Handler& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::view::GestureDetector::_class) ::android::view::GestureDetector::_class = java::fetch_class("android/view/GestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::GestureDetector::GestureDetector(const ::android::view::GestureDetector_OnGestureListener& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::view::GestureDetector::_class) ::android::view::GestureDetector::_class = java::fetch_class("android/view/GestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/GestureDetector$OnGestureListener;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::GestureDetector::GestureDetector(const ::android::content::Context& arg0, const ::android::view::GestureDetector_OnGestureListener& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::view::GestureDetector::_class) ::android::view::GestureDetector::_class = java::fetch_class("android/view/GestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::GestureDetector::GestureDetector(const ::android::content::Context& arg0, const ::android::view::GestureDetector_OnGestureListener& arg1, const ::android::os::Handler& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::view::GestureDetector::_class) ::android::view::GestureDetector::_class = java::fetch_class("android/view/GestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::GestureDetector::GestureDetector(const ::android::content::Context& arg0, const ::android::view::GestureDetector_OnGestureListener& arg1, const ::android::os::Handler& arg2, bool arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::view::GestureDetector::_class) ::android::view::GestureDetector::_class = java::fetch_class("android/view/GestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

void android::view::GestureDetector::setOnDoubleTapListener(const ::android::view::GestureDetector_OnDoubleTapListener& arg0) const {
    if (!::android::view::GestureDetector::_class) ::android::view::GestureDetector::_class = java::fetch_class("android/view/GestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDoubleTapListener", "(Landroid/view/GestureDetector$OnDoubleTapListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::GestureDetector::setIsLongpressEnabled(bool arg0) const {
    if (!::android::view::GestureDetector::_class) ::android::view::GestureDetector::_class = java::fetch_class("android/view/GestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIsLongpressEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::GestureDetector::isLongpressEnabled() const {
    if (!::android::view::GestureDetector::_class) ::android::view::GestureDetector::_class = java::fetch_class("android/view/GestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongpressEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::GestureDetector::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::GestureDetector::_class) ::android::view::GestureDetector::_class = java::fetch_class("android/view/GestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::View_OnHoverListener::onHover(const ::android::view::View& arg0, const ::android::view::MotionEvent& arg1) const {
    if (!::android::view::View_OnHoverListener::_class) ::android::view::View_OnHoverListener::_class = java::fetch_class("android/view/View$OnHoverListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onHover", "(Landroid/view/View;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::Display::getDisplayId() const {
    if (!::android::view::Display::_class) ::android::view::Display::_class = java::fetch_class("android/view/Display");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::Display::getSize(const ::android::graphics::Point& arg0) const {
    if (!::android::view::Display::_class) ::android::view::Display::_class = java::fetch_class("android/view/Display");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSize", "(Landroid/graphics/Point;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Display::getRectSize(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::Display::_class) ::android::view::Display::_class = java::fetch_class("android/view/Display");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRectSize", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::Display::getWidth() const {
    if (!::android::view::Display::_class) ::android::view::Display::_class = java::fetch_class("android/view/Display");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::Display::getHeight() const {
    if (!::android::view::Display::_class) ::android::view::Display::_class = java::fetch_class("android/view/Display");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::Display::getRotation() const {
    if (!::android::view::Display::_class) ::android::view::Display::_class = java::fetch_class("android/view/Display");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::Display::getOrientation() const {
    if (!::android::view::Display::_class) ::android::view::Display::_class = java::fetch_class("android/view/Display");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrientation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::Display::getPixelFormat() const {
    if (!::android::view::Display::_class) ::android::view::Display::_class = java::fetch_class("android/view/Display");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPixelFormat", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::view::Display::getRefreshRate() const {
    if (!::android::view::Display::_class) ::android::view::Display::_class = java::fetch_class("android/view/Display");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRefreshRate", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::Display::getMetrics(const ::android::util::DisplayMetrics& arg0) const {
    if (!::android::view::Display::_class) ::android::view::Display::_class = java::fetch_class("android/view/Display");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetrics", "(Landroid/util/DisplayMetrics;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::SurfaceHolder_BadSurfaceTypeException::SurfaceHolder_BadSurfaceTypeException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::view::SurfaceHolder_BadSurfaceTypeException::_class) ::android::view::SurfaceHolder_BadSurfaceTypeException::_class = java::fetch_class("android/view/SurfaceHolder$BadSurfaceTypeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::SurfaceHolder_BadSurfaceTypeException::SurfaceHolder_BadSurfaceTypeException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::view::SurfaceHolder_BadSurfaceTypeException::_class) ::android::view::SurfaceHolder_BadSurfaceTypeException::_class = java::fetch_class("android/view/SurfaceHolder$BadSurfaceTypeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::view::Window_Callback::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::Window_Callback::dispatchKeyShortcutEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyShortcutEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::Window_Callback::dispatchTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::Window_Callback::dispatchTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::Window_Callback::dispatchGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::Window_Callback::dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::View android::view::Window_Callback::onCreatePanelView(int32_t arg0) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreatePanelView", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::view::Window_Callback::onCreatePanelMenu(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreatePanelMenu", "(ILandroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::Window_Callback::onPreparePanel(int32_t arg0, const ::android::view::View& arg1, const ::android::view::Menu& arg2) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreparePanel", "(ILandroid/view/View;Landroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::view::Window_Callback::onMenuOpened(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuOpened", "(ILandroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::Window_Callback::onMenuItemSelected(int32_t arg0, const ::android::view::MenuItem& arg1) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuItemSelected", "(ILandroid/view/MenuItem;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::Window_Callback::onWindowAttributesChanged(const ::android::view::WindowManager_LayoutParams& arg0) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowAttributesChanged", "(Landroid/view/WindowManager$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window_Callback::onContentChanged() const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::Window_Callback::onWindowFocusChanged(bool arg0) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window_Callback::onAttachedToWindow() const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttachedToWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::Window_Callback::onDetachedFromWindow() const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDetachedFromWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::Window_Callback::onPanelClosed(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPanelClosed", "(ILandroid/view/Menu;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::view::Window_Callback::onSearchRequested() const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSearchRequested", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::ActionMode android::view::Window_Callback::onWindowStartingActionMode(const ::android::view::ActionMode_Callback& arg0) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowStartingActionMode", "(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ActionMode _ret(ret);
    return _ret;
}

void android::view::Window_Callback::onActionModeStarted(const ::android::view::ActionMode& arg0) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActionModeStarted", "(Landroid/view/ActionMode;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::Window_Callback::onActionModeFinished(const ::android::view::ActionMode& arg0) const {
    if (!::android::view::Window_Callback::_class) ::android::view::Window_Callback::_class = java::fetch_class("android/view/Window$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActionModeFinished", "(Landroid/view/ActionMode;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ScaleGestureDetector_OnScaleGestureListener::onScale(const ::android::view::ScaleGestureDetector& arg0) const {
    if (!::android::view::ScaleGestureDetector_OnScaleGestureListener::_class) ::android::view::ScaleGestureDetector_OnScaleGestureListener::_class = java::fetch_class("android/view/ScaleGestureDetector$OnScaleGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScale", "(Landroid/view/ScaleGestureDetector;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::ScaleGestureDetector_OnScaleGestureListener::onScaleBegin(const ::android::view::ScaleGestureDetector& arg0) const {
    if (!::android::view::ScaleGestureDetector_OnScaleGestureListener::_class) ::android::view::ScaleGestureDetector_OnScaleGestureListener::_class = java::fetch_class("android/view/ScaleGestureDetector$OnScaleGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScaleBegin", "(Landroid/view/ScaleGestureDetector;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::ScaleGestureDetector_OnScaleGestureListener::onScaleEnd(const ::android::view::ScaleGestureDetector& arg0) const {
    if (!::android::view::ScaleGestureDetector_OnScaleGestureListener::_class) ::android::view::ScaleGestureDetector_OnScaleGestureListener::_class = java::fetch_class("android/view/ScaleGestureDetector$OnScaleGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScaleEnd", "(Landroid/view/ScaleGestureDetector;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::view::ViewDebug_RecyclerTraceType> android::view::ViewDebug_RecyclerTraceType::values(){
    if (!::android::view::ViewDebug_RecyclerTraceType::_class) ::android::view::ViewDebug_RecyclerTraceType::_class = java::fetch_class("android/view/ViewDebug$RecyclerTraceType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/view/ViewDebug$RecyclerTraceType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::ViewDebug_RecyclerTraceType> _ret(rets, ::android::view::ViewDebug_RecyclerTraceType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::ViewDebug_RecyclerTraceType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::view::ViewDebug_RecyclerTraceType android::view::ViewDebug_RecyclerTraceType::valueOf(const ::java::lang::String& arg0){
    if (!::android::view::ViewDebug_RecyclerTraceType::_class) ::android::view::ViewDebug_RecyclerTraceType::_class = java::fetch_class("android/view/ViewDebug$RecyclerTraceType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/view/ViewDebug$RecyclerTraceType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::ViewDebug_RecyclerTraceType _ret(ret);
    return _ret;
}

void android::view::ViewTreeObserver_OnScrollChangedListener::onScrollChanged() const {
    if (!::android::view::ViewTreeObserver_OnScrollChangedListener::_class) ::android::view::ViewTreeObserver_OnScrollChangedListener::_class = java::fetch_class("android/view/ViewTreeObserver$OnScrollChangedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScrollChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::os::Parcelable android::view::AbsSavedState::getSuperState() const {
    if (!::android::view::AbsSavedState::_class) ::android::view::AbsSavedState::_class = java::fetch_class("android/view/AbsSavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuperState", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

int32_t android::view::AbsSavedState::describeContents() const {
    if (!::android::view::AbsSavedState::_class) ::android::view::AbsSavedState::_class = java::fetch_class("android/view/AbsSavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::AbsSavedState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::AbsSavedState::_class) ::android::view::AbsSavedState::_class = java::fetch_class("android/view/AbsSavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::View_BaseSavedState::View_BaseSavedState(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0) {
    if (!::android::view::View_BaseSavedState::_class) ::android::view::View_BaseSavedState::_class = java::fetch_class("android/view/View$BaseSavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::View_BaseSavedState::View_BaseSavedState(const ::android::os::Parcelable& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0) {
    if (!::android::view::View_BaseSavedState::_class) ::android::view::View_BaseSavedState::_class = java::fetch_class("android/view/View$BaseSavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::view::TextureView_SurfaceTextureListener::onSurfaceTextureAvailable(const ::android::graphics::SurfaceTexture& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::view::TextureView_SurfaceTextureListener::_class) ::android::view::TextureView_SurfaceTextureListener::_class = java::fetch_class("android/view/TextureView$SurfaceTextureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceTextureAvailable", "(Landroid/graphics/SurfaceTexture;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::view::TextureView_SurfaceTextureListener::onSurfaceTextureSizeChanged(const ::android::graphics::SurfaceTexture& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::view::TextureView_SurfaceTextureListener::_class) ::android::view::TextureView_SurfaceTextureListener::_class = java::fetch_class("android/view/TextureView$SurfaceTextureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceTextureSizeChanged", "(Landroid/graphics/SurfaceTexture;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::view::TextureView_SurfaceTextureListener::onSurfaceTextureDestroyed(const ::android::graphics::SurfaceTexture& arg0) const {
    if (!::android::view::TextureView_SurfaceTextureListener::_class) ::android::view::TextureView_SurfaceTextureListener::_class = java::fetch_class("android/view/TextureView$SurfaceTextureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceTextureDestroyed", "(Landroid/graphics/SurfaceTexture;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::TextureView_SurfaceTextureListener::onSurfaceTextureUpdated(const ::android::graphics::SurfaceTexture& arg0) const {
    if (!::android::view::TextureView_SurfaceTextureListener::_class) ::android::view::TextureView_SurfaceTextureListener::_class = java::fetch_class("android/view/TextureView$SurfaceTextureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSurfaceTextureUpdated", "(Landroid/graphics/SurfaceTexture;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::InputQueue_Callback::onInputQueueCreated(const ::android::view::InputQueue& arg0) const {
    if (!::android::view::InputQueue_Callback::_class) ::android::view::InputQueue_Callback::_class = java::fetch_class("android/view/InputQueue$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInputQueueCreated", "(Landroid/view/InputQueue;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::InputQueue_Callback::onInputQueueDestroyed(const ::android::view::InputQueue& arg0) const {
    if (!::android::view::InputQueue_Callback::_class) ::android::view::InputQueue_Callback::_class = java::fetch_class("android/view/InputQueue$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInputQueueDestroyed", "(Landroid/view/InputQueue;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::KeyCharacterMap_UnavailableException::KeyCharacterMap_UnavailableException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::view::KeyCharacterMap_UnavailableException::_class) ::android::view::KeyCharacterMap_UnavailableException::_class = java::fetch_class("android/view/KeyCharacterMap$UnavailableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ScaleGestureDetector::ScaleGestureDetector(const ::android::content::Context& arg0, const ::android::view::ScaleGestureDetector_OnScaleGestureListener& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/ScaleGestureDetector$OnScaleGestureListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::view::ScaleGestureDetector::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::ScaleGestureDetector::isInProgress() const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInProgress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

float android::view::ScaleGestureDetector::getFocusX() const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFocusX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::ScaleGestureDetector::getFocusY() const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFocusY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::ScaleGestureDetector::getCurrentSpan() const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentSpan", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::ScaleGestureDetector::getCurrentSpanX() const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentSpanX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::ScaleGestureDetector::getCurrentSpanY() const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentSpanY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::ScaleGestureDetector::getPreviousSpan() const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreviousSpan", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::ScaleGestureDetector::getPreviousSpanX() const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreviousSpanX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::ScaleGestureDetector::getPreviousSpanY() const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreviousSpanY", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::view::ScaleGestureDetector::getScaleFactor() const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleFactor", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int64_t android::view::ScaleGestureDetector::getTimeDelta() const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeDelta", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::view::ScaleGestureDetector::getEventTime() const {
    if (!::android::view::ScaleGestureDetector::_class) ::android::view::ScaleGestureDetector::_class = java::fetch_class("android/view/ScaleGestureDetector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEventTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::view::View_OnLayoutChangeListener::onLayoutChange(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8) const {
    if (!::android::view::View_OnLayoutChangeListener::_class) ::android::view::View_OnLayoutChangeListener::_class = java::fetch_class("android/view/View$OnLayoutChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLayoutChange", "(Landroid/view/View;IIIIIIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::view::ViewTreeObserver_OnGlobalFocusChangeListener::onGlobalFocusChanged(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::view::ViewTreeObserver_OnGlobalFocusChangeListener::_class) ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener::_class = java::fetch_class("android/view/ViewTreeObserver$OnGlobalFocusChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGlobalFocusChanged", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::view::View_OnDragListener::onDrag(const ::android::view::View& arg0, const ::android::view::DragEvent& arg1) const {
    if (!::android::view::View_OnDragListener::_class) ::android::view::View_OnDragListener::_class = java::fetch_class("android/view/View$OnDragListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrag", "(Landroid/view/View;Landroid/view/DragEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::android::view::ViewDebug_HierarchyTraceType> android::view::ViewDebug_HierarchyTraceType::values(){
    if (!::android::view::ViewDebug_HierarchyTraceType::_class) ::android::view::ViewDebug_HierarchyTraceType::_class = java::fetch_class("android/view/ViewDebug$HierarchyTraceType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/view/ViewDebug$HierarchyTraceType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::ViewDebug_HierarchyTraceType> _ret(rets, ::android::view::ViewDebug_HierarchyTraceType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::ViewDebug_HierarchyTraceType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::view::ViewDebug_HierarchyTraceType android::view::ViewDebug_HierarchyTraceType::valueOf(const ::java::lang::String& arg0){
    if (!::android::view::ViewDebug_HierarchyTraceType::_class) ::android::view::ViewDebug_HierarchyTraceType::_class = java::fetch_class("android/view/ViewDebug$HierarchyTraceType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/view/ViewDebug$HierarchyTraceType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::ViewDebug_HierarchyTraceType _ret(ret);
    return _ret;
}

int32_t android::view::MenuItem::getItemId() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::MenuItem::getGroupId() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::MenuItem::getOrder() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrder", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::MenuItem android::view::MenuItem::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::MenuItem::setTitle(int32_t arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(I)Landroid/view/MenuItem;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::MenuItem::getTitle() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::MenuItem::setTitleCondensed(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitleCondensed", "(Ljava/lang/CharSequence;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::MenuItem::getTitleCondensed() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitleCondensed", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::MenuItem::setIcon(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(Landroid/graphics/drawable/Drawable;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::MenuItem::setIcon(int32_t arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(I)Landroid/view/MenuItem;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::view::MenuItem::getIcon() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIcon", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::MenuItem::setIntent(const ::android::content::Intent& arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntent", "(Landroid/content/Intent;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::content::Intent android::view::MenuItem::getIntent() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntent", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::MenuItem::setShortcut(uint16_t arg0, uint16_t arg1) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShortcut", "(CC)Landroid/view/MenuItem;");
    uint16_t _arg0 = arg0;
    uint16_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::MenuItem::setNumericShortcut(uint16_t arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNumericShortcut", "(C)Landroid/view/MenuItem;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

uint16_t android::view::MenuItem::getNumericShortcut() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumericShortcut", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

::android::view::MenuItem android::view::MenuItem::setAlphabeticShortcut(uint16_t arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlphabeticShortcut", "(C)Landroid/view/MenuItem;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

uint16_t android::view::MenuItem::getAlphabeticShortcut() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlphabeticShortcut", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

::android::view::MenuItem android::view::MenuItem::setCheckable(bool arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCheckable", "(Z)Landroid/view/MenuItem;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

bool android::view::MenuItem::isCheckable() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCheckable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::MenuItem android::view::MenuItem::setChecked(bool arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Z)Landroid/view/MenuItem;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

bool android::view::MenuItem::isChecked() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::MenuItem android::view::MenuItem::setVisible(bool arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisible", "(Z)Landroid/view/MenuItem;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

bool android::view::MenuItem::isVisible() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVisible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::MenuItem android::view::MenuItem::setEnabled(bool arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)Landroid/view/MenuItem;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

bool android::view::MenuItem::isEnabled() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::MenuItem::hasSubMenu() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasSubMenu", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::SubMenu android::view::MenuItem::getSubMenu() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubMenu", "()Landroid/view/SubMenu;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::SubMenu _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::MenuItem::setOnMenuItemClickListener(const ::android::view::MenuItem_OnMenuItemClickListener& arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnMenuItemClickListener", "(Landroid/view/MenuItem$OnMenuItemClickListener;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::ContextMenu_ContextMenuInfo android::view::MenuItem::getMenuInfo() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMenuInfo", "()Landroid/view/ContextMenu$ContextMenuInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::ContextMenu_ContextMenuInfo _ret(ret);
    return _ret;
}

void android::view::MenuItem::setShowAsAction(int32_t arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowAsAction", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::MenuItem android::view::MenuItem::setShowAsActionFlags(int32_t arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowAsActionFlags", "(I)Landroid/view/MenuItem;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::MenuItem::setActionView(const ::android::view::View& arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionView", "(Landroid/view/View;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::MenuItem::setActionView(int32_t arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionView", "(I)Landroid/view/MenuItem;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::View android::view::MenuItem::getActionView() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::MenuItem::setActionProvider(const ::android::view::ActionProvider& arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionProvider", "(Landroid/view/ActionProvider;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::ActionProvider android::view::MenuItem::getActionProvider() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionProvider", "()Landroid/view/ActionProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::ActionProvider _ret(ret);
    return _ret;
}

bool android::view::MenuItem::expandActionView() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "expandActionView", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::MenuItem::collapseActionView() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "collapseActionView", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::MenuItem::isActionViewExpanded() const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActionViewExpanded", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::MenuItem android::view::MenuItem::setOnActionExpandListener(const ::android::view::MenuItem_OnActionExpandListener& arg0) const {
    if (!::android::view::MenuItem::_class) ::android::view::MenuItem::_class = java::fetch_class("android/view/MenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnActionExpandListener", "(Landroid/view/MenuItem$OnActionExpandListener;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

bool android::view::MenuItem_OnMenuItemClickListener::onMenuItemClick(const ::android::view::MenuItem& arg0) const {
    if (!::android::view::MenuItem_OnMenuItemClickListener::_class) ::android::view::MenuItem_OnMenuItemClickListener::_class = java::fetch_class("android/view/MenuItem$OnMenuItemClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuItemClick", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::Gravity::Gravity() : ::java::lang::Object((jobject)0) {
    if (!::android::view::Gravity::_class) ::android::view::Gravity::_class = java::fetch_class("android/view/Gravity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::view::Gravity::apply(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Rect& arg3, const ::android::graphics::Rect& arg4){
    if (!::android::view::Gravity::_class) ::android::view::Gravity::_class = java::fetch_class("android/view/Gravity");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "apply", "(IIILandroid/graphics/Rect;Landroid/graphics/Rect;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::view::Gravity::apply(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Rect& arg3, int32_t arg4, int32_t arg5, const ::android::graphics::Rect& arg6){
    if (!::android::view::Gravity::_class) ::android::view::Gravity::_class = java::fetch_class("android/view/Gravity");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "apply", "(IIILandroid/graphics/Rect;IILandroid/graphics/Rect;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

void android::view::Gravity::applyDisplay(int32_t arg0, const ::android::graphics::Rect& arg1, const ::android::graphics::Rect& arg2){
    if (!::android::view::Gravity::_class) ::android::view::Gravity::_class = java::fetch_class("android/view/Gravity");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "applyDisplay", "(ILandroid/graphics/Rect;Landroid/graphics/Rect;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool android::view::Gravity::isVertical(int32_t arg0){
    if (!::android::view::Gravity::_class) ::android::view::Gravity::_class = java::fetch_class("android/view/Gravity");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isVertical", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::view::Gravity::isHorizontal(int32_t arg0){
    if (!::android::view::Gravity::_class) ::android::view::Gravity::_class = java::fetch_class("android/view/Gravity");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isHorizontal", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t android::view::Gravity::getAbsoluteGravity(int32_t arg0, int32_t arg1){
    if (!::android::view::Gravity::_class) ::android::view::Gravity::_class = java::fetch_class("android/view/Gravity");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAbsoluteGravity", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

void android::view::ViewTreeObserver::addOnGlobalFocusChangeListener(const ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener& arg0) const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnGlobalFocusChangeListener", "(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewTreeObserver::removeOnGlobalFocusChangeListener(const ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener& arg0) const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnGlobalFocusChangeListener", "(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewTreeObserver::addOnGlobalLayoutListener(const ::android::view::ViewTreeObserver_OnGlobalLayoutListener& arg0) const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnGlobalLayoutListener", "(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewTreeObserver::removeGlobalOnLayoutListener(const ::android::view::ViewTreeObserver_OnGlobalLayoutListener& arg0) const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeGlobalOnLayoutListener", "(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewTreeObserver::addOnPreDrawListener(const ::android::view::ViewTreeObserver_OnPreDrawListener& arg0) const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnPreDrawListener", "(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewTreeObserver::removeOnPreDrawListener(const ::android::view::ViewTreeObserver_OnPreDrawListener& arg0) const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnPreDrawListener", "(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewTreeObserver::addOnScrollChangedListener(const ::android::view::ViewTreeObserver_OnScrollChangedListener& arg0) const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnScrollChangedListener", "(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewTreeObserver::removeOnScrollChangedListener(const ::android::view::ViewTreeObserver_OnScrollChangedListener& arg0) const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnScrollChangedListener", "(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewTreeObserver::addOnTouchModeChangeListener(const ::android::view::ViewTreeObserver_OnTouchModeChangeListener& arg0) const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnTouchModeChangeListener", "(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::ViewTreeObserver::removeOnTouchModeChangeListener(const ::android::view::ViewTreeObserver_OnTouchModeChangeListener& arg0) const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnTouchModeChangeListener", "(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::ViewTreeObserver::isAlive() const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAlive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::ViewTreeObserver::dispatchOnGlobalLayout() const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchOnGlobalLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::view::ViewTreeObserver::dispatchOnPreDraw() const {
    if (!::android::view::ViewTreeObserver::_class) ::android::view::ViewTreeObserver::_class = java::fetch_class("android/view/ViewTreeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchOnPreDraw", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::ViewManager::addView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::view::ViewManager::_class) ::android::view::ViewManager::_class = java::fetch_class("android/view/ViewManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewManager::updateViewLayout(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::view::ViewManager::_class) ::android::view::ViewManager::_class = java::fetch_class("android/view/ViewManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateViewLayout", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::ViewManager::removeView(const ::android::view::View& arg0) const {
    if (!::android::view::ViewManager::_class) ::android::view::ViewManager::_class = java::fetch_class("android/view/ViewManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewDebug::ViewDebug() : ::java::lang::Object((jobject)0) {
    if (!::android::view::ViewDebug::_class) ::android::view::ViewDebug::_class = java::fetch_class("android/view/ViewDebug");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::view::ViewDebug::trace(const ::android::view::View& arg0, const ::android::view::ViewDebug_RecyclerTraceType& arg1, const std::vector< int32_t>& arg2){
    if (!::android::view::ViewDebug::_class) ::android::view::ViewDebug::_class = java::fetch_class("android/view/ViewDebug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "trace", "(Landroid/view/View;Landroid/view/ViewDebug$RecyclerTraceType;[I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::view::ViewDebug::startRecyclerTracing(const ::java::lang::String& arg0, const ::android::view::View& arg1){
    if (!::android::view::ViewDebug::_class) ::android::view::ViewDebug::_class = java::fetch_class("android/view/ViewDebug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startRecyclerTracing", "(Ljava/lang/String;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::view::ViewDebug::stopRecyclerTracing(){
    if (!::android::view::ViewDebug::_class) ::android::view::ViewDebug::_class = java::fetch_class("android/view/ViewDebug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stopRecyclerTracing", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::view::ViewDebug::trace(const ::android::view::View& arg0, const ::android::view::ViewDebug_HierarchyTraceType& arg1){
    if (!::android::view::ViewDebug::_class) ::android::view::ViewDebug::_class = java::fetch_class("android/view/ViewDebug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "trace", "(Landroid/view/View;Landroid/view/ViewDebug$HierarchyTraceType;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::view::ViewDebug::startHierarchyTracing(const ::java::lang::String& arg0, const ::android::view::View& arg1){
    if (!::android::view::ViewDebug::_class) ::android::view::ViewDebug::_class = java::fetch_class("android/view/ViewDebug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startHierarchyTracing", "(Ljava/lang/String;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::view::ViewDebug::stopHierarchyTracing(){
    if (!::android::view::ViewDebug::_class) ::android::view::ViewDebug::_class = java::fetch_class("android/view/ViewDebug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stopHierarchyTracing", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::view::ViewDebug::dumpCapturedView(const ::java::lang::String& arg0, const ::java::lang::Object& arg1){
    if (!::android::view::ViewDebug::_class) ::android::view::ViewDebug::_class = java::fetch_class("android/view/ViewDebug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpCapturedView", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::view::View_OnLongClickListener::onLongClick(const ::android::view::View& arg0) const {
    if (!::android::view::View_OnLongClickListener::_class) ::android::view::View_OnLongClickListener::_class = java::fetch_class("android/view/View$OnLongClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLongClick", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::KeyCharacterMap_KeyData::KeyCharacterMap_KeyData() : ::java::lang::Object((jobject)0) {
    if (!::android::view::KeyCharacterMap_KeyData::_class) ::android::view::KeyCharacterMap_KeyData::_class = java::fetch_class("android/view/KeyCharacterMap$KeyData");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewGroup_LayoutParams::ViewGroup_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::view::ViewGroup_LayoutParams::_class) ::android::view::ViewGroup_LayoutParams::_class = java::fetch_class("android/view/ViewGroup$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewGroup_LayoutParams::ViewGroup_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::view::ViewGroup_LayoutParams::_class) ::android::view::ViewGroup_LayoutParams::_class = java::fetch_class("android/view/ViewGroup$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::view::ViewGroup_MarginLayoutParams::_class) ::android::view::ViewGroup_MarginLayoutParams::_class = java::fetch_class("android/view/ViewGroup$MarginLayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::view::ViewGroup_MarginLayoutParams::_class) ::android::view::ViewGroup_MarginLayoutParams::_class = java::fetch_class("android/view/ViewGroup$MarginLayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ViewGroup_MarginLayoutParams::ViewGroup_MarginLayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::view::ViewGroup_MarginLayoutParams::_class) ::android::view::ViewGroup_MarginLayoutParams::_class = java::fetch_class("android/view/ViewGroup$MarginLayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::view::ViewGroup_MarginLayoutParams::setMargins(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::ViewGroup_MarginLayoutParams::_class) ::android::view::ViewGroup_MarginLayoutParams::_class = java::fetch_class("android/view/ViewGroup$MarginLayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMargins", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ContextThemeWrapper::ContextThemeWrapper() : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::view::ContextThemeWrapper::_class) ::android::view::ContextThemeWrapper::_class = java::fetch_class("android/view/ContextThemeWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::ContextThemeWrapper::ContextThemeWrapper(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::view::ContextThemeWrapper::_class) ::android::view::ContextThemeWrapper::_class = java::fetch_class("android/view/ContextThemeWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::view::ContextThemeWrapper::setTheme(int32_t arg0) const {
    if (!::android::view::ContextThemeWrapper::_class) ::android::view::ContextThemeWrapper::_class = java::fetch_class("android/view/ContextThemeWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTheme", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::res::Resources_Theme android::view::ContextThemeWrapper::getTheme() const {
    if (!::android::view::ContextThemeWrapper::_class) ::android::view::ContextThemeWrapper::_class = java::fetch_class("android/view/ContextThemeWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTheme", "()Landroid/content/res/Resources$Theme;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::Resources_Theme _ret(ret);
    return _ret;
}

::java::lang::Object android::view::ContextThemeWrapper::getSystemService(const ::java::lang::String& arg0) const {
    if (!::android::view::ContextThemeWrapper::_class) ::android::view::ContextThemeWrapper::_class = java::fetch_class("android/view/ContextThemeWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::view::SubMenu android::view::SubMenu::setHeaderTitle(int32_t arg0) const {
    if (!::android::view::SubMenu::_class) ::android::view::SubMenu::_class = java::fetch_class("android/view/SubMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeaderTitle", "(I)Landroid/view/SubMenu;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::SubMenu _ret(ret);
    return _ret;
}

::android::view::SubMenu android::view::SubMenu::setHeaderTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::SubMenu::_class) ::android::view::SubMenu::_class = java::fetch_class("android/view/SubMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeaderTitle", "(Ljava/lang/CharSequence;)Landroid/view/SubMenu;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::SubMenu _ret(ret);
    return _ret;
}

::android::view::SubMenu android::view::SubMenu::setHeaderIcon(int32_t arg0) const {
    if (!::android::view::SubMenu::_class) ::android::view::SubMenu::_class = java::fetch_class("android/view/SubMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeaderIcon", "(I)Landroid/view/SubMenu;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::SubMenu _ret(ret);
    return _ret;
}

::android::view::SubMenu android::view::SubMenu::setHeaderIcon(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::view::SubMenu::_class) ::android::view::SubMenu::_class = java::fetch_class("android/view/SubMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeaderIcon", "(Landroid/graphics/drawable/Drawable;)Landroid/view/SubMenu;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::SubMenu _ret(ret);
    return _ret;
}

::android::view::SubMenu android::view::SubMenu::setHeaderView(const ::android::view::View& arg0) const {
    if (!::android::view::SubMenu::_class) ::android::view::SubMenu::_class = java::fetch_class("android/view/SubMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeaderView", "(Landroid/view/View;)Landroid/view/SubMenu;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::SubMenu _ret(ret);
    return _ret;
}

void android::view::SubMenu::clearHeader() const {
    if (!::android::view::SubMenu::_class) ::android::view::SubMenu::_class = java::fetch_class("android/view/SubMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearHeader", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::SubMenu android::view::SubMenu::setIcon(int32_t arg0) const {
    if (!::android::view::SubMenu::_class) ::android::view::SubMenu::_class = java::fetch_class("android/view/SubMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(I)Landroid/view/SubMenu;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::SubMenu _ret(ret);
    return _ret;
}

::android::view::SubMenu android::view::SubMenu::setIcon(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::view::SubMenu::_class) ::android::view::SubMenu::_class = java::fetch_class("android/view/SubMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(Landroid/graphics/drawable/Drawable;)Landroid/view/SubMenu;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::SubMenu _ret(ret);
    return _ret;
}

::android::view::MenuItem android::view::SubMenu::getItem() const {
    if (!::android::view::SubMenu::_class) ::android::view::SubMenu::_class = java::fetch_class("android/view/SubMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItem", "()Landroid/view/MenuItem;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

int32_t android::view::ViewDebug_FlagToString::mask() const {
    if (!::android::view::ViewDebug_FlagToString::_class) ::android::view::ViewDebug_FlagToString::_class = java::fetch_class("android/view/ViewDebug$FlagToString");
    static jmethodID mid = java::jni->GetMethodID(_class, "mask", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::ViewDebug_FlagToString::equals() const {
    if (!::android::view::ViewDebug_FlagToString::_class) ::android::view::ViewDebug_FlagToString::_class = java::fetch_class("android/view/ViewDebug$FlagToString");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::view::ViewDebug_FlagToString::name() const {
    if (!::android::view::ViewDebug_FlagToString::_class) ::android::view::ViewDebug_FlagToString::_class = java::fetch_class("android/view/ViewDebug$FlagToString");
    static jmethodID mid = java::jni->GetMethodID(_class, "name", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::view::ViewDebug_FlagToString::outputIf() const {
    if (!::android::view::ViewDebug_FlagToString::_class) ::android::view::ViewDebug_FlagToString::_class = java::fetch_class("android/view/ViewDebug$FlagToString");
    static jmethodID mid = java::jni->GetMethodID(_class, "outputIf", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::ViewTreeObserver_OnGlobalLayoutListener::onGlobalLayout() const {
    if (!::android::view::ViewTreeObserver_OnGlobalLayoutListener::_class) ::android::view::ViewTreeObserver_OnGlobalLayoutListener::_class = java::fetch_class("android/view/ViewTreeObserver$OnGlobalLayoutListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGlobalLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

