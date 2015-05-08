#include "java-core.hpp"
#include <memory>
#include "android.support.v4.BuildConfig.hpp"

jclass android::support::v4::BuildConfig::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::BuildConfig::BuildConfig() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::BuildConfig::_class) ::android::support::v4::BuildConfig::_class = java::fetch_class("android/support/v4/BuildConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

