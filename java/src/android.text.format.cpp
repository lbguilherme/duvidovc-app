#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.text.format.DateFormat.hpp"
#include "android.text.format.DateUtils.hpp"
#include "android.text.format.Formatter.hpp"
#include "android.text.format.Time.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.String.hpp"
#include "java.lang.StringBuilder.hpp"
#include "java.text.DateFormat.hpp"
#include "java.util.Calendar.hpp"
#include "java.util.Date.hpp"
#include "java.util.Formatter.hpp"

jclass android::text::format::Formatter::_class = nullptr;
jclass android::text::format::DateFormat::_class = nullptr;
jclass android::text::format::Time::_class = nullptr;
jclass android::text::format::DateUtils::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::format::Formatter::Formatter() : ::java::lang::Object((jobject)0) {
    if (!::android::text::format::Formatter::_class) ::android::text::format::Formatter::_class = java::fetch_class("android/text/format/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::text::format::Formatter::formatFileSize(const ::android::content::Context& arg0, int64_t arg1){
    if (!::android::text::format::Formatter::_class) ::android::text::format::Formatter::_class = java::fetch_class("android/text/format/Formatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatFileSize", "(Landroid/content/Context;J)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::format::Formatter::formatShortFileSize(const ::android::content::Context& arg0, int64_t arg1){
    if (!::android::text::format::Formatter::_class) ::android::text::format::Formatter::_class = java::fetch_class("android/text/format/Formatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatShortFileSize", "(Landroid/content/Context;J)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::format::Formatter::formatIpAddress(int32_t arg0){
    if (!::android::text::format::Formatter::_class) ::android::text::format::Formatter::_class = java::fetch_class("android/text/format/Formatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatIpAddress", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::format::DateFormat::DateFormat() : ::java::lang::Object((jobject)0) {
    if (!::android::text::format::DateFormat::_class) ::android::text::format::DateFormat::_class = java::fetch_class("android/text/format/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::text::format::DateFormat::is24HourFormat(const ::android::content::Context& arg0){
    if (!::android::text::format::DateFormat::_class) ::android::text::format::DateFormat::_class = java::fetch_class("android/text/format/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "is24HourFormat", "(Landroid/content/Context;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::text::DateFormat android::text::format::DateFormat::getTimeFormat(const ::android::content::Context& arg0){
    if (!::android::text::format::DateFormat::_class) ::android::text::format::DateFormat::_class = java::fetch_class("android/text/format/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTimeFormat", "(Landroid/content/Context;)Ljava/text/DateFormat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::text::DateFormat android::text::format::DateFormat::getDateFormat(const ::android::content::Context& arg0){
    if (!::android::text::format::DateFormat::_class) ::android::text::format::DateFormat::_class = java::fetch_class("android/text/format/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDateFormat", "(Landroid/content/Context;)Ljava/text/DateFormat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::text::DateFormat android::text::format::DateFormat::getLongDateFormat(const ::android::content::Context& arg0){
    if (!::android::text::format::DateFormat::_class) ::android::text::format::DateFormat::_class = java::fetch_class("android/text/format/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLongDateFormat", "(Landroid/content/Context;)Ljava/text/DateFormat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::text::DateFormat android::text::format::DateFormat::getMediumDateFormat(const ::android::content::Context& arg0){
    if (!::android::text::format::DateFormat::_class) ::android::text::format::DateFormat::_class = java::fetch_class("android/text/format/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMediumDateFormat", "(Landroid/content/Context;)Ljava/text/DateFormat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

std::vector< uint16_t> android::text::format::DateFormat::getDateFormatOrder(const ::android::content::Context& arg0){
    if (!::android::text::format::DateFormat::_class) ::android::text::format::DateFormat::_class = java::fetch_class("android/text/format/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDateFormatOrder", "(Landroid/content/Context;)[C");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::CharSequence android::text::format::DateFormat::format(const ::java::lang::CharSequence& arg0, int64_t arg1){
    if (!::android::text::format::DateFormat::_class) ::android::text::format::DateFormat::_class = java::fetch_class("android/text/format/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "format", "(Ljava/lang/CharSequence;J)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::format::DateFormat::format(const ::java::lang::CharSequence& arg0, const ::java::util::Date& arg1){
    if (!::android::text::format::DateFormat::_class) ::android::text::format::DateFormat::_class = java::fetch_class("android/text/format/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "format", "(Ljava/lang/CharSequence;Ljava/util/Date;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::format::DateFormat::format(const ::java::lang::CharSequence& arg0, const ::java::util::Calendar& arg1){
    if (!::android::text::format::DateFormat::_class) ::android::text::format::DateFormat::_class = java::fetch_class("android/text/format/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "format", "(Ljava/lang/CharSequence;Ljava/util/Calendar;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::format::Time::Time(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::format::Time::Time() : ::java::lang::Object((jobject)0) {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t android::text::format::Time::normalize(bool arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "normalize", "(Z)J");
    bool _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void android::text::format::Time::switchTimezone(const ::java::lang::String& arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "switchTimezone", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::text::format::Time::getActualMaximum(int32_t arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActualMaximum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::text::format::Time::clear(const ::java::lang::String& arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::text::format::Time::compare(const ::android::text::format::Time& arg0, const ::android::text::format::Time& arg1){
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compare", "(Landroid/text/format/Time;Landroid/text/format/Time;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String android::text::format::Time::format(const ::java::lang::String& arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::format::Time::toString() const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::text::format::Time::parse(const ::java::lang::String& arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::text::format::Time::parse3339(const ::java::lang::String& arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse3339", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::text::format::Time::getCurrentTimezone(){
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCurrentTimezone", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::text::format::Time::setToNow() const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "setToNow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t android::text::format::Time::toMillis(bool arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "toMillis", "(Z)J");
    bool _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void android::text::format::Time::set(int64_t arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::text::format::Time::format2445() const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "format2445", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::text::format::Time::set(const ::android::text::format::Time& arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/text/format/Time;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::format::Time::set(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::text::format::Time::set(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::text::format::Time::before(const ::android::text::format::Time& arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "before", "(Landroid/text/format/Time;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::text::format::Time::after(const ::android::text::format::Time& arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "after", "(Landroid/text/format/Time;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::text::format::Time::getWeekNumber() const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWeekNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::text::format::Time::format3339(bool arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "format3339", "(Z)Ljava/lang/String;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::text::format::Time::isEpoch(const ::android::text::format::Time& arg0){
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isEpoch", "(Landroid/text/format/Time;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t android::text::format::Time::getJulianDay(int64_t arg0, int64_t arg1){
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getJulianDay", "(JJ)I");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int64_t android::text::format::Time::setJulianDay(int32_t arg0) const {
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "setJulianDay", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int32_t android::text::format::Time::getWeeksSinceEpochFromJulianDay(int32_t arg0, int32_t arg1){
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getWeeksSinceEpochFromJulianDay", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::text::format::Time::getJulianMondayFromWeeksSinceEpoch(int32_t arg0){
    if (!::android::text::format::Time::_class) ::android::text::format::Time::_class = java::fetch_class("android/text/format/Time");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getJulianMondayFromWeeksSinceEpoch", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::format::DateUtils::DateUtils() : ::java::lang::Object((jobject)0) {
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::text::format::DateUtils::getDayOfWeekString(int32_t arg0, int32_t arg1){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDayOfWeekString", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::format::DateUtils::getAMPMString(int32_t arg0){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAMPMString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::format::DateUtils::getMonthString(int32_t arg0, int32_t arg1){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMonthString", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::format::DateUtils::getRelativeTimeSpanString(int64_t arg0){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRelativeTimeSpanString", "(J)Ljava/lang/CharSequence;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::format::DateUtils::getRelativeTimeSpanString(int64_t arg0, int64_t arg1, int64_t arg2){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRelativeTimeSpanString", "(JJJ)Ljava/lang/CharSequence;");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::format::DateUtils::getRelativeTimeSpanString(int64_t arg0, int64_t arg1, int64_t arg2, int32_t arg3){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRelativeTimeSpanString", "(JJJI)Ljava/lang/CharSequence;");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::format::DateUtils::getRelativeDateTimeString(const ::android::content::Context& arg0, int64_t arg1, int64_t arg2, int64_t arg3, int32_t arg4){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRelativeDateTimeString", "(Landroid/content/Context;JJJI)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::text::format::DateUtils::formatElapsedTime(int64_t arg0){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatElapsedTime", "(J)Ljava/lang/String;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::text::format::DateUtils::formatElapsedTime(const ::java::lang::StringBuilder& arg0, int64_t arg1){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatElapsedTime", "(Ljava/lang/StringBuilder;J)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::format::DateUtils::formatSameDayTime(int64_t arg0, int64_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatSameDayTime", "(JJII)Ljava/lang/CharSequence;");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

bool android::text::format::DateUtils::isToday(int64_t arg0){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isToday", "(J)Z");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String android::text::format::DateUtils::formatDateRange(const ::android::content::Context& arg0, int64_t arg1, int64_t arg2, int32_t arg3){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatDateRange", "(Landroid/content/Context;JJI)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Formatter android::text::format::DateUtils::formatDateRange(const ::android::content::Context& arg0, const ::java::util::Formatter& arg1, int64_t arg2, int64_t arg3, int32_t arg4){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatDateRange", "(Landroid/content/Context;Ljava/util/Formatter;JJI)Ljava/util/Formatter;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::java::util::Formatter _ret(ret);
    return _ret;
}

::java::util::Formatter android::text::format::DateUtils::formatDateRange(const ::android::content::Context& arg0, const ::java::util::Formatter& arg1, int64_t arg2, int64_t arg3, int32_t arg4, const ::java::lang::String& arg5){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatDateRange", "(Landroid/content/Context;Ljava/util/Formatter;JJILjava/lang/String;)Ljava/util/Formatter;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::util::Formatter _ret(ret);
    return _ret;
}

::java::lang::String android::text::format::DateUtils::formatDateTime(const ::android::content::Context& arg0, int64_t arg1, int32_t arg2){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatDateTime", "(Landroid/content/Context;JI)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::format::DateUtils::getRelativeTimeSpanString(const ::android::content::Context& arg0, int64_t arg1, bool arg2){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRelativeTimeSpanString", "(Landroid/content/Context;JZ)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::text::format::DateUtils::getRelativeTimeSpanString(const ::android::content::Context& arg0, int64_t arg1){
    if (!::android::text::format::DateUtils::_class) ::android::text::format::DateUtils::_class = java::fetch_class("android/text/format/DateUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRelativeTimeSpanString", "(Landroid/content/Context;J)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

