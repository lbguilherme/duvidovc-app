#include "java-core.hpp"
#include <memory>
#include "android.support.v4.text.BidiFormatter.hpp"
#include "android.support.v4.text.ICUCompat.hpp"
#include "android.support.v4.text.TextDirectionHeuristicCompat.hpp"
#include "android.support.v4.text.TextDirectionHeuristicsCompat.hpp"
#include "android.support.v4.text.TextUtilsCompat.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.String.hpp"
#include "java.util.Locale.hpp"

jclass android::support::v4::text::ICUCompat_ICUCompatImplBase::_class = nullptr;
jclass android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicLocale::_class = nullptr;
jclass android::support::v4::text::BidiFormatter_Builder::_class = nullptr;
jclass android::support::v4::text::ICUCompat::_class = nullptr;
jclass android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm::_class = nullptr;
jclass android::support::v4::text::TextDirectionHeuristicCompat::_class = nullptr;
jclass android::support::v4::text::TextDirectionHeuristicsCompat_AnyStrong::_class = nullptr;
jclass android::support::v4::text::ICUCompat_ICUCompatImpl::_class = nullptr;
jclass android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl::_class = nullptr;
jclass android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicInternal::_class = nullptr;
jclass android::support::v4::text::TextDirectionHeuristicsCompat_FirstStrong::_class = nullptr;
jclass android::support::v4::text::ICUCompat_ICUCompatImplIcs::_class = nullptr;
jclass android::support::v4::text::BidiFormatter::_class = nullptr;
jclass android::support::v4::text::TextDirectionHeuristicsCompat::_class = nullptr;
jclass android::support::v4::text::BidiFormatter_DirectionalityEstimator::_class = nullptr;
jclass android::support::v4::text::TextUtilsCompat::_class = nullptr;

::java::lang::String android::support::v4::text::ICUCompat_ICUCompatImplBase::getScript(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::text::ICUCompat_ICUCompatImplBase::_class) ::android::support::v4::text::ICUCompat_ICUCompatImplBase::_class = java::fetch_class("android/support/v4/text/ICUCompat$ICUCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScript", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::text::ICUCompat_ICUCompatImplBase::addLikelySubtags(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::text::ICUCompat_ICUCompatImplBase::_class) ::android::support::v4::text::ICUCompat_ICUCompatImplBase::_class = java::fetch_class("android/support/v4/text/ICUCompat$ICUCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLikelySubtags", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicLocale::TextDirectionHeuristicsCompat_TextDirectionHeuristicLocale() : ::java::lang::Object((jobject)0), ::android::support::v4::text::TextDirectionHeuristicCompat((jobject)0), ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl((jobject)0) {
    if (!::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicLocale::_class) ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicLocale::_class = java::fetch_class("android/support/v4/text/TextDirectionHeuristicsCompat$TextDirectionHeuristicLocale");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::text::BidiFormatter_Builder::BidiFormatter_Builder() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::text::BidiFormatter_Builder::_class) ::android::support::v4::text::BidiFormatter_Builder::_class = java::fetch_class("android/support/v4/text/BidiFormatter$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::text::BidiFormatter_Builder::BidiFormatter_Builder(bool arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::text::BidiFormatter_Builder::_class) ::android::support::v4::text::BidiFormatter_Builder::_class = java::fetch_class("android/support/v4/text/BidiFormatter$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::text::BidiFormatter_Builder::BidiFormatter_Builder(const ::java::util::Locale& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::text::BidiFormatter_Builder::_class) ::android::support::v4::text::BidiFormatter_Builder::_class = java::fetch_class("android/support/v4/text/BidiFormatter$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::text::BidiFormatter_Builder android::support::v4::text::BidiFormatter_Builder::stereoReset(bool arg0) const {
    if (!::android::support::v4::text::BidiFormatter_Builder::_class) ::android::support::v4::text::BidiFormatter_Builder::_class = java::fetch_class("android/support/v4/text/BidiFormatter$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "stereoReset", "(Z)Landroid/support/v4/text/BidiFormatter$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::text::BidiFormatter_Builder _ret(ret);
    return _ret;
}

::android::support::v4::text::BidiFormatter_Builder android::support::v4::text::BidiFormatter_Builder::setTextDirectionHeuristic(const ::android::support::v4::text::TextDirectionHeuristicCompat& arg0) const {
    if (!::android::support::v4::text::BidiFormatter_Builder::_class) ::android::support::v4::text::BidiFormatter_Builder::_class = java::fetch_class("android/support/v4/text/BidiFormatter$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextDirectionHeuristic", "(Landroid/support/v4/text/TextDirectionHeuristicCompat;)Landroid/support/v4/text/BidiFormatter$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::text::BidiFormatter_Builder _ret(ret);
    return _ret;
}

::android::support::v4::text::BidiFormatter android::support::v4::text::BidiFormatter_Builder::build() const {
    if (!::android::support::v4::text::BidiFormatter_Builder::_class) ::android::support::v4::text::BidiFormatter_Builder::_class = java::fetch_class("android/support/v4/text/BidiFormatter$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/support/v4/text/BidiFormatter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::text::BidiFormatter _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::text::ICUCompat::ICUCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::text::ICUCompat::_class) ::android::support::v4::text::ICUCompat::_class = java::fetch_class("android/support/v4/text/ICUCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::support::v4::text::ICUCompat::getScript(const ::java::lang::String& arg0){
    if (!::android::support::v4::text::ICUCompat::_class) ::android::support::v4::text::ICUCompat::_class = java::fetch_class("android/support/v4/text/ICUCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getScript", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::text::ICUCompat::addLikelySubtags(const ::java::lang::String& arg0){
    if (!::android::support::v4::text::ICUCompat::_class) ::android::support::v4::text::ICUCompat::_class = java::fetch_class("android/support/v4/text/ICUCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addLikelySubtags", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm::checkRtl(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm::_class) ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm::_class = java::fetch_class("android/support/v4/text/TextDirectionHeuristicsCompat$TextDirectionAlgorithm");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkRtl", "(Ljava/lang/CharSequence;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::text::TextDirectionHeuristicCompat::isRtl(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::text::TextDirectionHeuristicCompat::_class) ::android::support::v4::text::TextDirectionHeuristicCompat::_class = java::fetch_class("android/support/v4/text/TextDirectionHeuristicCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRtl", "([CII)Z");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::text::TextDirectionHeuristicCompat::isRtl(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::text::TextDirectionHeuristicCompat::_class) ::android::support::v4::text::TextDirectionHeuristicCompat::_class = java::fetch_class("android/support/v4/text/TextDirectionHeuristicCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRtl", "(Ljava/lang/CharSequence;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::text::TextDirectionHeuristicsCompat_AnyStrong::checkRtl(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::text::TextDirectionHeuristicsCompat_AnyStrong::_class) ::android::support::v4::text::TextDirectionHeuristicsCompat_AnyStrong::_class = java::fetch_class("android/support/v4/text/TextDirectionHeuristicsCompat$AnyStrong");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkRtl", "(Ljava/lang/CharSequence;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::support::v4::text::ICUCompat_ICUCompatImpl::getScript(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::text::ICUCompat_ICUCompatImpl::_class) ::android::support::v4::text::ICUCompat_ICUCompatImpl::_class = java::fetch_class("android/support/v4/text/ICUCompat$ICUCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScript", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::text::ICUCompat_ICUCompatImpl::addLikelySubtags(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::text::ICUCompat_ICUCompatImpl::_class) ::android::support::v4::text::ICUCompat_ICUCompatImpl::_class = java::fetch_class("android/support/v4/text/ICUCompat$ICUCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLikelySubtags", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl(const ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionAlgorithm& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::text::TextDirectionHeuristicCompat((jobject)0) {
    if (!::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl::_class) ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl::_class = java::fetch_class("android/support/v4/text/TextDirectionHeuristicsCompat$TextDirectionHeuristicImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/text/TextDirectionHeuristicsCompat$TextDirectionAlgorithm;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl::isRtl(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl::_class) ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl::_class = java::fetch_class("android/support/v4/text/TextDirectionHeuristicsCompat$TextDirectionHeuristicImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRtl", "([CII)Z");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl::isRtl(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl::_class) ::android::support::v4::text::TextDirectionHeuristicsCompat_TextDirectionHeuristicImpl::_class = java::fetch_class("android/support/v4/text/TextDirectionHeuristicsCompat$TextDirectionHeuristicImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRtl", "(Ljava/lang/CharSequence;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::text::TextDirectionHeuristicsCompat_FirstStrong::checkRtl(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::text::TextDirectionHeuristicsCompat_FirstStrong::_class) ::android::support::v4::text::TextDirectionHeuristicsCompat_FirstStrong::_class = java::fetch_class("android/support/v4/text/TextDirectionHeuristicsCompat$FirstStrong");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkRtl", "(Ljava/lang/CharSequence;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::support::v4::text::ICUCompat_ICUCompatImplIcs::getScript(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::text::ICUCompat_ICUCompatImplIcs::_class) ::android::support::v4::text::ICUCompat_ICUCompatImplIcs::_class = java::fetch_class("android/support/v4/text/ICUCompat$ICUCompatImplIcs");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScript", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::text::ICUCompat_ICUCompatImplIcs::addLikelySubtags(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::text::ICUCompat_ICUCompatImplIcs::_class) ::android::support::v4::text::ICUCompat_ICUCompatImplIcs::_class = java::fetch_class("android/support/v4/text/ICUCompat$ICUCompatImplIcs");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLikelySubtags", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::support::v4::text::BidiFormatter android::support::v4::text::BidiFormatter::getInstance(){
    if (!::android::support::v4::text::BidiFormatter::_class) ::android::support::v4::text::BidiFormatter::_class = java::fetch_class("android/support/v4/text/BidiFormatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/support/v4/text/BidiFormatter;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::support::v4::text::BidiFormatter _ret(ret);
    return _ret;
}

::android::support::v4::text::BidiFormatter android::support::v4::text::BidiFormatter::getInstance(bool arg0){
    if (!::android::support::v4::text::BidiFormatter::_class) ::android::support::v4::text::BidiFormatter::_class = java::fetch_class("android/support/v4/text/BidiFormatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Z)Landroid/support/v4/text/BidiFormatter;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::text::BidiFormatter _ret(ret);
    return _ret;
}

::android::support::v4::text::BidiFormatter android::support::v4::text::BidiFormatter::getInstance(const ::java::util::Locale& arg0){
    if (!::android::support::v4::text::BidiFormatter::_class) ::android::support::v4::text::BidiFormatter::_class = java::fetch_class("android/support/v4/text/BidiFormatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/util/Locale;)Landroid/support/v4/text/BidiFormatter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::text::BidiFormatter _ret(ret);
    return _ret;
}

bool android::support::v4::text::BidiFormatter::isRtlContext() const {
    if (!::android::support::v4::text::BidiFormatter::_class) ::android::support::v4::text::BidiFormatter::_class = java::fetch_class("android/support/v4/text/BidiFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRtlContext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::text::BidiFormatter::getStereoReset() const {
    if (!::android::support::v4::text::BidiFormatter::_class) ::android::support::v4::text::BidiFormatter::_class = java::fetch_class("android/support/v4/text/BidiFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStereoReset", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::text::BidiFormatter::isRtl(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::text::BidiFormatter::_class) ::android::support::v4::text::BidiFormatter::_class = java::fetch_class("android/support/v4/text/BidiFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRtl", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::text::BidiFormatter::unicodeWrap(const ::java::lang::String& arg0, const ::android::support::v4::text::TextDirectionHeuristicCompat& arg1, bool arg2) const {
    if (!::android::support::v4::text::BidiFormatter::_class) ::android::support::v4::text::BidiFormatter::_class = java::fetch_class("android/support/v4/text/BidiFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "unicodeWrap", "(Ljava/lang/String;Landroid/support/v4/text/TextDirectionHeuristicCompat;Z)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::text::BidiFormatter::unicodeWrap(const ::java::lang::String& arg0, const ::android::support::v4::text::TextDirectionHeuristicCompat& arg1) const {
    if (!::android::support::v4::text::BidiFormatter::_class) ::android::support::v4::text::BidiFormatter::_class = java::fetch_class("android/support/v4/text/BidiFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "unicodeWrap", "(Ljava/lang/String;Landroid/support/v4/text/TextDirectionHeuristicCompat;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::text::BidiFormatter::unicodeWrap(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::support::v4::text::BidiFormatter::_class) ::android::support::v4::text::BidiFormatter::_class = java::fetch_class("android/support/v4/text/BidiFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "unicodeWrap", "(Ljava/lang/String;Z)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::text::BidiFormatter::unicodeWrap(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::text::BidiFormatter::_class) ::android::support::v4::text::BidiFormatter::_class = java::fetch_class("android/support/v4/text/BidiFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "unicodeWrap", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::text::TextDirectionHeuristicsCompat::TextDirectionHeuristicsCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::text::TextDirectionHeuristicsCompat::_class) ::android::support::v4::text::TextDirectionHeuristicsCompat::_class = java::fetch_class("android/support/v4/text/TextDirectionHeuristicsCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::text::TextUtilsCompat::TextUtilsCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::text::TextUtilsCompat::_class) ::android::support::v4::text::TextUtilsCompat::_class = java::fetch_class("android/support/v4/text/TextUtilsCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::support::v4::text::TextUtilsCompat::htmlEncode(const ::java::lang::String& arg0){
    if (!::android::support::v4::text::TextUtilsCompat::_class) ::android::support::v4::text::TextUtilsCompat::_class = java::fetch_class("android/support/v4/text/TextUtilsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "htmlEncode", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::text::TextUtilsCompat::getLayoutDirectionFromLocale(const ::java::util::Locale& arg0){
    if (!::android::support::v4::text::TextUtilsCompat::_class) ::android::support::v4::text::TextUtilsCompat::_class = java::fetch_class("android/support/v4/text/TextUtilsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLayoutDirectionFromLocale", "(Ljava/util/Locale;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

