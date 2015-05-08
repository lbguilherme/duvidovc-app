#include "java-core.hpp"
#include <memory>
#include "android.text.Spannable.hpp"
#include "android.text.util.Linkify.hpp"
#include "android.text.util.Rfc822Token.hpp"
#include "android.text.util.Rfc822Tokenizer.hpp"
#include "android.widget.TextView.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Collection.hpp"
#include "java.util.regex.Matcher.hpp"
#include "java.util.regex.Pattern.hpp"

jclass android::text::util::Linkify::_class = nullptr;
jclass android::text::util::Rfc822Tokenizer::_class = nullptr;
jclass android::text::util::Rfc822Token::_class = nullptr;
jclass android::text::util::Linkify_MatchFilter::_class = nullptr;
jclass android::text::util::Linkify_TransformFilter::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::util::Linkify::Linkify() : ::java::lang::Object((jobject)0) {
    if (!::android::text::util::Linkify::_class) ::android::text::util::Linkify::_class = java::fetch_class("android/text/util/Linkify");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::text::util::Linkify::addLinks(const ::android::text::Spannable& arg0, int32_t arg1){
    if (!::android::text::util::Linkify::_class) ::android::text::util::Linkify::_class = java::fetch_class("android/text/util/Linkify");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addLinks", "(Landroid/text/Spannable;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::text::util::Linkify::addLinks(const ::android::widget::TextView& arg0, int32_t arg1){
    if (!::android::text::util::Linkify::_class) ::android::text::util::Linkify::_class = java::fetch_class("android/text/util/Linkify");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addLinks", "(Landroid/widget/TextView;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

void android::text::util::Linkify::addLinks(const ::android::widget::TextView& arg0, const ::java::util::regex::Pattern& arg1, const ::java::lang::String& arg2){
    if (!::android::text::util::Linkify::_class) ::android::text::util::Linkify::_class = java::fetch_class("android/text/util/Linkify");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addLinks", "(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::text::util::Linkify::addLinks(const ::android::widget::TextView& arg0, const ::java::util::regex::Pattern& arg1, const ::java::lang::String& arg2, const ::android::text::util::Linkify_MatchFilter& arg3, const ::android::text::util::Linkify_TransformFilter& arg4){
    if (!::android::text::util::Linkify::_class) ::android::text::util::Linkify::_class = java::fetch_class("android/text/util/Linkify");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addLinks", "(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

bool android::text::util::Linkify::addLinks(const ::android::text::Spannable& arg0, const ::java::util::regex::Pattern& arg1, const ::java::lang::String& arg2){
    if (!::android::text::util::Linkify::_class) ::android::text::util::Linkify::_class = java::fetch_class("android/text/util/Linkify");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addLinks", "(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool android::text::util::Linkify::addLinks(const ::android::text::Spannable& arg0, const ::java::util::regex::Pattern& arg1, const ::java::lang::String& arg2, const ::android::text::util::Linkify_MatchFilter& arg3, const ::android::text::util::Linkify_TransformFilter& arg4){
    if (!::android::text::util::Linkify::_class) ::android::text::util::Linkify::_class = java::fetch_class("android/text/util/Linkify");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addLinks", "(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::util::Rfc822Tokenizer::Rfc822Tokenizer() : ::java::lang::Object((jobject)0), ::android::widget::MultiAutoCompleteTextView_Tokenizer((jobject)0) {
    if (!::android::text::util::Rfc822Tokenizer::_class) ::android::text::util::Rfc822Tokenizer::_class = java::fetch_class("android/text/util/Rfc822Tokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::text::util::Rfc822Tokenizer::tokenize(const ::java::lang::CharSequence& arg0, const ::java::util::Collection& arg1){
    if (!::android::text::util::Rfc822Tokenizer::_class) ::android::text::util::Rfc822Tokenizer::_class = java::fetch_class("android/text/util/Rfc822Tokenizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "tokenize", "(Ljava/lang/CharSequence;Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

std::vector< ::android::text::util::Rfc822Token> android::text::util::Rfc822Tokenizer::tokenize(const ::java::lang::CharSequence& arg0){
    if (!::android::text::util::Rfc822Tokenizer::_class) ::android::text::util::Rfc822Tokenizer::_class = java::fetch_class("android/text/util/Rfc822Tokenizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "tokenize", "(Ljava/lang/CharSequence;)[Landroid/text/util/Rfc822Token;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::text::util::Rfc822Token> _ret(rets, ::android::text::util::Rfc822Token((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::text::util::Rfc822Token retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::text::util::Rfc822Tokenizer::findTokenStart(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::text::util::Rfc822Tokenizer::_class) ::android::text::util::Rfc822Tokenizer::_class = java::fetch_class("android/text/util/Rfc822Tokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "findTokenStart", "(Ljava/lang/CharSequence;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::text::util::Rfc822Tokenizer::findTokenEnd(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::text::util::Rfc822Tokenizer::_class) ::android::text::util::Rfc822Tokenizer::_class = java::fetch_class("android/text/util/Rfc822Tokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "findTokenEnd", "(Ljava/lang/CharSequence;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::text::util::Rfc822Tokenizer::terminateToken(const ::java::lang::CharSequence& arg0) const {
    if (!::android::text::util::Rfc822Tokenizer::_class) ::android::text::util::Rfc822Tokenizer::_class = java::fetch_class("android/text/util/Rfc822Tokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "terminateToken", "(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::util::Rfc822Token::Rfc822Token(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::String android::text::util::Rfc822Token::getName() const {
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::util::Rfc822Token::getAddress() const {
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddress", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::util::Rfc822Token::getComment() const {
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComment", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::text::util::Rfc822Token::setName(const ::java::lang::String& arg0) const {
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "setName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::util::Rfc822Token::setAddress(const ::java::lang::String& arg0) const {
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAddress", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::util::Rfc822Token::setComment(const ::java::lang::String& arg0) const {
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComment", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::text::util::Rfc822Token::toString() const {
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::util::Rfc822Token::quoteNameIfNecessary(const ::java::lang::String& arg0){
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "quoteNameIfNecessary", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::util::Rfc822Token::quoteName(const ::java::lang::String& arg0){
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "quoteName", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::util::Rfc822Token::quoteComment(const ::java::lang::String& arg0){
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "quoteComment", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::text::util::Rfc822Token::hashCode() const {
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::text::util::Rfc822Token::equals(const ::java::lang::Object& arg0) const {
    if (!::android::text::util::Rfc822Token::_class) ::android::text::util::Rfc822Token::_class = java::fetch_class("android/text/util/Rfc822Token");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::text::util::Linkify_MatchFilter::acceptMatch(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::text::util::Linkify_MatchFilter::_class) ::android::text::util::Linkify_MatchFilter::_class = java::fetch_class("android/text/util/Linkify$MatchFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "acceptMatch", "(Ljava/lang/CharSequence;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::text::util::Linkify_TransformFilter::transformUrl(const ::java::util::regex::Matcher& arg0, const ::java::lang::String& arg1) const {
    if (!::android::text::util::Linkify_TransformFilter::_class) ::android::text::util::Linkify_TransformFilter::_class = java::fetch_class("android/text/util/Linkify$TransformFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "transformUrl", "(Ljava/util/regex/Matcher;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

