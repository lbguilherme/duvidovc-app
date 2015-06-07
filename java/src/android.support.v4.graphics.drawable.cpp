#include "java-core.hpp"
#include <memory>
#include "android.content.res.ColorStateList.hpp"
#include "android.graphics.PorterDuff.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.support.v4.graphics.drawable.DrawableCompat.hpp"
#include "android.support.v4.graphics.drawable.RoundedBitmapDrawableFactory.hpp"

jclass android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable::_class = nullptr;
jclass android::support::v4::graphics::drawable::DrawableCompat::_class = nullptr;
jclass android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class = nullptr;
jclass android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class = nullptr;
jclass android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl::_class = nullptr;
jclass android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl::_class = nullptr;
jclass android::support::v4::graphics::drawable::DrawableCompat_LollipopMr1DrawableImpl::_class = nullptr;
jclass android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class = nullptr;
jclass android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory::_class = nullptr;

void android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable::setMipMap(bool arg0) const {
    if (!::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable::_class) ::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable::_class = java::fetch_class("android/support/v4/graphics/drawable/RoundedBitmapDrawableFactory$DefaultRoundedBitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMipMap", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable::hasMipMap() const {
    if (!::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable::_class) ::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory_DefaultRoundedBitmapDrawable::_class = java::fetch_class("android/support/v4/graphics/drawable/RoundedBitmapDrawableFactory$DefaultRoundedBitmapDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMipMap", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::graphics::drawable::DrawableCompat::DrawableCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::graphics::drawable::DrawableCompat::_class) ::android::support::v4::graphics::drawable::DrawableCompat::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::graphics::drawable::DrawableCompat::jumpToCurrentState(const ::android::graphics::drawable::Drawable& arg0){
    if (!::android::support::v4::graphics::drawable::DrawableCompat::_class) ::android::support::v4::graphics::drawable::DrawableCompat::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "jumpToCurrentState", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::support::v4::graphics::drawable::DrawableCompat::setAutoMirrored(const ::android::graphics::drawable::Drawable& arg0, bool arg1){
    if (!::android::support::v4::graphics::drawable::DrawableCompat::_class) ::android::support::v4::graphics::drawable::DrawableCompat::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setAutoMirrored", "(Landroid/graphics/drawable/Drawable;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::graphics::drawable::DrawableCompat::isAutoMirrored(const ::android::graphics::drawable::Drawable& arg0){
    if (!::android::support::v4::graphics::drawable::DrawableCompat::_class) ::android::support::v4::graphics::drawable::DrawableCompat::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isAutoMirrored", "(Landroid/graphics/drawable/Drawable;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::support::v4::graphics::drawable::DrawableCompat::setHotspot(const ::android::graphics::drawable::Drawable& arg0, float arg1, float arg2){
    if (!::android::support::v4::graphics::drawable::DrawableCompat::_class) ::android::support::v4::graphics::drawable::DrawableCompat::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setHotspot", "(Landroid/graphics/drawable/Drawable;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::graphics::drawable::DrawableCompat::setHotspotBounds(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::support::v4::graphics::drawable::DrawableCompat::_class) ::android::support::v4::graphics::drawable::DrawableCompat::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setHotspotBounds", "(Landroid/graphics/drawable/Drawable;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::graphics::drawable::DrawableCompat::setTint(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1){
    if (!::android::support::v4::graphics::drawable::DrawableCompat::_class) ::android::support::v4::graphics::drawable::DrawableCompat::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setTint", "(Landroid/graphics/drawable/Drawable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::graphics::drawable::DrawableCompat::setTintList(const ::android::graphics::drawable::Drawable& arg0, const ::android::content::res::ColorStateList& arg1){
    if (!::android::support::v4::graphics::drawable::DrawableCompat::_class) ::android::support::v4::graphics::drawable::DrawableCompat::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setTintList", "(Landroid/graphics/drawable/Drawable;Landroid/content/res/ColorStateList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::graphics::drawable::DrawableCompat::setTintMode(const ::android::graphics::drawable::Drawable& arg0, const ::android::graphics::PorterDuff_Mode& arg1){
    if (!::android::support::v4::graphics::drawable::DrawableCompat::_class) ::android::support::v4::graphics::drawable::DrawableCompat::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setTintMode", "(Landroid/graphics/drawable/Drawable;Landroid/graphics/PorterDuff$Mode;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::graphics::drawable::Drawable android::support::v4::graphics::drawable::DrawableCompat::wrap(const ::android::graphics::drawable::Drawable& arg0){
    if (!::android::support::v4::graphics::drawable::DrawableCompat::_class) ::android::support::v4::graphics::drawable::DrawableCompat::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::support::v4::graphics::drawable::DrawableCompat::unwrap(const ::android::graphics::drawable::Drawable& arg0){
    if (!::android::support::v4::graphics::drawable::DrawableCompat::_class) ::android::support::v4::graphics::drawable::DrawableCompat::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unwrap", "(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::jumpToCurrentState(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$BaseDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpToCurrentState", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::setAutoMirrored(const ::android::graphics::drawable::Drawable& arg0, bool arg1) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$BaseDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoMirrored", "(Landroid/graphics/drawable/Drawable;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::isAutoMirrored(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$BaseDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAutoMirrored", "(Landroid/graphics/drawable/Drawable;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::setHotspot(const ::android::graphics::drawable::Drawable& arg0, float arg1, float arg2) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$BaseDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHotspot", "(Landroid/graphics/drawable/Drawable;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::setHotspotBounds(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$BaseDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHotspotBounds", "(Landroid/graphics/drawable/Drawable;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::setTint(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$BaseDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTint", "(Landroid/graphics/drawable/Drawable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::setTintList(const ::android::graphics::drawable::Drawable& arg0, const ::android::content::res::ColorStateList& arg1) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$BaseDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTintList", "(Landroid/graphics/drawable/Drawable;Landroid/content/res/ColorStateList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::setTintMode(const ::android::graphics::drawable::Drawable& arg0, const ::android::graphics::PorterDuff_Mode& arg1) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$BaseDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTintMode", "(Landroid/graphics/drawable/Drawable;Landroid/graphics/PorterDuff$Mode;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::graphics::drawable::Drawable android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::wrap(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$BaseDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "wrap", "(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::setHotspot(const ::android::graphics::drawable::Drawable& arg0, float arg1, float arg2) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$LollipopDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHotspot", "(Landroid/graphics/drawable/Drawable;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::setHotspotBounds(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$LollipopDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHotspotBounds", "(Landroid/graphics/drawable/Drawable;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::setTint(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$LollipopDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTint", "(Landroid/graphics/drawable/Drawable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::setTintList(const ::android::graphics::drawable::Drawable& arg0, const ::android::content::res::ColorStateList& arg1) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$LollipopDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTintList", "(Landroid/graphics/drawable/Drawable;Landroid/content/res/ColorStateList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::setTintMode(const ::android::graphics::drawable::Drawable& arg0, const ::android::graphics::PorterDuff_Mode& arg1) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$LollipopDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTintMode", "(Landroid/graphics/drawable/Drawable;Landroid/graphics/PorterDuff$Mode;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::graphics::drawable::Drawable android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::wrap(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$LollipopDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "wrap", "(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl::setAutoMirrored(const ::android::graphics::drawable::Drawable& arg0, bool arg1) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$KitKatDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoMirrored", "(Landroid/graphics/drawable/Drawable;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl::isAutoMirrored(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$KitKatDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAutoMirrored", "(Landroid/graphics/drawable/Drawable;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl::wrap(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$KitKatDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "wrap", "(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl::jumpToCurrentState(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$HoneycombDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpToCurrentState", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl::wrap(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$HoneycombDrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "wrap", "(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::support::v4::graphics::drawable::DrawableCompat_LollipopMr1DrawableImpl::wrap(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_LollipopMr1DrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_LollipopMr1DrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$LollipopMr1DrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "wrap", "(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::jumpToCurrentState(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$DrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpToCurrentState", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::setAutoMirrored(const ::android::graphics::drawable::Drawable& arg0, bool arg1) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$DrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoMirrored", "(Landroid/graphics/drawable/Drawable;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::isAutoMirrored(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$DrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAutoMirrored", "(Landroid/graphics/drawable/Drawable;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::setHotspot(const ::android::graphics::drawable::Drawable& arg0, float arg1, float arg2) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$DrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHotspot", "(Landroid/graphics/drawable/Drawable;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::setHotspotBounds(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$DrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHotspotBounds", "(Landroid/graphics/drawable/Drawable;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::setTint(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$DrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTint", "(Landroid/graphics/drawable/Drawable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::setTintList(const ::android::graphics::drawable::Drawable& arg0, const ::android::content::res::ColorStateList& arg1) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$DrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTintList", "(Landroid/graphics/drawable/Drawable;Landroid/content/res/ColorStateList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::setTintMode(const ::android::graphics::drawable::Drawable& arg0, const ::android::graphics::PorterDuff_Mode& arg1) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$DrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTintMode", "(Landroid/graphics/drawable/Drawable;Landroid/graphics/PorterDuff$Mode;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::graphics::drawable::Drawable android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::wrap(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class) ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl::_class = java::fetch_class("android/support/v4/graphics/drawable/DrawableCompat$DrawableImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "wrap", "(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory::RoundedBitmapDrawableFactory() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory::_class) ::android::support::v4::graphics::drawable::RoundedBitmapDrawableFactory::_class = java::fetch_class("android/support/v4/graphics/drawable/RoundedBitmapDrawableFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

