#include "java-core.hpp"
#include <memory>
#include "com.mixpanel.android.R.hpp"

jclass com::mixpanel::android::R_string::_class = nullptr;
jclass com::mixpanel::android::R_id::_class = nullptr;
jclass com::mixpanel::android::R_layout::_class = nullptr;
jclass com::mixpanel::android::R_styleable::_class = nullptr;
jclass com::mixpanel::android::R_style::_class = nullptr;
jclass com::mixpanel::android::R::_class = nullptr;
jclass com::mixpanel::android::R_drawable::_class = nullptr;
jclass com::mixpanel::android::R_integer::_class = nullptr;
jclass com::mixpanel::android::R_raw::_class = nullptr;
jclass com::mixpanel::android::R_color::_class = nullptr;
jclass com::mixpanel::android::R_anim::_class = nullptr;
jclass com::mixpanel::android::R_attr::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::mixpanel::android::R_string::R_string() : ::java::lang::Object((jobject)0) {
    if (!::com::mixpanel::android::R_string::_class) ::com::mixpanel::android::R_string::_class = java::fetch_class("com/mixpanel/android/R$string");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::mixpanel::android::R_id::R_id() : ::java::lang::Object((jobject)0) {
    if (!::com::mixpanel::android::R_id::_class) ::com::mixpanel::android::R_id::_class = java::fetch_class("com/mixpanel/android/R$id");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::mixpanel::android::R_layout::R_layout() : ::java::lang::Object((jobject)0) {
    if (!::com::mixpanel::android::R_layout::_class) ::com::mixpanel::android::R_layout::_class = java::fetch_class("com/mixpanel/android/R$layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::mixpanel::android::R_styleable::R_styleable() : ::java::lang::Object((jobject)0) {
    if (!::com::mixpanel::android::R_styleable::_class) ::com::mixpanel::android::R_styleable::_class = java::fetch_class("com/mixpanel/android/R$styleable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::mixpanel::android::R_style::R_style() : ::java::lang::Object((jobject)0) {
    if (!::com::mixpanel::android::R_style::_class) ::com::mixpanel::android::R_style::_class = java::fetch_class("com/mixpanel/android/R$style");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::mixpanel::android::R::R() : ::java::lang::Object((jobject)0) {
    if (!::com::mixpanel::android::R::_class) ::com::mixpanel::android::R::_class = java::fetch_class("com/mixpanel/android/R");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::mixpanel::android::R_drawable::R_drawable() : ::java::lang::Object((jobject)0) {
    if (!::com::mixpanel::android::R_drawable::_class) ::com::mixpanel::android::R_drawable::_class = java::fetch_class("com/mixpanel/android/R$drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::mixpanel::android::R_integer::R_integer() : ::java::lang::Object((jobject)0) {
    if (!::com::mixpanel::android::R_integer::_class) ::com::mixpanel::android::R_integer::_class = java::fetch_class("com/mixpanel/android/R$integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::mixpanel::android::R_raw::R_raw() : ::java::lang::Object((jobject)0) {
    if (!::com::mixpanel::android::R_raw::_class) ::com::mixpanel::android::R_raw::_class = java::fetch_class("com/mixpanel/android/R$raw");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::mixpanel::android::R_color::R_color() : ::java::lang::Object((jobject)0) {
    if (!::com::mixpanel::android::R_color::_class) ::com::mixpanel::android::R_color::_class = java::fetch_class("com/mixpanel/android/R$color");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::mixpanel::android::R_anim::R_anim() : ::java::lang::Object((jobject)0) {
    if (!::com::mixpanel::android::R_anim::_class) ::com::mixpanel::android::R_anim::_class = java::fetch_class("com/mixpanel/android/R$anim");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::mixpanel::android::R_attr::R_attr() : ::java::lang::Object((jobject)0) {
    if (!::com::mixpanel::android::R_attr::_class) ::com::mixpanel::android::R_attr::_class = java::fetch_class("com/mixpanel/android/R$attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

