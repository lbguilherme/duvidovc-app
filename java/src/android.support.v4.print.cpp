#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.net.Uri.hpp"
#include "android.support.v4.print.PrintHelper.hpp"
#include "java.lang.String.hpp"

jclass android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class = nullptr;
jclass android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class = nullptr;
jclass android::support::v4::print::PrintHelper_OnPrintFinishCallback::_class = nullptr;
jclass android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class = nullptr;
jclass android::support::v4::print::PrintHelper::_class = nullptr;

void android::support::v4::print::PrintHelper_PrintHelperStubImpl::setScaleMode(int32_t arg0) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::print::PrintHelper_PrintHelperStubImpl::getColorMode() const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColorMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::print::PrintHelper_PrintHelperStubImpl::setColorMode(int32_t arg0) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::print::PrintHelper_PrintHelperStubImpl::setOrientation(int32_t arg0) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrientation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::print::PrintHelper_PrintHelperStubImpl::getOrientation() const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrientation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::print::PrintHelper_PrintHelperStubImpl::getScaleMode() const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::print::PrintHelper_PrintHelperStubImpl::printBitmap(const ::java::lang::String& arg0, const ::android::graphics::Bitmap& arg1, const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback& arg2) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "printBitmap", "(Ljava/lang/String;Landroid/graphics/Bitmap;Landroid/support/v4/print/PrintHelper$OnPrintFinishCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::print::PrintHelper_PrintHelperStubImpl::printBitmap(const ::java::lang::String& arg0, const ::android::net::Uri& arg1, const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback& arg2) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperStubImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "printBitmap", "(Ljava/lang/String;Landroid/net/Uri;Landroid/support/v4/print/PrintHelper$OnPrintFinishCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::print::PrintHelper_PrintHelperVersionImpl::setScaleMode(int32_t arg0) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::print::PrintHelper_PrintHelperVersionImpl::getScaleMode() const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::print::PrintHelper_PrintHelperVersionImpl::setColorMode(int32_t arg0) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::print::PrintHelper_PrintHelperVersionImpl::getColorMode() const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColorMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::print::PrintHelper_PrintHelperVersionImpl::setOrientation(int32_t arg0) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrientation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::print::PrintHelper_PrintHelperVersionImpl::getOrientation() const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrientation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::print::PrintHelper_PrintHelperVersionImpl::printBitmap(const ::java::lang::String& arg0, const ::android::graphics::Bitmap& arg1, const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback& arg2) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "printBitmap", "(Ljava/lang/String;Landroid/graphics/Bitmap;Landroid/support/v4/print/PrintHelper$OnPrintFinishCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::print::PrintHelper_PrintHelperVersionImpl::printBitmap(const ::java::lang::String& arg0, const ::android::net::Uri& arg1, const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback& arg2) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperVersionImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "printBitmap", "(Ljava/lang/String;Landroid/net/Uri;Landroid/support/v4/print/PrintHelper$OnPrintFinishCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::print::PrintHelper_OnPrintFinishCallback::onFinish() const {
    if (!::android::support::v4::print::PrintHelper_OnPrintFinishCallback::_class) ::android::support::v4::print::PrintHelper_OnPrintFinishCallback::_class = java::fetch_class("android/support/v4/print/PrintHelper$OnPrintFinishCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFinish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::setScaleMode(int32_t arg0) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperKitkatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::getScaleMode() const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperKitkatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::setColorMode(int32_t arg0) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperKitkatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::getColorMode() const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperKitkatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColorMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::setOrientation(int32_t arg0) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperKitkatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrientation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::getOrientation() const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperKitkatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrientation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::printBitmap(const ::java::lang::String& arg0, const ::android::graphics::Bitmap& arg1, const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback& arg2) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperKitkatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "printBitmap", "(Ljava/lang/String;Landroid/graphics/Bitmap;Landroid/support/v4/print/PrintHelper$OnPrintFinishCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::printBitmap(const ::java::lang::String& arg0, const ::android::net::Uri& arg1, const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback& arg2) const {
    if (!::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class) ::android::support::v4::print::PrintHelper_PrintHelperKitkatImpl::_class = java::fetch_class("android/support/v4/print/PrintHelper$PrintHelperKitkatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "printBitmap", "(Ljava/lang/String;Landroid/net/Uri;Landroid/support/v4/print/PrintHelper$OnPrintFinishCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::print::PrintHelper::systemSupportsPrint(){
    if (!::android::support::v4::print::PrintHelper::_class) ::android::support::v4::print::PrintHelper::_class = java::fetch_class("android/support/v4/print/PrintHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "systemSupportsPrint", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::print::PrintHelper::PrintHelper(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::print::PrintHelper::_class) ::android::support::v4::print::PrintHelper::_class = java::fetch_class("android/support/v4/print/PrintHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::print::PrintHelper::setScaleMode(int32_t arg0) const {
    if (!::android::support::v4::print::PrintHelper::_class) ::android::support::v4::print::PrintHelper::_class = java::fetch_class("android/support/v4/print/PrintHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::print::PrintHelper::getScaleMode() const {
    if (!::android::support::v4::print::PrintHelper::_class) ::android::support::v4::print::PrintHelper::_class = java::fetch_class("android/support/v4/print/PrintHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::print::PrintHelper::setColorMode(int32_t arg0) const {
    if (!::android::support::v4::print::PrintHelper::_class) ::android::support::v4::print::PrintHelper::_class = java::fetch_class("android/support/v4/print/PrintHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::print::PrintHelper::getColorMode() const {
    if (!::android::support::v4::print::PrintHelper::_class) ::android::support::v4::print::PrintHelper::_class = java::fetch_class("android/support/v4/print/PrintHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColorMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::print::PrintHelper::setOrientation(int32_t arg0) const {
    if (!::android::support::v4::print::PrintHelper::_class) ::android::support::v4::print::PrintHelper::_class = java::fetch_class("android/support/v4/print/PrintHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrientation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::print::PrintHelper::getOrientation() const {
    if (!::android::support::v4::print::PrintHelper::_class) ::android::support::v4::print::PrintHelper::_class = java::fetch_class("android/support/v4/print/PrintHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrientation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::print::PrintHelper::printBitmap(const ::java::lang::String& arg0, const ::android::graphics::Bitmap& arg1) const {
    if (!::android::support::v4::print::PrintHelper::_class) ::android::support::v4::print::PrintHelper::_class = java::fetch_class("android/support/v4/print/PrintHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "printBitmap", "(Ljava/lang/String;Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::print::PrintHelper::printBitmap(const ::java::lang::String& arg0, const ::android::graphics::Bitmap& arg1, const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback& arg2) const {
    if (!::android::support::v4::print::PrintHelper::_class) ::android::support::v4::print::PrintHelper::_class = java::fetch_class("android/support/v4/print/PrintHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "printBitmap", "(Ljava/lang/String;Landroid/graphics/Bitmap;Landroid/support/v4/print/PrintHelper$OnPrintFinishCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::print::PrintHelper::printBitmap(const ::java::lang::String& arg0, const ::android::net::Uri& arg1) const {
    if (!::android::support::v4::print::PrintHelper::_class) ::android::support::v4::print::PrintHelper::_class = java::fetch_class("android/support/v4/print/PrintHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "printBitmap", "(Ljava/lang/String;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::print::PrintHelper::printBitmap(const ::java::lang::String& arg0, const ::android::net::Uri& arg1, const ::android::support::v4::print::PrintHelper_OnPrintFinishCallback& arg2) const {
    if (!::android::support::v4::print::PrintHelper::_class) ::android::support::v4::print::PrintHelper::_class = java::fetch_class("android/support/v4/print/PrintHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "printBitmap", "(Ljava/lang/String;Landroid/net/Uri;Landroid/support/v4/print/PrintHelper$OnPrintFinishCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

