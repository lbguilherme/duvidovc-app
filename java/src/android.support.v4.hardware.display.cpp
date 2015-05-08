#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.support.v4.hardware.display.DisplayManagerCompat.hpp"
#include "android.view.Display.hpp"
#include "java.lang.String.hpp"

jclass android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::_class = nullptr;
jclass android::support::v4::hardware::display::DisplayManagerCompat::_class = nullptr;
jclass android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::DisplayManagerCompat_LegacyImpl(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::hardware::display::DisplayManagerCompat((jobject)0) {
    if (!::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::_class) ::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::_class = java::fetch_class("android/support/v4/hardware/display/DisplayManagerCompat$LegacyImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::view::Display android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::getDisplay(int32_t arg0) const {
    if (!::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::_class) ::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::_class = java::fetch_class("android/support/v4/hardware/display/DisplayManagerCompat$LegacyImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplay", "(I)Landroid/view/Display;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::Display _ret(ret);
    return _ret;
}

std::vector< ::android::view::Display> android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::getDisplays() const {
    if (!::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::_class) ::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::_class = java::fetch_class("android/support/v4/hardware/display/DisplayManagerCompat$LegacyImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplays", "()[Landroid/view/Display;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::Display> _ret(rets, ::android::view::Display((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::Display retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::android::view::Display> android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::getDisplays(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::_class) ::android::support::v4::hardware::display::DisplayManagerCompat_LegacyImpl::_class = java::fetch_class("android/support/v4/hardware/display/DisplayManagerCompat$LegacyImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplays", "(Ljava/lang/String;)[Landroid/view/Display;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::Display> _ret(rets, ::android::view::Display((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::Display retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::support::v4::hardware::display::DisplayManagerCompat android::support::v4::hardware::display::DisplayManagerCompat::getInstance(const ::android::content::Context& arg0){
    if (!::android::support::v4::hardware::display::DisplayManagerCompat::_class) ::android::support::v4::hardware::display::DisplayManagerCompat::_class = java::fetch_class("android/support/v4/hardware/display/DisplayManagerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Landroid/content/Context;)Landroid/support/v4/hardware/display/DisplayManagerCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::hardware::display::DisplayManagerCompat _ret(ret);
    return _ret;
}

::android::view::Display android::support::v4::hardware::display::DisplayManagerCompat::getDisplay(int32_t arg0) const {
    if (!::android::support::v4::hardware::display::DisplayManagerCompat::_class) ::android::support::v4::hardware::display::DisplayManagerCompat::_class = java::fetch_class("android/support/v4/hardware/display/DisplayManagerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplay", "(I)Landroid/view/Display;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::Display _ret(ret);
    return _ret;
}

std::vector< ::android::view::Display> android::support::v4::hardware::display::DisplayManagerCompat::getDisplays() const {
    if (!::android::support::v4::hardware::display::DisplayManagerCompat::_class) ::android::support::v4::hardware::display::DisplayManagerCompat::_class = java::fetch_class("android/support/v4/hardware/display/DisplayManagerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplays", "()[Landroid/view/Display;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::Display> _ret(rets, ::android::view::Display((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::Display retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::android::view::Display> android::support::v4::hardware::display::DisplayManagerCompat::getDisplays(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::hardware::display::DisplayManagerCompat::_class) ::android::support::v4::hardware::display::DisplayManagerCompat::_class = java::fetch_class("android/support/v4/hardware/display/DisplayManagerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplays", "(Ljava/lang/String;)[Landroid/view/Display;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::Display> _ret(rets, ::android::view::Display((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::Display retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::DisplayManagerCompat_JellybeanMr1Impl(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::hardware::display::DisplayManagerCompat((jobject)0) {
    if (!::android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::_class) ::android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::_class = java::fetch_class("android/support/v4/hardware/display/DisplayManagerCompat$JellybeanMr1Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::view::Display android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::getDisplay(int32_t arg0) const {
    if (!::android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::_class) ::android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::_class = java::fetch_class("android/support/v4/hardware/display/DisplayManagerCompat$JellybeanMr1Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplay", "(I)Landroid/view/Display;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::Display _ret(ret);
    return _ret;
}

std::vector< ::android::view::Display> android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::getDisplays() const {
    if (!::android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::_class) ::android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::_class = java::fetch_class("android/support/v4/hardware/display/DisplayManagerCompat$JellybeanMr1Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplays", "()[Landroid/view/Display;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::Display> _ret(rets, ::android::view::Display((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::Display retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::android::view::Display> android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::getDisplays(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::_class) ::android::support::v4::hardware::display::DisplayManagerCompat_JellybeanMr1Impl::_class = java::fetch_class("android/support/v4/hardware/display/DisplayManagerCompat$JellybeanMr1Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplays", "(Ljava/lang/String;)[Landroid/view/Display;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::Display> _ret(rets, ::android::view::Display((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::Display retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

