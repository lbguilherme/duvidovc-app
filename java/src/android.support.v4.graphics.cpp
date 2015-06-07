#include "java-core.hpp"
#include <memory>
#include "android.graphics.Bitmap.hpp"
#include "android.support.v4.graphics.BitmapCompat.hpp"
#include "android.support.v4.graphics.ColorUtils.hpp"

jclass android::support::v4::graphics::BitmapCompat_KitKatBitmapCompatImpl::_class = nullptr;
jclass android::support::v4::graphics::BitmapCompat_BitmapImpl::_class = nullptr;
jclass android::support::v4::graphics::BitmapCompat_JbMr2BitmapCompatImpl::_class = nullptr;
jclass android::support::v4::graphics::BitmapCompat::_class = nullptr;
jclass android::support::v4::graphics::ColorUtils::_class = nullptr;
jclass android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl::_class = nullptr;
jclass android::support::v4::graphics::BitmapCompat_BaseBitmapImpl::_class = nullptr;

int32_t android::support::v4::graphics::BitmapCompat_KitKatBitmapCompatImpl::getAllocationByteCount(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::graphics::BitmapCompat_KitKatBitmapCompatImpl::_class) ::android::support::v4::graphics::BitmapCompat_KitKatBitmapCompatImpl::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat$KitKatBitmapCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllocationByteCount", "(Landroid/graphics/Bitmap;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::graphics::BitmapCompat_BitmapImpl::hasMipMap(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::graphics::BitmapCompat_BitmapImpl::_class) ::android::support::v4::graphics::BitmapCompat_BitmapImpl::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat$BitmapImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMipMap", "(Landroid/graphics/Bitmap;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::graphics::BitmapCompat_BitmapImpl::setHasMipMap(const ::android::graphics::Bitmap& arg0, bool arg1) const {
    if (!::android::support::v4::graphics::BitmapCompat_BitmapImpl::_class) ::android::support::v4::graphics::BitmapCompat_BitmapImpl::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat$BitmapImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHasMipMap", "(Landroid/graphics/Bitmap;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::graphics::BitmapCompat_BitmapImpl::getAllocationByteCount(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::graphics::BitmapCompat_BitmapImpl::_class) ::android::support::v4::graphics::BitmapCompat_BitmapImpl::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat$BitmapImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllocationByteCount", "(Landroid/graphics/Bitmap;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::graphics::BitmapCompat_JbMr2BitmapCompatImpl::hasMipMap(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::graphics::BitmapCompat_JbMr2BitmapCompatImpl::_class) ::android::support::v4::graphics::BitmapCompat_JbMr2BitmapCompatImpl::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat$JbMr2BitmapCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMipMap", "(Landroid/graphics/Bitmap;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::graphics::BitmapCompat_JbMr2BitmapCompatImpl::setHasMipMap(const ::android::graphics::Bitmap& arg0, bool arg1) const {
    if (!::android::support::v4::graphics::BitmapCompat_JbMr2BitmapCompatImpl::_class) ::android::support::v4::graphics::BitmapCompat_JbMr2BitmapCompatImpl::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat$JbMr2BitmapCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHasMipMap", "(Landroid/graphics/Bitmap;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::graphics::BitmapCompat::BitmapCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::graphics::BitmapCompat::_class) ::android::support::v4::graphics::BitmapCompat::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::support::v4::graphics::BitmapCompat::hasMipMap(const ::android::graphics::Bitmap& arg0){
    if (!::android::support::v4::graphics::BitmapCompat::_class) ::android::support::v4::graphics::BitmapCompat::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hasMipMap", "(Landroid/graphics/Bitmap;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::support::v4::graphics::BitmapCompat::setHasMipMap(const ::android::graphics::Bitmap& arg0, bool arg1){
    if (!::android::support::v4::graphics::BitmapCompat::_class) ::android::support::v4::graphics::BitmapCompat::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setHasMipMap", "(Landroid/graphics/Bitmap;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t android::support::v4::graphics::BitmapCompat::getAllocationByteCount(const ::android::graphics::Bitmap& arg0){
    if (!::android::support::v4::graphics::BitmapCompat::_class) ::android::support::v4::graphics::BitmapCompat::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAllocationByteCount", "(Landroid/graphics/Bitmap;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::graphics::ColorUtils::compositeColors(int32_t arg0, int32_t arg1){
    if (!::android::support::v4::graphics::ColorUtils::_class) ::android::support::v4::graphics::ColorUtils::_class = java::fetch_class("android/support/v4/graphics/ColorUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compositeColors", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

double android::support::v4::graphics::ColorUtils::calculateLuminance(int32_t arg0){
    if (!::android::support::v4::graphics::ColorUtils::_class) ::android::support::v4::graphics::ColorUtils::_class = java::fetch_class("android/support/v4/graphics/ColorUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "calculateLuminance", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double android::support::v4::graphics::ColorUtils::calculateContrast(int32_t arg0, int32_t arg1){
    if (!::android::support::v4::graphics::ColorUtils::_class) ::android::support::v4::graphics::ColorUtils::_class = java::fetch_class("android/support/v4/graphics/ColorUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "calculateContrast", "(II)D");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

int32_t android::support::v4::graphics::ColorUtils::calculateMinimumAlpha(int32_t arg0, int32_t arg1, float arg2){
    if (!::android::support::v4::graphics::ColorUtils::_class) ::android::support::v4::graphics::ColorUtils::_class = java::fetch_class("android/support/v4/graphics/ColorUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "calculateMinimumAlpha", "(IIF)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::graphics::ColorUtils::RGBToHSL(int32_t arg0, int32_t arg1, int32_t arg2, const std::vector< float>& arg3){
    if (!::android::support::v4::graphics::ColorUtils::_class) ::android::support::v4::graphics::ColorUtils::_class = java::fetch_class("android/support/v4/graphics/ColorUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "RGBToHSL", "(III[F)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jfloatArray _arg3 = java::jni->NewFloatArray(arg3.size());
    java::jni->SetFloatArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::graphics::ColorUtils::colorToHSL(int32_t arg0, const std::vector< float>& arg1){
    if (!::android::support::v4::graphics::ColorUtils::_class) ::android::support::v4::graphics::ColorUtils::_class = java::fetch_class("android/support/v4/graphics/ColorUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "colorToHSL", "(I[F)V");
    int32_t _arg0 = arg0;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t android::support::v4::graphics::ColorUtils::HSLToColor(const std::vector< float>& arg0){
    if (!::android::support::v4::graphics::ColorUtils::_class) ::android::support::v4::graphics::ColorUtils::_class = java::fetch_class("android/support/v4/graphics/ColorUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "HSLToColor", "([F)I");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::graphics::ColorUtils::setAlphaComponent(int32_t arg0, int32_t arg1){
    if (!::android::support::v4::graphics::ColorUtils::_class) ::android::support::v4::graphics::ColorUtils::_class = java::fetch_class("android/support/v4/graphics/ColorUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setAlphaComponent", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl::getAllocationByteCount(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl::_class) ::android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat$HcMr1BitmapCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllocationByteCount", "(Landroid/graphics/Bitmap;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::graphics::BitmapCompat_BaseBitmapImpl::hasMipMap(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl::_class) ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat$BaseBitmapImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMipMap", "(Landroid/graphics/Bitmap;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::graphics::BitmapCompat_BaseBitmapImpl::setHasMipMap(const ::android::graphics::Bitmap& arg0, bool arg1) const {
    if (!::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl::_class) ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat$BaseBitmapImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHasMipMap", "(Landroid/graphics/Bitmap;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::graphics::BitmapCompat_BaseBitmapImpl::getAllocationByteCount(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl::_class) ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl::_class = java::fetch_class("android/support/v4/graphics/BitmapCompat$BaseBitmapImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllocationByteCount", "(Landroid/graphics/Bitmap;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

