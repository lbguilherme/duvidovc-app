#include "java-core.hpp"
#include <memory>
#include "android.Manifest.hpp"
#include "android.R.hpp"

jclass android::R_dimen::_class = nullptr;
jclass android::R_fraction::_class = nullptr;
jclass android::R::_class = nullptr;
jclass android::R_animator::_class = nullptr;
jclass android::R_bool::_class = nullptr;
jclass android::R_integer::_class = nullptr;
jclass android::R_array::_class = nullptr;
jclass android::R_string::_class = nullptr;
jclass android::R_plurals::_class = nullptr;
jclass android::Manifest::_class = nullptr;
jclass android::Manifest_permission_group::_class = nullptr;
jclass android::R_id::_class = nullptr;
jclass android::R_color::_class = nullptr;
jclass android::R_drawable::_class = nullptr;
jclass android::R_attr::_class = nullptr;
jclass android::R_interpolator::_class = nullptr;
jclass android::R_xml::_class = nullptr;
jclass android::R_raw::_class = nullptr;
jclass android::R_style::_class = nullptr;
jclass android::R_layout::_class = nullptr;
jclass android::Manifest_permission::_class = nullptr;
jclass android::R_menu::_class = nullptr;
jclass android::R_mipmap::_class = nullptr;
jclass android::R_anim::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_dimen::R_dimen() : ::java::lang::Object((jobject)0) {
    if (!::android::R_dimen::_class) ::android::R_dimen::_class = java::fetch_class("android/R$dimen");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_fraction::R_fraction() : ::java::lang::Object((jobject)0) {
    if (!::android::R_fraction::_class) ::android::R_fraction::_class = java::fetch_class("android/R$fraction");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R::R() : ::java::lang::Object((jobject)0) {
    if (!::android::R::_class) ::android::R::_class = java::fetch_class("android/R");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_animator::R_animator() : ::java::lang::Object((jobject)0) {
    if (!::android::R_animator::_class) ::android::R_animator::_class = java::fetch_class("android/R$animator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_bool::R_bool() : ::java::lang::Object((jobject)0) {
    if (!::android::R_bool::_class) ::android::R_bool::_class = java::fetch_class("android/R$bool");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_integer::R_integer() : ::java::lang::Object((jobject)0) {
    if (!::android::R_integer::_class) ::android::R_integer::_class = java::fetch_class("android/R$integer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_array::R_array() : ::java::lang::Object((jobject)0) {
    if (!::android::R_array::_class) ::android::R_array::_class = java::fetch_class("android/R$array");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_string::R_string() : ::java::lang::Object((jobject)0) {
    if (!::android::R_string::_class) ::android::R_string::_class = java::fetch_class("android/R$string");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_plurals::R_plurals() : ::java::lang::Object((jobject)0) {
    if (!::android::R_plurals::_class) ::android::R_plurals::_class = java::fetch_class("android/R$plurals");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::Manifest::Manifest() : ::java::lang::Object((jobject)0) {
    if (!::android::Manifest::_class) ::android::Manifest::_class = java::fetch_class("android/Manifest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::Manifest_permission_group::Manifest_permission_group() : ::java::lang::Object((jobject)0) {
    if (!::android::Manifest_permission_group::_class) ::android::Manifest_permission_group::_class = java::fetch_class("android/Manifest$permission_group");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_id::R_id() : ::java::lang::Object((jobject)0) {
    if (!::android::R_id::_class) ::android::R_id::_class = java::fetch_class("android/R$id");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_color::R_color() : ::java::lang::Object((jobject)0) {
    if (!::android::R_color::_class) ::android::R_color::_class = java::fetch_class("android/R$color");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_drawable::R_drawable() : ::java::lang::Object((jobject)0) {
    if (!::android::R_drawable::_class) ::android::R_drawable::_class = java::fetch_class("android/R$drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_attr::R_attr() : ::java::lang::Object((jobject)0) {
    if (!::android::R_attr::_class) ::android::R_attr::_class = java::fetch_class("android/R$attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_interpolator::R_interpolator() : ::java::lang::Object((jobject)0) {
    if (!::android::R_interpolator::_class) ::android::R_interpolator::_class = java::fetch_class("android/R$interpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_xml::R_xml() : ::java::lang::Object((jobject)0) {
    if (!::android::R_xml::_class) ::android::R_xml::_class = java::fetch_class("android/R$xml");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_raw::R_raw() : ::java::lang::Object((jobject)0) {
    if (!::android::R_raw::_class) ::android::R_raw::_class = java::fetch_class("android/R$raw");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_style::R_style() : ::java::lang::Object((jobject)0) {
    if (!::android::R_style::_class) ::android::R_style::_class = java::fetch_class("android/R$style");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_layout::R_layout() : ::java::lang::Object((jobject)0) {
    if (!::android::R_layout::_class) ::android::R_layout::_class = java::fetch_class("android/R$layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::Manifest_permission::Manifest_permission() : ::java::lang::Object((jobject)0) {
    if (!::android::Manifest_permission::_class) ::android::Manifest_permission::_class = java::fetch_class("android/Manifest$permission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_menu::R_menu() : ::java::lang::Object((jobject)0) {
    if (!::android::R_menu::_class) ::android::R_menu::_class = java::fetch_class("android/R$menu");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_mipmap::R_mipmap() : ::java::lang::Object((jobject)0) {
    if (!::android::R_mipmap::_class) ::android::R_mipmap::_class = java::fetch_class("android/R$mipmap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::R_anim::R_anim() : ::java::lang::Object((jobject)0) {
    if (!::android::R_anim::_class) ::android::R_anim::_class = java::fetch_class("android/R$anim");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

