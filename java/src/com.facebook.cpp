#include "java-core.hpp"
#include <memory>
#include "com.facebook.R.hpp"

jclass com::facebook::R_string::_class = nullptr;
jclass com::facebook::R_dimen::_class = nullptr;
jclass com::facebook::R_id::_class = nullptr;
jclass com::facebook::R_layout::_class = nullptr;
jclass com::facebook::R_styleable::_class = nullptr;
jclass com::facebook::R_style::_class = nullptr;
jclass com::facebook::R::_class = nullptr;
jclass com::facebook::R_drawable::_class = nullptr;
jclass com::facebook::R_color::_class = nullptr;
jclass com::facebook::R_attr::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_string::R_string() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_string::_class) ::com::facebook::R_string::_class = java::fetch_class("com/facebook/R$string");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_dimen::R_dimen() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_dimen::_class) ::com::facebook::R_dimen::_class = java::fetch_class("com/facebook/R$dimen");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_id::R_id() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_id::_class) ::com::facebook::R_id::_class = java::fetch_class("com/facebook/R$id");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_layout::R_layout() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_layout::_class) ::com::facebook::R_layout::_class = java::fetch_class("com/facebook/R$layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_styleable::R_styleable() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_styleable::_class) ::com::facebook::R_styleable::_class = java::fetch_class("com/facebook/R$styleable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_style::R_style() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_style::_class) ::com::facebook::R_style::_class = java::fetch_class("com/facebook/R$style");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R::R() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R::_class) ::com::facebook::R::_class = java::fetch_class("com/facebook/R");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_drawable::R_drawable() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_drawable::_class) ::com::facebook::R_drawable::_class = java::fetch_class("com/facebook/R$drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_color::R_color() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_color::_class) ::com::facebook::R_color::_class = java::fetch_class("com/facebook/R$color");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_attr::R_attr() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_attr::_class) ::com::facebook::R_attr::_class = java::fetch_class("com/facebook/R$attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

