#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.graphics.Matrix.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.view.View.hpp"
#include "android.view.animation.AccelerateDecelerateInterpolator.hpp"
#include "android.view.animation.AccelerateInterpolator.hpp"
#include "android.view.animation.AlphaAnimation.hpp"
#include "android.view.animation.Animation.hpp"
#include "android.view.animation.AnimationSet.hpp"
#include "android.view.animation.AnimationUtils.hpp"
#include "android.view.animation.AnticipateInterpolator.hpp"
#include "android.view.animation.AnticipateOvershootInterpolator.hpp"
#include "android.view.animation.BounceInterpolator.hpp"
#include "android.view.animation.CycleInterpolator.hpp"
#include "android.view.animation.DecelerateInterpolator.hpp"
#include "android.view.animation.GridLayoutAnimationController.hpp"
#include "android.view.animation.Interpolator.hpp"
#include "android.view.animation.LayoutAnimationController.hpp"
#include "android.view.animation.LinearInterpolator.hpp"
#include "android.view.animation.OvershootInterpolator.hpp"
#include "android.view.animation.RotateAnimation.hpp"
#include "android.view.animation.ScaleAnimation.hpp"
#include "android.view.animation.Transformation.hpp"
#include "android.view.animation.TranslateAnimation.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass android::view::animation::GridLayoutAnimationController::_class = nullptr;
jclass android::view::animation::LinearInterpolator::_class = nullptr;
jclass android::view::animation::RotateAnimation::_class = nullptr;
jclass android::view::animation::AnticipateInterpolator::_class = nullptr;
jclass android::view::animation::LayoutAnimationController_AnimationParameters::_class = nullptr;
jclass android::view::animation::AccelerateDecelerateInterpolator::_class = nullptr;
jclass android::view::animation::Transformation::_class = nullptr;
jclass android::view::animation::Animation_AnimationListener::_class = nullptr;
jclass android::view::animation::Animation_Description::_class = nullptr;
jclass android::view::animation::AnimationUtils::_class = nullptr;
jclass android::view::animation::DecelerateInterpolator::_class = nullptr;
jclass android::view::animation::OvershootInterpolator::_class = nullptr;
jclass android::view::animation::AlphaAnimation::_class = nullptr;
jclass android::view::animation::ScaleAnimation::_class = nullptr;
jclass android::view::animation::GridLayoutAnimationController_AnimationParameters::_class = nullptr;
jclass android::view::animation::TranslateAnimation::_class = nullptr;
jclass android::view::animation::BounceInterpolator::_class = nullptr;
jclass android::view::animation::LayoutAnimationController::_class = nullptr;
jclass android::view::animation::AnimationSet::_class = nullptr;
jclass android::view::animation::CycleInterpolator::_class = nullptr;
jclass android::view::animation::AccelerateInterpolator::_class = nullptr;
jclass android::view::animation::AnticipateOvershootInterpolator::_class = nullptr;
jclass android::view::animation::Animation::_class = nullptr;
jclass android::view::animation::Interpolator::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::GridLayoutAnimationController::GridLayoutAnimationController(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::animation::LayoutAnimationController((jobject)0) {
    if (!::android::view::animation::GridLayoutAnimationController::_class) ::android::view::animation::GridLayoutAnimationController::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::GridLayoutAnimationController::GridLayoutAnimationController(const ::android::view::animation::Animation& arg0) : ::java::lang::Object((jobject)0), ::android::view::animation::LayoutAnimationController((jobject)0) {
    if (!::android::view::animation::GridLayoutAnimationController::_class) ::android::view::animation::GridLayoutAnimationController::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/animation/Animation;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::GridLayoutAnimationController::GridLayoutAnimationController(const ::android::view::animation::Animation& arg0, float arg1, float arg2) : ::java::lang::Object((jobject)0), ::android::view::animation::LayoutAnimationController((jobject)0) {
    if (!::android::view::animation::GridLayoutAnimationController::_class) ::android::view::animation::GridLayoutAnimationController::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/animation/Animation;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

float android::view::animation::GridLayoutAnimationController::getColumnDelay() const {
    if (!::android::view::animation::GridLayoutAnimationController::_class) ::android::view::animation::GridLayoutAnimationController::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnDelay", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::animation::GridLayoutAnimationController::setColumnDelay(float arg0) const {
    if (!::android::view::animation::GridLayoutAnimationController::_class) ::android::view::animation::GridLayoutAnimationController::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnDelay", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::animation::GridLayoutAnimationController::getRowDelay() const {
    if (!::android::view::animation::GridLayoutAnimationController::_class) ::android::view::animation::GridLayoutAnimationController::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRowDelay", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::animation::GridLayoutAnimationController::setRowDelay(float arg0) const {
    if (!::android::view::animation::GridLayoutAnimationController::_class) ::android::view::animation::GridLayoutAnimationController::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRowDelay", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::animation::GridLayoutAnimationController::getDirection() const {
    if (!::android::view::animation::GridLayoutAnimationController::_class) ::android::view::animation::GridLayoutAnimationController::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDirection", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::animation::GridLayoutAnimationController::setDirection(int32_t arg0) const {
    if (!::android::view::animation::GridLayoutAnimationController::_class) ::android::view::animation::GridLayoutAnimationController::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDirection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::animation::GridLayoutAnimationController::getDirectionPriority() const {
    if (!::android::view::animation::GridLayoutAnimationController::_class) ::android::view::animation::GridLayoutAnimationController::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDirectionPriority", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::animation::GridLayoutAnimationController::setDirectionPriority(int32_t arg0) const {
    if (!::android::view::animation::GridLayoutAnimationController::_class) ::android::view::animation::GridLayoutAnimationController::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDirectionPriority", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::animation::GridLayoutAnimationController::willOverlap() const {
    if (!::android::view::animation::GridLayoutAnimationController::_class) ::android::view::animation::GridLayoutAnimationController::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "willOverlap", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::LinearInterpolator::LinearInterpolator() : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::LinearInterpolator::_class) ::android::view::animation::LinearInterpolator::_class = java::fetch_class("android/view/animation/LinearInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::LinearInterpolator::LinearInterpolator(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::LinearInterpolator::_class) ::android::view::animation::LinearInterpolator::_class = java::fetch_class("android/view/animation/LinearInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

float android::view::animation::LinearInterpolator::getInterpolation(float arg0) const {
    if (!::android::view::animation::LinearInterpolator::_class) ::android::view::animation::LinearInterpolator::_class = java::fetch_class("android/view/animation/LinearInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::RotateAnimation::RotateAnimation(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::RotateAnimation::_class) ::android::view::animation::RotateAnimation::_class = java::fetch_class("android/view/animation/RotateAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::RotateAnimation::RotateAnimation(float arg0, float arg1) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::RotateAnimation::_class) ::android::view::animation::RotateAnimation::_class = java::fetch_class("android/view/animation/RotateAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::RotateAnimation::RotateAnimation(float arg0, float arg1, float arg2, float arg3) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::RotateAnimation::_class) ::android::view::animation::RotateAnimation::_class = java::fetch_class("android/view/animation/RotateAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::RotateAnimation::RotateAnimation(float arg0, float arg1, int32_t arg2, float arg3, int32_t arg4, float arg5) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::RotateAnimation::_class) ::android::view::animation::RotateAnimation::_class = java::fetch_class("android/view/animation/RotateAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFIFIF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    int32_t _arg4 = arg4;
    float _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

void android::view::animation::RotateAnimation::initialize(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::animation::RotateAnimation::_class) ::android::view::animation::RotateAnimation::_class = java::fetch_class("android/view/animation/RotateAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AnticipateInterpolator::AnticipateInterpolator() : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::AnticipateInterpolator::_class) ::android::view::animation::AnticipateInterpolator::_class = java::fetch_class("android/view/animation/AnticipateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AnticipateInterpolator::AnticipateInterpolator(float arg0) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::AnticipateInterpolator::_class) ::android::view::animation::AnticipateInterpolator::_class = java::fetch_class("android/view/animation/AnticipateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(F)V");
    float _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AnticipateInterpolator::AnticipateInterpolator(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::AnticipateInterpolator::_class) ::android::view::animation::AnticipateInterpolator::_class = java::fetch_class("android/view/animation/AnticipateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

float android::view::animation::AnticipateInterpolator::getInterpolation(float arg0) const {
    if (!::android::view::animation::AnticipateInterpolator::_class) ::android::view::animation::AnticipateInterpolator::_class = java::fetch_class("android/view/animation/AnticipateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::LayoutAnimationController_AnimationParameters::LayoutAnimationController_AnimationParameters() : ::java::lang::Object((jobject)0) {
    if (!::android::view::animation::LayoutAnimationController_AnimationParameters::_class) ::android::view::animation::LayoutAnimationController_AnimationParameters::_class = java::fetch_class("android/view/animation/LayoutAnimationController$AnimationParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AccelerateDecelerateInterpolator::AccelerateDecelerateInterpolator() : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::AccelerateDecelerateInterpolator::_class) ::android::view::animation::AccelerateDecelerateInterpolator::_class = java::fetch_class("android/view/animation/AccelerateDecelerateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AccelerateDecelerateInterpolator::AccelerateDecelerateInterpolator(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::AccelerateDecelerateInterpolator::_class) ::android::view::animation::AccelerateDecelerateInterpolator::_class = java::fetch_class("android/view/animation/AccelerateDecelerateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

float android::view::animation::AccelerateDecelerateInterpolator::getInterpolation(float arg0) const {
    if (!::android::view::animation::AccelerateDecelerateInterpolator::_class) ::android::view::animation::AccelerateDecelerateInterpolator::_class = java::fetch_class("android/view/animation/AccelerateDecelerateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::Transformation::Transformation() : ::java::lang::Object((jobject)0) {
    if (!::android::view::animation::Transformation::_class) ::android::view::animation::Transformation::_class = java::fetch_class("android/view/animation/Transformation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::view::animation::Transformation::clear() const {
    if (!::android::view::animation::Transformation::_class) ::android::view::animation::Transformation::_class = java::fetch_class("android/view/animation/Transformation");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::view::animation::Transformation::getTransformationType() const {
    if (!::android::view::animation::Transformation::_class) ::android::view::animation::Transformation::_class = java::fetch_class("android/view/animation/Transformation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransformationType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::animation::Transformation::setTransformationType(int32_t arg0) const {
    if (!::android::view::animation::Transformation::_class) ::android::view::animation::Transformation::_class = java::fetch_class("android/view/animation/Transformation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransformationType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Transformation::set(const ::android::view::animation::Transformation& arg0) const {
    if (!::android::view::animation::Transformation::_class) ::android::view::animation::Transformation::_class = java::fetch_class("android/view/animation/Transformation");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/view/animation/Transformation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Transformation::compose(const ::android::view::animation::Transformation& arg0) const {
    if (!::android::view::animation::Transformation::_class) ::android::view::animation::Transformation::_class = java::fetch_class("android/view/animation/Transformation");
    static jmethodID mid = java::jni->GetMethodID(_class, "compose", "(Landroid/view/animation/Transformation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Matrix android::view::animation::Transformation::getMatrix() const {
    if (!::android::view::animation::Transformation::_class) ::android::view::animation::Transformation::_class = java::fetch_class("android/view/animation/Transformation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMatrix", "()Landroid/graphics/Matrix;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Matrix _ret(ret);
    return _ret;
}

void android::view::animation::Transformation::setAlpha(float arg0) const {
    if (!::android::view::animation::Transformation::_class) ::android::view::animation::Transformation::_class = java::fetch_class("android/view/animation/Transformation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::view::animation::Transformation::getAlpha() const {
    if (!::android::view::animation::Transformation::_class) ::android::view::animation::Transformation::_class = java::fetch_class("android/view/animation/Transformation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlpha", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

::java::lang::String android::view::animation::Transformation::toString() const {
    if (!::android::view::animation::Transformation::_class) ::android::view::animation::Transformation::_class = java::fetch_class("android/view/animation/Transformation");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::view::animation::Transformation::toShortString() const {
    if (!::android::view::animation::Transformation::_class) ::android::view::animation::Transformation::_class = java::fetch_class("android/view/animation/Transformation");
    static jmethodID mid = java::jni->GetMethodID(_class, "toShortString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::view::animation::Animation_AnimationListener::onAnimationStart(const ::android::view::animation::Animation& arg0) const {
    if (!::android::view::animation::Animation_AnimationListener::_class) ::android::view::animation::Animation_AnimationListener::_class = java::fetch_class("android/view/animation/Animation$AnimationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationStart", "(Landroid/view/animation/Animation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation_AnimationListener::onAnimationEnd(const ::android::view::animation::Animation& arg0) const {
    if (!::android::view::animation::Animation_AnimationListener::_class) ::android::view::animation::Animation_AnimationListener::_class = java::fetch_class("android/view/animation/Animation$AnimationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationEnd", "(Landroid/view/animation/Animation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation_AnimationListener::onAnimationRepeat(const ::android::view::animation::Animation& arg0) const {
    if (!::android::view::animation::Animation_AnimationListener::_class) ::android::view::animation::Animation_AnimationListener::_class = java::fetch_class("android/view/animation/Animation$AnimationListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationRepeat", "(Landroid/view/animation/Animation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AnimationUtils::AnimationUtils() : ::java::lang::Object((jobject)0) {
    if (!::android::view::animation::AnimationUtils::_class) ::android::view::animation::AnimationUtils::_class = java::fetch_class("android/view/animation/AnimationUtils");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t android::view::animation::AnimationUtils::currentAnimationTimeMillis(){
    if (!::android::view::animation::AnimationUtils::_class) ::android::view::animation::AnimationUtils::_class = java::fetch_class("android/view/animation/AnimationUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "currentAnimationTimeMillis", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

::android::view::animation::Animation android::view::animation::AnimationUtils::loadAnimation(const ::android::content::Context& arg0, int32_t arg1){
    if (!::android::view::animation::AnimationUtils::_class) ::android::view::animation::AnimationUtils::_class = java::fetch_class("android/view/animation/AnimationUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadAnimation", "(Landroid/content/Context;I)Landroid/view/animation/Animation;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::animation::Animation _ret(ret);
    return _ret;
}

::android::view::animation::LayoutAnimationController android::view::animation::AnimationUtils::loadLayoutAnimation(const ::android::content::Context& arg0, int32_t arg1){
    if (!::android::view::animation::AnimationUtils::_class) ::android::view::animation::AnimationUtils::_class = java::fetch_class("android/view/animation/AnimationUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadLayoutAnimation", "(Landroid/content/Context;I)Landroid/view/animation/LayoutAnimationController;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::animation::LayoutAnimationController _ret(ret);
    return _ret;
}

::android::view::animation::Animation android::view::animation::AnimationUtils::makeInAnimation(const ::android::content::Context& arg0, bool arg1){
    if (!::android::view::animation::AnimationUtils::_class) ::android::view::animation::AnimationUtils::_class = java::fetch_class("android/view/animation/AnimationUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeInAnimation", "(Landroid/content/Context;Z)Landroid/view/animation/Animation;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::animation::Animation _ret(ret);
    return _ret;
}

::android::view::animation::Animation android::view::animation::AnimationUtils::makeOutAnimation(const ::android::content::Context& arg0, bool arg1){
    if (!::android::view::animation::AnimationUtils::_class) ::android::view::animation::AnimationUtils::_class = java::fetch_class("android/view/animation/AnimationUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeOutAnimation", "(Landroid/content/Context;Z)Landroid/view/animation/Animation;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::animation::Animation _ret(ret);
    return _ret;
}

::android::view::animation::Animation android::view::animation::AnimationUtils::makeInChildBottomAnimation(const ::android::content::Context& arg0){
    if (!::android::view::animation::AnimationUtils::_class) ::android::view::animation::AnimationUtils::_class = java::fetch_class("android/view/animation/AnimationUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeInChildBottomAnimation", "(Landroid/content/Context;)Landroid/view/animation/Animation;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::animation::Animation _ret(ret);
    return _ret;
}

::android::view::animation::Interpolator android::view::animation::AnimationUtils::loadInterpolator(const ::android::content::Context& arg0, int32_t arg1){
    if (!::android::view::animation::AnimationUtils::_class) ::android::view::animation::AnimationUtils::_class = java::fetch_class("android/view/animation/AnimationUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadInterpolator", "(Landroid/content/Context;I)Landroid/view/animation/Interpolator;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::animation::Interpolator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::DecelerateInterpolator::DecelerateInterpolator() : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::DecelerateInterpolator::_class) ::android::view::animation::DecelerateInterpolator::_class = java::fetch_class("android/view/animation/DecelerateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::DecelerateInterpolator::DecelerateInterpolator(float arg0) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::DecelerateInterpolator::_class) ::android::view::animation::DecelerateInterpolator::_class = java::fetch_class("android/view/animation/DecelerateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(F)V");
    float _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::DecelerateInterpolator::DecelerateInterpolator(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::DecelerateInterpolator::_class) ::android::view::animation::DecelerateInterpolator::_class = java::fetch_class("android/view/animation/DecelerateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

float android::view::animation::DecelerateInterpolator::getInterpolation(float arg0) const {
    if (!::android::view::animation::DecelerateInterpolator::_class) ::android::view::animation::DecelerateInterpolator::_class = java::fetch_class("android/view/animation/DecelerateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::OvershootInterpolator::OvershootInterpolator() : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::OvershootInterpolator::_class) ::android::view::animation::OvershootInterpolator::_class = java::fetch_class("android/view/animation/OvershootInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::OvershootInterpolator::OvershootInterpolator(float arg0) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::OvershootInterpolator::_class) ::android::view::animation::OvershootInterpolator::_class = java::fetch_class("android/view/animation/OvershootInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(F)V");
    float _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::OvershootInterpolator::OvershootInterpolator(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::OvershootInterpolator::_class) ::android::view::animation::OvershootInterpolator::_class = java::fetch_class("android/view/animation/OvershootInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

float android::view::animation::OvershootInterpolator::getInterpolation(float arg0) const {
    if (!::android::view::animation::OvershootInterpolator::_class) ::android::view::animation::OvershootInterpolator::_class = java::fetch_class("android/view/animation/OvershootInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AlphaAnimation::AlphaAnimation(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::AlphaAnimation::_class) ::android::view::animation::AlphaAnimation::_class = java::fetch_class("android/view/animation/AlphaAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AlphaAnimation::AlphaAnimation(float arg0, float arg1) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::AlphaAnimation::_class) ::android::view::animation::AlphaAnimation::_class = java::fetch_class("android/view/animation/AlphaAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::view::animation::AlphaAnimation::willChangeTransformationMatrix() const {
    if (!::android::view::animation::AlphaAnimation::_class) ::android::view::animation::AlphaAnimation::_class = java::fetch_class("android/view/animation/AlphaAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "willChangeTransformationMatrix", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::animation::AlphaAnimation::willChangeBounds() const {
    if (!::android::view::animation::AlphaAnimation::_class) ::android::view::animation::AlphaAnimation::_class = java::fetch_class("android/view/animation/AlphaAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "willChangeBounds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::ScaleAnimation::ScaleAnimation(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::ScaleAnimation::_class) ::android::view::animation::ScaleAnimation::_class = java::fetch_class("android/view/animation/ScaleAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::ScaleAnimation::ScaleAnimation(float arg0, float arg1, float arg2, float arg3) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::ScaleAnimation::_class) ::android::view::animation::ScaleAnimation::_class = java::fetch_class("android/view/animation/ScaleAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::ScaleAnimation::ScaleAnimation(float arg0, float arg1, float arg2, float arg3, float arg4, float arg5) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::ScaleAnimation::_class) ::android::view::animation::ScaleAnimation::_class = java::fetch_class("android/view/animation/ScaleAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFFFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    float _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::ScaleAnimation::ScaleAnimation(float arg0, float arg1, float arg2, float arg3, int32_t arg4, float arg5, int32_t arg6, float arg7) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::ScaleAnimation::_class) ::android::view::animation::ScaleAnimation::_class = java::fetch_class("android/view/animation/ScaleAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFFFIFIF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    int32_t _arg4 = arg4;
    float _arg5 = arg5;
    int32_t _arg6 = arg6;
    float _arg7 = arg7;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}
#pragma GCC diagnostic pop

void android::view::animation::ScaleAnimation::initialize(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::animation::ScaleAnimation::_class) ::android::view::animation::ScaleAnimation::_class = java::fetch_class("android/view/animation/ScaleAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::GridLayoutAnimationController_AnimationParameters::GridLayoutAnimationController_AnimationParameters() : ::java::lang::Object((jobject)0), ::android::view::animation::LayoutAnimationController_AnimationParameters((jobject)0) {
    if (!::android::view::animation::GridLayoutAnimationController_AnimationParameters::_class) ::android::view::animation::GridLayoutAnimationController_AnimationParameters::_class = java::fetch_class("android/view/animation/GridLayoutAnimationController$AnimationParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::TranslateAnimation::TranslateAnimation(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::TranslateAnimation::_class) ::android::view::animation::TranslateAnimation::_class = java::fetch_class("android/view/animation/TranslateAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::TranslateAnimation::TranslateAnimation(float arg0, float arg1, float arg2, float arg3) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::TranslateAnimation::_class) ::android::view::animation::TranslateAnimation::_class = java::fetch_class("android/view/animation/TranslateAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FFFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::TranslateAnimation::TranslateAnimation(int32_t arg0, float arg1, int32_t arg2, float arg3, int32_t arg4, float arg5, int32_t arg6, float arg7) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::TranslateAnimation::_class) ::android::view::animation::TranslateAnimation::_class = java::fetch_class("android/view/animation/TranslateAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IFIFIFIF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    int32_t _arg4 = arg4;
    float _arg5 = arg5;
    int32_t _arg6 = arg6;
    float _arg7 = arg7;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}
#pragma GCC diagnostic pop

void android::view::animation::TranslateAnimation::initialize(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::animation::TranslateAnimation::_class) ::android::view::animation::TranslateAnimation::_class = java::fetch_class("android/view/animation/TranslateAnimation");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::BounceInterpolator::BounceInterpolator() : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::BounceInterpolator::_class) ::android::view::animation::BounceInterpolator::_class = java::fetch_class("android/view/animation/BounceInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::BounceInterpolator::BounceInterpolator(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::BounceInterpolator::_class) ::android::view::animation::BounceInterpolator::_class = java::fetch_class("android/view/animation/BounceInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

float android::view::animation::BounceInterpolator::getInterpolation(float arg0) const {
    if (!::android::view::animation::BounceInterpolator::_class) ::android::view::animation::BounceInterpolator::_class = java::fetch_class("android/view/animation/BounceInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::LayoutAnimationController::LayoutAnimationController(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::LayoutAnimationController::LayoutAnimationController(const ::android::view::animation::Animation& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/animation/Animation;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::LayoutAnimationController::LayoutAnimationController(const ::android::view::animation::Animation& arg0, float arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/animation/Animation;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t android::view::animation::LayoutAnimationController::getOrder() const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrder", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::animation::LayoutAnimationController::setOrder(int32_t arg0) const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrder", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::LayoutAnimationController::setAnimation(const ::android::content::Context& arg0, int32_t arg1) const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimation", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::animation::LayoutAnimationController::setAnimation(const ::android::view::animation::Animation& arg0) const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimation", "(Landroid/view/animation/Animation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::animation::Animation android::view::animation::LayoutAnimationController::getAnimation() const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnimation", "()Landroid/view/animation/Animation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::animation::Animation _ret(ret);
    return _ret;
}

void android::view::animation::LayoutAnimationController::setInterpolator(const ::android::content::Context& arg0, int32_t arg1) const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::animation::LayoutAnimationController::setInterpolator(const ::android::view::animation::Interpolator& arg0) const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/view/animation/Interpolator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::animation::Interpolator android::view::animation::LayoutAnimationController::getInterpolator() const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolator", "()Landroid/view/animation/Interpolator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::animation::Interpolator _ret(ret);
    return _ret;
}

float android::view::animation::LayoutAnimationController::getDelay() const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDelay", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::view::animation::LayoutAnimationController::setDelay(float arg0) const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDelay", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::animation::LayoutAnimationController::willOverlap() const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "willOverlap", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::animation::LayoutAnimationController::start() const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::animation::Animation android::view::animation::LayoutAnimationController::getAnimationForView(const ::android::view::View& arg0) const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnimationForView", "(Landroid/view/View;)Landroid/view/animation/Animation;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::animation::Animation _ret(ret);
    return _ret;
}

bool android::view::animation::LayoutAnimationController::isDone() const {
    if (!::android::view::animation::LayoutAnimationController::_class) ::android::view::animation::LayoutAnimationController::_class = java::fetch_class("android/view/animation/LayoutAnimationController");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDone", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AnimationSet::AnimationSet(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AnimationSet::AnimationSet(bool arg0) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::view::animation::AnimationSet::setFillAfter(bool arg0) const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFillAfter", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::AnimationSet::setFillBefore(bool arg0) const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFillBefore", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::AnimationSet::setRepeatMode(int32_t arg0) const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRepeatMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::AnimationSet::setStartOffset(int64_t arg0) const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartOffset", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::AnimationSet::setDuration(int64_t arg0) const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::AnimationSet::addAnimation(const ::android::view::animation::Animation& arg0) const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAnimation", "(Landroid/view/animation/Animation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::AnimationSet::setStartTime(int64_t arg0) const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::view::animation::AnimationSet::getStartTime() const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::view::animation::AnimationSet::restrictDuration(int64_t arg0) const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "restrictDuration", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::view::animation::AnimationSet::getDuration() const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::view::animation::AnimationSet::computeDurationHint() const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeDurationHint", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool android::view::animation::AnimationSet::getTransformation(int64_t arg0, const ::android::view::animation::Transformation& arg1) const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransformation", "(JLandroid/view/animation/Transformation;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::view::animation::AnimationSet::scaleCurrentDuration(float arg0) const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleCurrentDuration", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::AnimationSet::initialize(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::view::animation::AnimationSet::reset() const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::List android::view::animation::AnimationSet::getAnimations() const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnimations", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

bool android::view::animation::AnimationSet::willChangeTransformationMatrix() const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "willChangeTransformationMatrix", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::animation::AnimationSet::willChangeBounds() const {
    if (!::android::view::animation::AnimationSet::_class) ::android::view::animation::AnimationSet::_class = java::fetch_class("android/view/animation/AnimationSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "willChangeBounds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::CycleInterpolator::CycleInterpolator(float arg0) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::CycleInterpolator::_class) ::android::view::animation::CycleInterpolator::_class = java::fetch_class("android/view/animation/CycleInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(F)V");
    float _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::CycleInterpolator::CycleInterpolator(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::CycleInterpolator::_class) ::android::view::animation::CycleInterpolator::_class = java::fetch_class("android/view/animation/CycleInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

float android::view::animation::CycleInterpolator::getInterpolation(float arg0) const {
    if (!::android::view::animation::CycleInterpolator::_class) ::android::view::animation::CycleInterpolator::_class = java::fetch_class("android/view/animation/CycleInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AccelerateInterpolator::AccelerateInterpolator() : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::AccelerateInterpolator::_class) ::android::view::animation::AccelerateInterpolator::_class = java::fetch_class("android/view/animation/AccelerateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AccelerateInterpolator::AccelerateInterpolator(float arg0) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::AccelerateInterpolator::_class) ::android::view::animation::AccelerateInterpolator::_class = java::fetch_class("android/view/animation/AccelerateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(F)V");
    float _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AccelerateInterpolator::AccelerateInterpolator(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::AccelerateInterpolator::_class) ::android::view::animation::AccelerateInterpolator::_class = java::fetch_class("android/view/animation/AccelerateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

float android::view::animation::AccelerateInterpolator::getInterpolation(float arg0) const {
    if (!::android::view::animation::AccelerateInterpolator::_class) ::android::view::animation::AccelerateInterpolator::_class = java::fetch_class("android/view/animation/AccelerateInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AnticipateOvershootInterpolator::AnticipateOvershootInterpolator() : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::AnticipateOvershootInterpolator::_class) ::android::view::animation::AnticipateOvershootInterpolator::_class = java::fetch_class("android/view/animation/AnticipateOvershootInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(float arg0) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::AnticipateOvershootInterpolator::_class) ::android::view::animation::AnticipateOvershootInterpolator::_class = java::fetch_class("android/view/animation/AnticipateOvershootInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(F)V");
    float _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(float arg0, float arg1) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::AnticipateOvershootInterpolator::_class) ::android::view::animation::AnticipateOvershootInterpolator::_class = java::fetch_class("android/view/animation/AnticipateOvershootInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::view::animation::AnticipateOvershootInterpolator::_class) ::android::view::animation::AnticipateOvershootInterpolator::_class = java::fetch_class("android/view/animation/AnticipateOvershootInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

float android::view::animation::AnticipateOvershootInterpolator::getInterpolation(float arg0) const {
    if (!::android::view::animation::AnticipateOvershootInterpolator::_class) ::android::view::animation::AnticipateOvershootInterpolator::_class = java::fetch_class("android/view/animation/AnticipateOvershootInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::Animation::Animation() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::animation::Animation::Animation(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::view::animation::Animation::reset() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::animation::Animation::cancel() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::view::animation::Animation::isInitialized() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInitialized", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::animation::Animation::initialize(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::view::animation::Animation::setInterpolator(const ::android::content::Context& arg0, int32_t arg1) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::animation::Animation::setInterpolator(const ::android::view::animation::Interpolator& arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/view/animation/Interpolator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation::setStartOffset(int64_t arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartOffset", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation::setDuration(int64_t arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation::restrictDuration(int64_t arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "restrictDuration", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation::scaleCurrentDuration(float arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleCurrentDuration", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation::setStartTime(int64_t arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation::start() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::animation::Animation::startNow() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "startNow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::animation::Animation::setRepeatMode(int32_t arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRepeatMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation::setRepeatCount(int32_t arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRepeatCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::animation::Animation::isFillEnabled() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFillEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::animation::Animation::setFillEnabled(bool arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFillEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation::setFillBefore(bool arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFillBefore", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation::setFillAfter(bool arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFillAfter", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation::setZAdjustment(int32_t arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZAdjustment", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation::setBackgroundColor(int32_t arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::animation::Animation::setDetachWallpaper(bool arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDetachWallpaper", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::animation::Interpolator android::view::animation::Animation::getInterpolator() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolator", "()Landroid/view/animation/Interpolator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::animation::Interpolator _ret(ret);
    return _ret;
}

int64_t android::view::animation::Animation::getStartTime() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::view::animation::Animation::getDuration() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::view::animation::Animation::getStartOffset() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartOffset", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t android::view::animation::Animation::getRepeatMode() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRepeatMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::animation::Animation::getRepeatCount() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRepeatCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::view::animation::Animation::getFillBefore() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFillBefore", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::animation::Animation::getFillAfter() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFillAfter", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::view::animation::Animation::getZAdjustment() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getZAdjustment", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::animation::Animation::getBackgroundColor() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackgroundColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::view::animation::Animation::getDetachWallpaper() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDetachWallpaper", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::animation::Animation::willChangeTransformationMatrix() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "willChangeTransformationMatrix", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::animation::Animation::willChangeBounds() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "willChangeBounds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::animation::Animation::setAnimationListener(const ::android::view::animation::Animation_AnimationListener& arg0) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimationListener", "(Landroid/view/animation/Animation$AnimationListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::view::animation::Animation::computeDurationHint() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeDurationHint", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool android::view::animation::Animation::getTransformation(int64_t arg0, const ::android::view::animation::Transformation& arg1) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransformation", "(JLandroid/view/animation/Transformation;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::view::animation::Animation::getTransformation(int64_t arg0, const ::android::view::animation::Transformation& arg1, float arg2) const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransformation", "(JLandroid/view/animation/Transformation;F)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::view::animation::Animation::hasStarted() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasStarted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::animation::Animation::hasEnded() const {
    if (!::android::view::animation::Animation::_class) ::android::view::animation::Animation::_class = java::fetch_class("android/view/animation/Animation");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasEnded", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

