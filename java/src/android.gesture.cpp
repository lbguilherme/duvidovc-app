#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.gesture.Gesture.hpp"
#include "android.gesture.GestureLibraries.hpp"
#include "android.gesture.GestureLibrary.hpp"
#include "android.gesture.GestureOverlayView.hpp"
#include "android.gesture.GesturePoint.hpp"
#include "android.gesture.GestureStore.hpp"
#include "android.gesture.GestureStroke.hpp"
#include "android.gesture.GestureUtils.hpp"
#include "android.gesture.OrientedBoundingBox.hpp"
#include "android.gesture.Prediction.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.Canvas.hpp"
#include "android.graphics.Path.hpp"
#include "android.graphics.RectF.hpp"
#include "android.os.Parcel.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.view.MotionEvent.hpp"
#include "java.io.File.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.Set.hpp"

jclass android::gesture::GestureOverlayView_OnGesturePerformedListener::_class = nullptr;
jclass android::gesture::GestureOverlayView::_class = nullptr;
jclass android::gesture::Gesture::_class = nullptr;
jclass android::gesture::OrientedBoundingBox::_class = nullptr;
jclass android::gesture::GesturePoint::_class = nullptr;
jclass android::gesture::GestureOverlayView_OnGesturingListener::_class = nullptr;
jclass android::gesture::GestureUtils::_class = nullptr;
jclass android::gesture::Prediction::_class = nullptr;
jclass android::gesture::GestureStore::_class = nullptr;
jclass android::gesture::GestureOverlayView_OnGestureListener::_class = nullptr;
jclass android::gesture::GestureLibrary::_class = nullptr;
jclass android::gesture::GestureLibraries::_class = nullptr;
jclass android::gesture::GestureStroke::_class = nullptr;

void android::gesture::GestureOverlayView_OnGesturePerformedListener::onGesturePerformed(const ::android::gesture::GestureOverlayView& arg0, const ::android::gesture::Gesture& arg1) const {
    if (!::android::gesture::GestureOverlayView_OnGesturePerformedListener::_class) ::android::gesture::GestureOverlayView_OnGesturePerformedListener::_class = java::fetch_class("android/gesture/GestureOverlayView$OnGesturePerformedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGesturePerformed", "(Landroid/gesture/GestureOverlayView;Landroid/gesture/Gesture;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::gesture::GestureOverlayView::GestureOverlayView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::gesture::GestureOverlayView::GestureOverlayView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::gesture::GestureOverlayView::GestureOverlayView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::util::ArrayList android::gesture::GestureOverlayView::getCurrentStroke() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentStroke", "()Ljava/util/ArrayList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

int32_t android::gesture::GestureOverlayView::getOrientation() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrientation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::gesture::GestureOverlayView::setOrientation(int32_t arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrientation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureOverlayView::setGestureColor(int32_t arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGestureColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureOverlayView::setUncertainGestureColor(int32_t arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUncertainGestureColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::gesture::GestureOverlayView::getUncertainGestureColor() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUncertainGestureColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::gesture::GestureOverlayView::getGestureColor() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGestureColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::gesture::GestureOverlayView::getGestureStrokeWidth() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGestureStrokeWidth", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::gesture::GestureOverlayView::setGestureStrokeWidth(float arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGestureStrokeWidth", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::gesture::GestureOverlayView::getGestureStrokeType() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGestureStrokeType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::gesture::GestureOverlayView::setGestureStrokeType(int32_t arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGestureStrokeType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::gesture::GestureOverlayView::getGestureStrokeLengthThreshold() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGestureStrokeLengthThreshold", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::gesture::GestureOverlayView::setGestureStrokeLengthThreshold(float arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGestureStrokeLengthThreshold", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::gesture::GestureOverlayView::getGestureStrokeSquarenessTreshold() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGestureStrokeSquarenessTreshold", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::gesture::GestureOverlayView::setGestureStrokeSquarenessTreshold(float arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGestureStrokeSquarenessTreshold", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::gesture::GestureOverlayView::getGestureStrokeAngleThreshold() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGestureStrokeAngleThreshold", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::gesture::GestureOverlayView::setGestureStrokeAngleThreshold(float arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGestureStrokeAngleThreshold", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::gesture::GestureOverlayView::isEventsInterceptionEnabled() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEventsInterceptionEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::gesture::GestureOverlayView::setEventsInterceptionEnabled(bool arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEventsInterceptionEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::gesture::GestureOverlayView::isFadeEnabled() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFadeEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::gesture::GestureOverlayView::setFadeEnabled(bool arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFadeEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::gesture::Gesture android::gesture::GestureOverlayView::getGesture() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGesture", "()Landroid/gesture/Gesture;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::gesture::Gesture _ret(ret);
    return _ret;
}

void android::gesture::GestureOverlayView::setGesture(const ::android::gesture::Gesture& arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGesture", "(Landroid/gesture/Gesture;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Path android::gesture::GestureOverlayView::getGesturePath() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGesturePath", "()Landroid/graphics/Path;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Path _ret(ret);
    return _ret;
}

::android::graphics::Path android::gesture::GestureOverlayView::getGesturePath(const ::android::graphics::Path& arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGesturePath", "(Landroid/graphics/Path;)Landroid/graphics/Path;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Path _ret(ret);
    return _ret;
}

bool android::gesture::GestureOverlayView::isGestureVisible() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGestureVisible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::gesture::GestureOverlayView::setGestureVisible(bool arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGestureVisible", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::gesture::GestureOverlayView::getFadeOffset() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFadeOffset", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::gesture::GestureOverlayView::setFadeOffset(int64_t arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFadeOffset", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureOverlayView::addOnGestureListener(const ::android::gesture::GestureOverlayView_OnGestureListener& arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnGestureListener", "(Landroid/gesture/GestureOverlayView$OnGestureListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureOverlayView::removeOnGestureListener(const ::android::gesture::GestureOverlayView_OnGestureListener& arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnGestureListener", "(Landroid/gesture/GestureOverlayView$OnGestureListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureOverlayView::removeAllOnGestureListeners() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllOnGestureListeners", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::gesture::GestureOverlayView::addOnGesturePerformedListener(const ::android::gesture::GestureOverlayView_OnGesturePerformedListener& arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnGesturePerformedListener", "(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureOverlayView::removeOnGesturePerformedListener(const ::android::gesture::GestureOverlayView_OnGesturePerformedListener& arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnGesturePerformedListener", "(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureOverlayView::removeAllOnGesturePerformedListeners() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllOnGesturePerformedListeners", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::gesture::GestureOverlayView::addOnGesturingListener(const ::android::gesture::GestureOverlayView_OnGesturingListener& arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnGesturingListener", "(Landroid/gesture/GestureOverlayView$OnGesturingListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureOverlayView::removeOnGesturingListener(const ::android::gesture::GestureOverlayView_OnGesturingListener& arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnGesturingListener", "(Landroid/gesture/GestureOverlayView$OnGesturingListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureOverlayView::removeAllOnGesturingListeners() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllOnGesturingListeners", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::gesture::GestureOverlayView::isGesturing() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGesturing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::gesture::GestureOverlayView::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureOverlayView::clear(bool arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureOverlayView::cancelClearAnimation() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelClearAnimation", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::gesture::GestureOverlayView::cancelGesture() const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelGesture", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::gesture::GestureOverlayView::dispatchTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::gesture::GestureOverlayView::_class) ::android::gesture::GestureOverlayView::_class = java::fetch_class("android/gesture/GestureOverlayView");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::gesture::Gesture::Gesture() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object android::gesture::Gesture::clone() const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::ArrayList android::gesture::Gesture::getStrokes() const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStrokes", "()Ljava/util/ArrayList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

int32_t android::gesture::Gesture::getStrokesCount() const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStrokesCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::gesture::Gesture::addStroke(const ::android::gesture::GestureStroke& arg0) const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "addStroke", "(Landroid/gesture/GestureStroke;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::gesture::Gesture::getLength() const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

::android::graphics::RectF android::gesture::Gesture::getBoundingBox() const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundingBox", "()Landroid/graphics/RectF;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::RectF _ret(ret);
    return _ret;
}

::android::graphics::Path android::gesture::Gesture::toPath() const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "toPath", "()Landroid/graphics/Path;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Path _ret(ret);
    return _ret;
}

::android::graphics::Path android::gesture::Gesture::toPath(const ::android::graphics::Path& arg0) const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "toPath", "(Landroid/graphics/Path;)Landroid/graphics/Path;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::Path _ret(ret);
    return _ret;
}

::android::graphics::Path android::gesture::Gesture::toPath(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "toPath", "(IIII)Landroid/graphics/Path;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::graphics::Path _ret(ret);
    return _ret;
}

::android::graphics::Path android::gesture::Gesture::toPath(const ::android::graphics::Path& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "toPath", "(Landroid/graphics/Path;IIII)Landroid/graphics/Path;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::graphics::Path _ret(ret);
    return _ret;
}

int64_t android::gesture::Gesture::getID() const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getID", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::graphics::Bitmap android::gesture::Gesture::toBitmap(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "toBitmap", "(IIIII)Landroid/graphics/Bitmap;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::gesture::Gesture::toBitmap(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "toBitmap", "(IIII)Landroid/graphics/Bitmap;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

void android::gesture::Gesture::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::gesture::Gesture::describeContents() const {
    if (!::android::gesture::Gesture::_class) ::android::gesture::Gesture::_class = java::fetch_class("android/gesture/Gesture");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::gesture::GesturePoint::GesturePoint(float arg0, float arg1, int64_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::gesture::GesturePoint::_class) ::android::gesture::GesturePoint::_class = java::fetch_class("android/gesture/GesturePoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFJ)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    int64_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::Object android::gesture::GesturePoint::clone() const {
    if (!::android::gesture::GesturePoint::_class) ::android::gesture::GesturePoint::_class = java::fetch_class("android/gesture/GesturePoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::gesture::GestureOverlayView_OnGesturingListener::onGesturingStarted(const ::android::gesture::GestureOverlayView& arg0) const {
    if (!::android::gesture::GestureOverlayView_OnGesturingListener::_class) ::android::gesture::GestureOverlayView_OnGesturingListener::_class = java::fetch_class("android/gesture/GestureOverlayView$OnGesturingListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGesturingStarted", "(Landroid/gesture/GestureOverlayView;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureOverlayView_OnGesturingListener::onGesturingEnded(const ::android::gesture::GestureOverlayView& arg0) const {
    if (!::android::gesture::GestureOverlayView_OnGesturingListener::_class) ::android::gesture::GestureOverlayView_OnGesturingListener::_class = java::fetch_class("android/gesture/GestureOverlayView$OnGesturingListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGesturingEnded", "(Landroid/gesture/GestureOverlayView;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< float> android::gesture::GestureUtils::spatialSampling(const ::android::gesture::Gesture& arg0, int32_t arg1){
    if (!::android::gesture::GestureUtils::_class) ::android::gesture::GestureUtils::_class = java::fetch_class("android/gesture/GestureUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "spatialSampling", "(Landroid/gesture/Gesture;I)[F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< float> android::gesture::GestureUtils::spatialSampling(const ::android::gesture::Gesture& arg0, int32_t arg1, bool arg2){
    if (!::android::gesture::GestureUtils::_class) ::android::gesture::GestureUtils::_class = java::fetch_class("android/gesture/GestureUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "spatialSampling", "(Landroid/gesture/Gesture;IZ)[F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< float> android::gesture::GestureUtils::temporalSampling(const ::android::gesture::GestureStroke& arg0, int32_t arg1){
    if (!::android::gesture::GestureUtils::_class) ::android::gesture::GestureUtils::_class = java::fetch_class("android/gesture/GestureUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "temporalSampling", "(Landroid/gesture/GestureStroke;I)[F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

::android::gesture::OrientedBoundingBox android::gesture::GestureUtils::computeOrientedBoundingBox(const ::java::util::ArrayList& arg0){
    if (!::android::gesture::GestureUtils::_class) ::android::gesture::GestureUtils::_class = java::fetch_class("android/gesture/GestureUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "computeOrientedBoundingBox", "(Ljava/util/ArrayList;)Landroid/gesture/OrientedBoundingBox;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::gesture::OrientedBoundingBox _ret(ret);
    return _ret;
}

::android::gesture::OrientedBoundingBox android::gesture::GestureUtils::computeOrientedBoundingBox(const std::vector< float>& arg0){
    if (!::android::gesture::GestureUtils::_class) ::android::gesture::GestureUtils::_class = java::fetch_class("android/gesture/GestureUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "computeOrientedBoundingBox", "([F)Landroid/gesture/OrientedBoundingBox;");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::gesture::OrientedBoundingBox _ret(ret);
    return _ret;
}

::java::lang::String android::gesture::Prediction::toString() const {
    if (!::android::gesture::Prediction::_class) ::android::gesture::Prediction::_class = java::fetch_class("android/gesture/Prediction");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::gesture::GestureStore::GestureStore() : ::java::lang::Object((jobject)0) {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::gesture::GestureStore::setOrientationStyle(int32_t arg0) const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrientationStyle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::gesture::GestureStore::getOrientationStyle() const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrientationStyle", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::gesture::GestureStore::setSequenceType(int32_t arg0) const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSequenceType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::gesture::GestureStore::getSequenceType() const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSequenceType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Set android::gesture::GestureStore::getGestureEntries() const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGestureEntries", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::ArrayList android::gesture::GestureStore::recognize(const ::android::gesture::Gesture& arg0) const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "recognize", "(Landroid/gesture/Gesture;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

void android::gesture::GestureStore::addGesture(const ::java::lang::String& arg0, const ::android::gesture::Gesture& arg1) const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "addGesture", "(Ljava/lang/String;Landroid/gesture/Gesture;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::gesture::GestureStore::removeGesture(const ::java::lang::String& arg0, const ::android::gesture::Gesture& arg1) const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeGesture", "(Ljava/lang/String;Landroid/gesture/Gesture;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::gesture::GestureStore::removeEntry(const ::java::lang::String& arg0) const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeEntry", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::ArrayList android::gesture::GestureStore::getGestures(const ::java::lang::String& arg0) const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGestures", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

bool android::gesture::GestureStore::hasChanged() const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasChanged", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::gesture::GestureStore::save(const ::java::io::OutputStream& arg0) const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "save", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureStore::save(const ::java::io::OutputStream& arg0, bool arg1) const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "save", "(Ljava/io/OutputStream;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::gesture::GestureStore::load(const ::java::io::InputStream& arg0) const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::gesture::GestureStore::load(const ::java::io::InputStream& arg0, bool arg1) const {
    if (!::android::gesture::GestureStore::_class) ::android::gesture::GestureStore::_class = java::fetch_class("android/gesture/GestureStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Ljava/io/InputStream;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::gesture::GestureOverlayView_OnGestureListener::onGestureStarted(const ::android::gesture::GestureOverlayView& arg0, const ::android::view::MotionEvent& arg1) const {
    if (!::android::gesture::GestureOverlayView_OnGestureListener::_class) ::android::gesture::GestureOverlayView_OnGestureListener::_class = java::fetch_class("android/gesture/GestureOverlayView$OnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGestureStarted", "(Landroid/gesture/GestureOverlayView;Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::gesture::GestureOverlayView_OnGestureListener::onGesture(const ::android::gesture::GestureOverlayView& arg0, const ::android::view::MotionEvent& arg1) const {
    if (!::android::gesture::GestureOverlayView_OnGestureListener::_class) ::android::gesture::GestureOverlayView_OnGestureListener::_class = java::fetch_class("android/gesture/GestureOverlayView$OnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGesture", "(Landroid/gesture/GestureOverlayView;Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::gesture::GestureOverlayView_OnGestureListener::onGestureEnded(const ::android::gesture::GestureOverlayView& arg0, const ::android::view::MotionEvent& arg1) const {
    if (!::android::gesture::GestureOverlayView_OnGestureListener::_class) ::android::gesture::GestureOverlayView_OnGestureListener::_class = java::fetch_class("android/gesture/GestureOverlayView$OnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGestureEnded", "(Landroid/gesture/GestureOverlayView;Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::gesture::GestureOverlayView_OnGestureListener::onGestureCancelled(const ::android::gesture::GestureOverlayView& arg0, const ::android::view::MotionEvent& arg1) const {
    if (!::android::gesture::GestureOverlayView_OnGestureListener::_class) ::android::gesture::GestureOverlayView_OnGestureListener::_class = java::fetch_class("android/gesture/GestureOverlayView$OnGestureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGestureCancelled", "(Landroid/gesture/GestureOverlayView;Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::gesture::GestureLibrary::save() const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "save", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::gesture::GestureLibrary::load() const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::gesture::GestureLibrary::isReadOnly() const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReadOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::gesture::GestureLibrary::setOrientationStyle(int32_t arg0) const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrientationStyle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::gesture::GestureLibrary::getOrientationStyle() const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrientationStyle", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::gesture::GestureLibrary::setSequenceType(int32_t arg0) const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSequenceType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::gesture::GestureLibrary::getSequenceType() const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSequenceType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Set android::gesture::GestureLibrary::getGestureEntries() const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGestureEntries", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::ArrayList android::gesture::GestureLibrary::recognize(const ::android::gesture::Gesture& arg0) const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "recognize", "(Landroid/gesture/Gesture;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

void android::gesture::GestureLibrary::addGesture(const ::java::lang::String& arg0, const ::android::gesture::Gesture& arg1) const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "addGesture", "(Ljava/lang/String;Landroid/gesture/Gesture;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::gesture::GestureLibrary::removeGesture(const ::java::lang::String& arg0, const ::android::gesture::Gesture& arg1) const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeGesture", "(Ljava/lang/String;Landroid/gesture/Gesture;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::gesture::GestureLibrary::removeEntry(const ::java::lang::String& arg0) const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeEntry", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::ArrayList android::gesture::GestureLibrary::getGestures(const ::java::lang::String& arg0) const {
    if (!::android::gesture::GestureLibrary::_class) ::android::gesture::GestureLibrary::_class = java::fetch_class("android/gesture/GestureLibrary");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGestures", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::android::gesture::GestureLibrary android::gesture::GestureLibraries::fromFile(const ::java::lang::String& arg0){
    if (!::android::gesture::GestureLibraries::_class) ::android::gesture::GestureLibraries::_class = java::fetch_class("android/gesture/GestureLibraries");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromFile", "(Ljava/lang/String;)Landroid/gesture/GestureLibrary;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::gesture::GestureLibrary _ret(ret);
    return _ret;
}

::android::gesture::GestureLibrary android::gesture::GestureLibraries::fromFile(const ::java::io::File& arg0){
    if (!::android::gesture::GestureLibraries::_class) ::android::gesture::GestureLibraries::_class = java::fetch_class("android/gesture/GestureLibraries");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromFile", "(Ljava/io/File;)Landroid/gesture/GestureLibrary;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::gesture::GestureLibrary _ret(ret);
    return _ret;
}

::android::gesture::GestureLibrary android::gesture::GestureLibraries::fromPrivateFile(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::android::gesture::GestureLibraries::_class) ::android::gesture::GestureLibraries::_class = java::fetch_class("android/gesture/GestureLibraries");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromPrivateFile", "(Landroid/content/Context;Ljava/lang/String;)Landroid/gesture/GestureLibrary;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::gesture::GestureLibrary _ret(ret);
    return _ret;
}

::android::gesture::GestureLibrary android::gesture::GestureLibraries::fromRawResource(const ::android::content::Context& arg0, int32_t arg1){
    if (!::android::gesture::GestureLibraries::_class) ::android::gesture::GestureLibraries::_class = java::fetch_class("android/gesture/GestureLibraries");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromRawResource", "(Landroid/content/Context;I)Landroid/gesture/GestureLibrary;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::gesture::GestureLibrary _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::gesture::GestureStroke::GestureStroke(const ::java::util::ArrayList& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::gesture::GestureStroke::_class) ::android::gesture::GestureStroke::_class = java::fetch_class("android/gesture/GestureStroke");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/ArrayList;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object android::gesture::GestureStroke::clone() const {
    if (!::android::gesture::GestureStroke::_class) ::android::gesture::GestureStroke::_class = java::fetch_class("android/gesture/GestureStroke");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::graphics::Path android::gesture::GestureStroke::getPath() const {
    if (!::android::gesture::GestureStroke::_class) ::android::gesture::GestureStroke::_class = java::fetch_class("android/gesture/GestureStroke");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPath", "()Landroid/graphics/Path;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Path _ret(ret);
    return _ret;
}

::android::graphics::Path android::gesture::GestureStroke::toPath(float arg0, float arg1, int32_t arg2) const {
    if (!::android::gesture::GestureStroke::_class) ::android::gesture::GestureStroke::_class = java::fetch_class("android/gesture/GestureStroke");
    static jmethodID mid = java::jni->GetMethodID(_class, "toPath", "(FFI)Landroid/graphics/Path;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::graphics::Path _ret(ret);
    return _ret;
}

void android::gesture::GestureStroke::clearPath() const {
    if (!::android::gesture::GestureStroke::_class) ::android::gesture::GestureStroke::_class = java::fetch_class("android/gesture/GestureStroke");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearPath", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::gesture::OrientedBoundingBox android::gesture::GestureStroke::computeOrientedBoundingBox() const {
    if (!::android::gesture::GestureStroke::_class) ::android::gesture::GestureStroke::_class = java::fetch_class("android/gesture/GestureStroke");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeOrientedBoundingBox", "()Landroid/gesture/OrientedBoundingBox;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::gesture::OrientedBoundingBox _ret(ret);
    return _ret;
}

