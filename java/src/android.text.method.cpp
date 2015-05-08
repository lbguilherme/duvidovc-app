#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.graphics.Rect.hpp"
#include "android.text.Editable.hpp"
#include "android.text.Layout.hpp"
#include "android.text.Spannable.hpp"
#include "android.text.Spanned.hpp"
#include "android.text.method.ArrowKeyMovementMethod.hpp"
#include "android.text.method.BaseKeyListener.hpp"
#include "android.text.method.BaseMovementMethod.hpp"
#include "android.text.method.CharacterPickerDialog.hpp"
#include "android.text.method.DateKeyListener.hpp"
#include "android.text.method.DateTimeKeyListener.hpp"
#include "android.text.method.DialerKeyListener.hpp"
#include "android.text.method.DigitsKeyListener.hpp"
#include "android.text.method.HideReturnsTransformationMethod.hpp"
#include "android.text.method.KeyListener.hpp"
#include "android.text.method.LinkMovementMethod.hpp"
#include "android.text.method.MetaKeyKeyListener.hpp"
#include "android.text.method.MovementMethod.hpp"
#include "android.text.method.MultiTapKeyListener.hpp"
#include "android.text.method.NumberKeyListener.hpp"
#include "android.text.method.PasswordTransformationMethod.hpp"
#include "android.text.method.QwertyKeyListener.hpp"
#include "android.text.method.ReplacementTransformationMethod.hpp"
#include "android.text.method.ScrollingMovementMethod.hpp"
#include "android.text.method.SingleLineTransformationMethod.hpp"
#include "android.text.method.TextKeyListener.hpp"
#include "android.text.method.TimeKeyListener.hpp"
#include "android.text.method.Touch.hpp"
#include "android.text.method.TransformationMethod.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.view.MotionEvent.hpp"
#include "android.view.View.hpp"
#include "android.widget.AdapterView.hpp"
#include "android.widget.TextView.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"

jclass android::text::method::CharacterPickerDialog::_class = nullptr;
jclass android::text::method::DateTimeKeyListener::_class = nullptr;
jclass android::text::method::DigitsKeyListener::_class = nullptr;
jclass android::text::method::KeyListener::_class = nullptr;
jclass android::text::method::NumberKeyListener::_class = nullptr;
jclass android::text::method::LinkMovementMethod::_class = nullptr;
jclass android::text::method::ReplacementTransformationMethod::_class = nullptr;
jclass android::text::method::PasswordTransformationMethod::_class = nullptr;
jclass android::text::method::TextKeyListener::_class = nullptr;
jclass android::text::method::MetaKeyKeyListener::_class = nullptr;
jclass android::text::method::MultiTapKeyListener::_class = nullptr;
jclass android::text::method::QwertyKeyListener::_class = nullptr;
jclass android::text::method::TransformationMethod::_class = nullptr;
jclass android::text::method::ArrowKeyMovementMethod::_class = nullptr;
jclass android::text::method::DialerKeyListener::_class = nullptr;
jclass android::text::method::Touch::_class = nullptr;
jclass android::text::method::DateKeyListener::_class = nullptr;
jclass android::text::method::ScrollingMovementMethod::_class = nullptr;
jclass android::text::method::BaseMovementMethod::_class = nullptr;
jclass android::text::method::MovementMethod::_class = nullptr;
jclass android::text::method::TimeKeyListener::_class = nullptr;
jclass android::text::method::SingleLineTransformationMethod::_class = nullptr;
jclass android::text::method::HideReturnsTransformationMethod::_class = nullptr;
jclass android::text::method::BaseKeyListener::_class = nullptr;
jclass android::text::method::TextKeyListener_Capitalize::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::CharacterPickerDialog::CharacterPickerDialog(const ::android::content::Context& arg0, const ::android::view::View& arg1, const ::android::text::Editable& arg2, const ::java::lang::String& arg3, bool arg4) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnClickListener((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::AdapterView_OnItemClickListener((jobject)0) {
    if (!::android::text::method::CharacterPickerDialog::_class) ::android::text::method::CharacterPickerDialog::_class = java::fetch_class("android/text/method/CharacterPickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/View;Landroid/text/Editable;Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    bool _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

void android::text::method::CharacterPickerDialog::onItemClick(const ::android::widget::AdapterView& arg0, const ::android::view::View& arg1, int32_t arg2, int64_t arg3) const {
    if (!::android::text::method::CharacterPickerDialog::_class) ::android::text::method::CharacterPickerDialog::_class = java::fetch_class("android/text/method/CharacterPickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onItemClick", "(Landroid/widget/AdapterView;Landroid/view/View;IJ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::method::CharacterPickerDialog::onClick(const ::android::view::View& arg0) const {
    if (!::android::text::method::CharacterPickerDialog::_class) ::android::text::method::CharacterPickerDialog::_class = java::fetch_class("android/text/method/CharacterPickerDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::DateTimeKeyListener::DateTimeKeyListener() : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0), ::android::text::method::NumberKeyListener((jobject)0) {
    if (!::android::text::method::DateTimeKeyListener::_class) ::android::text::method::DateTimeKeyListener::_class = java::fetch_class("android/text/method/DateTimeKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::text::method::DateTimeKeyListener::getInputType() const {
    if (!::android::text::method::DateTimeKeyListener::_class) ::android::text::method::DateTimeKeyListener::_class = java::fetch_class("android/text/method/DateTimeKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::text::method::DateTimeKeyListener android::text::method::DateTimeKeyListener::getInstance(){
    if (!::android::text::method::DateTimeKeyListener::_class) ::android::text::method::DateTimeKeyListener::_class = java::fetch_class("android/text/method/DateTimeKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/method/DateTimeKeyListener;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::DateTimeKeyListener _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::DigitsKeyListener::DigitsKeyListener() : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0), ::android::text::method::NumberKeyListener((jobject)0) {
    if (!::android::text::method::DigitsKeyListener::_class) ::android::text::method::DigitsKeyListener::_class = java::fetch_class("android/text/method/DigitsKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::DigitsKeyListener::DigitsKeyListener(bool arg0, bool arg1) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0), ::android::text::method::NumberKeyListener((jobject)0) {
    if (!::android::text::method::DigitsKeyListener::_class) ::android::text::method::DigitsKeyListener::_class = java::fetch_class("android/text/method/DigitsKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ZZ)V");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::text::method::DigitsKeyListener android::text::method::DigitsKeyListener::getInstance(){
    if (!::android::text::method::DigitsKeyListener::_class) ::android::text::method::DigitsKeyListener::_class = java::fetch_class("android/text/method/DigitsKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/method/DigitsKeyListener;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::DigitsKeyListener _ret(ret);
    return _ret;
}

::android::text::method::DigitsKeyListener android::text::method::DigitsKeyListener::getInstance(bool arg0, bool arg1){
    if (!::android::text::method::DigitsKeyListener::_class) ::android::text::method::DigitsKeyListener::_class = java::fetch_class("android/text/method/DigitsKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(ZZ)Landroid/text/method/DigitsKeyListener;");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::text::method::DigitsKeyListener _ret(ret);
    return _ret;
}

::android::text::method::DigitsKeyListener android::text::method::DigitsKeyListener::getInstance(const ::java::lang::String& arg0){
    if (!::android::text::method::DigitsKeyListener::_class) ::android::text::method::DigitsKeyListener::_class = java::fetch_class("android/text/method/DigitsKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Landroid/text/method/DigitsKeyListener;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::text::method::DigitsKeyListener _ret(ret);
    return _ret;
}

int32_t android::text::method::DigitsKeyListener::getInputType() const {
    if (!::android::text::method::DigitsKeyListener::_class) ::android::text::method::DigitsKeyListener::_class = java::fetch_class("android/text/method/DigitsKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::text::method::DigitsKeyListener::filter(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, const ::android::text::Spanned& arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::text::method::DigitsKeyListener::_class) ::android::text::method::DigitsKeyListener::_class = java::fetch_class("android/text/method/DigitsKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "filter", "(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::text::method::KeyListener::getInputType() const {
    if (!::android::text::method::KeyListener::_class) ::android::text::method::KeyListener::_class = java::fetch_class("android/text/method/KeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::text::method::KeyListener::onKeyDown(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::KeyListener::_class) ::android::text::method::KeyListener::_class = java::fetch_class("android/text/method/KeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::method::KeyListener::onKeyUp(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::KeyListener::_class) ::android::text::method::KeyListener::_class = java::fetch_class("android/text/method/KeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::method::KeyListener::onKeyOther(const ::android::view::View& arg0, const ::android::text::Editable& arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::text::method::KeyListener::_class) ::android::text::method::KeyListener::_class = java::fetch_class("android/text/method/KeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyOther", "(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::text::method::KeyListener::clearMetaKeyState(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2) const {
    if (!::android::text::method::KeyListener::_class) ::android::text::method::KeyListener::_class = java::fetch_class("android/text/method/KeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearMetaKeyState", "(Landroid/view/View;Landroid/text/Editable;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::NumberKeyListener::NumberKeyListener() : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {
    if (!::android::text::method::NumberKeyListener::_class) ::android::text::method::NumberKeyListener::_class = java::fetch_class("android/text/method/NumberKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::text::method::NumberKeyListener::filter(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, const ::android::text::Spanned& arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::text::method::NumberKeyListener::_class) ::android::text::method::NumberKeyListener::_class = java::fetch_class("android/text/method/NumberKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "filter", "(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

bool android::text::method::NumberKeyListener::onKeyDown(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::NumberKeyListener::_class) ::android::text::method::NumberKeyListener::_class = java::fetch_class("android/text/method/NumberKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::LinkMovementMethod::LinkMovementMethod() : ::java::lang::Object((jobject)0), ::android::text::method::BaseMovementMethod((jobject)0), ::android::text::method::MovementMethod((jobject)0), ::android::text::method::ScrollingMovementMethod((jobject)0) {
    if (!::android::text::method::LinkMovementMethod::_class) ::android::text::method::LinkMovementMethod::_class = java::fetch_class("android/text/method/LinkMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::text::method::LinkMovementMethod::onTouchEvent(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, const ::android::view::MotionEvent& arg2) const {
    if (!::android::text::method::LinkMovementMethod::_class) ::android::text::method::LinkMovementMethod::_class = java::fetch_class("android/text/method/LinkMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::text::method::LinkMovementMethod::initialize(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1) const {
    if (!::android::text::method::LinkMovementMethod::_class) ::android::text::method::LinkMovementMethod::_class = java::fetch_class("android/text/method/LinkMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(Landroid/widget/TextView;Landroid/text/Spannable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::text::method::LinkMovementMethod::onTakeFocus(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, int32_t arg2) const {
    if (!::android::text::method::LinkMovementMethod::_class) ::android::text::method::LinkMovementMethod::_class = java::fetch_class("android/text/method/LinkMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTakeFocus", "(Landroid/widget/TextView;Landroid/text/Spannable;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::text::method::MovementMethod android::text::method::LinkMovementMethod::getInstance(){
    if (!::android::text::method::LinkMovementMethod::_class) ::android::text::method::LinkMovementMethod::_class = java::fetch_class("android/text/method/LinkMovementMethod");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/method/MovementMethod;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::MovementMethod _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::ReplacementTransformationMethod::ReplacementTransformationMethod() : ::java::lang::Object((jobject)0), ::android::text::method::TransformationMethod((jobject)0) {
    if (!::android::text::method::ReplacementTransformationMethod::_class) ::android::text::method::ReplacementTransformationMethod::_class = java::fetch_class("android/text/method/ReplacementTransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::text::method::ReplacementTransformationMethod::getTransformation(const ::java::lang::CharSequence& arg0, const ::android::view::View& arg1) const {
    if (!::android::text::method::ReplacementTransformationMethod::_class) ::android::text::method::ReplacementTransformationMethod::_class = java::fetch_class("android/text/method/ReplacementTransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransformation", "(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::text::method::ReplacementTransformationMethod::onFocusChanged(const ::android::view::View& arg0, const ::java::lang::CharSequence& arg1, bool arg2, int32_t arg3, const ::android::graphics::Rect& arg4) const {
    if (!::android::text::method::ReplacementTransformationMethod::_class) ::android::text::method::ReplacementTransformationMethod::_class = java::fetch_class("android/text/method/ReplacementTransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFocusChanged", "(Landroid/view/View;Ljava/lang/CharSequence;ZILandroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::PasswordTransformationMethod::PasswordTransformationMethod() : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::text::method::TransformationMethod((jobject)0) {
    if (!::android::text::method::PasswordTransformationMethod::_class) ::android::text::method::PasswordTransformationMethod::_class = java::fetch_class("android/text/method/PasswordTransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::text::method::PasswordTransformationMethod::getTransformation(const ::java::lang::CharSequence& arg0, const ::android::view::View& arg1) const {
    if (!::android::text::method::PasswordTransformationMethod::_class) ::android::text::method::PasswordTransformationMethod::_class = java::fetch_class("android/text/method/PasswordTransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransformation", "(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::text::method::PasswordTransformationMethod android::text::method::PasswordTransformationMethod::getInstance(){
    if (!::android::text::method::PasswordTransformationMethod::_class) ::android::text::method::PasswordTransformationMethod::_class = java::fetch_class("android/text/method/PasswordTransformationMethod");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/method/PasswordTransformationMethod;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::PasswordTransformationMethod _ret(ret);
    return _ret;
}

void android::text::method::PasswordTransformationMethod::beforeTextChanged(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::method::PasswordTransformationMethod::_class) ::android::text::method::PasswordTransformationMethod::_class = java::fetch_class("android/text/method/PasswordTransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "beforeTextChanged", "(Ljava/lang/CharSequence;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::method::PasswordTransformationMethod::onTextChanged(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::method::PasswordTransformationMethod::_class) ::android::text::method::PasswordTransformationMethod::_class = java::fetch_class("android/text/method/PasswordTransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTextChanged", "(Ljava/lang/CharSequence;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::method::PasswordTransformationMethod::afterTextChanged(const ::android::text::Editable& arg0) const {
    if (!::android::text::method::PasswordTransformationMethod::_class) ::android::text::method::PasswordTransformationMethod::_class = java::fetch_class("android/text/method/PasswordTransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "afterTextChanged", "(Landroid/text/Editable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::method::PasswordTransformationMethod::onFocusChanged(const ::android::view::View& arg0, const ::java::lang::CharSequence& arg1, bool arg2, int32_t arg3, const ::android::graphics::Rect& arg4) const {
    if (!::android::text::method::PasswordTransformationMethod::_class) ::android::text::method::PasswordTransformationMethod::_class = java::fetch_class("android/text/method/PasswordTransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFocusChanged", "(Landroid/view/View;Ljava/lang/CharSequence;ZILandroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::TextKeyListener::TextKeyListener(const ::android::text::method::TextKeyListener_Capitalize& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::SpanWatcher((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/text/method/TextKeyListener$Capitalize;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::text::method::TextKeyListener android::text::method::TextKeyListener::getInstance(bool arg0, const ::android::text::method::TextKeyListener_Capitalize& arg1){
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/TextKeyListener;");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::text::method::TextKeyListener _ret(ret);
    return _ret;
}

::android::text::method::TextKeyListener android::text::method::TextKeyListener::getInstance(){
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/method/TextKeyListener;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::TextKeyListener _ret(ret);
    return _ret;
}

bool android::text::method::TextKeyListener::shouldCap(const ::android::text::method::TextKeyListener_Capitalize& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2){
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "shouldCap", "(Landroid/text/method/TextKeyListener$Capitalize;Ljava/lang/CharSequence;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::text::method::TextKeyListener::getInputType() const {
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::text::method::TextKeyListener::onKeyDown(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::method::TextKeyListener::onKeyUp(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::method::TextKeyListener::onKeyOther(const ::android::view::View& arg0, const ::android::text::Editable& arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyOther", "(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::text::method::TextKeyListener::clear(const ::android::text::Editable& arg0){
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clear", "(Landroid/text/Editable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::text::method::TextKeyListener::onSpanAdded(const ::android::text::Spannable& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSpanAdded", "(Landroid/text/Spannable;Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::method::TextKeyListener::onSpanRemoved(const ::android::text::Spannable& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSpanRemoved", "(Landroid/text/Spannable;Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::method::TextKeyListener::onSpanChanged(const ::android::text::Spannable& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSpanChanged", "(Landroid/text/Spannable;Ljava/lang/Object;IIII)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::text::method::TextKeyListener::release() const {
    if (!::android::text::method::TextKeyListener::_class) ::android::text::method::TextKeyListener::_class = java::fetch_class("android/text/method/TextKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::MetaKeyKeyListener::MetaKeyKeyListener() : ::java::lang::Object((jobject)0) {
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::text::method::MetaKeyKeyListener::resetMetaState(const ::android::text::Spannable& arg0){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetMetaState", "(Landroid/text/Spannable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

int32_t android::text::method::MetaKeyKeyListener::getMetaState(const ::java::lang::CharSequence& arg0){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMetaState", "(Ljava/lang/CharSequence;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::text::method::MetaKeyKeyListener::getMetaState(const ::java::lang::CharSequence& arg0, int32_t arg1){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMetaState", "(Ljava/lang/CharSequence;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

void android::text::method::MetaKeyKeyListener::adjustMetaAfterKeypress(const ::android::text::Spannable& arg0){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "adjustMetaAfterKeypress", "(Landroid/text/Spannable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool android::text::method::MetaKeyKeyListener::isMetaTracker(const ::java::lang::CharSequence& arg0, const ::java::lang::Object& arg1){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isMetaTracker", "(Ljava/lang/CharSequence;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::method::MetaKeyKeyListener::isSelectingMetaTracker(const ::java::lang::CharSequence& arg0, const ::java::lang::Object& arg1){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSelectingMetaTracker", "(Ljava/lang/CharSequence;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::method::MetaKeyKeyListener::onKeyDown(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::method::MetaKeyKeyListener::onKeyUp(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::method::MetaKeyKeyListener::clearMetaKeyState(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2) const {
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearMetaKeyState", "(Landroid/view/View;Landroid/text/Editable;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::text::method::MetaKeyKeyListener::clearMetaKeyState(const ::android::text::Editable& arg0, int32_t arg1){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearMetaKeyState", "(Landroid/text/Editable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int64_t android::text::method::MetaKeyKeyListener::resetLockedMeta(int64_t arg0){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetLockedMeta", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int32_t android::text::method::MetaKeyKeyListener::getMetaState(int64_t arg0){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMetaState", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::text::method::MetaKeyKeyListener::getMetaState(int64_t arg0, int32_t arg1){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMetaState", "(JI)I");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int64_t android::text::method::MetaKeyKeyListener::adjustMetaAfterKeypress(int64_t arg0){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "adjustMetaAfterKeypress", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

int64_t android::text::method::MetaKeyKeyListener::handleKeyDown(int64_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "handleKeyDown", "(JILandroid/view/KeyEvent;)J");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1, _arg2);
}

int64_t android::text::method::MetaKeyKeyListener::handleKeyUp(int64_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2){
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "handleKeyUp", "(JILandroid/view/KeyEvent;)J");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1, _arg2);
}

int64_t android::text::method::MetaKeyKeyListener::clearMetaKeyState(int64_t arg0, int32_t arg1) const {
    if (!::android::text::method::MetaKeyKeyListener::_class) ::android::text::method::MetaKeyKeyListener::_class = java::fetch_class("android/text/method/MetaKeyKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearMetaKeyState", "(JI)J");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::MultiTapKeyListener::MultiTapKeyListener(const ::android::text::method::TextKeyListener_Capitalize& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::SpanWatcher((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {
    if (!::android::text::method::MultiTapKeyListener::_class) ::android::text::method::MultiTapKeyListener::_class = java::fetch_class("android/text/method/MultiTapKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/text/method/TextKeyListener$Capitalize;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::text::method::MultiTapKeyListener android::text::method::MultiTapKeyListener::getInstance(bool arg0, const ::android::text::method::TextKeyListener_Capitalize& arg1){
    if (!::android::text::method::MultiTapKeyListener::_class) ::android::text::method::MultiTapKeyListener::_class = java::fetch_class("android/text/method/MultiTapKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/MultiTapKeyListener;");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::text::method::MultiTapKeyListener _ret(ret);
    return _ret;
}

int32_t android::text::method::MultiTapKeyListener::getInputType() const {
    if (!::android::text::method::MultiTapKeyListener::_class) ::android::text::method::MultiTapKeyListener::_class = java::fetch_class("android/text/method/MultiTapKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::text::method::MultiTapKeyListener::onKeyDown(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::MultiTapKeyListener::_class) ::android::text::method::MultiTapKeyListener::_class = java::fetch_class("android/text/method/MultiTapKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::method::MultiTapKeyListener::onSpanChanged(const ::android::text::Spannable& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::text::method::MultiTapKeyListener::_class) ::android::text::method::MultiTapKeyListener::_class = java::fetch_class("android/text/method/MultiTapKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSpanChanged", "(Landroid/text/Spannable;Ljava/lang/Object;IIII)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::text::method::MultiTapKeyListener::onSpanAdded(const ::android::text::Spannable& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::method::MultiTapKeyListener::_class) ::android::text::method::MultiTapKeyListener::_class = java::fetch_class("android/text/method/MultiTapKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSpanAdded", "(Landroid/text/Spannable;Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::method::MultiTapKeyListener::onSpanRemoved(const ::android::text::Spannable& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::method::MultiTapKeyListener::_class) ::android::text::method::MultiTapKeyListener::_class = java::fetch_class("android/text/method/MultiTapKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSpanRemoved", "(Landroid/text/Spannable;Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::QwertyKeyListener::QwertyKeyListener(const ::android::text::method::TextKeyListener_Capitalize& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {
    if (!::android::text::method::QwertyKeyListener::_class) ::android::text::method::QwertyKeyListener::_class = java::fetch_class("android/text/method/QwertyKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/text/method/TextKeyListener$Capitalize;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::text::method::QwertyKeyListener android::text::method::QwertyKeyListener::getInstance(bool arg0, const ::android::text::method::TextKeyListener_Capitalize& arg1){
    if (!::android::text::method::QwertyKeyListener::_class) ::android::text::method::QwertyKeyListener::_class = java::fetch_class("android/text/method/QwertyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/QwertyKeyListener;");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::text::method::QwertyKeyListener _ret(ret);
    return _ret;
}

::android::text::method::QwertyKeyListener android::text::method::QwertyKeyListener::getInstanceForFullKeyboard(){
    if (!::android::text::method::QwertyKeyListener::_class) ::android::text::method::QwertyKeyListener::_class = java::fetch_class("android/text/method/QwertyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstanceForFullKeyboard", "()Landroid/text/method/QwertyKeyListener;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::QwertyKeyListener _ret(ret);
    return _ret;
}

int32_t android::text::method::QwertyKeyListener::getInputType() const {
    if (!::android::text::method::QwertyKeyListener::_class) ::android::text::method::QwertyKeyListener::_class = java::fetch_class("android/text/method/QwertyKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::text::method::QwertyKeyListener::onKeyDown(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::QwertyKeyListener::_class) ::android::text::method::QwertyKeyListener::_class = java::fetch_class("android/text/method/QwertyKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::method::QwertyKeyListener::markAsReplaced(const ::android::text::Spannable& arg0, int32_t arg1, int32_t arg2, const ::java::lang::String& arg3){
    if (!::android::text::method::QwertyKeyListener::_class) ::android::text::method::QwertyKeyListener::_class = java::fetch_class("android/text/method/QwertyKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "markAsReplaced", "(Landroid/text/Spannable;IILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

::java::lang::CharSequence android::text::method::TransformationMethod::getTransformation(const ::java::lang::CharSequence& arg0, const ::android::view::View& arg1) const {
    if (!::android::text::method::TransformationMethod::_class) ::android::text::method::TransformationMethod::_class = java::fetch_class("android/text/method/TransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransformation", "(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::text::method::TransformationMethod::onFocusChanged(const ::android::view::View& arg0, const ::java::lang::CharSequence& arg1, bool arg2, int32_t arg3, const ::android::graphics::Rect& arg4) const {
    if (!::android::text::method::TransformationMethod::_class) ::android::text::method::TransformationMethod::_class = java::fetch_class("android/text/method/TransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFocusChanged", "(Landroid/view/View;Ljava/lang/CharSequence;ZILandroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::ArrowKeyMovementMethod::ArrowKeyMovementMethod() : ::java::lang::Object((jobject)0), ::android::text::method::BaseMovementMethod((jobject)0), ::android::text::method::MovementMethod((jobject)0) {
    if (!::android::text::method::ArrowKeyMovementMethod::_class) ::android::text::method::ArrowKeyMovementMethod::_class = java::fetch_class("android/text/method/ArrowKeyMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::text::method::ArrowKeyMovementMethod::onTouchEvent(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, const ::android::view::MotionEvent& arg2) const {
    if (!::android::text::method::ArrowKeyMovementMethod::_class) ::android::text::method::ArrowKeyMovementMethod::_class = java::fetch_class("android/text/method/ArrowKeyMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::text::method::ArrowKeyMovementMethod::canSelectArbitrarily() const {
    if (!::android::text::method::ArrowKeyMovementMethod::_class) ::android::text::method::ArrowKeyMovementMethod::_class = java::fetch_class("android/text/method/ArrowKeyMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "canSelectArbitrarily", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::text::method::ArrowKeyMovementMethod::initialize(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1) const {
    if (!::android::text::method::ArrowKeyMovementMethod::_class) ::android::text::method::ArrowKeyMovementMethod::_class = java::fetch_class("android/text/method/ArrowKeyMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(Landroid/widget/TextView;Landroid/text/Spannable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::text::method::ArrowKeyMovementMethod::onTakeFocus(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, int32_t arg2) const {
    if (!::android::text::method::ArrowKeyMovementMethod::_class) ::android::text::method::ArrowKeyMovementMethod::_class = java::fetch_class("android/text/method/ArrowKeyMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTakeFocus", "(Landroid/widget/TextView;Landroid/text/Spannable;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::text::method::MovementMethod android::text::method::ArrowKeyMovementMethod::getInstance(){
    if (!::android::text::method::ArrowKeyMovementMethod::_class) ::android::text::method::ArrowKeyMovementMethod::_class = java::fetch_class("android/text/method/ArrowKeyMovementMethod");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/method/MovementMethod;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::MovementMethod _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::DialerKeyListener::DialerKeyListener() : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0), ::android::text::method::NumberKeyListener((jobject)0) {
    if (!::android::text::method::DialerKeyListener::_class) ::android::text::method::DialerKeyListener::_class = java::fetch_class("android/text/method/DialerKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::text::method::DialerKeyListener android::text::method::DialerKeyListener::getInstance(){
    if (!::android::text::method::DialerKeyListener::_class) ::android::text::method::DialerKeyListener::_class = java::fetch_class("android/text/method/DialerKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/method/DialerKeyListener;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::DialerKeyListener _ret(ret);
    return _ret;
}

int32_t android::text::method::DialerKeyListener::getInputType() const {
    if (!::android::text::method::DialerKeyListener::_class) ::android::text::method::DialerKeyListener::_class = java::fetch_class("android/text/method/DialerKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::method::Touch::scrollTo(const ::android::widget::TextView& arg0, const ::android::text::Layout& arg1, int32_t arg2, int32_t arg3){
    if (!::android::text::method::Touch::_class) ::android::text::method::Touch::_class = java::fetch_class("android/text/method/Touch");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "scrollTo", "(Landroid/widget/TextView;Landroid/text/Layout;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::method::Touch::onTouchEvent(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, const ::android::view::MotionEvent& arg2){
    if (!::android::text::method::Touch::_class) ::android::text::method::Touch::_class = java::fetch_class("android/text/method/Touch");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "onTouchEvent", "(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::text::method::Touch::getInitialScrollX(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1){
    if (!::android::text::method::Touch::_class) ::android::text::method::Touch::_class = java::fetch_class("android/text/method/Touch");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInitialScrollX", "(Landroid/widget/TextView;Landroid/text/Spannable;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::text::method::Touch::getInitialScrollY(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1){
    if (!::android::text::method::Touch::_class) ::android::text::method::Touch::_class = java::fetch_class("android/text/method/Touch");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInitialScrollY", "(Landroid/widget/TextView;Landroid/text/Spannable;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::DateKeyListener::DateKeyListener() : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0), ::android::text::method::NumberKeyListener((jobject)0) {
    if (!::android::text::method::DateKeyListener::_class) ::android::text::method::DateKeyListener::_class = java::fetch_class("android/text/method/DateKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::text::method::DateKeyListener::getInputType() const {
    if (!::android::text::method::DateKeyListener::_class) ::android::text::method::DateKeyListener::_class = java::fetch_class("android/text/method/DateKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::text::method::DateKeyListener android::text::method::DateKeyListener::getInstance(){
    if (!::android::text::method::DateKeyListener::_class) ::android::text::method::DateKeyListener::_class = java::fetch_class("android/text/method/DateKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/method/DateKeyListener;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::DateKeyListener _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::ScrollingMovementMethod::ScrollingMovementMethod() : ::java::lang::Object((jobject)0), ::android::text::method::BaseMovementMethod((jobject)0), ::android::text::method::MovementMethod((jobject)0) {
    if (!::android::text::method::ScrollingMovementMethod::_class) ::android::text::method::ScrollingMovementMethod::_class = java::fetch_class("android/text/method/ScrollingMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::text::method::ScrollingMovementMethod::onTouchEvent(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, const ::android::view::MotionEvent& arg2) const {
    if (!::android::text::method::ScrollingMovementMethod::_class) ::android::text::method::ScrollingMovementMethod::_class = java::fetch_class("android/text/method/ScrollingMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::text::method::ScrollingMovementMethod::onTakeFocus(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, int32_t arg2) const {
    if (!::android::text::method::ScrollingMovementMethod::_class) ::android::text::method::ScrollingMovementMethod::_class = java::fetch_class("android/text/method/ScrollingMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTakeFocus", "(Landroid/widget/TextView;Landroid/text/Spannable;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::text::method::MovementMethod android::text::method::ScrollingMovementMethod::getInstance(){
    if (!::android::text::method::ScrollingMovementMethod::_class) ::android::text::method::ScrollingMovementMethod::_class = java::fetch_class("android/text/method/ScrollingMovementMethod");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/method/MovementMethod;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::MovementMethod _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::BaseMovementMethod::BaseMovementMethod() : ::java::lang::Object((jobject)0), ::android::text::method::MovementMethod((jobject)0) {
    if (!::android::text::method::BaseMovementMethod::_class) ::android::text::method::BaseMovementMethod::_class = java::fetch_class("android/text/method/BaseMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::text::method::BaseMovementMethod::canSelectArbitrarily() const {
    if (!::android::text::method::BaseMovementMethod::_class) ::android::text::method::BaseMovementMethod::_class = java::fetch_class("android/text/method/BaseMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "canSelectArbitrarily", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::text::method::BaseMovementMethod::initialize(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1) const {
    if (!::android::text::method::BaseMovementMethod::_class) ::android::text::method::BaseMovementMethod::_class = java::fetch_class("android/text/method/BaseMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(Landroid/widget/TextView;Landroid/text/Spannable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::text::method::BaseMovementMethod::onKeyDown(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::BaseMovementMethod::_class) ::android::text::method::BaseMovementMethod::_class = java::fetch_class("android/text/method/BaseMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::method::BaseMovementMethod::onKeyOther(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::text::method::BaseMovementMethod::_class) ::android::text::method::BaseMovementMethod::_class = java::fetch_class("android/text/method/BaseMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyOther", "(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::text::method::BaseMovementMethod::onKeyUp(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::BaseMovementMethod::_class) ::android::text::method::BaseMovementMethod::_class = java::fetch_class("android/text/method/BaseMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::method::BaseMovementMethod::onTakeFocus(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, int32_t arg2) const {
    if (!::android::text::method::BaseMovementMethod::_class) ::android::text::method::BaseMovementMethod::_class = java::fetch_class("android/text/method/BaseMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTakeFocus", "(Landroid/widget/TextView;Landroid/text/Spannable;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::text::method::BaseMovementMethod::onTouchEvent(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, const ::android::view::MotionEvent& arg2) const {
    if (!::android::text::method::BaseMovementMethod::_class) ::android::text::method::BaseMovementMethod::_class = java::fetch_class("android/text/method/BaseMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::text::method::BaseMovementMethod::onTrackballEvent(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, const ::android::view::MotionEvent& arg2) const {
    if (!::android::text::method::BaseMovementMethod::_class) ::android::text::method::BaseMovementMethod::_class = java::fetch_class("android/text/method/BaseMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrackballEvent", "(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::text::method::BaseMovementMethod::onGenericMotionEvent(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, const ::android::view::MotionEvent& arg2) const {
    if (!::android::text::method::BaseMovementMethod::_class) ::android::text::method::BaseMovementMethod::_class = java::fetch_class("android/text/method/BaseMovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotionEvent", "(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::text::method::MovementMethod::initialize(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1) const {
    if (!::android::text::method::MovementMethod::_class) ::android::text::method::MovementMethod::_class = java::fetch_class("android/text/method/MovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(Landroid/widget/TextView;Landroid/text/Spannable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::text::method::MovementMethod::onKeyDown(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::MovementMethod::_class) ::android::text::method::MovementMethod::_class = java::fetch_class("android/text/method/MovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::method::MovementMethod::onKeyUp(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::MovementMethod::_class) ::android::text::method::MovementMethod::_class = java::fetch_class("android/text/method/MovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::method::MovementMethod::onKeyOther(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::text::method::MovementMethod::_class) ::android::text::method::MovementMethod::_class = java::fetch_class("android/text/method/MovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyOther", "(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::text::method::MovementMethod::onTakeFocus(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, int32_t arg2) const {
    if (!::android::text::method::MovementMethod::_class) ::android::text::method::MovementMethod::_class = java::fetch_class("android/text/method/MovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTakeFocus", "(Landroid/widget/TextView;Landroid/text/Spannable;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::text::method::MovementMethod::onTrackballEvent(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, const ::android::view::MotionEvent& arg2) const {
    if (!::android::text::method::MovementMethod::_class) ::android::text::method::MovementMethod::_class = java::fetch_class("android/text/method/MovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrackballEvent", "(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::text::method::MovementMethod::onTouchEvent(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, const ::android::view::MotionEvent& arg2) const {
    if (!::android::text::method::MovementMethod::_class) ::android::text::method::MovementMethod::_class = java::fetch_class("android/text/method/MovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::text::method::MovementMethod::onGenericMotionEvent(const ::android::widget::TextView& arg0, const ::android::text::Spannable& arg1, const ::android::view::MotionEvent& arg2) const {
    if (!::android::text::method::MovementMethod::_class) ::android::text::method::MovementMethod::_class = java::fetch_class("android/text/method/MovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotionEvent", "(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::text::method::MovementMethod::canSelectArbitrarily() const {
    if (!::android::text::method::MovementMethod::_class) ::android::text::method::MovementMethod::_class = java::fetch_class("android/text/method/MovementMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "canSelectArbitrarily", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::TimeKeyListener::TimeKeyListener() : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0), ::android::text::method::NumberKeyListener((jobject)0) {
    if (!::android::text::method::TimeKeyListener::_class) ::android::text::method::TimeKeyListener::_class = java::fetch_class("android/text/method/TimeKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::text::method::TimeKeyListener::getInputType() const {
    if (!::android::text::method::TimeKeyListener::_class) ::android::text::method::TimeKeyListener::_class = java::fetch_class("android/text/method/TimeKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::text::method::TimeKeyListener android::text::method::TimeKeyListener::getInstance(){
    if (!::android::text::method::TimeKeyListener::_class) ::android::text::method::TimeKeyListener::_class = java::fetch_class("android/text/method/TimeKeyListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/method/TimeKeyListener;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::TimeKeyListener _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::SingleLineTransformationMethod::SingleLineTransformationMethod() : ::java::lang::Object((jobject)0), ::android::text::method::ReplacementTransformationMethod((jobject)0), ::android::text::method::TransformationMethod((jobject)0) {
    if (!::android::text::method::SingleLineTransformationMethod::_class) ::android::text::method::SingleLineTransformationMethod::_class = java::fetch_class("android/text/method/SingleLineTransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::text::method::SingleLineTransformationMethod android::text::method::SingleLineTransformationMethod::getInstance(){
    if (!::android::text::method::SingleLineTransformationMethod::_class) ::android::text::method::SingleLineTransformationMethod::_class = java::fetch_class("android/text/method/SingleLineTransformationMethod");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/method/SingleLineTransformationMethod;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::SingleLineTransformationMethod _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::HideReturnsTransformationMethod::HideReturnsTransformationMethod() : ::java::lang::Object((jobject)0), ::android::text::method::ReplacementTransformationMethod((jobject)0), ::android::text::method::TransformationMethod((jobject)0) {
    if (!::android::text::method::HideReturnsTransformationMethod::_class) ::android::text::method::HideReturnsTransformationMethod::_class = java::fetch_class("android/text/method/HideReturnsTransformationMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::text::method::HideReturnsTransformationMethod android::text::method::HideReturnsTransformationMethod::getInstance(){
    if (!::android::text::method::HideReturnsTransformationMethod::_class) ::android::text::method::HideReturnsTransformationMethod::_class = java::fetch_class("android/text/method/HideReturnsTransformationMethod");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/method/HideReturnsTransformationMethod;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::method::HideReturnsTransformationMethod _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::method::BaseKeyListener::BaseKeyListener() : ::java::lang::Object((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {
    if (!::android::text::method::BaseKeyListener::_class) ::android::text::method::BaseKeyListener::_class = java::fetch_class("android/text/method/BaseKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::text::method::BaseKeyListener::backspace(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::BaseKeyListener::_class) ::android::text::method::BaseKeyListener::_class = java::fetch_class("android/text/method/BaseKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "backspace", "(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::method::BaseKeyListener::forwardDelete(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::BaseKeyListener::_class) ::android::text::method::BaseKeyListener::_class = java::fetch_class("android/text/method/BaseKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "forwardDelete", "(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::method::BaseKeyListener::onKeyDown(const ::android::view::View& arg0, const ::android::text::Editable& arg1, int32_t arg2, const ::android::view::KeyEvent& arg3) const {
    if (!::android::text::method::BaseKeyListener::_class) ::android::text::method::BaseKeyListener::_class = java::fetch_class("android/text/method/BaseKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::method::BaseKeyListener::onKeyOther(const ::android::view::View& arg0, const ::android::text::Editable& arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::text::method::BaseKeyListener::_class) ::android::text::method::BaseKeyListener::_class = java::fetch_class("android/text/method/BaseKeyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyOther", "(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

std::vector< ::android::text::method::TextKeyListener_Capitalize> android::text::method::TextKeyListener_Capitalize::values(){
    if (!::android::text::method::TextKeyListener_Capitalize::_class) ::android::text::method::TextKeyListener_Capitalize::_class = java::fetch_class("android/text/method/TextKeyListener$Capitalize");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/text/method/TextKeyListener$Capitalize;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::text::method::TextKeyListener_Capitalize> _ret(rets, ::android::text::method::TextKeyListener_Capitalize((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::text::method::TextKeyListener_Capitalize retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::text::method::TextKeyListener_Capitalize android::text::method::TextKeyListener_Capitalize::valueOf(const ::java::lang::String& arg0){
    if (!::android::text::method::TextKeyListener_Capitalize::_class) ::android::text::method::TextKeyListener_Capitalize::_class = java::fetch_class("android/text/method/TextKeyListener$Capitalize");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/text/method/TextKeyListener$Capitalize;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::text::method::TextKeyListener_Capitalize _ret(ret);
    return _ret;
}

