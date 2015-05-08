#include "java-core.hpp"
#include <memory>
#include "android.content.res.Resources.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.support.v4.content.res.ResourcesCompat.hpp"

jclass android::support::v4::content::res::ResourcesCompat::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::content::res::ResourcesCompat::ResourcesCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::content::res::ResourcesCompat::_class) ::android::support::v4::content::res::ResourcesCompat::_class = java::fetch_class("android/support/v4/content/res/ResourcesCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::graphics::drawable::Drawable android::support::v4::content::res::ResourcesCompat::getDrawable(const ::android::content::res::Resources& arg0, int32_t arg1, const ::android::content::res::Resources_Theme& arg2){
    if (!::android::support::v4::content::res::ResourcesCompat::_class) ::android::support::v4::content::res::ResourcesCompat::_class = java::fetch_class("android/support/v4/content/res/ResourcesCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDrawable", "(Landroid/content/res/Resources;ILandroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::support::v4::content::res::ResourcesCompat::getDrawableForDensity(const ::android::content::res::Resources& arg0, int32_t arg1, int32_t arg2, const ::android::content::res::Resources_Theme& arg3){
    if (!::android::support::v4::content::res::ResourcesCompat::_class) ::android::support::v4::content::res::ResourcesCompat::_class = java::fetch_class("android/support/v4/content/res/ResourcesCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDrawableForDensity", "(Landroid/content/res/Resources;IILandroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

