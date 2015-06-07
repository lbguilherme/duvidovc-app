#include "java-core.hpp"
#include <memory>
#include "android.graphics.Path.hpp"
#include "android.support.v4.view.animation.FastOutLinearInInterpolator.hpp"
#include "android.support.v4.view.animation.FastOutSlowInInterpolator.hpp"
#include "android.support.v4.view.animation.LinearOutSlowInInterpolator.hpp"
#include "android.support.v4.view.animation.LookupTableInterpolator.hpp"
#include "android.support.v4.view.animation.PathInterpolatorCompat.hpp"
#include "android.view.animation.Interpolator.hpp"

jclass android::support::v4::view::animation::PathInterpolatorCompat::_class = nullptr;
jclass android::support::v4::view::animation::LinearOutSlowInInterpolator::_class = nullptr;
jclass android::support::v4::view::animation::FastOutLinearInInterpolator::_class = nullptr;
jclass android::support::v4::view::animation::LookupTableInterpolator::_class = nullptr;
jclass android::support::v4::view::animation::FastOutSlowInInterpolator::_class = nullptr;

::android::view::animation::Interpolator android::support::v4::view::animation::PathInterpolatorCompat::create(const ::android::graphics::Path& arg0){
    if (!::android::support::v4::view::animation::PathInterpolatorCompat::_class) ::android::support::v4::view::animation::PathInterpolatorCompat::_class = java::fetch_class("android/support/v4/view/animation/PathInterpolatorCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/graphics/Path;)Landroid/view/animation/Interpolator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::animation::Interpolator _ret(ret);
    return _ret;
}

::android::view::animation::Interpolator android::support::v4::view::animation::PathInterpolatorCompat::create(float arg0, float arg1){
    if (!::android::support::v4::view::animation::PathInterpolatorCompat::_class) ::android::support::v4::view::animation::PathInterpolatorCompat::_class = java::fetch_class("android/support/v4/view/animation/PathInterpolatorCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(FF)Landroid/view/animation/Interpolator;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::animation::Interpolator _ret(ret);
    return _ret;
}

::android::view::animation::Interpolator android::support::v4::view::animation::PathInterpolatorCompat::create(float arg0, float arg1, float arg2, float arg3){
    if (!::android::support::v4::view::animation::PathInterpolatorCompat::_class) ::android::support::v4::view::animation::PathInterpolatorCompat::_class = java::fetch_class("android/support/v4/view/animation/PathInterpolatorCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(FFFF)Landroid/view/animation/Interpolator;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::animation::Interpolator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::animation::LinearOutSlowInInterpolator::LinearOutSlowInInterpolator() : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::support::v4::view::animation::LookupTableInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::support::v4::view::animation::LinearOutSlowInInterpolator::_class) ::android::support::v4::view::animation::LinearOutSlowInInterpolator::_class = java::fetch_class("android/support/v4/view/animation/LinearOutSlowInInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

float android::support::v4::view::animation::LinearOutSlowInInterpolator::getInterpolation(float arg0) const {
    if (!::android::support::v4::view::animation::LinearOutSlowInInterpolator::_class) ::android::support::v4::view::animation::LinearOutSlowInInterpolator::_class = java::fetch_class("android/support/v4/view/animation/LinearOutSlowInInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::animation::FastOutLinearInInterpolator::FastOutLinearInInterpolator() : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::support::v4::view::animation::LookupTableInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::support::v4::view::animation::FastOutLinearInInterpolator::_class) ::android::support::v4::view::animation::FastOutLinearInInterpolator::_class = java::fetch_class("android/support/v4/view/animation/FastOutLinearInInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

float android::support::v4::view::animation::FastOutLinearInInterpolator::getInterpolation(float arg0) const {
    if (!::android::support::v4::view::animation::FastOutLinearInInterpolator::_class) ::android::support::v4::view::animation::FastOutLinearInInterpolator::_class = java::fetch_class("android/support/v4/view/animation/FastOutLinearInInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::animation::LookupTableInterpolator::LookupTableInterpolator(const std::vector< float>& arg0) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::support::v4::view::animation::LookupTableInterpolator::_class) ::android::support::v4::view::animation::LookupTableInterpolator::_class = java::fetch_class("android/support/v4/view/animation/LookupTableInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

float android::support::v4::view::animation::LookupTableInterpolator::getInterpolation(float arg0) const {
    if (!::android::support::v4::view::animation::LookupTableInterpolator::_class) ::android::support::v4::view::animation::LookupTableInterpolator::_class = java::fetch_class("android/support/v4/view/animation/LookupTableInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::animation::FastOutSlowInInterpolator::FastOutSlowInInterpolator() : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::support::v4::view::animation::LookupTableInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {
    if (!::android::support::v4::view::animation::FastOutSlowInInterpolator::_class) ::android::support::v4::view::animation::FastOutSlowInInterpolator::_class = java::fetch_class("android/support/v4/view/animation/FastOutSlowInInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

float android::support::v4::view::animation::FastOutSlowInInterpolator::getInterpolation(float arg0) const {
    if (!::android::support::v4::view::animation::FastOutSlowInInterpolator::_class) ::android::support::v4::view::animation::FastOutSlowInInterpolator::_class = java::fetch_class("android/support/v4/view/animation/FastOutSlowInInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

