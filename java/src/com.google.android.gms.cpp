#include "java-core.hpp"
#include <memory>
#include "com.google.android.gms.R.hpp"

jclass com::google::android::gms::R_string::_class = nullptr;
jclass com::google::android::gms::R_id::_class = nullptr;
jclass com::google::android::gms::R_styleable::_class = nullptr;
jclass com::google::android::gms::R_style::_class = nullptr;
jclass com::google::android::gms::R::_class = nullptr;
jclass com::google::android::gms::R_drawable::_class = nullptr;
jclass com::google::android::gms::R_integer::_class = nullptr;
jclass com::google::android::gms::R_raw::_class = nullptr;
jclass com::google::android::gms::R_color::_class = nullptr;
jclass com::google::android::gms::R_attr::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::google::android::gms::R_string::R_string() : ::java::lang::Object((jobject)0) {
    if (!::com::google::android::gms::R_string::_class) ::com::google::android::gms::R_string::_class = java::fetch_class("com/google/android/gms/R$string");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::google::android::gms::R_id::R_id() : ::java::lang::Object((jobject)0) {
    if (!::com::google::android::gms::R_id::_class) ::com::google::android::gms::R_id::_class = java::fetch_class("com/google/android/gms/R$id");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::google::android::gms::R_styleable::R_styleable() : ::java::lang::Object((jobject)0) {
    if (!::com::google::android::gms::R_styleable::_class) ::com::google::android::gms::R_styleable::_class = java::fetch_class("com/google/android/gms/R$styleable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::google::android::gms::R_style::R_style() : ::java::lang::Object((jobject)0) {
    if (!::com::google::android::gms::R_style::_class) ::com::google::android::gms::R_style::_class = java::fetch_class("com/google/android/gms/R$style");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::google::android::gms::R::R() : ::java::lang::Object((jobject)0) {
    if (!::com::google::android::gms::R::_class) ::com::google::android::gms::R::_class = java::fetch_class("com/google/android/gms/R");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::google::android::gms::R_drawable::R_drawable() : ::java::lang::Object((jobject)0) {
    if (!::com::google::android::gms::R_drawable::_class) ::com::google::android::gms::R_drawable::_class = java::fetch_class("com/google/android/gms/R$drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::google::android::gms::R_integer::R_integer() : ::java::lang::Object((jobject)0) {
    if (!::com::google::android::gms::R_integer::_class) ::com::google::android::gms::R_integer::_class = java::fetch_class("com/google/android/gms/R$integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::google::android::gms::R_raw::R_raw() : ::java::lang::Object((jobject)0) {
    if (!::com::google::android::gms::R_raw::_class) ::com::google::android::gms::R_raw::_class = java::fetch_class("com/google/android/gms/R$raw");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::google::android::gms::R_color::R_color() : ::java::lang::Object((jobject)0) {
    if (!::com::google::android::gms::R_color::_class) ::com::google::android::gms::R_color::_class = java::fetch_class("com/google/android/gms/R$color");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::google::android::gms::R_attr::R_attr() : ::java::lang::Object((jobject)0) {
    if (!::com::google::android::gms::R_attr::_class) ::com::google::android::gms::R_attr::_class = java::fetch_class("com/google/android/gms/R$attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

