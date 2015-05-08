#include "java-core.hpp"
#include <memory>
#include "android.util.AndroidException.hpp"
#include "android.util.AndroidRuntimeException.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.util.Base64.hpp"
#include "android.util.Base64DataException.hpp"
#include "android.util.Base64InputStream.hpp"
#include "android.util.Base64OutputStream.hpp"
#include "android.util.Config.hpp"
#include "android.util.DebugUtils.hpp"
#include "android.util.DisplayMetrics.hpp"
#include "android.util.EventLog.hpp"
#include "android.util.EventLogTags.hpp"
#include "android.util.FloatMath.hpp"
#include "android.util.JsonReader.hpp"
#include "android.util.JsonToken.hpp"
#include "android.util.JsonWriter.hpp"
#include "android.util.Log.hpp"
#include "android.util.LogPrinter.hpp"
#include "android.util.LruCache.hpp"
#include "android.util.MalformedJsonException.hpp"
#include "android.util.MonthDisplayHelper.hpp"
#include "android.util.NoSuchPropertyException.hpp"
#include "android.util.Pair.hpp"
#include "android.util.Patterns.hpp"
#include "android.util.PrintStreamPrinter.hpp"
#include "android.util.PrintWriterPrinter.hpp"
#include "android.util.Printer.hpp"
#include "android.util.Property.hpp"
#include "android.util.SparseArray.hpp"
#include "android.util.SparseBooleanArray.hpp"
#include "android.util.SparseIntArray.hpp"
#include "android.util.StateSet.hpp"
#include "android.util.StringBuilderPrinter.hpp"
#include "android.util.TimeFormatException.hpp"
#include "android.util.TimeUtils.hpp"
#include "android.util.TimingLogger.hpp"
#include "android.util.TypedValue.hpp"
#include "android.util.Xml.hpp"
#include "java.io.BufferedReader.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.PrintStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.io.Reader.hpp"
#include "java.io.Writer.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Number.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.StringBuilder.hpp"
#include "java.lang.Throwable.hpp"
#include "java.util.Collection.hpp"
#include "java.util.Map.hpp"
#include "java.util.TimeZone.hpp"
#include "java.util.regex.Matcher.hpp"
#include "org.xml.sax.ContentHandler.hpp"
#include "org.xmlpull.v1.XmlPullParser.hpp"
#include "org.xmlpull.v1.XmlSerializer.hpp"

jclass android::util::EventLogTags_Description::_class = nullptr;
jclass android::util::Config::_class = nullptr;
jclass android::util::SparseIntArray::_class = nullptr;
jclass android::util::EventLogTags::_class = nullptr;
jclass android::util::MonthDisplayHelper::_class = nullptr;
jclass android::util::NoSuchPropertyException::_class = nullptr;
jclass android::util::StateSet::_class = nullptr;
jclass android::util::LruCache::_class = nullptr;
jclass android::util::Base64DataException::_class = nullptr;
jclass android::util::PrintStreamPrinter::_class = nullptr;
jclass android::util::TimeFormatException::_class = nullptr;
jclass android::util::Pair::_class = nullptr;
jclass android::util::Xml::_class = nullptr;
jclass android::util::EventLog::_class = nullptr;
jclass android::util::Log::_class = nullptr;
jclass android::util::TypedValue::_class = nullptr;
jclass android::util::Patterns::_class = nullptr;
jclass android::util::SparseBooleanArray::_class = nullptr;
jclass android::util::PrintWriterPrinter::_class = nullptr;
jclass android::util::Base64::_class = nullptr;
jclass android::util::Xml_Encoding::_class = nullptr;
jclass android::util::JsonReader::_class = nullptr;
jclass android::util::SparseArray::_class = nullptr;
jclass android::util::JsonWriter::_class = nullptr;
jclass android::util::LogPrinter::_class = nullptr;
jclass android::util::TimingLogger::_class = nullptr;
jclass android::util::Base64OutputStream::_class = nullptr;
jclass android::util::StringBuilderPrinter::_class = nullptr;
jclass android::util::TimeUtils::_class = nullptr;
jclass android::util::JsonToken::_class = nullptr;
jclass android::util::DebugUtils::_class = nullptr;
jclass android::util::MalformedJsonException::_class = nullptr;
jclass android::util::Property::_class = nullptr;
jclass android::util::AndroidException::_class = nullptr;
jclass android::util::AttributeSet::_class = nullptr;
jclass android::util::FloatMath::_class = nullptr;
jclass android::util::DisplayMetrics::_class = nullptr;
jclass android::util::AndroidRuntimeException::_class = nullptr;
jclass android::util::Printer::_class = nullptr;
jclass android::util::EventLog_Event::_class = nullptr;
jclass android::util::Base64InputStream::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::SparseIntArray::SparseIntArray() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::SparseIntArray::SparseIntArray(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::util::SparseIntArray android::util::SparseIntArray::clone() const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/util/SparseIntArray;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::SparseIntArray _ret(ret);
    return _ret;
}

int32_t android::util::SparseIntArray::get(int32_t arg0) const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::util::SparseIntArray::get(int32_t arg0, int32_t arg1) const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::util::SparseIntArray::delete_(int32_t arg0) const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::util::SparseIntArray::removeAt(int32_t arg0) const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::util::SparseIntArray::put(int32_t arg0, int32_t arg1) const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::util::SparseIntArray::size() const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::SparseIntArray::keyAt(int32_t arg0) const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "keyAt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::util::SparseIntArray::valueAt(int32_t arg0) const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "valueAt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::util::SparseIntArray::indexOfKey(int32_t arg0) const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOfKey", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::util::SparseIntArray::indexOfValue(int32_t arg0) const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOfValue", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::util::SparseIntArray::clear() const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::util::SparseIntArray::append(int32_t arg0, int32_t arg1) const {
    if (!::android::util::SparseIntArray::_class) ::android::util::SparseIntArray::_class = java::fetch_class("android/util/SparseIntArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::EventLogTags::EventLogTags() : ::java::lang::Object((jobject)0) {
    if (!::android::util::EventLogTags::_class) ::android::util::EventLogTags::_class = java::fetch_class("android/util/EventLogTags");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::EventLogTags::EventLogTags(const ::java::io::BufferedReader& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::util::EventLogTags::_class) ::android::util::EventLogTags::_class = java::fetch_class("android/util/EventLogTags");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/BufferedReader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::util::EventLogTags_Description android::util::EventLogTags::get(const ::java::lang::String& arg0) const {
    if (!::android::util::EventLogTags::_class) ::android::util::EventLogTags::_class = java::fetch_class("android/util/EventLogTags");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;)Landroid/util/EventLogTags$Description;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::util::EventLogTags_Description _ret(ret);
    return _ret;
}

::android::util::EventLogTags_Description android::util::EventLogTags::get(int32_t arg0) const {
    if (!::android::util::EventLogTags::_class) ::android::util::EventLogTags::_class = java::fetch_class("android/util/EventLogTags");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Landroid/util/EventLogTags$Description;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::util::EventLogTags_Description _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::MonthDisplayHelper::MonthDisplayHelper(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::MonthDisplayHelper::MonthDisplayHelper(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t android::util::MonthDisplayHelper::getYear() const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYear", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::MonthDisplayHelper::getMonth() const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMonth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::MonthDisplayHelper::getWeekStartDay() const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWeekStartDay", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::MonthDisplayHelper::getFirstDayOfMonth() const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirstDayOfMonth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::MonthDisplayHelper::getNumberOfDaysInMonth() const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumberOfDaysInMonth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::MonthDisplayHelper::getOffset() const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int32_t> android::util::MonthDisplayHelper::getDigitsForRow(int32_t arg0) const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDigitsForRow", "(I)[I");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::util::MonthDisplayHelper::getDayAt(int32_t arg0, int32_t arg1) const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDayAt", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::util::MonthDisplayHelper::getRowOf(int32_t arg0) const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRowOf", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::util::MonthDisplayHelper::getColumnOf(int32_t arg0) const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnOf", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::util::MonthDisplayHelper::previousMonth() const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "previousMonth", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::util::MonthDisplayHelper::nextMonth() const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextMonth", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::util::MonthDisplayHelper::isWithinCurrentMonth(int32_t arg0, int32_t arg1) const {
    if (!::android::util::MonthDisplayHelper::_class) ::android::util::MonthDisplayHelper::_class = java::fetch_class("android/util/MonthDisplayHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWithinCurrentMonth", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::NoSuchPropertyException::NoSuchPropertyException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::util::NoSuchPropertyException::_class) ::android::util::NoSuchPropertyException::_class = java::fetch_class("android/util/NoSuchPropertyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::util::StateSet::isWildCard(const std::vector< int32_t>& arg0){
    if (!::android::util::StateSet::_class) ::android::util::StateSet::_class = java::fetch_class("android/util/StateSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isWildCard", "([I)Z");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::util::StateSet::stateSetMatches(const std::vector< int32_t>& arg0, const std::vector< int32_t>& arg1){
    if (!::android::util::StateSet::_class) ::android::util::StateSet::_class = java::fetch_class("android/util/StateSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stateSetMatches", "([I[I)Z");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::util::StateSet::stateSetMatches(const std::vector< int32_t>& arg0, int32_t arg1){
    if (!::android::util::StateSet::_class) ::android::util::StateSet::_class = java::fetch_class("android/util/StateSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stateSetMatches", "([II)Z");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

std::vector< int32_t> android::util::StateSet::trimStateSet(const std::vector< int32_t>& arg0, int32_t arg1){
    if (!::android::util::StateSet::_class) ::android::util::StateSet::_class = java::fetch_class("android/util/StateSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "trimStateSet", "([II)[I");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String android::util::StateSet::dump(const std::vector< int32_t>& arg0){
    if (!::android::util::StateSet::_class) ::android::util::StateSet::_class = java::fetch_class("android/util/StateSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dump", "([I)Ljava/lang/String;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::LruCache::LruCache(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object android::util::LruCache::get(const ::java::lang::Object& arg0) const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::util::LruCache::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::util::LruCache::remove(const ::java::lang::Object& arg0) const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::util::LruCache::evictAll() const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "evictAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::util::LruCache::size() const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::LruCache::maxSize() const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "maxSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::LruCache::hitCount() const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "hitCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::LruCache::missCount() const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "missCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::LruCache::createCount() const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "createCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::LruCache::putCount() const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "putCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::LruCache::evictionCount() const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "evictionCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Map android::util::LruCache::snapshot() const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "snapshot", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::lang::String android::util::LruCache::toString() const {
    if (!::android::util::LruCache::_class) ::android::util::LruCache::_class = java::fetch_class("android/util/LruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::Base64DataException::Base64DataException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::util::Base64DataException::_class) ::android::util::Base64DataException::_class = java::fetch_class("android/util/Base64DataException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::PrintStreamPrinter::PrintStreamPrinter(const ::java::io::PrintStream& arg0) : ::java::lang::Object((jobject)0), ::android::util::Printer((jobject)0) {
    if (!::android::util::PrintStreamPrinter::_class) ::android::util::PrintStreamPrinter::_class = java::fetch_class("android/util/PrintStreamPrinter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::util::PrintStreamPrinter::println(const ::java::lang::String& arg0) const {
    if (!::android::util::PrintStreamPrinter::_class) ::android::util::PrintStreamPrinter::_class = java::fetch_class("android/util/PrintStreamPrinter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::Pair::Pair(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::util::Pair::_class) ::android::util::Pair::_class = java::fetch_class("android/util/Pair");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::util::Pair::equals(const ::java::lang::Object& arg0) const {
    if (!::android::util::Pair::_class) ::android::util::Pair::_class = java::fetch_class("android/util/Pair");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::util::Pair::hashCode() const {
    if (!::android::util::Pair::_class) ::android::util::Pair::_class = java::fetch_class("android/util/Pair");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::util::Pair android::util::Pair::create(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1){
    if (!::android::util::Pair::_class) ::android::util::Pair::_class = java::fetch_class("android/util/Pair");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::util::Pair _ret(ret);
    return _ret;
}

void android::util::Xml::parse(const ::java::lang::String& arg0, const ::org::xml::sax::ContentHandler& arg1){
    if (!::android::util::Xml::_class) ::android::util::Xml::_class = java::fetch_class("android/util/Xml");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parse", "(Ljava/lang/String;Lorg/xml/sax/ContentHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::util::Xml::parse(const ::java::io::Reader& arg0, const ::org::xml::sax::ContentHandler& arg1){
    if (!::android::util::Xml::_class) ::android::util::Xml::_class = java::fetch_class("android/util/Xml");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parse", "(Ljava/io/Reader;Lorg/xml/sax/ContentHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::util::Xml::parse(const ::java::io::InputStream& arg0, const ::android::util::Xml_Encoding& arg1, const ::org::xml::sax::ContentHandler& arg2){
    if (!::android::util::Xml::_class) ::android::util::Xml::_class = java::fetch_class("android/util/Xml");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parse", "(Ljava/io/InputStream;Landroid/util/Xml$Encoding;Lorg/xml/sax/ContentHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::org::xmlpull::v1::XmlPullParser android::util::Xml::newPullParser(){
    if (!::android::util::Xml::_class) ::android::util::Xml::_class = java::fetch_class("android/util/Xml");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newPullParser", "()Lorg/xmlpull/v1/XmlPullParser;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::org::xmlpull::v1::XmlPullParser _ret(ret);
    return _ret;
}

::org::xmlpull::v1::XmlSerializer android::util::Xml::newSerializer(){
    if (!::android::util::Xml::_class) ::android::util::Xml::_class = java::fetch_class("android/util/Xml");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newSerializer", "()Lorg/xmlpull/v1/XmlSerializer;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::org::xmlpull::v1::XmlSerializer _ret(ret);
    return _ret;
}

::android::util::Xml_Encoding android::util::Xml::findEncodingByName(const ::java::lang::String& arg0){
    if (!::android::util::Xml::_class) ::android::util::Xml::_class = java::fetch_class("android/util/Xml");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "findEncodingByName", "(Ljava/lang/String;)Landroid/util/Xml$Encoding;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::util::Xml_Encoding _ret(ret);
    return _ret;
}

::android::util::AttributeSet android::util::Xml::asAttributeSet(const ::org::xmlpull::v1::XmlPullParser& arg0){
    if (!::android::util::Xml::_class) ::android::util::Xml::_class = java::fetch_class("android/util/Xml");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "asAttributeSet", "(Lorg/xmlpull/v1/XmlPullParser;)Landroid/util/AttributeSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::util::AttributeSet _ret(ret);
    return _ret;
}

int32_t android::util::EventLog::writeEvent(int32_t arg0, int32_t arg1){
    if (!::android::util::EventLog::_class) ::android::util::EventLog::_class = java::fetch_class("android/util/EventLog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeEvent", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::EventLog::writeEvent(int32_t arg0, int64_t arg1){
    if (!::android::util::EventLog::_class) ::android::util::EventLog::_class = java::fetch_class("android/util/EventLog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeEvent", "(IJ)I");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::EventLog::writeEvent(int32_t arg0, const ::java::lang::String& arg1){
    if (!::android::util::EventLog::_class) ::android::util::EventLog::_class = java::fetch_class("android/util/EventLog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeEvent", "(ILjava/lang/String;)I");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::EventLog::writeEvent(int32_t arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::android::util::EventLog::_class) ::android::util::EventLog::_class = java::fetch_class("android/util/EventLog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeEvent", "(I[Ljava/lang/Object;)I");
    int32_t _arg0 = arg0;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

void android::util::EventLog::readEvents(const std::vector< int32_t>& arg0, const ::java::util::Collection& arg1){
    if (!::android::util::EventLog::_class) ::android::util::EventLog::_class = java::fetch_class("android/util/EventLog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readEvents", "([ILjava/util/Collection;)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String android::util::EventLog::getTagName(int32_t arg0){
    if (!::android::util::EventLog::_class) ::android::util::EventLog::_class = java::fetch_class("android/util/EventLog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTagName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::util::EventLog::getTagCode(const ::java::lang::String& arg0){
    if (!::android::util::EventLog::_class) ::android::util::EventLog::_class = java::fetch_class("android/util/EventLog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTagCode", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::util::Log::v(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "v", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::Log::v(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "v", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::util::Log::d(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "d", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::Log::d(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "d", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::util::Log::i(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "i", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::Log::i(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "i", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::util::Log::w(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "w", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::Log::w(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "w", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool android::util::Log::isLoggable(const ::java::lang::String& arg0, int32_t arg1){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isLoggable", "(Ljava/lang/String;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::Log::w(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "w", "(Ljava/lang/String;Ljava/lang/Throwable;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::Log::e(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "e", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::Log::e(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "e", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::util::Log::wtf(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wtf", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::Log::wtf(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wtf", "(Ljava/lang/String;Ljava/lang/Throwable;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::Log::wtf(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wtf", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::util::Log::getStackTraceString(const ::java::lang::Throwable& arg0){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getStackTraceString", "(Ljava/lang/Throwable;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::util::Log::println(int32_t arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::util::Log::_class) ::android::util::Log::_class = java::fetch_class("android/util/Log");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "println", "(ILjava/lang/String;Ljava/lang/String;)I");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::TypedValue::TypedValue() : ::java::lang::Object((jobject)0) {
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

float android::util::TypedValue::getFloat() const {
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::util::TypedValue::complexToFloat(int32_t arg0){
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "complexToFloat", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

float android::util::TypedValue::complexToDimension(int32_t arg0, const ::android::util::DisplayMetrics& arg1){
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "complexToDimension", "(ILandroid/util/DisplayMetrics;)F");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::TypedValue::complexToDimensionPixelOffset(int32_t arg0, const ::android::util::DisplayMetrics& arg1){
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "complexToDimensionPixelOffset", "(ILandroid/util/DisplayMetrics;)I");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::util::TypedValue::complexToDimensionPixelSize(int32_t arg0, const ::android::util::DisplayMetrics& arg1){
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "complexToDimensionPixelSize", "(ILandroid/util/DisplayMetrics;)I");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

float android::util::TypedValue::complexToDimensionNoisy(int32_t arg0, const ::android::util::DisplayMetrics& arg1){
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "complexToDimensionNoisy", "(ILandroid/util/DisplayMetrics;)F");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

float android::util::TypedValue::applyDimension(int32_t arg0, float arg1, const ::android::util::DisplayMetrics& arg2){
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "applyDimension", "(IFLandroid/util/DisplayMetrics;)F");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1, _arg2);
}

float android::util::TypedValue::getDimension(const ::android::util::DisplayMetrics& arg0) const {
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDimension", "(Landroid/util/DisplayMetrics;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::util::TypedValue::complexToFraction(int32_t arg0, float arg1, float arg2){
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "complexToFraction", "(IFF)F");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1, _arg2);
}

float android::util::TypedValue::getFraction(float arg0, float arg1) const {
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFraction", "(FF)F");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::util::TypedValue::coerceToString() const {
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetMethodID(_class, "coerceToString", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::util::TypedValue::coerceToString(int32_t arg0, int32_t arg1){
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "coerceToString", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::util::TypedValue::setTo(const ::android::util::TypedValue& arg0) const {
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTo", "(Landroid/util/TypedValue;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::util::TypedValue::toString() const {
    if (!::android::util::TypedValue::_class) ::android::util::TypedValue::_class = java::fetch_class("android/util/TypedValue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::util::Patterns::concatGroups(const ::java::util::regex::Matcher& arg0){
    if (!::android::util::Patterns::_class) ::android::util::Patterns::_class = java::fetch_class("android/util/Patterns");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "concatGroups", "(Ljava/util/regex/Matcher;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::util::Patterns::digitsAndPlusOnly(const ::java::util::regex::Matcher& arg0){
    if (!::android::util::Patterns::_class) ::android::util::Patterns::_class = java::fetch_class("android/util/Patterns");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "digitsAndPlusOnly", "(Ljava/util/regex/Matcher;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::SparseBooleanArray::SparseBooleanArray() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::SparseBooleanArray::SparseBooleanArray(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::util::SparseBooleanArray android::util::SparseBooleanArray::clone() const {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/util/SparseBooleanArray;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::SparseBooleanArray _ret(ret);
    return _ret;
}

bool android::util::SparseBooleanArray::get(int32_t arg0) const {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::util::SparseBooleanArray::get(int32_t arg0, bool arg1) const {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(IZ)Z");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::util::SparseBooleanArray::delete_(int32_t arg0) const {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::util::SparseBooleanArray::put(int32_t arg0, bool arg1) const {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::util::SparseBooleanArray::size() const {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::SparseBooleanArray::keyAt(int32_t arg0) const {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "keyAt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::util::SparseBooleanArray::valueAt(int32_t arg0) const {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "valueAt", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::util::SparseBooleanArray::indexOfKey(int32_t arg0) const {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOfKey", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::util::SparseBooleanArray::indexOfValue(bool arg0) const {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOfValue", "(Z)I");
    bool _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::util::SparseBooleanArray::clear() const {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::util::SparseBooleanArray::append(int32_t arg0, bool arg1) const {
    if (!::android::util::SparseBooleanArray::_class) ::android::util::SparseBooleanArray::_class = java::fetch_class("android/util/SparseBooleanArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::PrintWriterPrinter::PrintWriterPrinter(const ::java::io::PrintWriter& arg0) : ::java::lang::Object((jobject)0), ::android::util::Printer((jobject)0) {
    if (!::android::util::PrintWriterPrinter::_class) ::android::util::PrintWriterPrinter::_class = java::fetch_class("android/util/PrintWriterPrinter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/PrintWriter;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::util::PrintWriterPrinter::println(const ::java::lang::String& arg0) const {
    if (!::android::util::PrintWriterPrinter::_class) ::android::util::PrintWriterPrinter::_class = java::fetch_class("android/util/PrintWriterPrinter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int8_t> android::util::Base64::decode(const ::java::lang::String& arg0, int32_t arg1){
    if (!::android::util::Base64::_class) ::android::util::Base64::_class = java::fetch_class("android/util/Base64");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decode", "(Ljava/lang/String;I)[B");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::util::Base64::decode(const std::vector< int8_t>& arg0, int32_t arg1){
    if (!::android::util::Base64::_class) ::android::util::Base64::_class = java::fetch_class("android/util/Base64");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decode", "([BI)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::util::Base64::decode(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::util::Base64::_class) ::android::util::Base64::_class = java::fetch_class("android/util/Base64");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decode", "([BIII)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String android::util::Base64::encodeToString(const std::vector< int8_t>& arg0, int32_t arg1){
    if (!::android::util::Base64::_class) ::android::util::Base64::_class = java::fetch_class("android/util/Base64");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "encodeToString", "([BI)Ljava/lang/String;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::util::Base64::encodeToString(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::util::Base64::_class) ::android::util::Base64::_class = java::fetch_class("android/util/Base64");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "encodeToString", "([BIII)Ljava/lang/String;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< int8_t> android::util::Base64::encode(const std::vector< int8_t>& arg0, int32_t arg1){
    if (!::android::util::Base64::_class) ::android::util::Base64::_class = java::fetch_class("android/util/Base64");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "encode", "([BI)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::util::Base64::encode(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::util::Base64::_class) ::android::util::Base64::_class = java::fetch_class("android/util/Base64");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "encode", "([BIII)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< ::android::util::Xml_Encoding> android::util::Xml_Encoding::values(){
    if (!::android::util::Xml_Encoding::_class) ::android::util::Xml_Encoding::_class = java::fetch_class("android/util/Xml$Encoding");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/util/Xml$Encoding;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::util::Xml_Encoding> _ret(rets, ::android::util::Xml_Encoding((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::util::Xml_Encoding retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::util::Xml_Encoding android::util::Xml_Encoding::valueOf(const ::java::lang::String& arg0){
    if (!::android::util::Xml_Encoding::_class) ::android::util::Xml_Encoding::_class = java::fetch_class("android/util/Xml$Encoding");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/util/Xml$Encoding;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::util::Xml_Encoding _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::JsonReader::JsonReader(const ::java::io::Reader& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::util::JsonReader::setLenient(bool arg0) const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLenient", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::util::JsonReader::isLenient() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLenient", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::util::JsonReader::beginArray() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginArray", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::util::JsonReader::endArray() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "endArray", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::util::JsonReader::beginObject() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginObject", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::util::JsonReader::endObject() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "endObject", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::util::JsonReader::hasNext() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::util::JsonToken android::util::JsonReader::peek() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Landroid/util/JsonToken;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::JsonToken _ret(ret);
    return _ret;
}

::java::lang::String android::util::JsonReader::nextName() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::util::JsonReader::nextString() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::util::JsonReader::nextBoolean() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextBoolean", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::util::JsonReader::nextNull() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextNull", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

double android::util::JsonReader::nextDouble() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextDouble", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

int64_t android::util::JsonReader::nextLong() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextLong", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t android::util::JsonReader::nextInt() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextInt", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::util::JsonReader::close() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::util::JsonReader::skipValue() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipValue", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::util::JsonReader::toString() const {
    if (!::android::util::JsonReader::_class) ::android::util::JsonReader::_class = java::fetch_class("android/util/JsonReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::SparseArray::SparseArray() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::SparseArray::SparseArray(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::util::SparseArray android::util::SparseArray::clone() const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/util/SparseArray;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::SparseArray _ret(ret);
    return _ret;
}

::java::lang::Object android::util::SparseArray::get(int32_t arg0) const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::util::SparseArray::get(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(ILjava/lang/Object;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::util::SparseArray::delete_(int32_t arg0) const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::util::SparseArray::remove(int32_t arg0) const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::util::SparseArray::removeAt(int32_t arg0) const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::util::SparseArray::put(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::util::SparseArray::size() const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::SparseArray::keyAt(int32_t arg0) const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "keyAt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Object android::util::SparseArray::valueAt(int32_t arg0) const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "valueAt", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::util::SparseArray::setValueAt(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValueAt", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::util::SparseArray::indexOfKey(int32_t arg0) const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOfKey", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::util::SparseArray::indexOfValue(const ::java::lang::Object& arg0) const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOfValue", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::util::SparseArray::clear() const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::util::SparseArray::append(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::util::SparseArray::_class) ::android::util::SparseArray::_class = java::fetch_class("android/util/SparseArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::JsonWriter::JsonWriter(const ::java::io::Writer& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0) {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Writer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::util::JsonWriter::setIndent(const ::java::lang::String& arg0) const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIndent", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::util::JsonWriter::setLenient(bool arg0) const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLenient", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::util::JsonWriter::isLenient() const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLenient", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::util::JsonWriter android::util::JsonWriter::beginArray() const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginArray", "()Landroid/util/JsonWriter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::JsonWriter _ret(ret);
    return _ret;
}

::android::util::JsonWriter android::util::JsonWriter::endArray() const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "endArray", "()Landroid/util/JsonWriter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::JsonWriter _ret(ret);
    return _ret;
}

::android::util::JsonWriter android::util::JsonWriter::beginObject() const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginObject", "()Landroid/util/JsonWriter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::JsonWriter _ret(ret);
    return _ret;
}

::android::util::JsonWriter android::util::JsonWriter::endObject() const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "endObject", "()Landroid/util/JsonWriter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::JsonWriter _ret(ret);
    return _ret;
}

::android::util::JsonWriter android::util::JsonWriter::name(const ::java::lang::String& arg0) const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "name", "(Ljava/lang/String;)Landroid/util/JsonWriter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::util::JsonWriter _ret(ret);
    return _ret;
}

::android::util::JsonWriter android::util::JsonWriter::value(const ::java::lang::String& arg0) const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "(Ljava/lang/String;)Landroid/util/JsonWriter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::util::JsonWriter _ret(ret);
    return _ret;
}

::android::util::JsonWriter android::util::JsonWriter::nullValue() const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "nullValue", "()Landroid/util/JsonWriter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::JsonWriter _ret(ret);
    return _ret;
}

::android::util::JsonWriter android::util::JsonWriter::value(bool arg0) const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "(Z)Landroid/util/JsonWriter;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::util::JsonWriter _ret(ret);
    return _ret;
}

::android::util::JsonWriter android::util::JsonWriter::value(double arg0) const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "(D)Landroid/util/JsonWriter;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::util::JsonWriter _ret(ret);
    return _ret;
}

::android::util::JsonWriter android::util::JsonWriter::value(int64_t arg0) const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "(J)Landroid/util/JsonWriter;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::util::JsonWriter _ret(ret);
    return _ret;
}

::android::util::JsonWriter android::util::JsonWriter::value(const ::java::lang::Number& arg0) const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "(Ljava/lang/Number;)Landroid/util/JsonWriter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::util::JsonWriter _ret(ret);
    return _ret;
}

void android::util::JsonWriter::flush() const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::util::JsonWriter::close() const {
    if (!::android::util::JsonWriter::_class) ::android::util::JsonWriter::_class = java::fetch_class("android/util/JsonWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::LogPrinter::LogPrinter(int32_t arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::util::Printer((jobject)0) {
    if (!::android::util::LogPrinter::_class) ::android::util::LogPrinter::_class = java::fetch_class("android/util/LogPrinter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::util::LogPrinter::println(const ::java::lang::String& arg0) const {
    if (!::android::util::LogPrinter::_class) ::android::util::LogPrinter::_class = java::fetch_class("android/util/LogPrinter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::TimingLogger::TimingLogger(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::util::TimingLogger::_class) ::android::util::TimingLogger::_class = java::fetch_class("android/util/TimingLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::util::TimingLogger::reset(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::util::TimingLogger::_class) ::android::util::TimingLogger::_class = java::fetch_class("android/util/TimingLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::util::TimingLogger::reset() const {
    if (!::android::util::TimingLogger::_class) ::android::util::TimingLogger::_class = java::fetch_class("android/util/TimingLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::util::TimingLogger::addSplit(const ::java::lang::String& arg0) const {
    if (!::android::util::TimingLogger::_class) ::android::util::TimingLogger::_class = java::fetch_class("android/util/TimingLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSplit", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::util::TimingLogger::dumpToLog() const {
    if (!::android::util::TimingLogger::_class) ::android::util::TimingLogger::_class = java::fetch_class("android/util/TimingLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "dumpToLog", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::Base64OutputStream::Base64OutputStream(const ::java::io::OutputStream& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::android::util::Base64OutputStream::_class) ::android::util::Base64OutputStream::_class = java::fetch_class("android/util/Base64OutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::util::Base64OutputStream::write(int32_t arg0) const {
    if (!::android::util::Base64OutputStream::_class) ::android::util::Base64OutputStream::_class = java::fetch_class("android/util/Base64OutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::util::Base64OutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::util::Base64OutputStream::_class) ::android::util::Base64OutputStream::_class = java::fetch_class("android/util/Base64OutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::util::Base64OutputStream::close() const {
    if (!::android::util::Base64OutputStream::_class) ::android::util::Base64OutputStream::_class = java::fetch_class("android/util/Base64OutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::StringBuilderPrinter::StringBuilderPrinter(const ::java::lang::StringBuilder& arg0) : ::java::lang::Object((jobject)0), ::android::util::Printer((jobject)0) {
    if (!::android::util::StringBuilderPrinter::_class) ::android::util::StringBuilderPrinter::_class = java::fetch_class("android/util/StringBuilderPrinter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/StringBuilder;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::util::StringBuilderPrinter::println(const ::java::lang::String& arg0) const {
    if (!::android::util::StringBuilderPrinter::_class) ::android::util::StringBuilderPrinter::_class = java::fetch_class("android/util/StringBuilderPrinter");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::TimeZone android::util::TimeUtils::getTimeZone(int32_t arg0, bool arg1, int64_t arg2, const ::java::lang::String& arg3){
    if (!::android::util::TimeUtils::_class) ::android::util::TimeUtils::_class = java::fetch_class("android/util/TimeUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTimeZone", "(IZJLjava/lang/String;)Ljava/util/TimeZone;");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::TimeZone _ret(ret);
    return _ret;
}

::java::lang::String android::util::TimeUtils::getTimeZoneDatabaseVersion(){
    if (!::android::util::TimeUtils::_class) ::android::util::TimeUtils::_class = java::fetch_class("android/util/TimeUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTimeZoneDatabaseVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::android::util::JsonToken> android::util::JsonToken::values(){
    if (!::android::util::JsonToken::_class) ::android::util::JsonToken::_class = java::fetch_class("android/util/JsonToken");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/util/JsonToken;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::util::JsonToken> _ret(rets, ::android::util::JsonToken((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::util::JsonToken retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::util::JsonToken android::util::JsonToken::valueOf(const ::java::lang::String& arg0){
    if (!::android::util::JsonToken::_class) ::android::util::JsonToken::_class = java::fetch_class("android/util/JsonToken");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/util/JsonToken;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::util::JsonToken _ret(ret);
    return _ret;
}

bool android::util::DebugUtils::isObjectSelected(const ::java::lang::Object& arg0){
    if (!::android::util::DebugUtils::_class) ::android::util::DebugUtils::_class = java::fetch_class("android/util/DebugUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isObjectSelected", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::MalformedJsonException::MalformedJsonException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::util::MalformedJsonException::_class) ::android::util::MalformedJsonException::_class = java::fetch_class("android/util/MalformedJsonException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::Property::Property(const ::java::lang::Class& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::util::Property::_class) ::android::util::Property::_class = java::fetch_class("android/util/Property");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::util::Property android::util::Property::of(const ::java::lang::Class& arg0, const ::java::lang::Class& arg1, const ::java::lang::String& arg2){
    if (!::android::util::Property::_class) ::android::util::Property::_class = java::fetch_class("android/util/Property");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "of", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Landroid/util/Property;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::util::Property _ret(ret);
    return _ret;
}

bool android::util::Property::isReadOnly() const {
    if (!::android::util::Property::_class) ::android::util::Property::_class = java::fetch_class("android/util/Property");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReadOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::util::Property::set(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::util::Property::_class) ::android::util::Property::_class = java::fetch_class("android/util/Property");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::util::Property::get(const ::java::lang::Object& arg0) const {
    if (!::android::util::Property::_class) ::android::util::Property::_class = java::fetch_class("android/util/Property");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String android::util::Property::getName() const {
    if (!::android::util::Property::_class) ::android::util::Property::_class = java::fetch_class("android/util/Property");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Class android::util::Property::getType() const {
    if (!::android::util::Property::_class) ::android::util::Property::_class = java::fetch_class("android/util/Property");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::AndroidException::AndroidException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::util::AndroidException::_class) ::android::util::AndroidException::_class = java::fetch_class("android/util/AndroidException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::AndroidException::AndroidException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::util::AndroidException::_class) ::android::util::AndroidException::_class = java::fetch_class("android/util/AndroidException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::AndroidException::AndroidException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::util::AndroidException::_class) ::android::util::AndroidException::_class = java::fetch_class("android/util/AndroidException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::AndroidException::AndroidException(const ::java::lang::Exception& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::util::AndroidException::_class) ::android::util::AndroidException::_class = java::fetch_class("android/util/AndroidException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::util::AttributeSet::getAttributeCount() const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::util::AttributeSet::getAttributeName(int32_t arg0) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::util::AttributeSet::getAttributeValue(int32_t arg0) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeValue", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::util::AttributeSet::getAttributeValue(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::util::AttributeSet::getPositionDescription() const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPositionDescription", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::util::AttributeSet::getAttributeNameResource(int32_t arg0) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeNameResource", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::util::AttributeSet::getAttributeListValue(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2, int32_t arg3) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeListValue", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    int32_t _arg3 = arg3;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::util::AttributeSet::getAttributeBooleanValue(const ::java::lang::String& arg0, const ::java::lang::String& arg1, bool arg2) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeBooleanValue", "(Ljava/lang/String;Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::util::AttributeSet::getAttributeResourceValue(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeResourceValue", "(Ljava/lang/String;Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::util::AttributeSet::getAttributeIntValue(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeIntValue", "(Ljava/lang/String;Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::util::AttributeSet::getAttributeUnsignedIntValue(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeUnsignedIntValue", "(Ljava/lang/String;Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

float android::util::AttributeSet::getAttributeFloatValue(const ::java::lang::String& arg0, const ::java::lang::String& arg1, float arg2) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeFloatValue", "(Ljava/lang/String;Ljava/lang/String;F)F");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::util::AttributeSet::getAttributeListValue(int32_t arg0, const std::vector< ::java::lang::String>& arg1, int32_t arg2) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeListValue", "(I[Ljava/lang/String;I)I");
    int32_t _arg0 = arg0;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::util::AttributeSet::getAttributeBooleanValue(int32_t arg0, bool arg1) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeBooleanValue", "(IZ)Z");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::util::AttributeSet::getAttributeResourceValue(int32_t arg0, int32_t arg1) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeResourceValue", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::util::AttributeSet::getAttributeIntValue(int32_t arg0, int32_t arg1) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeIntValue", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::util::AttributeSet::getAttributeUnsignedIntValue(int32_t arg0, int32_t arg1) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeUnsignedIntValue", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

float android::util::AttributeSet::getAttributeFloatValue(int32_t arg0, float arg1) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeFloatValue", "(IF)F");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::util::AttributeSet::getIdAttribute() const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIdAttribute", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::util::AttributeSet::getClassAttribute() const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassAttribute", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::util::AttributeSet::getIdAttributeResourceValue(int32_t arg0) const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIdAttributeResourceValue", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::util::AttributeSet::getStyleAttribute() const {
    if (!::android::util::AttributeSet::_class) ::android::util::AttributeSet::_class = java::fetch_class("android/util/AttributeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStyleAttribute", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::util::FloatMath::floor(float arg0){
    if (!::android::util::FloatMath::_class) ::android::util::FloatMath::_class = java::fetch_class("android/util/FloatMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "floor", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

float android::util::FloatMath::ceil(float arg0){
    if (!::android::util::FloatMath::_class) ::android::util::FloatMath::_class = java::fetch_class("android/util/FloatMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ceil", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

float android::util::FloatMath::sin(float arg0){
    if (!::android::util::FloatMath::_class) ::android::util::FloatMath::_class = java::fetch_class("android/util/FloatMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sin", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

float android::util::FloatMath::cos(float arg0){
    if (!::android::util::FloatMath::_class) ::android::util::FloatMath::_class = java::fetch_class("android/util/FloatMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cos", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

float android::util::FloatMath::sqrt(float arg0){
    if (!::android::util::FloatMath::_class) ::android::util::FloatMath::_class = java::fetch_class("android/util/FloatMath");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sqrt", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::DisplayMetrics::DisplayMetrics() : ::java::lang::Object((jobject)0) {
    if (!::android::util::DisplayMetrics::_class) ::android::util::DisplayMetrics::_class = java::fetch_class("android/util/DisplayMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::util::DisplayMetrics::setTo(const ::android::util::DisplayMetrics& arg0) const {
    if (!::android::util::DisplayMetrics::_class) ::android::util::DisplayMetrics::_class = java::fetch_class("android/util/DisplayMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTo", "(Landroid/util/DisplayMetrics;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::util::DisplayMetrics::setToDefaults() const {
    if (!::android::util::DisplayMetrics::_class) ::android::util::DisplayMetrics::_class = java::fetch_class("android/util/DisplayMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "setToDefaults", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::util::DisplayMetrics::toString() const {
    if (!::android::util::DisplayMetrics::_class) ::android::util::DisplayMetrics::_class = java::fetch_class("android/util/DisplayMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::AndroidRuntimeException::AndroidRuntimeException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::util::AndroidRuntimeException::_class) ::android::util::AndroidRuntimeException::_class = java::fetch_class("android/util/AndroidRuntimeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::AndroidRuntimeException::AndroidRuntimeException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::util::AndroidRuntimeException::_class) ::android::util::AndroidRuntimeException::_class = java::fetch_class("android/util/AndroidRuntimeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::AndroidRuntimeException::AndroidRuntimeException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::util::AndroidRuntimeException::_class) ::android::util::AndroidRuntimeException::_class = java::fetch_class("android/util/AndroidRuntimeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::AndroidRuntimeException::AndroidRuntimeException(const ::java::lang::Exception& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::util::AndroidRuntimeException::_class) ::android::util::AndroidRuntimeException::_class = java::fetch_class("android/util/AndroidRuntimeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::util::Printer::println(const ::java::lang::String& arg0) const {
    if (!::android::util::Printer::_class) ::android::util::Printer::_class = java::fetch_class("android/util/Printer");
    static jmethodID mid = java::jni->GetMethodID(_class, "println", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::util::EventLog_Event::getProcessId() const {
    if (!::android::util::EventLog_Event::_class) ::android::util::EventLog_Event::_class = java::fetch_class("android/util/EventLog$Event");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProcessId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::EventLog_Event::getThreadId() const {
    if (!::android::util::EventLog_Event::_class) ::android::util::EventLog_Event::_class = java::fetch_class("android/util/EventLog$Event");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThreadId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::util::EventLog_Event::getTimeNanos() const {
    if (!::android::util::EventLog_Event::_class) ::android::util::EventLog_Event::_class = java::fetch_class("android/util/EventLog$Event");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeNanos", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t android::util::EventLog_Event::getTag() const {
    if (!::android::util::EventLog_Event::_class) ::android::util::EventLog_Event::_class = java::fetch_class("android/util/EventLog$Event");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object android::util::EventLog_Event::getData() const {
    if (!::android::util::EventLog_Event::_class) ::android::util::EventLog_Event::_class = java::fetch_class("android/util/EventLog$Event");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::util::Base64InputStream::Base64InputStream(const ::java::io::InputStream& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::android::util::Base64InputStream::_class) ::android::util::Base64InputStream::_class = java::fetch_class("android/util/Base64InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::util::Base64InputStream::markSupported() const {
    if (!::android::util::Base64InputStream::_class) ::android::util::Base64InputStream::_class = java::fetch_class("android/util/Base64InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::util::Base64InputStream::mark(int32_t arg0) const {
    if (!::android::util::Base64InputStream::_class) ::android::util::Base64InputStream::_class = java::fetch_class("android/util/Base64InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::util::Base64InputStream::reset() const {
    if (!::android::util::Base64InputStream::_class) ::android::util::Base64InputStream::_class = java::fetch_class("android/util/Base64InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::util::Base64InputStream::close() const {
    if (!::android::util::Base64InputStream::_class) ::android::util::Base64InputStream::_class = java::fetch_class("android/util/Base64InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::util::Base64InputStream::available() const {
    if (!::android::util::Base64InputStream::_class) ::android::util::Base64InputStream::_class = java::fetch_class("android/util/Base64InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::util::Base64InputStream::skip(int64_t arg0) const {
    if (!::android::util::Base64InputStream::_class) ::android::util::Base64InputStream::_class = java::fetch_class("android/util/Base64InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int32_t android::util::Base64InputStream::read() const {
    if (!::android::util::Base64InputStream::_class) ::android::util::Base64InputStream::_class = java::fetch_class("android/util/Base64InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::util::Base64InputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::util::Base64InputStream::_class) ::android::util::Base64InputStream::_class = java::fetch_class("android/util/Base64InputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

