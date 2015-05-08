#include "java-core.hpp"
#include <memory>
#include "android.graphics.Canvas.hpp"
#include "android.graphics.Paint.hpp"
#include "android.graphics.Path.hpp"
#include "android.graphics.Rect.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.os.Parcel.hpp"
#include "android.text.AlteredCharSequence.hpp"
#include "android.text.AndroidCharacter.hpp"
#include "android.text.Annotation.hpp"
#include "android.text.AutoText.hpp"
#include "android.text.BoringLayout.hpp"
#include "android.text.ClipboardManager.hpp"
#include "android.text.DynamicLayout.hpp"
#include "android.text.Editable.hpp"
#include "android.text.GetChars.hpp"
#include "android.text.Html.hpp"
#include "android.text.InputFilter.hpp"
#include "android.text.InputType.hpp"
#include "android.text.Layout.hpp"
#include "android.text.LoginFilter.hpp"
#include "android.text.NoCopySpan.hpp"
#include "android.text.ParcelableSpan.hpp"
#include "android.text.Selection.hpp"
#include "android.text.SpanWatcher.hpp"
#include "android.text.Spannable.hpp"
#include "android.text.SpannableString.hpp"
#include "android.text.SpannableStringBuilder.hpp"
#include "android.text.SpannableStringInternal.hpp"
#include "android.text.Spanned.hpp"
#include "android.text.SpannedString.hpp"
#include "android.text.StaticLayout.hpp"
#include "android.text.TextPaint.hpp"
#include "android.text.TextUtils.hpp"
#include "android.text.TextWatcher.hpp"
#include "android.util.Printer.hpp"
#include "android.view.View.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Iterable.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Iterator.hpp"
#include "java.util.regex.Pattern.hpp"
#include "org.xml.sax.XMLReader.hpp"

jclass android::text::TextUtils_EllipsizeCallback::_class = nullptr;
jclass android::text::GetChars::_class = nullptr;
jclass android::text::TextWatcher::_class = nullptr;
jclass android::text::Spannable_Factory::_class = nullptr;
jclass android::text::TextUtils_StringSplitter::_class = nullptr;
jclass android::text::TextUtils_SimpleStringSplitter::_class = nullptr;
jclass android::text::Html_ImageGetter::_class = nullptr;
jclass android::text::Layout::_class = nullptr;
jclass android::text::InputType::_class = nullptr;
jclass android::text::SpanWatcher::_class = nullptr;
jclass android::text::Editable::_class = nullptr;
jclass android::text::Layout_Alignment::_class = nullptr;
jclass android::text::SpannableString::_class = nullptr;
jclass android::text::Html::_class = nullptr;
jclass android::text::Spanned::_class = nullptr;
jclass android::text::ParcelableSpan::_class = nullptr;
jclass android::text::SpannableStringInternal::_class = nullptr;
jclass android::text::AutoText::_class = nullptr;
jclass android::text::InputFilter::_class = nullptr;
jclass android::text::NoCopySpan::_class = nullptr;
jclass android::text::LoginFilter_UsernameFilterGMail::_class = nullptr;
jclass android::text::Spannable::_class = nullptr;
jclass android::text::InputFilter_LengthFilter::_class = nullptr;
jclass android::text::AlteredCharSequence::_class = nullptr;
jclass android::text::TextPaint::_class = nullptr;
jclass android::text::StaticLayout::_class = nullptr;
jclass android::text::SpannedString::_class = nullptr;
jclass android::text::Annotation::_class = nullptr;
jclass android::text::LoginFilter_UsernameFilterGeneric::_class = nullptr;
jclass android::text::Html_TagHandler::_class = nullptr;
jclass android::text::BoringLayout::_class = nullptr;
jclass android::text::Editable_Factory::_class = nullptr;
jclass android::text::LoginFilter::_class = nullptr;
jclass android::text::AndroidCharacter::_class = nullptr;
jclass android::text::ClipboardManager::_class = nullptr;
jclass android::text::DynamicLayout::_class = nullptr;
jclass android::text::TextUtils::_class = nullptr;
jclass android::text::Layout_Directions::_class = nullptr;
jclass android::text::SpannableStringBuilder::_class = nullptr;
jclass android::text::InputFilter_AllCaps::_class = nullptr;
jclass android::text::Selection::_class = nullptr;
jclass android::text::TextUtils_TruncateAt::_class = nullptr;
jclass android::text::BoringLayout_Metrics::_class = nullptr;
jclass android::text::NoCopySpan_Concrete::_class = nullptr;
jclass android::text::LoginFilter_PasswordFilterGMail::_class = nullptr;

void android::text::TextUtils_EllipsizeCallback::ellipsized(int32_t arg0, int32_t arg1) const {
    if (!::android::text::TextUtils_EllipsizeCallback::_class) ::android::text::TextUtils_EllipsizeCallback::_class = java::fetch_class("android/text/TextUtils$EllipsizeCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "ellipsized", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::text::GetChars::getChars(int32_t arg0, int32_t arg1, const std::vector< uint16_t>& arg2, int32_t arg3) const {
    if (!::android::text::GetChars::_class) ::android::text::GetChars::_class = java::fetch_class("android/text/GetChars");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChars", "(II[CI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jcharArray _arg2 = java::jni->NewCharArray(arg2.size());
    java::jni->SetCharArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::TextWatcher::beforeTextChanged(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::TextWatcher::_class) ::android::text::TextWatcher::_class = java::fetch_class("android/text/TextWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "beforeTextChanged", "(Ljava/lang/CharSequence;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::TextWatcher::onTextChanged(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::TextWatcher::_class) ::android::text::TextWatcher::_class = java::fetch_class("android/text/TextWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTextChanged", "(Ljava/lang/CharSequence;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::TextWatcher::afterTextChanged(const ::android::text::Editable& arg0) const {
    if (!::android::text::TextWatcher::_class) ::android::text::TextWatcher::_class = java::fetch_class("android/text/TextWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "afterTextChanged", "(Landroid/text/Editable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::Spannable_Factory::Spannable_Factory() : ::java::lang::Object((jobject)0) {
    if (!::android::text::Spannable_Factory::_class) ::android::text::Spannable_Factory::_class = java::fetch_class("android/text/Spannable$Factory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::text::Spannable_Factory android::text::Spannable_Factory::getInstance(){
    if (!::android::text::Spannable_Factory::_class) ::android::text::Spannable_Factory::_class = java::fetch_class("android/text/Spannable$Factory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/Spannable$Factory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::Spannable_Factory _ret(ret);
    return _ret;
}

::android::text::Spannable android::text::Spannable_Factory::newSpannable(const ::java::lang::CharSequence& arg0) const {
    if (!::android::text::Spannable_Factory::_class) ::android::text::Spannable_Factory::_class = java::fetch_class("android/text/Spannable$Factory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSpannable", "(Ljava/lang/CharSequence;)Landroid/text/Spannable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::text::Spannable _ret(ret);
    return _ret;
}

void android::text::TextUtils_StringSplitter::setString(const ::java::lang::String& arg0) const {
    if (!::android::text::TextUtils_StringSplitter::_class) ::android::text::TextUtils_StringSplitter::_class = java::fetch_class("android/text/TextUtils$StringSplitter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setString", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::TextUtils_SimpleStringSplitter::TextUtils_SimpleStringSplitter(uint16_t arg0) : ::java::lang::Object((jobject)0), ::android::text::TextUtils_StringSplitter((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Iterator((jobject)0) {
    if (!::android::text::TextUtils_SimpleStringSplitter::_class) ::android::text::TextUtils_SimpleStringSplitter::_class = java::fetch_class("android/text/TextUtils$SimpleStringSplitter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(C)V");
    uint16_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::text::TextUtils_SimpleStringSplitter::setString(const ::java::lang::String& arg0) const {
    if (!::android::text::TextUtils_SimpleStringSplitter::_class) ::android::text::TextUtils_SimpleStringSplitter::_class = java::fetch_class("android/text/TextUtils$SimpleStringSplitter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setString", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Iterator android::text::TextUtils_SimpleStringSplitter::iterator() const {
    if (!::android::text::TextUtils_SimpleStringSplitter::_class) ::android::text::TextUtils_SimpleStringSplitter::_class = java::fetch_class("android/text/TextUtils$SimpleStringSplitter");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool android::text::TextUtils_SimpleStringSplitter::hasNext() const {
    if (!::android::text::TextUtils_SimpleStringSplitter::_class) ::android::text::TextUtils_SimpleStringSplitter::_class = java::fetch_class("android/text/TextUtils$SimpleStringSplitter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::text::TextUtils_SimpleStringSplitter::next() const {
    if (!::android::text::TextUtils_SimpleStringSplitter::_class) ::android::text::TextUtils_SimpleStringSplitter::_class = java::fetch_class("android/text/TextUtils$SimpleStringSplitter");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::text::TextUtils_SimpleStringSplitter::remove() const {
    if (!::android::text::TextUtils_SimpleStringSplitter::_class) ::android::text::TextUtils_SimpleStringSplitter::_class = java::fetch_class("android/text/TextUtils$SimpleStringSplitter");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::graphics::drawable::Drawable android::text::Html_ImageGetter::getDrawable(const ::java::lang::String& arg0) const {
    if (!::android::text::Html_ImageGetter::_class) ::android::text::Html_ImageGetter::_class = java::fetch_class("android/text/Html$ImageGetter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

float android::text::Layout::getDesiredWidth(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1){
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDesiredWidth", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;)F");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

float android::text::Layout::getDesiredWidth(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, const ::android::text::TextPaint& arg3){
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDesiredWidth", "(Ljava/lang/CharSequence;IILandroid/text/TextPaint;)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::Layout::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::Layout::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::Path& arg1, const ::android::graphics::Paint& arg2, int32_t arg3) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Paint;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::java::lang::CharSequence android::text::Layout::getText() const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::text::TextPaint android::text::Layout::getPaint() const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaint", "()Landroid/text/TextPaint;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::TextPaint _ret(ret);
    return _ret;
}

int32_t android::text::Layout::getWidth() const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::Layout::getEllipsizedWidth() const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsizedWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::Layout::increaseWidthTo(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "increaseWidthTo", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getHeight() const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::text::Layout_Alignment android::text::Layout::getAlignment() const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlignment", "()Landroid/text/Layout$Alignment;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::Layout_Alignment _ret(ret);
    return _ret;
}

float android::text::Layout::getSpacingMultiplier() const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpacingMultiplier", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::text::Layout::getSpacingAdd() const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpacingAdd", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t android::text::Layout::getLineCount() const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::Layout::getLineBounds(int32_t arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineBounds", "(ILandroid/graphics/Rect;)I");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::text::Layout::getLineTop(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineTop", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getLineDescent(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineDescent", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getLineStart(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineStart", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getParagraphDirection(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParagraphDirection", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::text::Layout::getLineContainsTab(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineContainsTab", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::text::Layout_Directions android::text::Layout::getLineDirections(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineDirections", "(I)Landroid/text/Layout$Directions;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::text::Layout_Directions _ret(ret);
    return _ret;
}

int32_t android::text::Layout::getTopPadding() const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTopPadding", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::Layout::getBottomPadding() const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBottomPadding", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::text::Layout::isRtlCharAt(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRtlCharAt", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

float android::text::Layout::getPrimaryHorizontal(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimaryHorizontal", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::text::Layout::getSecondaryHorizontal(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSecondaryHorizontal", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::text::Layout::getLineLeft(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineLeft", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::text::Layout::getLineRight(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineRight", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::text::Layout::getLineMax(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineMax", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::text::Layout::getLineWidth(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineWidth", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getLineForVertical(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineForVertical", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getLineForOffset(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineForOffset", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getOffsetForHorizontal(int32_t arg0, float arg1) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffsetForHorizontal", "(IF)I");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::text::Layout::getLineEnd(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineEnd", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getLineVisibleEnd(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineVisibleEnd", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getLineBottom(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineBottom", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getLineBaseline(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineBaseline", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getLineAscent(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineAscent", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getOffsetToLeftOf(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffsetToLeftOf", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getOffsetToRightOf(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffsetToRightOf", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::text::Layout::getCursorPath(int32_t arg0, const ::android::graphics::Path& arg1, const ::java::lang::CharSequence& arg2) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursorPath", "(ILandroid/graphics/Path;Ljava/lang/CharSequence;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::text::Layout::getSelectionPath(int32_t arg0, int32_t arg1, const ::android::graphics::Path& arg2) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectionPath", "(IILandroid/graphics/Path;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::text::Layout_Alignment android::text::Layout::getParagraphAlignment(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParagraphAlignment", "(I)Landroid/text/Layout$Alignment;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::text::Layout_Alignment _ret(ret);
    return _ret;
}

int32_t android::text::Layout::getParagraphLeft(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParagraphLeft", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getParagraphRight(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParagraphRight", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getEllipsisStart(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsisStart", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Layout::getEllipsisCount(int32_t arg0) const {
    if (!::android::text::Layout::_class) ::android::text::Layout::_class = java::fetch_class("android/text/Layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsisCount", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::text::SpanWatcher::onSpanAdded(const ::android::text::Spannable& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::SpanWatcher::_class) ::android::text::SpanWatcher::_class = java::fetch_class("android/text/SpanWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSpanAdded", "(Landroid/text/Spannable;Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::SpanWatcher::onSpanRemoved(const ::android::text::Spannable& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::SpanWatcher::_class) ::android::text::SpanWatcher::_class = java::fetch_class("android/text/SpanWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSpanRemoved", "(Landroid/text/Spannable;Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::SpanWatcher::onSpanChanged(const ::android::text::Spannable& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::text::SpanWatcher::_class) ::android::text::SpanWatcher::_class = java::fetch_class("android/text/SpanWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSpanChanged", "(Landroid/text/Spannable;Ljava/lang/Object;IIII)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

::android::text::Editable android::text::Editable::replace(int32_t arg0, int32_t arg1, const ::java::lang::CharSequence& arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::text::Editable::_class) ::android::text::Editable::_class = java::fetch_class("android/text/Editable");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(IILjava/lang/CharSequence;II)Landroid/text/Editable;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::text::Editable _ret(ret);
    return _ret;
}

::android::text::Editable android::text::Editable::replace(int32_t arg0, int32_t arg1, const ::java::lang::CharSequence& arg2) const {
    if (!::android::text::Editable::_class) ::android::text::Editable::_class = java::fetch_class("android/text/Editable");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(IILjava/lang/CharSequence;)Landroid/text/Editable;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::text::Editable _ret(ret);
    return _ret;
}

::android::text::Editable android::text::Editable::insert(int32_t arg0, const ::java::lang::CharSequence& arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::Editable::_class) ::android::text::Editable::_class = java::fetch_class("android/text/Editable");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ILjava/lang/CharSequence;II)Landroid/text/Editable;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::text::Editable _ret(ret);
    return _ret;
}

::android::text::Editable android::text::Editable::insert(int32_t arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::text::Editable::_class) ::android::text::Editable::_class = java::fetch_class("android/text/Editable");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ILjava/lang/CharSequence;)Landroid/text/Editable;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::text::Editable _ret(ret);
    return _ret;
}

::android::text::Editable android::text::Editable::delete_(int32_t arg0, int32_t arg1) const {
    if (!::android::text::Editable::_class) ::android::text::Editable::_class = java::fetch_class("android/text/Editable");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(II)Landroid/text/Editable;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::text::Editable _ret(ret);
    return _ret;
}

::android::text::Editable android::text::Editable::append(const ::java::lang::CharSequence& arg0) const {
    if (!::android::text::Editable::_class) ::android::text::Editable::_class = java::fetch_class("android/text/Editable");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;)Landroid/text/Editable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::text::Editable _ret(ret);
    return _ret;
}

::android::text::Editable android::text::Editable::append(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::text::Editable::_class) ::android::text::Editable::_class = java::fetch_class("android/text/Editable");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;II)Landroid/text/Editable;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::text::Editable _ret(ret);
    return _ret;
}

::android::text::Editable android::text::Editable::append(uint16_t arg0) const {
    if (!::android::text::Editable::_class) ::android::text::Editable::_class = java::fetch_class("android/text/Editable");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(C)Landroid/text/Editable;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::text::Editable _ret(ret);
    return _ret;
}

void android::text::Editable::clear() const {
    if (!::android::text::Editable::_class) ::android::text::Editable::_class = java::fetch_class("android/text/Editable");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::text::Editable::clearSpans() const {
    if (!::android::text::Editable::_class) ::android::text::Editable::_class = java::fetch_class("android/text/Editable");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearSpans", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::text::Editable::setFilters(const std::vector< ::android::text::InputFilter>& arg0) const {
    if (!::android::text::Editable::_class) ::android::text::Editable::_class = java::fetch_class("android/text/Editable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilters", "([Landroid/text/InputFilter;)V");
    unsigned arg0s = arg0.size();
    if (!::android::text::InputFilter::_class) ::android::text::InputFilter::_class = java::fetch_class("android/text/InputFilter");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::text::InputFilter::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::text::InputFilter& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::text::InputFilter> android::text::Editable::getFilters() const {
    if (!::android::text::Editable::_class) ::android::text::Editable::_class = java::fetch_class("android/text/Editable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilters", "()[Landroid/text/InputFilter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::text::InputFilter> _ret(rets, ::android::text::InputFilter((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::text::InputFilter retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::android::text::Layout_Alignment> android::text::Layout_Alignment::values(){
    if (!::android::text::Layout_Alignment::_class) ::android::text::Layout_Alignment::_class = java::fetch_class("android/text/Layout$Alignment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/text/Layout$Alignment;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::text::Layout_Alignment> _ret(rets, ::android::text::Layout_Alignment((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::text::Layout_Alignment retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::text::Layout_Alignment android::text::Layout_Alignment::valueOf(const ::java::lang::String& arg0){
    if (!::android::text::Layout_Alignment::_class) ::android::text::Layout_Alignment::_class = java::fetch_class("android/text/Layout$Alignment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/text/Layout$Alignment;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::text::Layout_Alignment _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::SpannableString::SpannableString(const ::java::lang::CharSequence& arg0) : ::java::lang::Object((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::Spannable((jobject)0), ::android::text::SpannableStringInternal((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::android::text::SpannableString::_class) ::android::text::SpannableString::_class = java::fetch_class("android/text/SpannableString");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::text::SpannableString android::text::SpannableString::valueOf(const ::java::lang::CharSequence& arg0){
    if (!::android::text::SpannableString::_class) ::android::text::SpannableString::_class = java::fetch_class("android/text/SpannableString");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/CharSequence;)Landroid/text/SpannableString;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::text::SpannableString _ret(ret);
    return _ret;
}

void android::text::SpannableString::setSpan(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::SpannableString::_class) ::android::text::SpannableString::_class = java::fetch_class("android/text/SpannableString");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpan", "(Ljava/lang/Object;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::SpannableString::removeSpan(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannableString::_class) ::android::text::SpannableString::_class = java::fetch_class("android/text/SpannableString");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeSpan", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::text::SpannableString::subSequence(int32_t arg0, int32_t arg1) const {
    if (!::android::text::SpannableString::_class) ::android::text::SpannableString::_class = java::fetch_class("android/text/SpannableString");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSequence", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::text::SpannableString::nextSpanTransition(int32_t arg0, int32_t arg1, const ::java::lang::Class& arg2) const {
    if (!::android::text::SpannableString::_class) ::android::text::SpannableString::_class = java::fetch_class("android/text/SpannableString");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextSpanTransition", "(IILjava/lang/Class;)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

std::vector< ::java::lang::Object> android::text::SpannableString::getSpans(int32_t arg0, int32_t arg1, const ::java::lang::Class& arg2) const {
    if (!::android::text::SpannableString::_class) ::android::text::SpannableString::_class = java::fetch_class("android/text/SpannableString");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpans", "(IILjava/lang/Class;)[Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::text::SpannableString::getSpanFlags(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannableString::_class) ::android::text::SpannableString::_class = java::fetch_class("android/text/SpannableString");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanFlags", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::SpannableString::getSpanEnd(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannableString::_class) ::android::text::SpannableString::_class = java::fetch_class("android/text/SpannableString");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanEnd", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::SpannableString::getSpanStart(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannableString::_class) ::android::text::SpannableString::_class = java::fetch_class("android/text/SpannableString");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanStart", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::text::Spanned android::text::Html::fromHtml(const ::java::lang::String& arg0){
    if (!::android::text::Html::_class) ::android::text::Html::_class = java::fetch_class("android/text/Html");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromHtml", "(Ljava/lang/String;)Landroid/text/Spanned;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::text::Spanned _ret(ret);
    return _ret;
}

::android::text::Spanned android::text::Html::fromHtml(const ::java::lang::String& arg0, const ::android::text::Html_ImageGetter& arg1, const ::android::text::Html_TagHandler& arg2){
    if (!::android::text::Html::_class) ::android::text::Html::_class = java::fetch_class("android/text/Html");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromHtml", "(Ljava/lang/String;Landroid/text/Html$ImageGetter;Landroid/text/Html$TagHandler;)Landroid/text/Spanned;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::text::Spanned _ret(ret);
    return _ret;
}

::java::lang::String android::text::Html::toHtml(const ::android::text::Spanned& arg0){
    if (!::android::text::Html::_class) ::android::text::Html::_class = java::fetch_class("android/text/Html");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toHtml", "(Landroid/text/Spanned;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> android::text::Spanned::getSpans(int32_t arg0, int32_t arg1, const ::java::lang::Class& arg2) const {
    if (!::android::text::Spanned::_class) ::android::text::Spanned::_class = java::fetch_class("android/text/Spanned");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpans", "(IILjava/lang/Class;)[Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::text::Spanned::getSpanStart(const ::java::lang::Object& arg0) const {
    if (!::android::text::Spanned::_class) ::android::text::Spanned::_class = java::fetch_class("android/text/Spanned");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanStart", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Spanned::getSpanEnd(const ::java::lang::Object& arg0) const {
    if (!::android::text::Spanned::_class) ::android::text::Spanned::_class = java::fetch_class("android/text/Spanned");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanEnd", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Spanned::getSpanFlags(const ::java::lang::Object& arg0) const {
    if (!::android::text::Spanned::_class) ::android::text::Spanned::_class = java::fetch_class("android/text/Spanned");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanFlags", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::Spanned::nextSpanTransition(int32_t arg0, int32_t arg1, const ::java::lang::Class& arg2) const {
    if (!::android::text::Spanned::_class) ::android::text::Spanned::_class = java::fetch_class("android/text/Spanned");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextSpanTransition", "(IILjava/lang/Class;)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::text::ParcelableSpan::getSpanTypeId() const {
    if (!::android::text::ParcelableSpan::_class) ::android::text::ParcelableSpan::_class = java::fetch_class("android/text/ParcelableSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::SpannableStringInternal::length() const {
    if (!::android::text::SpannableStringInternal::_class) ::android::text::SpannableStringInternal::_class = java::fetch_class("android/text/SpannableStringInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

uint16_t android::text::SpannableStringInternal::charAt(int32_t arg0) const {
    if (!::android::text::SpannableStringInternal::_class) ::android::text::SpannableStringInternal::_class = java::fetch_class("android/text/SpannableStringInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "charAt", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

::java::lang::String android::text::SpannableStringInternal::toString() const {
    if (!::android::text::SpannableStringInternal::_class) ::android::text::SpannableStringInternal::_class = java::fetch_class("android/text/SpannableStringInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::text::SpannableStringInternal::getChars(int32_t arg0, int32_t arg1, const std::vector< uint16_t>& arg2, int32_t arg3) const {
    if (!::android::text::SpannableStringInternal::_class) ::android::text::SpannableStringInternal::_class = java::fetch_class("android/text/SpannableStringInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChars", "(II[CI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jcharArray _arg2 = java::jni->NewCharArray(arg2.size());
    java::jni->SetCharArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::text::SpannableStringInternal::getSpanStart(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannableStringInternal::_class) ::android::text::SpannableStringInternal::_class = java::fetch_class("android/text/SpannableStringInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanStart", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::SpannableStringInternal::getSpanEnd(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannableStringInternal::_class) ::android::text::SpannableStringInternal::_class = java::fetch_class("android/text/SpannableStringInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanEnd", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::SpannableStringInternal::getSpanFlags(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannableStringInternal::_class) ::android::text::SpannableStringInternal::_class = java::fetch_class("android/text/SpannableStringInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanFlags", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::Object> android::text::SpannableStringInternal::getSpans(int32_t arg0, int32_t arg1, const ::java::lang::Class& arg2) const {
    if (!::android::text::SpannableStringInternal::_class) ::android::text::SpannableStringInternal::_class = java::fetch_class("android/text/SpannableStringInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpans", "(IILjava/lang/Class;)[Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::text::SpannableStringInternal::nextSpanTransition(int32_t arg0, int32_t arg1, const ::java::lang::Class& arg2) const {
    if (!::android::text::SpannableStringInternal::_class) ::android::text::SpannableStringInternal::_class = java::fetch_class("android/text/SpannableStringInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextSpanTransition", "(IILjava/lang/Class;)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::text::AutoText::get(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, const ::android::view::View& arg3){
    if (!::android::text::AutoText::_class) ::android::text::AutoText::_class = java::fetch_class("android/text/AutoText");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Ljava/lang/CharSequence;IILandroid/view/View;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::text::AutoText::getSize(const ::android::view::View& arg0){
    if (!::android::text::AutoText::_class) ::android::text::AutoText::_class = java::fetch_class("android/text/AutoText");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSize", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::CharSequence android::text::InputFilter::filter(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, const ::android::text::Spanned& arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::text::InputFilter::_class) ::android::text::InputFilter::_class = java::fetch_class("android/text/InputFilter");
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::LoginFilter_UsernameFilterGMail::LoginFilter_UsernameFilterGMail() : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::LoginFilter((jobject)0) {
    if (!::android::text::LoginFilter_UsernameFilterGMail::_class) ::android::text::LoginFilter_UsernameFilterGMail::_class = java::fetch_class("android/text/LoginFilter$UsernameFilterGMail");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::LoginFilter_UsernameFilterGMail::LoginFilter_UsernameFilterGMail(bool arg0) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::LoginFilter((jobject)0) {
    if (!::android::text::LoginFilter_UsernameFilterGMail::_class) ::android::text::LoginFilter_UsernameFilterGMail::_class = java::fetch_class("android/text/LoginFilter$UsernameFilterGMail");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::text::LoginFilter_UsernameFilterGMail::isAllowed(uint16_t arg0) const {
    if (!::android::text::LoginFilter_UsernameFilterGMail::_class) ::android::text::LoginFilter_UsernameFilterGMail::_class = java::fetch_class("android/text/LoginFilter$UsernameFilterGMail");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAllowed", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::text::Spannable::setSpan(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::Spannable::_class) ::android::text::Spannable::_class = java::fetch_class("android/text/Spannable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpan", "(Ljava/lang/Object;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::Spannable::removeSpan(const ::java::lang::Object& arg0) const {
    if (!::android::text::Spannable::_class) ::android::text::Spannable::_class = java::fetch_class("android/text/Spannable");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeSpan", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::InputFilter_LengthFilter::InputFilter_LengthFilter(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0) {
    if (!::android::text::InputFilter_LengthFilter::_class) ::android::text::InputFilter_LengthFilter::_class = java::fetch_class("android/text/InputFilter$LengthFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::text::InputFilter_LengthFilter::filter(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, const ::android::text::Spanned& arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::text::InputFilter_LengthFilter::_class) ::android::text::InputFilter_LengthFilter::_class = java::fetch_class("android/text/InputFilter$LengthFilter");
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

::android::text::AlteredCharSequence android::text::AlteredCharSequence::make(const ::java::lang::CharSequence& arg0, const std::vector< uint16_t>& arg1, int32_t arg2, int32_t arg3){
    if (!::android::text::AlteredCharSequence::_class) ::android::text::AlteredCharSequence::_class = java::fetch_class("android/text/AlteredCharSequence");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "make", "(Ljava/lang/CharSequence;[CII)Landroid/text/AlteredCharSequence;");
    jobject _arg0 = arg0.obj;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::text::AlteredCharSequence _ret(ret);
    return _ret;
}

uint16_t android::text::AlteredCharSequence::charAt(int32_t arg0) const {
    if (!::android::text::AlteredCharSequence::_class) ::android::text::AlteredCharSequence::_class = java::fetch_class("android/text/AlteredCharSequence");
    static jmethodID mid = java::jni->GetMethodID(_class, "charAt", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

int32_t android::text::AlteredCharSequence::length() const {
    if (!::android::text::AlteredCharSequence::_class) ::android::text::AlteredCharSequence::_class = java::fetch_class("android/text/AlteredCharSequence");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::text::AlteredCharSequence::subSequence(int32_t arg0, int32_t arg1) const {
    if (!::android::text::AlteredCharSequence::_class) ::android::text::AlteredCharSequence::_class = java::fetch_class("android/text/AlteredCharSequence");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSequence", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::text::AlteredCharSequence::getChars(int32_t arg0, int32_t arg1, const std::vector< uint16_t>& arg2, int32_t arg3) const {
    if (!::android::text::AlteredCharSequence::_class) ::android::text::AlteredCharSequence::_class = java::fetch_class("android/text/AlteredCharSequence");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChars", "(II[CI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jcharArray _arg2 = java::jni->NewCharArray(arg2.size());
    java::jni->SetCharArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::java::lang::String android::text::AlteredCharSequence::toString() const {
    if (!::android::text::AlteredCharSequence::_class) ::android::text::AlteredCharSequence::_class = java::fetch_class("android/text/AlteredCharSequence");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::TextPaint::TextPaint() : ::java::lang::Object((jobject)0), ::android::graphics::Paint((jobject)0) {
    if (!::android::text::TextPaint::_class) ::android::text::TextPaint::_class = java::fetch_class("android/text/TextPaint");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::TextPaint::TextPaint(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::graphics::Paint((jobject)0) {
    if (!::android::text::TextPaint::_class) ::android::text::TextPaint::_class = java::fetch_class("android/text/TextPaint");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::TextPaint::TextPaint(const ::android::graphics::Paint& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::Paint((jobject)0) {
    if (!::android::text::TextPaint::_class) ::android::text::TextPaint::_class = java::fetch_class("android/text/TextPaint");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::text::TextPaint::set(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::TextPaint::_class) ::android::text::TextPaint::_class = java::fetch_class("android/text/TextPaint");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::StaticLayout::StaticLayout(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1, int32_t arg2, const ::android::text::Layout_Alignment& arg3, float arg4, float arg5, bool arg6) : ::java::lang::Object((jobject)0), ::android::text::Layout((jobject)0) {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    float _arg4 = arg4;
    float _arg5 = arg5;
    bool _arg6 = arg6;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::StaticLayout::StaticLayout(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, const ::android::text::TextPaint& arg3, int32_t arg4, const ::android::text::Layout_Alignment& arg5, float arg6, float arg7, bool arg8) : ::java::lang::Object((jobject)0), ::android::text::Layout((jobject)0) {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;IILandroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    float _arg6 = arg6;
    float _arg7 = arg7;
    bool _arg8 = arg8;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::StaticLayout::StaticLayout(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, const ::android::text::TextPaint& arg3, int32_t arg4, const ::android::text::Layout_Alignment& arg5, float arg6, float arg7, bool arg8, const ::android::text::TextUtils_TruncateAt& arg9, int32_t arg10) : ::java::lang::Object((jobject)0), ::android::text::Layout((jobject)0) {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;IILandroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZLandroid/text/TextUtils$TruncateAt;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    float _arg6 = arg6;
    float _arg7 = arg7;
    bool _arg8 = arg8;
    jobject _arg9 = arg9.obj;
    int32_t _arg10 = arg10;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);
}
#pragma GCC diagnostic pop

int32_t android::text::StaticLayout::getLineForVertical(int32_t arg0) const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineForVertical", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::StaticLayout::getLineCount() const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::StaticLayout::getLineTop(int32_t arg0) const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineTop", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::StaticLayout::getLineDescent(int32_t arg0) const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineDescent", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::StaticLayout::getLineStart(int32_t arg0) const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineStart", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::StaticLayout::getParagraphDirection(int32_t arg0) const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParagraphDirection", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::text::StaticLayout::getLineContainsTab(int32_t arg0) const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineContainsTab", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::text::Layout_Directions android::text::StaticLayout::getLineDirections(int32_t arg0) const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineDirections", "(I)Landroid/text/Layout$Directions;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::text::Layout_Directions _ret(ret);
    return _ret;
}

int32_t android::text::StaticLayout::getTopPadding() const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTopPadding", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::StaticLayout::getBottomPadding() const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBottomPadding", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::StaticLayout::getEllipsisCount(int32_t arg0) const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsisCount", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::StaticLayout::getEllipsisStart(int32_t arg0) const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsisStart", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::StaticLayout::getEllipsizedWidth() const {
    if (!::android::text::StaticLayout::_class) ::android::text::StaticLayout::_class = java::fetch_class("android/text/StaticLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsizedWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::SpannedString::SpannedString(const ::java::lang::CharSequence& arg0) : ::java::lang::Object((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::SpannableStringInternal((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::android::text::SpannedString::_class) ::android::text::SpannedString::_class = java::fetch_class("android/text/SpannedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::text::SpannedString::subSequence(int32_t arg0, int32_t arg1) const {
    if (!::android::text::SpannedString::_class) ::android::text::SpannedString::_class = java::fetch_class("android/text/SpannedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSequence", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::text::SpannedString android::text::SpannedString::valueOf(const ::java::lang::CharSequence& arg0){
    if (!::android::text::SpannedString::_class) ::android::text::SpannedString::_class = java::fetch_class("android/text/SpannedString");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/CharSequence;)Landroid/text/SpannedString;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::text::SpannedString _ret(ret);
    return _ret;
}

int32_t android::text::SpannedString::nextSpanTransition(int32_t arg0, int32_t arg1, const ::java::lang::Class& arg2) const {
    if (!::android::text::SpannedString::_class) ::android::text::SpannedString::_class = java::fetch_class("android/text/SpannedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextSpanTransition", "(IILjava/lang/Class;)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

std::vector< ::java::lang::Object> android::text::SpannedString::getSpans(int32_t arg0, int32_t arg1, const ::java::lang::Class& arg2) const {
    if (!::android::text::SpannedString::_class) ::android::text::SpannedString::_class = java::fetch_class("android/text/SpannedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpans", "(IILjava/lang/Class;)[Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::text::SpannedString::getSpanFlags(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannedString::_class) ::android::text::SpannedString::_class = java::fetch_class("android/text/SpannedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanFlags", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::SpannedString::getSpanEnd(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannedString::_class) ::android::text::SpannedString::_class = java::fetch_class("android/text/SpannedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanEnd", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::SpannedString::getSpanStart(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannedString::_class) ::android::text::SpannedString::_class = java::fetch_class("android/text/SpannedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanStart", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::Annotation::Annotation(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0) {
    if (!::android::text::Annotation::_class) ::android::text::Annotation::_class = java::fetch_class("android/text/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::Annotation::Annotation(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0) {
    if (!::android::text::Annotation::_class) ::android::text::Annotation::_class = java::fetch_class("android/text/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::Annotation::getSpanTypeId() const {
    if (!::android::text::Annotation::_class) ::android::text::Annotation::_class = java::fetch_class("android/text/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::Annotation::describeContents() const {
    if (!::android::text::Annotation::_class) ::android::text::Annotation::_class = java::fetch_class("android/text/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::Annotation::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::Annotation::_class) ::android::text::Annotation::_class = java::fetch_class("android/text/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::text::Annotation::getKey() const {
    if (!::android::text::Annotation::_class) ::android::text::Annotation::_class = java::fetch_class("android/text/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::Annotation::getValue() const {
    if (!::android::text::Annotation::_class) ::android::text::Annotation::_class = java::fetch_class("android/text/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::LoginFilter_UsernameFilterGeneric::LoginFilter_UsernameFilterGeneric() : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::LoginFilter((jobject)0) {
    if (!::android::text::LoginFilter_UsernameFilterGeneric::_class) ::android::text::LoginFilter_UsernameFilterGeneric::_class = java::fetch_class("android/text/LoginFilter$UsernameFilterGeneric");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::LoginFilter_UsernameFilterGeneric::LoginFilter_UsernameFilterGeneric(bool arg0) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::LoginFilter((jobject)0) {
    if (!::android::text::LoginFilter_UsernameFilterGeneric::_class) ::android::text::LoginFilter_UsernameFilterGeneric::_class = java::fetch_class("android/text/LoginFilter$UsernameFilterGeneric");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::text::LoginFilter_UsernameFilterGeneric::isAllowed(uint16_t arg0) const {
    if (!::android::text::LoginFilter_UsernameFilterGeneric::_class) ::android::text::LoginFilter_UsernameFilterGeneric::_class = java::fetch_class("android/text/LoginFilter$UsernameFilterGeneric");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAllowed", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::text::Html_TagHandler::handleTag(bool arg0, const ::java::lang::String& arg1, const ::android::text::Editable& arg2, const ::org::xml::sax::XMLReader& arg3) const {
    if (!::android::text::Html_TagHandler::_class) ::android::text::Html_TagHandler::_class = java::fetch_class("android/text/Html$TagHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleTag", "(ZLjava/lang/String;Landroid/text/Editable;Lorg/xml/sax/XMLReader;)V");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::BoringLayout::BoringLayout(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1, int32_t arg2, const ::android::text::Layout_Alignment& arg3, float arg4, float arg5, const ::android::text::BoringLayout_Metrics& arg6, bool arg7) : ::java::lang::Object((jobject)0), ::android::text::Layout((jobject)0), ::android::text::TextUtils_EllipsizeCallback((jobject)0) {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    float _arg4 = arg4;
    float _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    bool _arg7 = arg7;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::BoringLayout::BoringLayout(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1, int32_t arg2, const ::android::text::Layout_Alignment& arg3, float arg4, float arg5, const ::android::text::BoringLayout_Metrics& arg6, bool arg7, const ::android::text::TextUtils_TruncateAt& arg8, int32_t arg9) : ::java::lang::Object((jobject)0), ::android::text::Layout((jobject)0), ::android::text::TextUtils_EllipsizeCallback((jobject)0) {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    float _arg4 = arg4;
    float _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    bool _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    int32_t _arg9 = arg9;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
}
#pragma GCC diagnostic pop

::android::text::BoringLayout android::text::BoringLayout::make(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1, int32_t arg2, const ::android::text::Layout_Alignment& arg3, float arg4, float arg5, const ::android::text::BoringLayout_Metrics& arg6, bool arg7){
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "make", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)Landroid/text/BoringLayout;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    float _arg4 = arg4;
    float _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    bool _arg7 = arg7;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::android::text::BoringLayout _ret(ret);
    return _ret;
}

::android::text::BoringLayout android::text::BoringLayout::make(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1, int32_t arg2, const ::android::text::Layout_Alignment& arg3, float arg4, float arg5, const ::android::text::BoringLayout_Metrics& arg6, bool arg7, const ::android::text::TextUtils_TruncateAt& arg8, int32_t arg9){
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "make", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)Landroid/text/BoringLayout;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    float _arg4 = arg4;
    float _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    bool _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    int32_t _arg9 = arg9;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
    ::android::text::BoringLayout _ret(ret);
    return _ret;
}

::android::text::BoringLayout android::text::BoringLayout::replaceOrMake(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1, int32_t arg2, const ::android::text::Layout_Alignment& arg3, float arg4, float arg5, const ::android::text::BoringLayout_Metrics& arg6, bool arg7) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceOrMake", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)Landroid/text/BoringLayout;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    float _arg4 = arg4;
    float _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    bool _arg7 = arg7;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::android::text::BoringLayout _ret(ret);
    return _ret;
}

::android::text::BoringLayout android::text::BoringLayout::replaceOrMake(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1, int32_t arg2, const ::android::text::Layout_Alignment& arg3, float arg4, float arg5, const ::android::text::BoringLayout_Metrics& arg6, bool arg7, const ::android::text::TextUtils_TruncateAt& arg8, int32_t arg9) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceOrMake", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)Landroid/text/BoringLayout;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    float _arg4 = arg4;
    float _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    bool _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    int32_t _arg9 = arg9;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
    ::android::text::BoringLayout _ret(ret);
    return _ret;
}

::android::text::BoringLayout_Metrics android::text::BoringLayout::isBoring(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1){
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isBoring", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;)Landroid/text/BoringLayout$Metrics;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::text::BoringLayout_Metrics _ret(ret);
    return _ret;
}

::android::text::BoringLayout_Metrics android::text::BoringLayout::isBoring(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1, const ::android::text::BoringLayout_Metrics& arg2){
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isBoring", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;Landroid/text/BoringLayout$Metrics;)Landroid/text/BoringLayout$Metrics;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::text::BoringLayout_Metrics _ret(ret);
    return _ret;
}

int32_t android::text::BoringLayout::getHeight() const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::BoringLayout::getLineCount() const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::BoringLayout::getLineTop(int32_t arg0) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineTop", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::BoringLayout::getLineDescent(int32_t arg0) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineDescent", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::BoringLayout::getLineStart(int32_t arg0) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineStart", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::BoringLayout::getParagraphDirection(int32_t arg0) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParagraphDirection", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::text::BoringLayout::getLineContainsTab(int32_t arg0) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineContainsTab", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

float android::text::BoringLayout::getLineMax(int32_t arg0) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineMax", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

::android::text::Layout_Directions android::text::BoringLayout::getLineDirections(int32_t arg0) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineDirections", "(I)Landroid/text/Layout$Directions;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::text::Layout_Directions _ret(ret);
    return _ret;
}

int32_t android::text::BoringLayout::getTopPadding() const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTopPadding", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::BoringLayout::getBottomPadding() const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBottomPadding", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::BoringLayout::getEllipsisCount(int32_t arg0) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsisCount", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::BoringLayout::getEllipsisStart(int32_t arg0) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsisStart", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::BoringLayout::getEllipsizedWidth() const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsizedWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::BoringLayout::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::Path& arg1, const ::android::graphics::Paint& arg2, int32_t arg3) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Paint;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::BoringLayout::ellipsized(int32_t arg0, int32_t arg1) const {
    if (!::android::text::BoringLayout::_class) ::android::text::BoringLayout::_class = java::fetch_class("android/text/BoringLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "ellipsized", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::Editable_Factory::Editable_Factory() : ::java::lang::Object((jobject)0) {
    if (!::android::text::Editable_Factory::_class) ::android::text::Editable_Factory::_class = java::fetch_class("android/text/Editable$Factory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::text::Editable_Factory android::text::Editable_Factory::getInstance(){
    if (!::android::text::Editable_Factory::_class) ::android::text::Editable_Factory::_class = java::fetch_class("android/text/Editable$Factory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/text/Editable$Factory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::text::Editable_Factory _ret(ret);
    return _ret;
}

::android::text::Editable android::text::Editable_Factory::newEditable(const ::java::lang::CharSequence& arg0) const {
    if (!::android::text::Editable_Factory::_class) ::android::text::Editable_Factory::_class = java::fetch_class("android/text/Editable$Factory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newEditable", "(Ljava/lang/CharSequence;)Landroid/text/Editable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::text::Editable _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::LoginFilter::filter(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, const ::android::text::Spanned& arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::text::LoginFilter::_class) ::android::text::LoginFilter::_class = java::fetch_class("android/text/LoginFilter");
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

void android::text::LoginFilter::onStart() const {
    if (!::android::text::LoginFilter::_class) ::android::text::LoginFilter::_class = java::fetch_class("android/text/LoginFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::text::LoginFilter::onInvalidCharacter(uint16_t arg0) const {
    if (!::android::text::LoginFilter::_class) ::android::text::LoginFilter::_class = java::fetch_class("android/text/LoginFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInvalidCharacter", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::LoginFilter::onStop() const {
    if (!::android::text::LoginFilter::_class) ::android::text::LoginFilter::_class = java::fetch_class("android/text/LoginFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::text::LoginFilter::isAllowed(uint16_t arg0) const {
    if (!::android::text::LoginFilter::_class) ::android::text::LoginFilter::_class = java::fetch_class("android/text/LoginFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAllowed", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::AndroidCharacter::AndroidCharacter() : ::java::lang::Object((jobject)0) {
    if (!::android::text::AndroidCharacter::_class) ::android::text::AndroidCharacter::_class = java::fetch_class("android/text/AndroidCharacter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::text::AndroidCharacter::getDirectionalities(const std::vector< uint16_t>& arg0, const std::vector< int8_t>& arg1, int32_t arg2){
    if (!::android::text::AndroidCharacter::_class) ::android::text::AndroidCharacter::_class = java::fetch_class("android/text/AndroidCharacter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDirectionalities", "([C[BI)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::text::AndroidCharacter::getEastAsianWidth(uint16_t arg0){
    if (!::android::text::AndroidCharacter::_class) ::android::text::AndroidCharacter::_class = java::fetch_class("android/text/AndroidCharacter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getEastAsianWidth", "(C)I");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::text::AndroidCharacter::getEastAsianWidths(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, const std::vector< int8_t>& arg3){
    if (!::android::text::AndroidCharacter::_class) ::android::text::AndroidCharacter::_class = java::fetch_class("android/text/AndroidCharacter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getEastAsianWidths", "([CII[B)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::AndroidCharacter::mirror(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::android::text::AndroidCharacter::_class) ::android::text::AndroidCharacter::_class = java::fetch_class("android/text/AndroidCharacter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "mirror", "([CII)Z");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

uint16_t android::text::AndroidCharacter::getMirror(uint16_t arg0){
    if (!::android::text::AndroidCharacter::_class) ::android::text::AndroidCharacter::_class = java::fetch_class("android/text/AndroidCharacter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMirror", "(C)C");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticCharMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::ClipboardManager::ClipboardManager() : ::java::lang::Object((jobject)0) {
    if (!::android::text::ClipboardManager::_class) ::android::text::ClipboardManager::_class = java::fetch_class("android/text/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::text::ClipboardManager::getText() const {
    if (!::android::text::ClipboardManager::_class) ::android::text::ClipboardManager::_class = java::fetch_class("android/text/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::text::ClipboardManager::setText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::text::ClipboardManager::_class) ::android::text::ClipboardManager::_class = java::fetch_class("android/text/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::text::ClipboardManager::hasText() const {
    if (!::android::text::ClipboardManager::_class) ::android::text::ClipboardManager::_class = java::fetch_class("android/text/ClipboardManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::DynamicLayout::DynamicLayout(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1, int32_t arg2, const ::android::text::Layout_Alignment& arg3, float arg4, float arg5, bool arg6) : ::java::lang::Object((jobject)0), ::android::text::Layout((jobject)0) {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    float _arg4 = arg4;
    float _arg5 = arg5;
    bool _arg6 = arg6;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::DynamicLayout::DynamicLayout(const ::java::lang::CharSequence& arg0, const ::java::lang::CharSequence& arg1, const ::android::text::TextPaint& arg2, int32_t arg3, const ::android::text::Layout_Alignment& arg4, float arg5, float arg6, bool arg7) : ::java::lang::Object((jobject)0), ::android::text::Layout((jobject)0) {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    float _arg5 = arg5;
    float _arg6 = arg6;
    bool _arg7 = arg7;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::DynamicLayout::DynamicLayout(const ::java::lang::CharSequence& arg0, const ::java::lang::CharSequence& arg1, const ::android::text::TextPaint& arg2, int32_t arg3, const ::android::text::Layout_Alignment& arg4, float arg5, float arg6, bool arg7, const ::android::text::TextUtils_TruncateAt& arg8, int32_t arg9) : ::java::lang::Object((jobject)0), ::android::text::Layout((jobject)0) {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZLandroid/text/TextUtils$TruncateAt;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    float _arg5 = arg5;
    float _arg6 = arg6;
    bool _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    int32_t _arg9 = arg9;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
}
#pragma GCC diagnostic pop

int32_t android::text::DynamicLayout::getLineCount() const {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::DynamicLayout::getLineTop(int32_t arg0) const {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineTop", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::DynamicLayout::getLineDescent(int32_t arg0) const {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineDescent", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::DynamicLayout::getLineStart(int32_t arg0) const {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineStart", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::text::DynamicLayout::getLineContainsTab(int32_t arg0) const {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineContainsTab", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::text::DynamicLayout::getParagraphDirection(int32_t arg0) const {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParagraphDirection", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::text::Layout_Directions android::text::DynamicLayout::getLineDirections(int32_t arg0) const {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineDirections", "(I)Landroid/text/Layout$Directions;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::text::Layout_Directions _ret(ret);
    return _ret;
}

int32_t android::text::DynamicLayout::getTopPadding() const {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTopPadding", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::DynamicLayout::getBottomPadding() const {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBottomPadding", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::DynamicLayout::getEllipsizedWidth() const {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsizedWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::DynamicLayout::getEllipsisStart(int32_t arg0) const {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsisStart", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::DynamicLayout::getEllipsisCount(int32_t arg0) const {
    if (!::android::text::DynamicLayout::_class) ::android::text::DynamicLayout::_class = java::fetch_class("android/text/DynamicLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsisCount", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::text::TextUtils::getChars(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, const std::vector< uint16_t>& arg3, int32_t arg4){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getChars", "(Ljava/lang/CharSequence;II[CI)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jcharArray _arg3 = java::jni->NewCharArray(arg3.size());
    java::jni->SetCharArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t android::text::TextUtils::indexOf(const ::java::lang::CharSequence& arg0, uint16_t arg1){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "indexOf", "(Ljava/lang/CharSequence;C)I");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::text::TextUtils::indexOf(const ::java::lang::CharSequence& arg0, uint16_t arg1, int32_t arg2){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "indexOf", "(Ljava/lang/CharSequence;CI)I");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::text::TextUtils::indexOf(const ::java::lang::CharSequence& arg0, uint16_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "indexOf", "(Ljava/lang/CharSequence;CII)I");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::text::TextUtils::lastIndexOf(const ::java::lang::CharSequence& arg0, uint16_t arg1){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "lastIndexOf", "(Ljava/lang/CharSequence;C)I");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::text::TextUtils::lastIndexOf(const ::java::lang::CharSequence& arg0, uint16_t arg1, int32_t arg2){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "lastIndexOf", "(Ljava/lang/CharSequence;CI)I");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::text::TextUtils::lastIndexOf(const ::java::lang::CharSequence& arg0, uint16_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "lastIndexOf", "(Ljava/lang/CharSequence;CII)I");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::text::TextUtils::indexOf(const ::java::lang::CharSequence& arg0, const ::java::lang::CharSequence& arg1){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "indexOf", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::text::TextUtils::indexOf(const ::java::lang::CharSequence& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "indexOf", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;I)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::text::TextUtils::indexOf(const ::java::lang::CharSequence& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2, int32_t arg3){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "indexOf", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;II)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::text::TextUtils::regionMatches(const ::java::lang::CharSequence& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2, int32_t arg3, int32_t arg4){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "regionMatches", "(Ljava/lang/CharSequence;ILjava/lang/CharSequence;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

::java::lang::String android::text::TextUtils::substring(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "substring", "(Ljava/lang/CharSequence;II)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::TextUtils::join(const ::java::lang::CharSequence& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "join", "(Ljava/lang/CharSequence;[Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::TextUtils::join(const ::java::lang::CharSequence& arg0, const ::java::lang::Iterable& arg1){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "join", "(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::text::TextUtils::split(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "split", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> android::text::TextUtils::split(const ::java::lang::String& arg0, const ::java::util::regex::Pattern& arg1){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "split", "(Ljava/lang/String;Ljava/util/regex/Pattern;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::CharSequence android::text::TextUtils::stringOrSpannedString(const ::java::lang::CharSequence& arg0){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stringOrSpannedString", "(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

bool android::text::TextUtils::isEmpty(const ::java::lang::CharSequence& arg0){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isEmpty", "(Ljava/lang/CharSequence;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t android::text::TextUtils::getTrimmedLength(const ::java::lang::CharSequence& arg0){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTrimmedLength", "(Ljava/lang/CharSequence;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

bool android::text::TextUtils::equals(const ::java::lang::CharSequence& arg0, const ::java::lang::CharSequence& arg1){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equals", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::text::TextUtils::getReverse(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getReverse", "(Ljava/lang/CharSequence;II)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::text::TextUtils::writeToParcel(const ::java::lang::CharSequence& arg0, const ::android::os::Parcel& arg1, int32_t arg2){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeToParcel", "(Ljava/lang/CharSequence;Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::text::TextUtils::dumpSpans(const ::java::lang::CharSequence& arg0, const ::android::util::Printer& arg1, const ::java::lang::String& arg2){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpSpans", "(Ljava/lang/CharSequence;Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::lang::CharSequence android::text::TextUtils::replace(const ::java::lang::CharSequence& arg0, const std::vector< ::java::lang::String>& arg1, const std::vector< ::java::lang::CharSequence>& arg2){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "replace", "(Ljava/lang/CharSequence;[Ljava/lang/String;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    unsigned arg2s = arg2.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::CharSequence& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::TextUtils::expandTemplate(const ::java::lang::CharSequence& arg0, const std::vector< ::java::lang::CharSequence>& arg1){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "expandTemplate", "(Ljava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::CharSequence& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::text::TextUtils::getOffsetBefore(const ::java::lang::CharSequence& arg0, int32_t arg1){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getOffsetBefore", "(Ljava/lang/CharSequence;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::text::TextUtils::getOffsetAfter(const ::java::lang::CharSequence& arg0, int32_t arg1){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getOffsetAfter", "(Ljava/lang/CharSequence;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

void android::text::TextUtils::copySpansFrom(const ::android::text::Spanned& arg0, int32_t arg1, int32_t arg2, const ::java::lang::Class& arg3, const ::android::text::Spannable& arg4, int32_t arg5){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copySpansFrom", "(Landroid/text/Spanned;IILjava/lang/Class;Landroid/text/Spannable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

::java::lang::CharSequence android::text::TextUtils::ellipsize(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1, float arg2, const ::android::text::TextUtils_TruncateAt& arg3){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ellipsize", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLandroid/text/TextUtils$TruncateAt;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::TextUtils::ellipsize(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1, float arg2, const ::android::text::TextUtils_TruncateAt& arg3, bool arg4, const ::android::text::TextUtils_EllipsizeCallback& arg5){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ellipsize", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLandroid/text/TextUtils$TruncateAt;ZLandroid/text/TextUtils$EllipsizeCallback;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    bool _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::TextUtils::commaEllipsize(const ::java::lang::CharSequence& arg0, const ::android::text::TextPaint& arg1, float arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "commaEllipsize", "(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLjava/lang/String;Ljava/lang/String;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::text::TextUtils::htmlEncode(const ::java::lang::String& arg0){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "htmlEncode", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::TextUtils::concat(const std::vector< ::java::lang::CharSequence>& arg0){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "concat", "([Ljava/lang/CharSequence;)Ljava/lang/CharSequence;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::CharSequence& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

bool android::text::TextUtils::isGraphic(const ::java::lang::CharSequence& arg0){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isGraphic", "(Ljava/lang/CharSequence;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::text::TextUtils::isGraphic(uint16_t arg0){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isGraphic", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::text::TextUtils::isDigitsOnly(const ::java::lang::CharSequence& arg0){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isDigitsOnly", "(Ljava/lang/CharSequence;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t android::text::TextUtils::getCapsMode(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2){
    if (!::android::text::TextUtils::_class) ::android::text::TextUtils::_class = java::fetch_class("android/text/TextUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCapsMode", "(Ljava/lang/CharSequence;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::SpannableStringBuilder::SpannableStringBuilder() : ::java::lang::Object((jobject)0), ::android::text::Editable((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::Spannable((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::SpannableStringBuilder::SpannableStringBuilder(const ::java::lang::CharSequence& arg0) : ::java::lang::Object((jobject)0), ::android::text::Editable((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::Spannable((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::SpannableStringBuilder::SpannableStringBuilder(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::text::Editable((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::Spannable((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/CharSequence;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::text::SpannableStringBuilder android::text::SpannableStringBuilder::valueOf(const ::java::lang::CharSequence& arg0){
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::text::SpannableStringBuilder _ret(ret);
    return _ret;
}

uint16_t android::text::SpannableStringBuilder::charAt(int32_t arg0) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "charAt", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

int32_t android::text::SpannableStringBuilder::length() const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::text::SpannableStringBuilder android::text::SpannableStringBuilder::insert(int32_t arg0, const ::java::lang::CharSequence& arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::text::SpannableStringBuilder _ret(ret);
    return _ret;
}

::android::text::SpannableStringBuilder android::text::SpannableStringBuilder::insert(int32_t arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(ILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::text::SpannableStringBuilder _ret(ret);
    return _ret;
}

::android::text::SpannableStringBuilder android::text::SpannableStringBuilder::delete_(int32_t arg0, int32_t arg1) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(II)Landroid/text/SpannableStringBuilder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::text::SpannableStringBuilder _ret(ret);
    return _ret;
}

void android::text::SpannableStringBuilder::clear() const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::text::SpannableStringBuilder::clearSpans() const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearSpans", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::text::SpannableStringBuilder android::text::SpannableStringBuilder::append(const ::java::lang::CharSequence& arg0) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::text::SpannableStringBuilder _ret(ret);
    return _ret;
}

::android::text::SpannableStringBuilder android::text::SpannableStringBuilder::append(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::text::SpannableStringBuilder _ret(ret);
    return _ret;
}

::android::text::SpannableStringBuilder android::text::SpannableStringBuilder::append(uint16_t arg0) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(C)Landroid/text/SpannableStringBuilder;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::text::SpannableStringBuilder _ret(ret);
    return _ret;
}

::android::text::SpannableStringBuilder android::text::SpannableStringBuilder::replace(int32_t arg0, int32_t arg1, const ::java::lang::CharSequence& arg2) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(IILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::text::SpannableStringBuilder _ret(ret);
    return _ret;
}

::android::text::SpannableStringBuilder android::text::SpannableStringBuilder::replace(int32_t arg0, int32_t arg1, const ::java::lang::CharSequence& arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(IILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::text::SpannableStringBuilder _ret(ret);
    return _ret;
}

void android::text::SpannableStringBuilder::setSpan(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpan", "(Ljava/lang/Object;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::text::SpannableStringBuilder::removeSpan(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeSpan", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::text::SpannableStringBuilder::getSpanStart(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanStart", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::SpannableStringBuilder::getSpanEnd(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanEnd", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::text::SpannableStringBuilder::getSpanFlags(const ::java::lang::Object& arg0) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanFlags", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::Object> android::text::SpannableStringBuilder::getSpans(int32_t arg0, int32_t arg1, const ::java::lang::Class& arg2) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpans", "(IILjava/lang/Class;)[Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::text::SpannableStringBuilder::nextSpanTransition(int32_t arg0, int32_t arg1, const ::java::lang::Class& arg2) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextSpanTransition", "(IILjava/lang/Class;)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::CharSequence android::text::SpannableStringBuilder::subSequence(int32_t arg0, int32_t arg1) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSequence", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::text::SpannableStringBuilder::getChars(int32_t arg0, int32_t arg1, const std::vector< uint16_t>& arg2, int32_t arg3) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChars", "(II[CI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jcharArray _arg2 = java::jni->NewCharArray(arg2.size());
    java::jni->SetCharArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::java::lang::String android::text::SpannableStringBuilder::toString() const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::text::SpannableStringBuilder::getTextRunCursor(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const ::android::graphics::Paint& arg5) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextRunCursor", "(IIIIILandroid/graphics/Paint;)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::text::SpannableStringBuilder::setFilters(const std::vector< ::android::text::InputFilter>& arg0) const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilters", "([Landroid/text/InputFilter;)V");
    unsigned arg0s = arg0.size();
    if (!::android::text::InputFilter::_class) ::android::text::InputFilter::_class = java::fetch_class("android/text/InputFilter");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::text::InputFilter::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::text::InputFilter& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::text::InputFilter> android::text::SpannableStringBuilder::getFilters() const {
    if (!::android::text::SpannableStringBuilder::_class) ::android::text::SpannableStringBuilder::_class = java::fetch_class("android/text/SpannableStringBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilters", "()[Landroid/text/InputFilter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::text::InputFilter> _ret(rets, ::android::text::InputFilter((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::text::InputFilter retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::InputFilter_AllCaps::InputFilter_AllCaps() : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0) {
    if (!::android::text::InputFilter_AllCaps::_class) ::android::text::InputFilter_AllCaps::_class = java::fetch_class("android/text/InputFilter$AllCaps");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::text::InputFilter_AllCaps::filter(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, const ::android::text::Spanned& arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::text::InputFilter_AllCaps::_class) ::android::text::InputFilter_AllCaps::_class = java::fetch_class("android/text/InputFilter$AllCaps");
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

int32_t android::text::Selection::getSelectionStart(const ::java::lang::CharSequence& arg0){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSelectionStart", "(Ljava/lang/CharSequence;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::text::Selection::getSelectionEnd(const ::java::lang::CharSequence& arg0){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSelectionEnd", "(Ljava/lang/CharSequence;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::text::Selection::setSelection(const ::android::text::Spannable& arg0, int32_t arg1, int32_t arg2){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setSelection", "(Landroid/text/Spannable;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::text::Selection::setSelection(const ::android::text::Spannable& arg0, int32_t arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setSelection", "(Landroid/text/Spannable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::text::Selection::selectAll(const ::android::text::Spannable& arg0){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "selectAll", "(Landroid/text/Spannable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::text::Selection::extendSelection(const ::android::text::Spannable& arg0, int32_t arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "extendSelection", "(Landroid/text/Spannable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::text::Selection::removeSelection(const ::android::text::Spannable& arg0){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "removeSelection", "(Landroid/text/Spannable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool android::text::Selection::moveUp(const ::android::text::Spannable& arg0, const ::android::text::Layout& arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "moveUp", "(Landroid/text/Spannable;Landroid/text/Layout;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::Selection::moveDown(const ::android::text::Spannable& arg0, const ::android::text::Layout& arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "moveDown", "(Landroid/text/Spannable;Landroid/text/Layout;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::Selection::moveLeft(const ::android::text::Spannable& arg0, const ::android::text::Layout& arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "moveLeft", "(Landroid/text/Spannable;Landroid/text/Layout;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::Selection::moveRight(const ::android::text::Spannable& arg0, const ::android::text::Layout& arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "moveRight", "(Landroid/text/Spannable;Landroid/text/Layout;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::Selection::extendUp(const ::android::text::Spannable& arg0, const ::android::text::Layout& arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "extendUp", "(Landroid/text/Spannable;Landroid/text/Layout;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::Selection::extendDown(const ::android::text::Spannable& arg0, const ::android::text::Layout& arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "extendDown", "(Landroid/text/Spannable;Landroid/text/Layout;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::Selection::extendLeft(const ::android::text::Spannable& arg0, const ::android::text::Layout& arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "extendLeft", "(Landroid/text/Spannable;Landroid/text/Layout;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::Selection::extendRight(const ::android::text::Spannable& arg0, const ::android::text::Layout& arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "extendRight", "(Landroid/text/Spannable;Landroid/text/Layout;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::Selection::extendToLeftEdge(const ::android::text::Spannable& arg0, const ::android::text::Layout& arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "extendToLeftEdge", "(Landroid/text/Spannable;Landroid/text/Layout;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::Selection::extendToRightEdge(const ::android::text::Spannable& arg0, const ::android::text::Layout& arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "extendToRightEdge", "(Landroid/text/Spannable;Landroid/text/Layout;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::Selection::moveToLeftEdge(const ::android::text::Spannable& arg0, const ::android::text::Layout& arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "moveToLeftEdge", "(Landroid/text/Spannable;Landroid/text/Layout;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::Selection::moveToRightEdge(const ::android::text::Spannable& arg0, const ::android::text::Layout& arg1){
    if (!::android::text::Selection::_class) ::android::text::Selection::_class = java::fetch_class("android/text/Selection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "moveToRightEdge", "(Landroid/text/Spannable;Landroid/text/Layout;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

std::vector< ::android::text::TextUtils_TruncateAt> android::text::TextUtils_TruncateAt::values(){
    if (!::android::text::TextUtils_TruncateAt::_class) ::android::text::TextUtils_TruncateAt::_class = java::fetch_class("android/text/TextUtils$TruncateAt");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/text/TextUtils$TruncateAt;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::text::TextUtils_TruncateAt> _ret(rets, ::android::text::TextUtils_TruncateAt((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::text::TextUtils_TruncateAt retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::text::TextUtils_TruncateAt android::text::TextUtils_TruncateAt::valueOf(const ::java::lang::String& arg0){
    if (!::android::text::TextUtils_TruncateAt::_class) ::android::text::TextUtils_TruncateAt::_class = java::fetch_class("android/text/TextUtils$TruncateAt");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/text/TextUtils$TruncateAt;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::text::TextUtils_TruncateAt _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::BoringLayout_Metrics::BoringLayout_Metrics() : ::java::lang::Object((jobject)0), ::android::graphics::Paint_FontMetricsInt((jobject)0) {
    if (!::android::text::BoringLayout_Metrics::_class) ::android::text::BoringLayout_Metrics::_class = java::fetch_class("android/text/BoringLayout$Metrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::text::BoringLayout_Metrics::toString() const {
    if (!::android::text::BoringLayout_Metrics::_class) ::android::text::BoringLayout_Metrics::_class = java::fetch_class("android/text/BoringLayout$Metrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::NoCopySpan_Concrete::NoCopySpan_Concrete() : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0) {
    if (!::android::text::NoCopySpan_Concrete::_class) ::android::text::NoCopySpan_Concrete::_class = java::fetch_class("android/text/NoCopySpan$Concrete");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::LoginFilter_PasswordFilterGMail::LoginFilter_PasswordFilterGMail() : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::LoginFilter((jobject)0) {
    if (!::android::text::LoginFilter_PasswordFilterGMail::_class) ::android::text::LoginFilter_PasswordFilterGMail::_class = java::fetch_class("android/text/LoginFilter$PasswordFilterGMail");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::LoginFilter_PasswordFilterGMail::LoginFilter_PasswordFilterGMail(bool arg0) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::LoginFilter((jobject)0) {
    if (!::android::text::LoginFilter_PasswordFilterGMail::_class) ::android::text::LoginFilter_PasswordFilterGMail::_class = java::fetch_class("android/text/LoginFilter$PasswordFilterGMail");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::text::LoginFilter_PasswordFilterGMail::isAllowed(uint16_t arg0) const {
    if (!::android::text::LoginFilter_PasswordFilterGMail::_class) ::android::text::LoginFilter_PasswordFilterGMail::_class = java::fetch_class("android/text/LoginFilter$PasswordFilterGMail");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAllowed", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

