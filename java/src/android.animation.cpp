#include "java-core.hpp"
#include <memory>
#include "android.animation.Animator.hpp"
#include "android.animation.AnimatorInflater.hpp"
#include "android.animation.AnimatorListenerAdapter.hpp"
#include "android.animation.AnimatorSet.hpp"
#include "android.animation.ArgbEvaluator.hpp"
#include "android.animation.FloatEvaluator.hpp"
#include "android.animation.IntEvaluator.hpp"
#include "android.animation.Keyframe.hpp"
#include "android.animation.LayoutTransition.hpp"
#include "android.animation.ObjectAnimator.hpp"
#include "android.animation.PropertyValuesHolder.hpp"
#include "android.animation.TimeInterpolator.hpp"
#include "android.animation.TypeEvaluator.hpp"
#include "android.animation.ValueAnimator.hpp"
#include "android.content.Context.hpp"
#include "android.util.Property.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewGroup.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Float.hpp"
#include "java.lang.Integer.hpp"
#include "java.lang.Number.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.Collection.hpp"
#include "java.util.List.hpp"

jclass android::animation::ValueAnimator_AnimatorUpdateListener::_class = nullptr;
jclass android::animation::FloatEvaluator::_class = nullptr;
jclass android::animation::Animator::_class = nullptr;
jclass android::animation::TypeEvaluator::_class = nullptr;
jclass android::animation::TimeInterpolator::_class = nullptr;
jclass android::animation::ValueAnimator::_class = nullptr;
jclass android::animation::ArgbEvaluator::_class = nullptr;
jclass android::animation::ObjectAnimator::_class = nullptr;
jclass android::animation::LayoutTransition_TransitionListener::_class = nullptr;
jclass android::animation::Animator_AnimatorListener::_class = nullptr;
jclass android::animation::AnimatorSet::_class = nullptr;
jclass android::animation::AnimatorSet_Builder::_class = nullptr;
jclass android::animation::AnimatorInflater::_class = nullptr;
jclass android::animation::AnimatorListenerAdapter::_class = nullptr;
jclass android::animation::Keyframe::_class = nullptr;
jclass android::animation::PropertyValuesHolder::_class = nullptr;
jclass android::animation::IntEvaluator::_class = nullptr;
jclass android::animation::LayoutTransition::_class = nullptr;

void android::animation::ValueAnimator_AnimatorUpdateListener::onAnimationUpdate(const ::android::animation::ValueAnimator& arg0) const {
    if (!::android::animation::ValueAnimator_AnimatorUpdateListener::_class) ::android::animation::ValueAnimator_AnimatorUpdateListener::_class = java::fetch_class("android/animation/ValueAnimator$AnimatorUpdateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationUpdate", "(Landroid/animation/ValueAnimator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::animation::FloatEvaluator::FloatEvaluator() : ::java::lang::Object((jobject)0), ::android::animation::TypeEvaluator((jobject)0) {
    if (!::android::animation::FloatEvaluator::_class) ::android::animation::FloatEvaluator::_class = java::fetch_class("android/animation/FloatEvaluator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Float android::animation::FloatEvaluator::evaluate(float arg0, const ::java::lang::Number& arg1, const ::java::lang::Number& arg2) const {
    if (!::android::animation::FloatEvaluator::_class) ::android::animation::FloatEvaluator::_class = java::fetch_class("android/animation/FloatEvaluator");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(FLjava/lang/Number;Ljava/lang/Number;)Ljava/lang/Float;");
    float _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Float _ret(ret);
    return _ret;
}

::java::lang::Object android::animation::FloatEvaluator::evaluate(float arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2) const {
    if (!::android::animation::FloatEvaluator::_class) ::android::animation::FloatEvaluator::_class = java::fetch_class("android/animation/FloatEvaluator");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(FLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    float _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::animation::Animator::Animator() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::animation::Animator::start() const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::animation::Animator::cancel() const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::animation::Animator::end() const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "end", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t android::animation::Animator::getStartDelay() const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartDelay", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::animation::Animator::setStartDelay(int64_t arg0) const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartDelay", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::animation::Animator android::animation::Animator::setDuration(int64_t arg0) const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(J)Landroid/animation/Animator;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::animation::Animator _ret(ret);
    return _ret;
}

int64_t android::animation::Animator::getDuration() const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::animation::Animator::setInterpolator(const ::android::animation::TimeInterpolator& arg0) const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/animation/TimeInterpolator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::animation::Animator::isRunning() const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRunning", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::animation::Animator::isStarted() const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStarted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::animation::Animator::addListener(const ::android::animation::Animator_AnimatorListener& arg0) const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "addListener", "(Landroid/animation/Animator$AnimatorListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::Animator::removeListener(const ::android::animation::Animator_AnimatorListener& arg0) const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeListener", "(Landroid/animation/Animator$AnimatorListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::ArrayList android::animation::Animator::getListeners() const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListeners", "()Ljava/util/ArrayList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

void android::animation::Animator::removeAllListeners() const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllListeners", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::animation::Animator android::animation::Animator::clone() const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/animation/Animator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::animation::Animator _ret(ret);
    return _ret;
}

void android::animation::Animator::setupStartValues() const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setupStartValues", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::animation::Animator::setupEndValues() const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setupEndValues", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::animation::Animator::setTarget(const ::java::lang::Object& arg0) const {
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTarget", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::animation::TypeEvaluator::evaluate(float arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2) const {
    if (!::android::animation::TypeEvaluator::_class) ::android::animation::TypeEvaluator::_class = java::fetch_class("android/animation/TypeEvaluator");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(FLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    float _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

float android::animation::TimeInterpolator::getInterpolation(float arg0) const {
    if (!::android::animation::TimeInterpolator::_class) ::android::animation::TimeInterpolator::_class = java::fetch_class("android/animation/TimeInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::animation::ValueAnimator::ValueAnimator() : ::java::lang::Object((jobject)0), ::android::animation::Animator((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::animation::ValueAnimator android::animation::ValueAnimator::ofInt(const std::vector< int32_t>& arg0){
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofInt", "([I)Landroid/animation/ValueAnimator;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::animation::ValueAnimator _ret(ret);
    return _ret;
}

::android::animation::ValueAnimator android::animation::ValueAnimator::ofFloat(const std::vector< float>& arg0){
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofFloat", "([F)Landroid/animation/ValueAnimator;");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::animation::ValueAnimator _ret(ret);
    return _ret;
}

::android::animation::ValueAnimator android::animation::ValueAnimator::ofPropertyValuesHolder(const std::vector< ::android::animation::PropertyValuesHolder>& arg0){
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofPropertyValuesHolder", "([Landroid/animation/PropertyValuesHolder;)Landroid/animation/ValueAnimator;");
    unsigned arg0s = arg0.size();
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::animation::PropertyValuesHolder::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::animation::PropertyValuesHolder& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::animation::ValueAnimator _ret(ret);
    return _ret;
}

::android::animation::ValueAnimator android::animation::ValueAnimator::ofObject(const ::android::animation::TypeEvaluator& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofObject", "(Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ValueAnimator;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::animation::ValueAnimator _ret(ret);
    return _ret;
}

void android::animation::ValueAnimator::setIntValues(const std::vector< int32_t>& arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntValues", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::ValueAnimator::setFloatValues(const std::vector< float>& arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFloatValues", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::ValueAnimator::setObjectValues(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObjectValues", "([Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::ValueAnimator::setValues(const std::vector< ::android::animation::PropertyValuesHolder>& arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValues", "([Landroid/animation/PropertyValuesHolder;)V");
    unsigned arg0s = arg0.size();
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::animation::PropertyValuesHolder::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::animation::PropertyValuesHolder& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::animation::PropertyValuesHolder> android::animation::ValueAnimator::getValues() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValues", "()[Landroid/animation/PropertyValuesHolder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::animation::PropertyValuesHolder> _ret(rets, ::android::animation::PropertyValuesHolder((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::animation::PropertyValuesHolder retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::animation::ValueAnimator android::animation::ValueAnimator::setDuration(int64_t arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(J)Landroid/animation/ValueAnimator;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::animation::ValueAnimator _ret(ret);
    return _ret;
}

int64_t android::animation::ValueAnimator::getDuration() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::animation::ValueAnimator::setCurrentPlayTime(int64_t arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentPlayTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::animation::ValueAnimator::getCurrentPlayTime() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentPlayTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::animation::ValueAnimator::getStartDelay() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartDelay", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::animation::ValueAnimator::setStartDelay(int64_t arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartDelay", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::animation::ValueAnimator::getFrameDelay(){
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFrameDelay", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

void android::animation::ValueAnimator::setFrameDelay(int64_t arg0){
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setFrameDelay", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::lang::Object android::animation::ValueAnimator::getAnimatedValue() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnimatedValue", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::animation::ValueAnimator::getAnimatedValue(const ::java::lang::String& arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnimatedValue", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::animation::ValueAnimator::setRepeatCount(int32_t arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRepeatCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::animation::ValueAnimator::getRepeatCount() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRepeatCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::animation::ValueAnimator::setRepeatMode(int32_t arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRepeatMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::animation::ValueAnimator::getRepeatMode() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRepeatMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::animation::ValueAnimator::addUpdateListener(const ::android::animation::ValueAnimator_AnimatorUpdateListener& arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "addUpdateListener", "(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::ValueAnimator::removeAllUpdateListeners() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllUpdateListeners", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::animation::ValueAnimator::removeUpdateListener(const ::android::animation::ValueAnimator_AnimatorUpdateListener& arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeUpdateListener", "(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::ValueAnimator::setInterpolator(const ::android::animation::TimeInterpolator& arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/animation/TimeInterpolator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::animation::TimeInterpolator android::animation::ValueAnimator::getInterpolator() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolator", "()Landroid/animation/TimeInterpolator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::animation::TimeInterpolator _ret(ret);
    return _ret;
}

void android::animation::ValueAnimator::setEvaluator(const ::android::animation::TypeEvaluator& arg0) const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEvaluator", "(Landroid/animation/TypeEvaluator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::ValueAnimator::start() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::animation::ValueAnimator::cancel() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::animation::ValueAnimator::end() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "end", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::animation::ValueAnimator::isRunning() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRunning", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::animation::ValueAnimator::isStarted() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStarted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::animation::ValueAnimator::reverse() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "reverse", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

float android::animation::ValueAnimator::getAnimatedFraction() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnimatedFraction", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

::android::animation::ValueAnimator android::animation::ValueAnimator::clone() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/animation/ValueAnimator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::animation::ValueAnimator _ret(ret);
    return _ret;
}

::java::lang::String android::animation::ValueAnimator::toString() const {
    if (!::android::animation::ValueAnimator::_class) ::android::animation::ValueAnimator::_class = java::fetch_class("android/animation/ValueAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::animation::ArgbEvaluator::ArgbEvaluator() : ::java::lang::Object((jobject)0), ::android::animation::TypeEvaluator((jobject)0) {
    if (!::android::animation::ArgbEvaluator::_class) ::android::animation::ArgbEvaluator::_class = java::fetch_class("android/animation/ArgbEvaluator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object android::animation::ArgbEvaluator::evaluate(float arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2) const {
    if (!::android::animation::ArgbEvaluator::_class) ::android::animation::ArgbEvaluator::_class = java::fetch_class("android/animation/ArgbEvaluator");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(FLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    float _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::animation::ObjectAnimator::ObjectAnimator() : ::java::lang::Object((jobject)0), ::android::animation::Animator((jobject)0), ::android::animation::ValueAnimator((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::animation::ObjectAnimator::setPropertyName(const ::java::lang::String& arg0) const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPropertyName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::ObjectAnimator::setProperty(const ::android::util::Property& arg0) const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Landroid/util/Property;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::animation::ObjectAnimator::getPropertyName() const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPropertyName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::animation::ObjectAnimator android::animation::ObjectAnimator::ofInt(const ::java::lang::Object& arg0, const ::java::lang::String& arg1, const std::vector< int32_t>& arg2){
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofInt", "(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::animation::ObjectAnimator _ret(ret);
    return _ret;
}

::android::animation::ObjectAnimator android::animation::ObjectAnimator::ofInt(const ::java::lang::Object& arg0, const ::android::util::Property& arg1, const std::vector< int32_t>& arg2){
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofInt", "(Ljava/lang/Object;Landroid/util/Property;[I)Landroid/animation/ObjectAnimator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::animation::ObjectAnimator _ret(ret);
    return _ret;
}

::android::animation::ObjectAnimator android::animation::ObjectAnimator::ofFloat(const ::java::lang::Object& arg0, const ::java::lang::String& arg1, const std::vector< float>& arg2){
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofFloat", "(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::animation::ObjectAnimator _ret(ret);
    return _ret;
}

::android::animation::ObjectAnimator android::animation::ObjectAnimator::ofFloat(const ::java::lang::Object& arg0, const ::android::util::Property& arg1, const std::vector< float>& arg2){
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofFloat", "(Ljava/lang/Object;Landroid/util/Property;[F)Landroid/animation/ObjectAnimator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jfloatArray _arg2 = java::jni->NewFloatArray(arg2.size());
    java::jni->SetFloatArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::animation::ObjectAnimator _ret(ret);
    return _ret;
}

::android::animation::ObjectAnimator android::animation::ObjectAnimator::ofObject(const ::java::lang::Object& arg0, const ::java::lang::String& arg1, const ::android::animation::TypeEvaluator& arg2, const std::vector< ::java::lang::Object>& arg3){
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofObject", "(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::Object& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::animation::ObjectAnimator _ret(ret);
    return _ret;
}

::android::animation::ObjectAnimator android::animation::ObjectAnimator::ofObject(const ::java::lang::Object& arg0, const ::android::util::Property& arg1, const ::android::animation::TypeEvaluator& arg2, const std::vector< ::java::lang::Object>& arg3){
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofObject", "(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::Object& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::animation::ObjectAnimator _ret(ret);
    return _ret;
}

::android::animation::ObjectAnimator android::animation::ObjectAnimator::ofPropertyValuesHolder(const ::java::lang::Object& arg0, const std::vector< ::android::animation::PropertyValuesHolder>& arg1){
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofPropertyValuesHolder", "(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::animation::PropertyValuesHolder::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::animation::PropertyValuesHolder& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::animation::ObjectAnimator _ret(ret);
    return _ret;
}

void android::animation::ObjectAnimator::setIntValues(const std::vector< int32_t>& arg0) const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntValues", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::ObjectAnimator::setFloatValues(const std::vector< float>& arg0) const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFloatValues", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::ObjectAnimator::setObjectValues(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObjectValues", "([Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::ObjectAnimator::start() const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::animation::ObjectAnimator android::animation::ObjectAnimator::setDuration(int64_t arg0) const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(J)Landroid/animation/ObjectAnimator;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::animation::ObjectAnimator _ret(ret);
    return _ret;
}

::java::lang::Object android::animation::ObjectAnimator::getTarget() const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTarget", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::animation::ObjectAnimator::setTarget(const ::java::lang::Object& arg0) const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTarget", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::ObjectAnimator::setupStartValues() const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setupStartValues", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::animation::ObjectAnimator::setupEndValues() const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setupEndValues", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::animation::ObjectAnimator android::animation::ObjectAnimator::clone() const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/animation/ObjectAnimator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::animation::ObjectAnimator _ret(ret);
    return _ret;
}

::java::lang::String android::animation::ObjectAnimator::toString() const {
    if (!::android::animation::ObjectAnimator::_class) ::android::animation::ObjectAnimator::_class = java::fetch_class("android/animation/ObjectAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::animation::LayoutTransition_TransitionListener::startTransition(const ::android::animation::LayoutTransition& arg0, const ::android::view::ViewGroup& arg1, const ::android::view::View& arg2, int32_t arg3) const {
    if (!::android::animation::LayoutTransition_TransitionListener::_class) ::android::animation::LayoutTransition_TransitionListener::_class = java::fetch_class("android/animation/LayoutTransition$TransitionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTransition", "(Landroid/animation/LayoutTransition;Landroid/view/ViewGroup;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::animation::LayoutTransition_TransitionListener::endTransition(const ::android::animation::LayoutTransition& arg0, const ::android::view::ViewGroup& arg1, const ::android::view::View& arg2, int32_t arg3) const {
    if (!::android::animation::LayoutTransition_TransitionListener::_class) ::android::animation::LayoutTransition_TransitionListener::_class = java::fetch_class("android/animation/LayoutTransition$TransitionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "endTransition", "(Landroid/animation/LayoutTransition;Landroid/view/ViewGroup;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::animation::Animator_AnimatorListener::onAnimationStart(const ::android::animation::Animator& arg0) const {
    if (!::android::animation::Animator_AnimatorListener::_class) ::android::animation::Animator_AnimatorListener::_class = java::fetch_class("android/animation/Animator$AnimatorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationStart", "(Landroid/animation/Animator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::Animator_AnimatorListener::onAnimationEnd(const ::android::animation::Animator& arg0) const {
    if (!::android::animation::Animator_AnimatorListener::_class) ::android::animation::Animator_AnimatorListener::_class = java::fetch_class("android/animation/Animator$AnimatorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationEnd", "(Landroid/animation/Animator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::Animator_AnimatorListener::onAnimationCancel(const ::android::animation::Animator& arg0) const {
    if (!::android::animation::Animator_AnimatorListener::_class) ::android::animation::Animator_AnimatorListener::_class = java::fetch_class("android/animation/Animator$AnimatorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationCancel", "(Landroid/animation/Animator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::Animator_AnimatorListener::onAnimationRepeat(const ::android::animation::Animator& arg0) const {
    if (!::android::animation::Animator_AnimatorListener::_class) ::android::animation::Animator_AnimatorListener::_class = java::fetch_class("android/animation/Animator$AnimatorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationRepeat", "(Landroid/animation/Animator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::animation::AnimatorSet::AnimatorSet() : ::java::lang::Object((jobject)0), ::android::animation::Animator((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::animation::AnimatorSet::playTogether(const std::vector< ::android::animation::Animator>& arg0) const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "playTogether", "([Landroid/animation/Animator;)V");
    unsigned arg0s = arg0.size();
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::animation::Animator::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::animation::Animator& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::AnimatorSet::playTogether(const ::java::util::Collection& arg0) const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "playTogether", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::AnimatorSet::playSequentially(const std::vector< ::android::animation::Animator>& arg0) const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "playSequentially", "([Landroid/animation/Animator;)V");
    unsigned arg0s = arg0.size();
    if (!::android::animation::Animator::_class) ::android::animation::Animator::_class = java::fetch_class("android/animation/Animator");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::animation::Animator::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::animation::Animator& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::AnimatorSet::playSequentially(const ::java::util::List& arg0) const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "playSequentially", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::ArrayList android::animation::AnimatorSet::getChildAnimations() const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildAnimations", "()Ljava/util/ArrayList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

void android::animation::AnimatorSet::setTarget(const ::java::lang::Object& arg0) const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTarget", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::AnimatorSet::setInterpolator(const ::android::animation::TimeInterpolator& arg0) const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/animation/TimeInterpolator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::animation::AnimatorSet_Builder android::animation::AnimatorSet::play(const ::android::animation::Animator& arg0) const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "play", "(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::animation::AnimatorSet_Builder _ret(ret);
    return _ret;
}

void android::animation::AnimatorSet::cancel() const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::animation::AnimatorSet::end() const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "end", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::animation::AnimatorSet::isRunning() const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRunning", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::animation::AnimatorSet::isStarted() const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStarted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t android::animation::AnimatorSet::getStartDelay() const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartDelay", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::animation::AnimatorSet::setStartDelay(int64_t arg0) const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartDelay", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::animation::AnimatorSet::getDuration() const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::animation::AnimatorSet android::animation::AnimatorSet::setDuration(int64_t arg0) const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(J)Landroid/animation/AnimatorSet;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::animation::AnimatorSet _ret(ret);
    return _ret;
}

void android::animation::AnimatorSet::setupStartValues() const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setupStartValues", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::animation::AnimatorSet::setupEndValues() const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setupEndValues", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::animation::AnimatorSet::start() const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::animation::AnimatorSet android::animation::AnimatorSet::clone() const {
    if (!::android::animation::AnimatorSet::_class) ::android::animation::AnimatorSet::_class = java::fetch_class("android/animation/AnimatorSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/animation/AnimatorSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::animation::AnimatorSet _ret(ret);
    return _ret;
}

::android::animation::AnimatorSet_Builder android::animation::AnimatorSet_Builder::with(const ::android::animation::Animator& arg0) const {
    if (!::android::animation::AnimatorSet_Builder::_class) ::android::animation::AnimatorSet_Builder::_class = java::fetch_class("android/animation/AnimatorSet$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "with", "(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::animation::AnimatorSet_Builder _ret(ret);
    return _ret;
}

::android::animation::AnimatorSet_Builder android::animation::AnimatorSet_Builder::before(const ::android::animation::Animator& arg0) const {
    if (!::android::animation::AnimatorSet_Builder::_class) ::android::animation::AnimatorSet_Builder::_class = java::fetch_class("android/animation/AnimatorSet$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "before", "(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::animation::AnimatorSet_Builder _ret(ret);
    return _ret;
}

::android::animation::AnimatorSet_Builder android::animation::AnimatorSet_Builder::after(const ::android::animation::Animator& arg0) const {
    if (!::android::animation::AnimatorSet_Builder::_class) ::android::animation::AnimatorSet_Builder::_class = java::fetch_class("android/animation/AnimatorSet$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "after", "(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::animation::AnimatorSet_Builder _ret(ret);
    return _ret;
}

::android::animation::AnimatorSet_Builder android::animation::AnimatorSet_Builder::after(int64_t arg0) const {
    if (!::android::animation::AnimatorSet_Builder::_class) ::android::animation::AnimatorSet_Builder::_class = java::fetch_class("android/animation/AnimatorSet$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "after", "(J)Landroid/animation/AnimatorSet$Builder;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::animation::AnimatorSet_Builder _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::animation::AnimatorInflater::AnimatorInflater() : ::java::lang::Object((jobject)0) {
    if (!::android::animation::AnimatorInflater::_class) ::android::animation::AnimatorInflater::_class = java::fetch_class("android/animation/AnimatorInflater");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::animation::Animator android::animation::AnimatorInflater::loadAnimator(const ::android::content::Context& arg0, int32_t arg1){
    if (!::android::animation::AnimatorInflater::_class) ::android::animation::AnimatorInflater::_class = java::fetch_class("android/animation/AnimatorInflater");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadAnimator", "(Landroid/content/Context;I)Landroid/animation/Animator;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::animation::Animator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::animation::AnimatorListenerAdapter::AnimatorListenerAdapter() : ::java::lang::Object((jobject)0), ::android::animation::Animator_AnimatorListener((jobject)0) {
    if (!::android::animation::AnimatorListenerAdapter::_class) ::android::animation::AnimatorListenerAdapter::_class = java::fetch_class("android/animation/AnimatorListenerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::animation::AnimatorListenerAdapter::onAnimationCancel(const ::android::animation::Animator& arg0) const {
    if (!::android::animation::AnimatorListenerAdapter::_class) ::android::animation::AnimatorListenerAdapter::_class = java::fetch_class("android/animation/AnimatorListenerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationCancel", "(Landroid/animation/Animator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::AnimatorListenerAdapter::onAnimationEnd(const ::android::animation::Animator& arg0) const {
    if (!::android::animation::AnimatorListenerAdapter::_class) ::android::animation::AnimatorListenerAdapter::_class = java::fetch_class("android/animation/AnimatorListenerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationEnd", "(Landroid/animation/Animator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::AnimatorListenerAdapter::onAnimationRepeat(const ::android::animation::Animator& arg0) const {
    if (!::android::animation::AnimatorListenerAdapter::_class) ::android::animation::AnimatorListenerAdapter::_class = java::fetch_class("android/animation/AnimatorListenerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationRepeat", "(Landroid/animation/Animator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::AnimatorListenerAdapter::onAnimationStart(const ::android::animation::Animator& arg0) const {
    if (!::android::animation::AnimatorListenerAdapter::_class) ::android::animation::AnimatorListenerAdapter::_class = java::fetch_class("android/animation/AnimatorListenerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationStart", "(Landroid/animation/Animator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::animation::Keyframe::Keyframe() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::animation::Keyframe android::animation::Keyframe::ofInt(float arg0, int32_t arg1){
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofInt", "(FI)Landroid/animation/Keyframe;");
    float _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::animation::Keyframe _ret(ret);
    return _ret;
}

::android::animation::Keyframe android::animation::Keyframe::ofInt(float arg0){
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofInt", "(F)Landroid/animation/Keyframe;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::animation::Keyframe _ret(ret);
    return _ret;
}

::android::animation::Keyframe android::animation::Keyframe::ofFloat(float arg0, float arg1){
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofFloat", "(FF)Landroid/animation/Keyframe;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::animation::Keyframe _ret(ret);
    return _ret;
}

::android::animation::Keyframe android::animation::Keyframe::ofFloat(float arg0){
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofFloat", "(F)Landroid/animation/Keyframe;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::animation::Keyframe _ret(ret);
    return _ret;
}

::android::animation::Keyframe android::animation::Keyframe::ofObject(float arg0, const ::java::lang::Object& arg1){
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofObject", "(FLjava/lang/Object;)Landroid/animation/Keyframe;");
    float _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::animation::Keyframe _ret(ret);
    return _ret;
}

::android::animation::Keyframe android::animation::Keyframe::ofObject(float arg0){
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofObject", "(F)Landroid/animation/Keyframe;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::animation::Keyframe _ret(ret);
    return _ret;
}

bool android::animation::Keyframe::hasValue() const {
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasValue", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object android::animation::Keyframe::getValue() const {
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::animation::Keyframe::setValue(const ::java::lang::Object& arg0) const {
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValue", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::animation::Keyframe::getFraction() const {
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFraction", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::animation::Keyframe::setFraction(float arg0) const {
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFraction", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::animation::TimeInterpolator android::animation::Keyframe::getInterpolator() const {
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolator", "()Landroid/animation/TimeInterpolator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::animation::TimeInterpolator _ret(ret);
    return _ret;
}

void android::animation::Keyframe::setInterpolator(const ::android::animation::TimeInterpolator& arg0) const {
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/animation/TimeInterpolator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Class android::animation::Keyframe::getType() const {
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::android::animation::Keyframe android::animation::Keyframe::clone() const {
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/animation/Keyframe;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::animation::Keyframe _ret(ret);
    return _ret;
}

::android::animation::PropertyValuesHolder android::animation::PropertyValuesHolder::ofInt(const ::java::lang::String& arg0, const std::vector< int32_t>& arg1){
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofInt", "(Ljava/lang/String;[I)Landroid/animation/PropertyValuesHolder;");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::animation::PropertyValuesHolder _ret(ret);
    return _ret;
}

::android::animation::PropertyValuesHolder android::animation::PropertyValuesHolder::ofInt(const ::android::util::Property& arg0, const std::vector< int32_t>& arg1){
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofInt", "(Landroid/util/Property;[I)Landroid/animation/PropertyValuesHolder;");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::animation::PropertyValuesHolder _ret(ret);
    return _ret;
}

::android::animation::PropertyValuesHolder android::animation::PropertyValuesHolder::ofFloat(const ::java::lang::String& arg0, const std::vector< float>& arg1){
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofFloat", "(Ljava/lang/String;[F)Landroid/animation/PropertyValuesHolder;");
    jobject _arg0 = arg0.obj;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::animation::PropertyValuesHolder _ret(ret);
    return _ret;
}

::android::animation::PropertyValuesHolder android::animation::PropertyValuesHolder::ofFloat(const ::android::util::Property& arg0, const std::vector< float>& arg1){
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofFloat", "(Landroid/util/Property;[F)Landroid/animation/PropertyValuesHolder;");
    jobject _arg0 = arg0.obj;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::animation::PropertyValuesHolder _ret(ret);
    return _ret;
}

::android::animation::PropertyValuesHolder android::animation::PropertyValuesHolder::ofObject(const ::java::lang::String& arg0, const ::android::animation::TypeEvaluator& arg1, const std::vector< ::java::lang::Object>& arg2){
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofObject", "(Ljava/lang/String;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::animation::PropertyValuesHolder _ret(ret);
    return _ret;
}

::android::animation::PropertyValuesHolder android::animation::PropertyValuesHolder::ofObject(const ::android::util::Property& arg0, const ::android::animation::TypeEvaluator& arg1, const std::vector< ::java::lang::Object>& arg2){
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofObject", "(Landroid/util/Property;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::animation::PropertyValuesHolder _ret(ret);
    return _ret;
}

::android::animation::PropertyValuesHolder android::animation::PropertyValuesHolder::ofKeyframe(const ::java::lang::String& arg0, const std::vector< ::android::animation::Keyframe>& arg1){
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofKeyframe", "(Ljava/lang/String;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::animation::Keyframe::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::animation::Keyframe& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::animation::PropertyValuesHolder _ret(ret);
    return _ret;
}

::android::animation::PropertyValuesHolder android::animation::PropertyValuesHolder::ofKeyframe(const ::android::util::Property& arg0, const std::vector< ::android::animation::Keyframe>& arg1){
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofKeyframe", "(Landroid/util/Property;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::animation::Keyframe::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::animation::Keyframe& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::animation::PropertyValuesHolder _ret(ret);
    return _ret;
}

void android::animation::PropertyValuesHolder::setIntValues(const std::vector< int32_t>& arg0) const {
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntValues", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::PropertyValuesHolder::setFloatValues(const std::vector< float>& arg0) const {
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFloatValues", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::PropertyValuesHolder::setKeyframes(const std::vector< ::android::animation::Keyframe>& arg0) const {
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeyframes", "([Landroid/animation/Keyframe;)V");
    unsigned arg0s = arg0.size();
    if (!::android::animation::Keyframe::_class) ::android::animation::Keyframe::_class = java::fetch_class("android/animation/Keyframe");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::animation::Keyframe::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::animation::Keyframe& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::PropertyValuesHolder::setObjectValues(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObjectValues", "([Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::animation::PropertyValuesHolder android::animation::PropertyValuesHolder::clone() const {
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/animation/PropertyValuesHolder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::animation::PropertyValuesHolder _ret(ret);
    return _ret;
}

void android::animation::PropertyValuesHolder::setEvaluator(const ::android::animation::TypeEvaluator& arg0) const {
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEvaluator", "(Landroid/animation/TypeEvaluator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::PropertyValuesHolder::setPropertyName(const ::java::lang::String& arg0) const {
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPropertyName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::PropertyValuesHolder::setProperty(const ::android::util::Property& arg0) const {
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Landroid/util/Property;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::animation::PropertyValuesHolder::getPropertyName() const {
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPropertyName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::animation::PropertyValuesHolder::toString() const {
    if (!::android::animation::PropertyValuesHolder::_class) ::android::animation::PropertyValuesHolder::_class = java::fetch_class("android/animation/PropertyValuesHolder");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::animation::IntEvaluator::IntEvaluator() : ::java::lang::Object((jobject)0), ::android::animation::TypeEvaluator((jobject)0) {
    if (!::android::animation::IntEvaluator::_class) ::android::animation::IntEvaluator::_class = java::fetch_class("android/animation/IntEvaluator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Integer android::animation::IntEvaluator::evaluate(float arg0, const ::java::lang::Integer& arg1, const ::java::lang::Integer& arg2) const {
    if (!::android::animation::IntEvaluator::_class) ::android::animation::IntEvaluator::_class = java::fetch_class("android/animation/IntEvaluator");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(FLjava/lang/Integer;Ljava/lang/Integer;)Ljava/lang/Integer;");
    float _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Integer _ret(ret);
    return _ret;
}

::java::lang::Object android::animation::IntEvaluator::evaluate(float arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2) const {
    if (!::android::animation::IntEvaluator::_class) ::android::animation::IntEvaluator::_class = java::fetch_class("android/animation/IntEvaluator");
    static jmethodID mid = java::jni->GetMethodID(_class, "evaluate", "(FLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    float _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::animation::LayoutTransition::LayoutTransition() : ::java::lang::Object((jobject)0) {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::animation::LayoutTransition::setDuration(int64_t arg0) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::LayoutTransition::setStartDelay(int32_t arg0, int64_t arg1) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartDelay", "(IJ)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int64_t android::animation::LayoutTransition::getStartDelay(int32_t arg0) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartDelay", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void android::animation::LayoutTransition::setDuration(int32_t arg0, int64_t arg1) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(IJ)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int64_t android::animation::LayoutTransition::getDuration(int32_t arg0) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void android::animation::LayoutTransition::setStagger(int32_t arg0, int64_t arg1) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStagger", "(IJ)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int64_t android::animation::LayoutTransition::getStagger(int32_t arg0) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStagger", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void android::animation::LayoutTransition::setInterpolator(int32_t arg0, const ::android::animation::TimeInterpolator& arg1) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(ILandroid/animation/TimeInterpolator;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::animation::TimeInterpolator android::animation::LayoutTransition::getInterpolator(int32_t arg0) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolator", "(I)Landroid/animation/TimeInterpolator;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::animation::TimeInterpolator _ret(ret);
    return _ret;
}

void android::animation::LayoutTransition::setAnimator(int32_t arg0, const ::android::animation::Animator& arg1) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimator", "(ILandroid/animation/Animator;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::animation::Animator android::animation::LayoutTransition::getAnimator(int32_t arg0) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnimator", "(I)Landroid/animation/Animator;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::animation::Animator _ret(ret);
    return _ret;
}

void android::animation::LayoutTransition::setAnimateParentHierarchy(bool arg0) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimateParentHierarchy", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::animation::LayoutTransition::isChangingLayout() const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChangingLayout", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::animation::LayoutTransition::isRunning() const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRunning", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::animation::LayoutTransition::addChild(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "addChild", "(Landroid/view/ViewGroup;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::animation::LayoutTransition::showChild(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "showChild", "(Landroid/view/ViewGroup;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::animation::LayoutTransition::removeChild(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeChild", "(Landroid/view/ViewGroup;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::animation::LayoutTransition::hideChild(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "hideChild", "(Landroid/view/ViewGroup;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::animation::LayoutTransition::addTransitionListener(const ::android::animation::LayoutTransition_TransitionListener& arg0) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTransitionListener", "(Landroid/animation/LayoutTransition$TransitionListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::animation::LayoutTransition::removeTransitionListener(const ::android::animation::LayoutTransition_TransitionListener& arg0) const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeTransitionListener", "(Landroid/animation/LayoutTransition$TransitionListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::animation::LayoutTransition::getTransitionListeners() const {
    if (!::android::animation::LayoutTransition::_class) ::android::animation::LayoutTransition::_class = java::fetch_class("android/animation/LayoutTransition");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransitionListeners", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

