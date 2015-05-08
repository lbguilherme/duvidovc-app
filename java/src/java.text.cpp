#include "java-core.hpp"
#include <memory>
#include "java.lang.CharSequence.hpp"
#include "java.lang.Number.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.StringBuffer.hpp"
#include "java.math.RoundingMode.hpp"
#include "java.text.Annotation.hpp"
#include "java.text.AttributedCharacterIterator.hpp"
#include "java.text.AttributedString.hpp"
#include "java.text.Bidi.hpp"
#include "java.text.BreakIterator.hpp"
#include "java.text.CharacterIterator.hpp"
#include "java.text.ChoiceFormat.hpp"
#include "java.text.CollationElementIterator.hpp"
#include "java.text.CollationKey.hpp"
#include "java.text.Collator.hpp"
#include "java.text.DateFormat.hpp"
#include "java.text.DateFormatSymbols.hpp"
#include "java.text.DecimalFormat.hpp"
#include "java.text.DecimalFormatSymbols.hpp"
#include "java.text.FieldPosition.hpp"
#include "java.text.Format.hpp"
#include "java.text.MessageFormat.hpp"
#include "java.text.Normalizer.hpp"
#include "java.text.NumberFormat.hpp"
#include "java.text.ParseException.hpp"
#include "java.text.ParsePosition.hpp"
#include "java.text.RuleBasedCollator.hpp"
#include "java.text.SimpleDateFormat.hpp"
#include "java.text.StringCharacterIterator.hpp"
#include "java.util.Calendar.hpp"
#include "java.util.Currency.hpp"
#include "java.util.Date.hpp"
#include "java.util.Locale.hpp"
#include "java.util.Map.hpp"
#include "java.util.Set.hpp"
#include "java.util.TimeZone.hpp"

jclass java::text::DateFormat_Field::_class = nullptr;
jclass java::text::AttributedString::_class = nullptr;
jclass java::text::ParsePosition::_class = nullptr;
jclass java::text::ChoiceFormat::_class = nullptr;
jclass java::text::MessageFormat_Field::_class = nullptr;
jclass java::text::Normalizer_Form::_class = nullptr;
jclass java::text::AttributedCharacterIterator::_class = nullptr;
jclass java::text::Collator::_class = nullptr;
jclass java::text::CollationKey::_class = nullptr;
jclass java::text::Bidi::_class = nullptr;
jclass java::text::SimpleDateFormat::_class = nullptr;
jclass java::text::CharacterIterator::_class = nullptr;
jclass java::text::MessageFormat::_class = nullptr;
jclass java::text::DecimalFormatSymbols::_class = nullptr;
jclass java::text::DateFormat::_class = nullptr;
jclass java::text::Annotation::_class = nullptr;
jclass java::text::FieldPosition::_class = nullptr;
jclass java::text::NumberFormat_Field::_class = nullptr;
jclass java::text::Format_Field::_class = nullptr;
jclass java::text::DateFormatSymbols::_class = nullptr;
jclass java::text::Format::_class = nullptr;
jclass java::text::AttributedCharacterIterator_Attribute::_class = nullptr;
jclass java::text::RuleBasedCollator::_class = nullptr;
jclass java::text::CollationElementIterator::_class = nullptr;
jclass java::text::DecimalFormat::_class = nullptr;
jclass java::text::StringCharacterIterator::_class = nullptr;
jclass java::text::ParseException::_class = nullptr;
jclass java::text::NumberFormat::_class = nullptr;
jclass java::text::BreakIterator::_class = nullptr;
jclass java::text::Normalizer::_class = nullptr;

int32_t java::text::DateFormat_Field::getCalendarField() const {
    if (!::java::text::DateFormat_Field::_class) ::java::text::DateFormat_Field::_class = java::fetch_class("java/text/DateFormat$Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCalendarField", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::text::DateFormat_Field java::text::DateFormat_Field::ofCalendarField(int32_t arg0){
    if (!::java::text::DateFormat_Field::_class) ::java::text::DateFormat_Field::_class = java::fetch_class("java/text/DateFormat$Field");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "ofCalendarField", "(I)Ljava/text/DateFormat$Field;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::DateFormat_Field _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::AttributedString::AttributedString(const ::java::text::AttributedCharacterIterator& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::text::AttributedString::_class) ::java::text::AttributedString::_class = java::fetch_class("java/text/AttributedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/text/AttributedCharacterIterator;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::AttributedString::AttributedString(const ::java::text::AttributedCharacterIterator& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::java::text::AttributedString::_class) ::java::text::AttributedString::_class = java::fetch_class("java/text/AttributedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/text/AttributedCharacterIterator;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::AttributedString::AttributedString(const ::java::text::AttributedCharacterIterator& arg0, int32_t arg1, int32_t arg2, const std::vector< ::java::text::AttributedCharacterIterator_Attribute>& arg3) : ::java::lang::Object((jobject)0) {
    if (!::java::text::AttributedString::_class) ::java::text::AttributedString::_class = java::fetch_class("java/text/AttributedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/text/AttributedCharacterIterator;II[Ljava/text/AttributedCharacterIterator$Attribute;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    unsigned arg3s = arg3.size();
    if (!::java::text::AttributedCharacterIterator_Attribute::_class) ::java::text::AttributedCharacterIterator_Attribute::_class = java::fetch_class("java/text/AttributedCharacterIterator$Attribute");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::text::AttributedCharacterIterator_Attribute::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::text::AttributedCharacterIterator_Attribute& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::AttributedString::AttributedString(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::text::AttributedString::_class) ::java::text::AttributedString::_class = java::fetch_class("java/text/AttributedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::AttributedString::AttributedString(const ::java::lang::String& arg0, const ::java::util::Map& arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::text::AttributedString::_class) ::java::text::AttributedString::_class = java::fetch_class("java/text/AttributedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::text::AttributedString::addAttribute(const ::java::text::AttributedCharacterIterator_Attribute& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::text::AttributedString::_class) ::java::text::AttributedString::_class = java::fetch_class("java/text/AttributedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::text::AttributedString::addAttribute(const ::java::text::AttributedCharacterIterator_Attribute& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::text::AttributedString::_class) ::java::text::AttributedString::_class = java::fetch_class("java/text/AttributedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::text::AttributedString::addAttributes(const ::java::util::Map& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::text::AttributedString::_class) ::java::text::AttributedString::_class = java::fetch_class("java/text/AttributedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAttributes", "(Ljava/util/Map;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::text::AttributedCharacterIterator java::text::AttributedString::getIterator() const {
    if (!::java::text::AttributedString::_class) ::java::text::AttributedString::_class = java::fetch_class("java/text/AttributedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIterator", "()Ljava/text/AttributedCharacterIterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::text::AttributedCharacterIterator _ret(ret);
    return _ret;
}

::java::text::AttributedCharacterIterator java::text::AttributedString::getIterator(const std::vector< ::java::text::AttributedCharacterIterator_Attribute>& arg0) const {
    if (!::java::text::AttributedString::_class) ::java::text::AttributedString::_class = java::fetch_class("java/text/AttributedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIterator", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;");
    unsigned arg0s = arg0.size();
    if (!::java::text::AttributedCharacterIterator_Attribute::_class) ::java::text::AttributedCharacterIterator_Attribute::_class = java::fetch_class("java/text/AttributedCharacterIterator$Attribute");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::text::AttributedCharacterIterator_Attribute::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::text::AttributedCharacterIterator_Attribute& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::text::AttributedCharacterIterator _ret(ret);
    return _ret;
}

::java::text::AttributedCharacterIterator java::text::AttributedString::getIterator(const std::vector< ::java::text::AttributedCharacterIterator_Attribute>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::text::AttributedString::_class) ::java::text::AttributedString::_class = java::fetch_class("java/text/AttributedString");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIterator", "([Ljava/text/AttributedCharacterIterator$Attribute;II)Ljava/text/AttributedCharacterIterator;");
    unsigned arg0s = arg0.size();
    if (!::java::text::AttributedCharacterIterator_Attribute::_class) ::java::text::AttributedCharacterIterator_Attribute::_class = java::fetch_class("java/text/AttributedCharacterIterator$Attribute");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::text::AttributedCharacterIterator_Attribute::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::text::AttributedCharacterIterator_Attribute& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::text::AttributedCharacterIterator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::ParsePosition::ParsePosition(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::text::ParsePosition::_class) ::java::text::ParsePosition::_class = java::fetch_class("java/text/ParsePosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::text::ParsePosition::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::ParsePosition::_class) ::java::text::ParsePosition::_class = java::fetch_class("java/text/ParsePosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::text::ParsePosition::getErrorIndex() const {
    if (!::java::text::ParsePosition::_class) ::java::text::ParsePosition::_class = java::fetch_class("java/text/ParsePosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::ParsePosition::getIndex() const {
    if (!::java::text::ParsePosition::_class) ::java::text::ParsePosition::_class = java::fetch_class("java/text/ParsePosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::ParsePosition::hashCode() const {
    if (!::java::text::ParsePosition::_class) ::java::text::ParsePosition::_class = java::fetch_class("java/text/ParsePosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::text::ParsePosition::setErrorIndex(int32_t arg0) const {
    if (!::java::text::ParsePosition::_class) ::java::text::ParsePosition::_class = java::fetch_class("java/text/ParsePosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::ParsePosition::setIndex(int32_t arg0) const {
    if (!::java::text::ParsePosition::_class) ::java::text::ParsePosition::_class = java::fetch_class("java/text/ParsePosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::text::ParsePosition::toString() const {
    if (!::java::text::ParsePosition::_class) ::java::text::ParsePosition::_class = java::fetch_class("java/text/ParsePosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::ChoiceFormat::ChoiceFormat(const std::vector< double>& arg0, const std::vector< ::java::lang::String>& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0), ::java::text::NumberFormat((jobject)0) {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([D[Ljava/lang/String;)V");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::ChoiceFormat::ChoiceFormat(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0), ::java::text::NumberFormat((jobject)0) {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::text::ChoiceFormat::applyPattern(const ::java::lang::String& arg0) const {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyPattern", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::text::ChoiceFormat::clone() const {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::text::ChoiceFormat::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::StringBuffer java::text::ChoiceFormat::format(double arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    double _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::text::ChoiceFormat::format(int64_t arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> java::text::ChoiceFormat::getFormats() const {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormats", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< double> java::text::ChoiceFormat::getLimits() const {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLimits", "()[D");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jdouble* reta = java::jni->GetDoubleArrayElements((jdoubleArray)ret, nullptr);
    std::vector< double> _ret(reta, reta+rets);
    java::jni->ReleaseDoubleArrayElements((jdoubleArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::text::ChoiceFormat::hashCode() const {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

double java::text::ChoiceFormat::nextDouble(double arg0){
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nextDouble", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

double java::text::ChoiceFormat::nextDouble(double arg0, bool arg1){
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nextDouble", "(DZ)D");
    double _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

::java::lang::Number java::text::ChoiceFormat::parse(const ::java::lang::String& arg0, const ::java::text::ParsePosition& arg1) const {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Number _ret(ret);
    return _ret;
}

double java::text::ChoiceFormat::previousDouble(double arg0){
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "previousDouble", "(D)D");
    double _arg0 = arg0;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0);
}

void java::text::ChoiceFormat::setChoices(const std::vector< double>& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChoices", "([D[Ljava/lang/String;)V");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::text::ChoiceFormat::toPattern() const {
    if (!::java::text::ChoiceFormat::_class) ::java::text::ChoiceFormat::_class = java::fetch_class("java/text/ChoiceFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "toPattern", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::text::Normalizer_Form> java::text::Normalizer_Form::values(){
    if (!::java::text::Normalizer_Form::_class) ::java::text::Normalizer_Form::_class = java::fetch_class("java/text/Normalizer$Form");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljava/text/Normalizer$Form;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::text::Normalizer_Form> _ret(rets, ::java::text::Normalizer_Form((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::text::Normalizer_Form retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::text::Normalizer_Form java::text::Normalizer_Form::valueOf(const ::java::lang::String& arg0){
    if (!::java::text::Normalizer_Form::_class) ::java::text::Normalizer_Form::_class = java::fetch_class("java/text/Normalizer$Form");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/text/Normalizer$Form;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::Normalizer_Form _ret(ret);
    return _ret;
}

::java::util::Set java::text::AttributedCharacterIterator::getAllAttributeKeys() const {
    if (!::java::text::AttributedCharacterIterator::_class) ::java::text::AttributedCharacterIterator::_class = java::fetch_class("java/text/AttributedCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllAttributeKeys", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::lang::Object java::text::AttributedCharacterIterator::getAttribute(const ::java::text::AttributedCharacterIterator_Attribute& arg0) const {
    if (!::java::text::AttributedCharacterIterator::_class) ::java::text::AttributedCharacterIterator::_class = java::fetch_class("java/text/AttributedCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map java::text::AttributedCharacterIterator::getAttributes() const {
    if (!::java::text::AttributedCharacterIterator::_class) ::java::text::AttributedCharacterIterator::_class = java::fetch_class("java/text/AttributedCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributes", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

int32_t java::text::AttributedCharacterIterator::getRunLimit() const {
    if (!::java::text::AttributedCharacterIterator::_class) ::java::text::AttributedCharacterIterator::_class = java::fetch_class("java/text/AttributedCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunLimit", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::AttributedCharacterIterator::getRunLimit(const ::java::text::AttributedCharacterIterator_Attribute& arg0) const {
    if (!::java::text::AttributedCharacterIterator::_class) ::java::text::AttributedCharacterIterator::_class = java::fetch_class("java/text/AttributedCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunLimit", "(Ljava/text/AttributedCharacterIterator$Attribute;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::text::AttributedCharacterIterator::getRunLimit(const ::java::util::Set& arg0) const {
    if (!::java::text::AttributedCharacterIterator::_class) ::java::text::AttributedCharacterIterator::_class = java::fetch_class("java/text/AttributedCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunLimit", "(Ljava/util/Set;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::text::AttributedCharacterIterator::getRunStart() const {
    if (!::java::text::AttributedCharacterIterator::_class) ::java::text::AttributedCharacterIterator::_class = java::fetch_class("java/text/AttributedCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunStart", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::AttributedCharacterIterator::getRunStart(const ::java::text::AttributedCharacterIterator_Attribute& arg0) const {
    if (!::java::text::AttributedCharacterIterator::_class) ::java::text::AttributedCharacterIterator::_class = java::fetch_class("java/text/AttributedCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunStart", "(Ljava/text/AttributedCharacterIterator$Attribute;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::text::AttributedCharacterIterator::getRunStart(const ::java::util::Set& arg0) const {
    if (!::java::text::AttributedCharacterIterator::_class) ::java::text::AttributedCharacterIterator::_class = java::fetch_class("java/text/AttributedCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunStart", "(Ljava/util/Set;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Object java::text::Collator::clone() const {
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::text::Collator::compare(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::text::Collator::compare(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

bool java::text::Collator::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::text::Collator::equals(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::java::util::Locale> java::text::Collator::getAvailableLocales(){
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAvailableLocales", "()[Ljava/util/Locale;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::util::Locale> _ret(rets, ::java::util::Locale((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::util::Locale retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::text::CollationKey java::text::Collator::getCollationKey(const ::java::lang::String& arg0) const {
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollationKey", "(Ljava/lang/String;)Ljava/text/CollationKey;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::text::CollationKey _ret(ret);
    return _ret;
}

int32_t java::text::Collator::getDecomposition() const {
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDecomposition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::text::Collator java::text::Collator::getInstance(){
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Ljava/text/Collator;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::Collator _ret(ret);
    return _ret;
}

::java::text::Collator java::text::Collator::getInstance(const ::java::util::Locale& arg0){
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/util/Locale;)Ljava/text/Collator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::Collator _ret(ret);
    return _ret;
}

int32_t java::text::Collator::getStrength() const {
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStrength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::Collator::hashCode() const {
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::text::Collator::setDecomposition(int32_t arg0) const {
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDecomposition", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::Collator::setStrength(int32_t arg0) const {
    if (!::java::text::Collator::_class) ::java::text::Collator::_class = java::fetch_class("java/text/Collator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStrength", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::text::CollationKey::compareTo(const ::java::text::CollationKey& arg0) const {
    if (!::java::text::CollationKey::_class) ::java::text::CollationKey::_class = java::fetch_class("java/text/CollationKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/text/CollationKey;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::text::CollationKey::getSourceString() const {
    if (!::java::text::CollationKey::_class) ::java::text::CollationKey::_class = java::fetch_class("java/text/CollationKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSourceString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< int8_t> java::text::CollationKey::toByteArray() const {
    if (!::java::text::CollationKey::_class) ::java::text::CollationKey::_class = java::fetch_class("java/text/CollationKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "toByteArray", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::text::CollationKey::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::text::CollationKey::_class) ::java::text::CollationKey::_class = java::fetch_class("java/text/CollationKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::Bidi::Bidi(const ::java::text::AttributedCharacterIterator& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/text/AttributedCharacterIterator;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::Bidi::Bidi(const std::vector< uint16_t>& arg0, int32_t arg1, const std::vector< int8_t>& arg2, int32_t arg3, int32_t arg4, int32_t arg5) : ::java::lang::Object((jobject)0) {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([CI[BIII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::Bidi::Bidi(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool java::text::Bidi::baseIsLeftToRight() const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "baseIsLeftToRight", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::text::Bidi java::text::Bidi::createLineBidi(int32_t arg0, int32_t arg1) const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "createLineBidi", "(II)Ljava/text/Bidi;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::text::Bidi _ret(ret);
    return _ret;
}

int32_t java::text::Bidi::getBaseLevel() const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseLevel", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::Bidi::getLength() const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::Bidi::getLevelAt(int32_t arg0) const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLevelAt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::text::Bidi::getRunCount() const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::Bidi::getRunLevel(int32_t arg0) const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunLevel", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::text::Bidi::getRunLimit(int32_t arg0) const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunLimit", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::text::Bidi::getRunStart(int32_t arg0) const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRunStart", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::text::Bidi::isLeftToRight() const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLeftToRight", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::text::Bidi::isMixed() const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMixed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::text::Bidi::isRightToLeft() const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRightToLeft", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::text::Bidi::reorderVisually(const std::vector< int8_t>& arg0, int32_t arg1, const std::vector< ::java::lang::Object>& arg2, int32_t arg3, int32_t arg4){
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "reorderVisually", "([BI[Ljava/lang/Object;II)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

bool java::text::Bidi::requiresBidi(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "requiresBidi", "([CII)Z");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::lang::String java::text::Bidi::toString() const {
    if (!::java::text::Bidi::_class) ::java::text::Bidi::_class = java::fetch_class("java/text/Bidi");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::SimpleDateFormat::SimpleDateFormat() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::DateFormat((jobject)0), ::java::text::Format((jobject)0) {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::SimpleDateFormat::SimpleDateFormat(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::DateFormat((jobject)0), ::java::text::Format((jobject)0) {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::SimpleDateFormat::SimpleDateFormat(const ::java::lang::String& arg0, const ::java::text::DateFormatSymbols& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::DateFormat((jobject)0), ::java::text::Format((jobject)0) {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/text/DateFormatSymbols;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::SimpleDateFormat::SimpleDateFormat(const ::java::lang::String& arg0, const ::java::util::Locale& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::DateFormat((jobject)0), ::java::text::Format((jobject)0) {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::text::SimpleDateFormat::applyLocalizedPattern(const ::java::lang::String& arg0) const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyLocalizedPattern", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::SimpleDateFormat::applyPattern(const ::java::lang::String& arg0) const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyPattern", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::text::SimpleDateFormat::clone() const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::text::SimpleDateFormat::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::text::AttributedCharacterIterator java::text::SimpleDateFormat::formatToCharacterIterator(const ::java::lang::Object& arg0) const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::text::AttributedCharacterIterator _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::text::SimpleDateFormat::format(const ::java::util::Date& arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::util::Date java::text::SimpleDateFormat::get2DigitYearStart() const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "get2DigitYearStart", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::text::DateFormatSymbols java::text::SimpleDateFormat::getDateFormatSymbols() const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDateFormatSymbols", "()Ljava/text/DateFormatSymbols;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::text::DateFormatSymbols _ret(ret);
    return _ret;
}

int32_t java::text::SimpleDateFormat::hashCode() const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Date java::text::SimpleDateFormat::parse(const ::java::lang::String& arg0, const ::java::text::ParsePosition& arg1) const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::Date _ret(ret);
    return _ret;
}

void java::text::SimpleDateFormat::set2DigitYearStart(const ::java::util::Date& arg0) const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "set2DigitYearStart", "(Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::SimpleDateFormat::setDateFormatSymbols(const ::java::text::DateFormatSymbols& arg0) const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDateFormatSymbols", "(Ljava/text/DateFormatSymbols;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::text::SimpleDateFormat::toLocalizedPattern() const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "toLocalizedPattern", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::text::SimpleDateFormat::toPattern() const {
    if (!::java::text::SimpleDateFormat::_class) ::java::text::SimpleDateFormat::_class = java::fetch_class("java/text/SimpleDateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "toPattern", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object java::text::CharacterIterator::clone() const {
    if (!::java::text::CharacterIterator::_class) ::java::text::CharacterIterator::_class = java::fetch_class("java/text/CharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

uint16_t java::text::CharacterIterator::current() const {
    if (!::java::text::CharacterIterator::_class) ::java::text::CharacterIterator::_class = java::fetch_class("java/text/CharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "current", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::CharacterIterator::first() const {
    if (!::java::text::CharacterIterator::_class) ::java::text::CharacterIterator::_class = java::fetch_class("java/text/CharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "first", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

int32_t java::text::CharacterIterator::getBeginIndex() const {
    if (!::java::text::CharacterIterator::_class) ::java::text::CharacterIterator::_class = java::fetch_class("java/text/CharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBeginIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::CharacterIterator::getEndIndex() const {
    if (!::java::text::CharacterIterator::_class) ::java::text::CharacterIterator::_class = java::fetch_class("java/text/CharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEndIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::CharacterIterator::getIndex() const {
    if (!::java::text::CharacterIterator::_class) ::java::text::CharacterIterator::_class = java::fetch_class("java/text/CharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

uint16_t java::text::CharacterIterator::last() const {
    if (!::java::text::CharacterIterator::_class) ::java::text::CharacterIterator::_class = java::fetch_class("java/text/CharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "last", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::CharacterIterator::next() const {
    if (!::java::text::CharacterIterator::_class) ::java::text::CharacterIterator::_class = java::fetch_class("java/text/CharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::CharacterIterator::previous() const {
    if (!::java::text::CharacterIterator::_class) ::java::text::CharacterIterator::_class = java::fetch_class("java/text/CharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "previous", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::CharacterIterator::setIndex(int32_t arg0) const {
    if (!::java::text::CharacterIterator::_class) ::java::text::CharacterIterator::_class = java::fetch_class("java/text/CharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIndex", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::MessageFormat::MessageFormat(const ::java::lang::String& arg0, const ::java::util::Locale& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0) {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::MessageFormat::MessageFormat(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0) {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::text::MessageFormat::applyPattern(const ::java::lang::String& arg0) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyPattern", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::text::MessageFormat::clone() const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::text::MessageFormat::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::text::AttributedCharacterIterator java::text::MessageFormat::formatToCharacterIterator(const ::java::lang::Object& arg0) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::text::AttributedCharacterIterator _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::text::MessageFormat::format(const std::vector< ::java::lang::Object>& arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "([Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::text::MessageFormat::format(const ::java::lang::Object& arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::String java::text::MessageFormat::format(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
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

std::vector< ::java::text::Format> java::text::MessageFormat::getFormats() const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormats", "()[Ljava/text/Format;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::text::Format> _ret(rets, ::java::text::Format((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::text::Format retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::text::Format> java::text::MessageFormat::getFormatsByArgumentIndex() const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormatsByArgumentIndex", "()[Ljava/text/Format;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::text::Format> _ret(rets, ::java::text::Format((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::text::Format retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void java::text::MessageFormat::setFormatByArgumentIndex(int32_t arg0, const ::java::text::Format& arg1) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFormatByArgumentIndex", "(ILjava/text/Format;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::text::MessageFormat::setFormatsByArgumentIndex(const std::vector< ::java::text::Format>& arg0) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFormatsByArgumentIndex", "([Ljava/text/Format;)V");
    unsigned arg0s = arg0.size();
    if (!::java::text::Format::_class) ::java::text::Format::_class = java::fetch_class("java/text/Format");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::text::Format::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::text::Format& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Locale java::text::MessageFormat::getLocale() const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocale", "()Ljava/util/Locale;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Locale _ret(ret);
    return _ret;
}

int32_t java::text::MessageFormat::hashCode() const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::lang::Object> java::text::MessageFormat::parse(const ::java::lang::String& arg0) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;)[Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> java::text::MessageFormat::parse(const ::java::lang::String& arg0, const ::java::text::ParsePosition& arg1) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)[Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::Object java::text::MessageFormat::parseObject(const ::java::lang::String& arg0, const ::java::text::ParsePosition& arg1) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::text::MessageFormat::setFormat(int32_t arg0, const ::java::text::Format& arg1) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFormat", "(ILjava/text/Format;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::text::MessageFormat::setFormats(const std::vector< ::java::text::Format>& arg0) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFormats", "([Ljava/text/Format;)V");
    unsigned arg0s = arg0.size();
    if (!::java::text::Format::_class) ::java::text::Format::_class = java::fetch_class("java/text/Format");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::text::Format::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::text::Format& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::MessageFormat::setLocale(const ::java::util::Locale& arg0) const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocale", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::text::MessageFormat::toPattern() const {
    if (!::java::text::MessageFormat::_class) ::java::text::MessageFormat::_class = java::fetch_class("java/text/MessageFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "toPattern", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::DecimalFormatSymbols::DecimalFormatSymbols() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::DecimalFormatSymbols::DecimalFormatSymbols(const ::java::util::Locale& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::text::DecimalFormatSymbols java::text::DecimalFormatSymbols::getInstance(){
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Ljava/text/DecimalFormatSymbols;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::DecimalFormatSymbols _ret(ret);
    return _ret;
}

::java::text::DecimalFormatSymbols java::text::DecimalFormatSymbols::getInstance(const ::java::util::Locale& arg0){
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::DecimalFormatSymbols _ret(ret);
    return _ret;
}

std::vector< ::java::util::Locale> java::text::DecimalFormatSymbols::getAvailableLocales(){
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAvailableLocales", "()[Ljava/util/Locale;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::util::Locale> _ret(rets, ::java::util::Locale((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::util::Locale retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::Object java::text::DecimalFormatSymbols::clone() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::text::DecimalFormatSymbols::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::text::DecimalFormatSymbols::toString() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Currency java::text::DecimalFormatSymbols::getCurrency() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrency", "()Ljava/util/Currency;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Currency _ret(ret);
    return _ret;
}

::java::lang::String java::text::DecimalFormatSymbols::getInternationalCurrencySymbol() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInternationalCurrencySymbol", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::text::DecimalFormatSymbols::getCurrencySymbol() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrencySymbol", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

uint16_t java::text::DecimalFormatSymbols::getDecimalSeparator() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDecimalSeparator", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::DecimalFormatSymbols::getDigit() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDigit", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::DecimalFormatSymbols::getGroupingSeparator() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupingSeparator", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

::java::lang::String java::text::DecimalFormatSymbols::getInfinity() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInfinity", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

uint16_t java::text::DecimalFormatSymbols::getMinusSign() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinusSign", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::DecimalFormatSymbols::getMonetaryDecimalSeparator() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMonetaryDecimalSeparator", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

::java::lang::String java::text::DecimalFormatSymbols::getNaN() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNaN", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

uint16_t java::text::DecimalFormatSymbols::getPatternSeparator() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPatternSeparator", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::DecimalFormatSymbols::getPercent() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPercent", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::DecimalFormatSymbols::getPerMill() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPerMill", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::DecimalFormatSymbols::getZeroDigit() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getZeroDigit", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

::java::lang::String java::text::DecimalFormatSymbols::getExponentSeparator() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExponentSeparator", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::text::DecimalFormatSymbols::hashCode() const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::text::DecimalFormatSymbols::setCurrency(const ::java::util::Currency& arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrency", "(Ljava/util/Currency;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setInternationalCurrencySymbol(const ::java::lang::String& arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInternationalCurrencySymbol", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setCurrencySymbol(const ::java::lang::String& arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrencySymbol", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setDecimalSeparator(uint16_t arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDecimalSeparator", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setDigit(uint16_t arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDigit", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setGroupingSeparator(uint16_t arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGroupingSeparator", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setInfinity(const ::java::lang::String& arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInfinity", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setMinusSign(uint16_t arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinusSign", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setMonetaryDecimalSeparator(uint16_t arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMonetaryDecimalSeparator", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setNaN(const ::java::lang::String& arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNaN", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setPatternSeparator(uint16_t arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPatternSeparator", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setPercent(uint16_t arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPercent", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setPerMill(uint16_t arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPerMill", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setZeroDigit(uint16_t arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZeroDigit", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormatSymbols::setExponentSeparator(const ::java::lang::String& arg0) const {
    if (!::java::text::DecimalFormatSymbols::_class) ::java::text::DecimalFormatSymbols::_class = java::fetch_class("java/text/DecimalFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExponentSeparator", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::text::DateFormat::clone() const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::text::DateFormat::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::StringBuffer java::text::DateFormat::format(const ::java::lang::Object& arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::String java::text::DateFormat::format(const ::java::util::Date& arg0) const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/util/Date;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::text::DateFormat::format(const ::java::util::Date& arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

std::vector< ::java::util::Locale> java::text::DateFormat::getAvailableLocales(){
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAvailableLocales", "()[Ljava/util/Locale;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::util::Locale> _ret(rets, ::java::util::Locale((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::util::Locale retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::util::Calendar java::text::DateFormat::getCalendar() const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCalendar", "()Ljava/util/Calendar;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Calendar _ret(ret);
    return _ret;
}

::java::text::DateFormat java::text::DateFormat::getDateInstance(){
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDateInstance", "()Ljava/text/DateFormat;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::text::DateFormat java::text::DateFormat::getDateInstance(int32_t arg0){
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDateInstance", "(I)Ljava/text/DateFormat;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::text::DateFormat java::text::DateFormat::getDateInstance(int32_t arg0, const ::java::util::Locale& arg1){
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDateInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::text::DateFormat java::text::DateFormat::getDateTimeInstance(){
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDateTimeInstance", "()Ljava/text/DateFormat;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::text::DateFormat java::text::DateFormat::getDateTimeInstance(int32_t arg0, int32_t arg1){
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDateTimeInstance", "(II)Ljava/text/DateFormat;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::text::DateFormat java::text::DateFormat::getDateTimeInstance(int32_t arg0, int32_t arg1, const ::java::util::Locale& arg2){
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDateTimeInstance", "(IILjava/util/Locale;)Ljava/text/DateFormat;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::text::DateFormat java::text::DateFormat::getInstance(){
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Ljava/text/DateFormat;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::text::NumberFormat java::text::DateFormat::getNumberFormat() const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumberFormat", "()Ljava/text/NumberFormat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::text::NumberFormat _ret(ret);
    return _ret;
}

::java::text::DateFormat java::text::DateFormat::getTimeInstance(){
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTimeInstance", "()Ljava/text/DateFormat;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::text::DateFormat java::text::DateFormat::getTimeInstance(int32_t arg0){
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTimeInstance", "(I)Ljava/text/DateFormat;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::text::DateFormat java::text::DateFormat::getTimeInstance(int32_t arg0, const ::java::util::Locale& arg1){
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTimeInstance", "(ILjava/util/Locale;)Ljava/text/DateFormat;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::text::DateFormat _ret(ret);
    return _ret;
}

::java::util::TimeZone java::text::DateFormat::getTimeZone() const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeZone", "()Ljava/util/TimeZone;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::TimeZone _ret(ret);
    return _ret;
}

int32_t java::text::DateFormat::hashCode() const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::text::DateFormat::isLenient() const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLenient", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Date java::text::DateFormat::parse(const ::java::lang::String& arg0) const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;)Ljava/util/Date;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::util::Date java::text::DateFormat::parse(const ::java::lang::String& arg0, const ::java::text::ParsePosition& arg1) const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::lang::Object java::text::DateFormat::parseObject(const ::java::lang::String& arg0, const ::java::text::ParsePosition& arg1) const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::text::DateFormat::setCalendar(const ::java::util::Calendar& arg0) const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCalendar", "(Ljava/util/Calendar;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DateFormat::setLenient(bool arg0) const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLenient", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DateFormat::setNumberFormat(const ::java::text::NumberFormat& arg0) const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNumberFormat", "(Ljava/text/NumberFormat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DateFormat::setTimeZone(const ::java::util::TimeZone& arg0) const {
    if (!::java::text::DateFormat::_class) ::java::text::DateFormat::_class = java::fetch_class("java/text/DateFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeZone", "(Ljava/util/TimeZone;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::Annotation::Annotation(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::text::Annotation::_class) ::java::text::Annotation::_class = java::fetch_class("java/text/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::text::Annotation::getValue() const {
    if (!::java::text::Annotation::_class) ::java::text::Annotation::_class = java::fetch_class("java/text/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String java::text::Annotation::toString() const {
    if (!::java::text::Annotation::_class) ::java::text::Annotation::_class = java::fetch_class("java/text/Annotation");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::FieldPosition::FieldPosition(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::text::FieldPosition::_class) ::java::text::FieldPosition::_class = java::fetch_class("java/text/FieldPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::FieldPosition::FieldPosition(const ::java::text::Format_Field& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::text::FieldPosition::_class) ::java::text::FieldPosition::_class = java::fetch_class("java/text/FieldPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/text/Format$Field;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::FieldPosition::FieldPosition(const ::java::text::Format_Field& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::text::FieldPosition::_class) ::java::text::FieldPosition::_class = java::fetch_class("java/text/FieldPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/text/Format$Field;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool java::text::FieldPosition::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::FieldPosition::_class) ::java::text::FieldPosition::_class = java::fetch_class("java/text/FieldPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::text::FieldPosition::getBeginIndex() const {
    if (!::java::text::FieldPosition::_class) ::java::text::FieldPosition::_class = java::fetch_class("java/text/FieldPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBeginIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::FieldPosition::getEndIndex() const {
    if (!::java::text::FieldPosition::_class) ::java::text::FieldPosition::_class = java::fetch_class("java/text/FieldPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEndIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::FieldPosition::getField() const {
    if (!::java::text::FieldPosition::_class) ::java::text::FieldPosition::_class = java::fetch_class("java/text/FieldPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "getField", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::text::Format_Field java::text::FieldPosition::getFieldAttribute() const {
    if (!::java::text::FieldPosition::_class) ::java::text::FieldPosition::_class = java::fetch_class("java/text/FieldPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFieldAttribute", "()Ljava/text/Format$Field;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::text::Format_Field _ret(ret);
    return _ret;
}

int32_t java::text::FieldPosition::hashCode() const {
    if (!::java::text::FieldPosition::_class) ::java::text::FieldPosition::_class = java::fetch_class("java/text/FieldPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::text::FieldPosition::setBeginIndex(int32_t arg0) const {
    if (!::java::text::FieldPosition::_class) ::java::text::FieldPosition::_class = java::fetch_class("java/text/FieldPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBeginIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::FieldPosition::setEndIndex(int32_t arg0) const {
    if (!::java::text::FieldPosition::_class) ::java::text::FieldPosition::_class = java::fetch_class("java/text/FieldPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEndIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::text::FieldPosition::toString() const {
    if (!::java::text::FieldPosition::_class) ::java::text::FieldPosition::_class = java::fetch_class("java/text/FieldPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::DateFormatSymbols::DateFormatSymbols() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::DateFormatSymbols::DateFormatSymbols(const ::java::util::Locale& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::text::DateFormatSymbols java::text::DateFormatSymbols::getInstance(){
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Ljava/text/DateFormatSymbols;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::DateFormatSymbols _ret(ret);
    return _ret;
}

::java::text::DateFormatSymbols java::text::DateFormatSymbols::getInstance(const ::java::util::Locale& arg0){
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/util/Locale;)Ljava/text/DateFormatSymbols;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::DateFormatSymbols _ret(ret);
    return _ret;
}

std::vector< ::java::util::Locale> java::text::DateFormatSymbols::getAvailableLocales(){
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAvailableLocales", "()[Ljava/util/Locale;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::util::Locale> _ret(rets, ::java::util::Locale((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::util::Locale retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::Object java::text::DateFormatSymbols::clone() const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::text::DateFormatSymbols::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::text::DateFormatSymbols::toString() const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> java::text::DateFormatSymbols::getAmPmStrings() const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAmPmStrings", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> java::text::DateFormatSymbols::getEras() const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEras", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::text::DateFormatSymbols::getLocalPatternChars() const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPatternChars", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> java::text::DateFormatSymbols::getMonths() const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMonths", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> java::text::DateFormatSymbols::getShortMonths() const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShortMonths", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> java::text::DateFormatSymbols::getShortWeekdays() const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShortWeekdays", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> java::text::DateFormatSymbols::getWeekdays() const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWeekdays", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> java::text::DateFormatSymbols::getZoneStrings() const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "getZoneStrings", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t java::text::DateFormatSymbols::hashCode() const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::text::DateFormatSymbols::setAmPmStrings(const std::vector< ::java::lang::String>& arg0) const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAmPmStrings", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DateFormatSymbols::setEras(const std::vector< ::java::lang::String>& arg0) const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEras", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DateFormatSymbols::setLocalPatternChars(const ::java::lang::String& arg0) const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocalPatternChars", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DateFormatSymbols::setMonths(const std::vector< ::java::lang::String>& arg0) const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMonths", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DateFormatSymbols::setShortMonths(const std::vector< ::java::lang::String>& arg0) const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShortMonths", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DateFormatSymbols::setShortWeekdays(const std::vector< ::java::lang::String>& arg0) const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShortWeekdays", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DateFormatSymbols::setWeekdays(const std::vector< ::java::lang::String>& arg0) const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWeekdays", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DateFormatSymbols::setZoneStrings(const std::vector< ::java::lang::String>& arg0) const {
    if (!::java::text::DateFormatSymbols::_class) ::java::text::DateFormatSymbols::_class = java::fetch_class("java/text/DateFormatSymbols");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZoneStrings", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::text::Format::clone() const {
    if (!::java::text::Format::_class) ::java::text::Format::_class = java::fetch_class("java/text/Format");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String java::text::Format::format(const ::java::lang::Object& arg0) const {
    if (!::java::text::Format::_class) ::java::text::Format::_class = java::fetch_class("java/text/Format");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::text::Format::format(const ::java::lang::Object& arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::Format::_class) ::java::text::Format::_class = java::fetch_class("java/text/Format");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::text::AttributedCharacterIterator java::text::Format::formatToCharacterIterator(const ::java::lang::Object& arg0) const {
    if (!::java::text::Format::_class) ::java::text::Format::_class = java::fetch_class("java/text/Format");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::text::AttributedCharacterIterator _ret(ret);
    return _ret;
}

::java::lang::Object java::text::Format::parseObject(const ::java::lang::String& arg0) const {
    if (!::java::text::Format::_class) ::java::text::Format::_class = java::fetch_class("java/text/Format");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseObject", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::text::Format::parseObject(const ::java::lang::String& arg0, const ::java::text::ParsePosition& arg1) const {
    if (!::java::text::Format::_class) ::java::text::Format::_class = java::fetch_class("java/text/Format");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::text::AttributedCharacterIterator_Attribute::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::AttributedCharacterIterator_Attribute::_class) ::java::text::AttributedCharacterIterator_Attribute::_class = java::fetch_class("java/text/AttributedCharacterIterator$Attribute");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::text::AttributedCharacterIterator_Attribute::hashCode() const {
    if (!::java::text::AttributedCharacterIterator_Attribute::_class) ::java::text::AttributedCharacterIterator_Attribute::_class = java::fetch_class("java/text/AttributedCharacterIterator$Attribute");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::text::AttributedCharacterIterator_Attribute::toString() const {
    if (!::java::text::AttributedCharacterIterator_Attribute::_class) ::java::text::AttributedCharacterIterator_Attribute::_class = java::fetch_class("java/text/AttributedCharacterIterator$Attribute");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::RuleBasedCollator::RuleBasedCollator(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Collator((jobject)0), ::java::util::Comparator((jobject)0) {
    if (!::java::text::RuleBasedCollator::_class) ::java::text::RuleBasedCollator::_class = java::fetch_class("java/text/RuleBasedCollator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::text::CollationElementIterator java::text::RuleBasedCollator::getCollationElementIterator(const ::java::text::CharacterIterator& arg0) const {
    if (!::java::text::RuleBasedCollator::_class) ::java::text::RuleBasedCollator::_class = java::fetch_class("java/text/RuleBasedCollator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollationElementIterator", "(Ljava/text/CharacterIterator;)Ljava/text/CollationElementIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::text::CollationElementIterator _ret(ret);
    return _ret;
}

::java::text::CollationElementIterator java::text::RuleBasedCollator::getCollationElementIterator(const ::java::lang::String& arg0) const {
    if (!::java::text::RuleBasedCollator::_class) ::java::text::RuleBasedCollator::_class = java::fetch_class("java/text/RuleBasedCollator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollationElementIterator", "(Ljava/lang/String;)Ljava/text/CollationElementIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::text::CollationElementIterator _ret(ret);
    return _ret;
}

::java::lang::String java::text::RuleBasedCollator::getRules() const {
    if (!::java::text::RuleBasedCollator::_class) ::java::text::RuleBasedCollator::_class = java::fetch_class("java/text/RuleBasedCollator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRules", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object java::text::RuleBasedCollator::clone() const {
    if (!::java::text::RuleBasedCollator::_class) ::java::text::RuleBasedCollator::_class = java::fetch_class("java/text/RuleBasedCollator");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::text::RuleBasedCollator::compare(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::text::RuleBasedCollator::_class) ::java::text::RuleBasedCollator::_class = java::fetch_class("java/text/RuleBasedCollator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::text::CollationKey java::text::RuleBasedCollator::getCollationKey(const ::java::lang::String& arg0) const {
    if (!::java::text::RuleBasedCollator::_class) ::java::text::RuleBasedCollator::_class = java::fetch_class("java/text/RuleBasedCollator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollationKey", "(Ljava/lang/String;)Ljava/text/CollationKey;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::text::CollationKey _ret(ret);
    return _ret;
}

int32_t java::text::RuleBasedCollator::hashCode() const {
    if (!::java::text::RuleBasedCollator::_class) ::java::text::RuleBasedCollator::_class = java::fetch_class("java/text/RuleBasedCollator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::text::RuleBasedCollator::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::RuleBasedCollator::_class) ::java::text::RuleBasedCollator::_class = java::fetch_class("java/text/RuleBasedCollator");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::text::CollationElementIterator::getMaxExpansion(int32_t arg0) const {
    if (!::java::text::CollationElementIterator::_class) ::java::text::CollationElementIterator::_class = java::fetch_class("java/text/CollationElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxExpansion", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::text::CollationElementIterator::getOffset() const {
    if (!::java::text::CollationElementIterator::_class) ::java::text::CollationElementIterator::_class = java::fetch_class("java/text/CollationElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::CollationElementIterator::next() const {
    if (!::java::text::CollationElementIterator::_class) ::java::text::CollationElementIterator::_class = java::fetch_class("java/text/CollationElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::CollationElementIterator::previous() const {
    if (!::java::text::CollationElementIterator::_class) ::java::text::CollationElementIterator::_class = java::fetch_class("java/text/CollationElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "previous", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::CollationElementIterator::primaryOrder(int32_t arg0){
    if (!::java::text::CollationElementIterator::_class) ::java::text::CollationElementIterator::_class = java::fetch_class("java/text/CollationElementIterator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "primaryOrder", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void java::text::CollationElementIterator::reset() const {
    if (!::java::text::CollationElementIterator::_class) ::java::text::CollationElementIterator::_class = java::fetch_class("java/text/CollationElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int16_t java::text::CollationElementIterator::secondaryOrder(int32_t arg0){
    if (!::java::text::CollationElementIterator::_class) ::java::text::CollationElementIterator::_class = java::fetch_class("java/text/CollationElementIterator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "secondaryOrder", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticShortMethod(_class, mid, _arg0);
}

void java::text::CollationElementIterator::setOffset(int32_t arg0) const {
    if (!::java::text::CollationElementIterator::_class) ::java::text::CollationElementIterator::_class = java::fetch_class("java/text/CollationElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOffset", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::CollationElementIterator::setText(const ::java::text::CharacterIterator& arg0) const {
    if (!::java::text::CollationElementIterator::_class) ::java::text::CollationElementIterator::_class = java::fetch_class("java/text/CollationElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/text/CharacterIterator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::CollationElementIterator::setText(const ::java::lang::String& arg0) const {
    if (!::java::text::CollationElementIterator::_class) ::java::text::CollationElementIterator::_class = java::fetch_class("java/text/CollationElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t java::text::CollationElementIterator::tertiaryOrder(int32_t arg0){
    if (!::java::text::CollationElementIterator::_class) ::java::text::CollationElementIterator::_class = java::fetch_class("java/text/CollationElementIterator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "tertiaryOrder", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticShortMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::DecimalFormat::DecimalFormat() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0), ::java::text::NumberFormat((jobject)0) {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::DecimalFormat::DecimalFormat(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0), ::java::text::NumberFormat((jobject)0) {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::DecimalFormat::DecimalFormat(const ::java::lang::String& arg0, const ::java::text::DecimalFormatSymbols& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0), ::java::text::NumberFormat((jobject)0) {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::text::DecimalFormat::applyLocalizedPattern(const ::java::lang::String& arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyLocalizedPattern", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::applyPattern(const ::java::lang::String& arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyPattern", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::text::DecimalFormat::clone() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::text::DecimalFormat::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::text::AttributedCharacterIterator java::text::DecimalFormat::formatToCharacterIterator(const ::java::lang::Object& arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::text::AttributedCharacterIterator _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::text::DecimalFormat::format(double arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    double _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::text::DecimalFormat::format(int64_t arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::text::DecimalFormat::format(const ::java::lang::Object& arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::text::DecimalFormatSymbols java::text::DecimalFormat::getDecimalFormatSymbols() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDecimalFormatSymbols", "()Ljava/text/DecimalFormatSymbols;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::text::DecimalFormatSymbols _ret(ret);
    return _ret;
}

::java::util::Currency java::text::DecimalFormat::getCurrency() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrency", "()Ljava/util/Currency;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Currency _ret(ret);
    return _ret;
}

int32_t java::text::DecimalFormat::getGroupingSize() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupingSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::DecimalFormat::getMultiplier() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMultiplier", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::text::DecimalFormat::getNegativePrefix() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNegativePrefix", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::text::DecimalFormat::getNegativeSuffix() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNegativeSuffix", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::text::DecimalFormat::getPositivePrefix() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPositivePrefix", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::text::DecimalFormat::getPositiveSuffix() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPositiveSuffix", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::text::DecimalFormat::hashCode() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::text::DecimalFormat::isDecimalSeparatorAlwaysShown() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDecimalSeparatorAlwaysShown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::text::DecimalFormat::isParseBigDecimal() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isParseBigDecimal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::text::DecimalFormat::setParseIntegerOnly(bool arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParseIntegerOnly", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::text::DecimalFormat::isParseIntegerOnly() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isParseIntegerOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Number java::text::DecimalFormat::parse(const ::java::lang::String& arg0, const ::java::text::ParsePosition& arg1) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Number _ret(ret);
    return _ret;
}

void java::text::DecimalFormat::setDecimalFormatSymbols(const ::java::text::DecimalFormatSymbols& arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDecimalFormatSymbols", "(Ljava/text/DecimalFormatSymbols;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setCurrency(const ::java::util::Currency& arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrency", "(Ljava/util/Currency;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setDecimalSeparatorAlwaysShown(bool arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDecimalSeparatorAlwaysShown", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setGroupingSize(int32_t arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGroupingSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setGroupingUsed(bool arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGroupingUsed", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::text::DecimalFormat::isGroupingUsed() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGroupingUsed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::text::DecimalFormat::setMaximumFractionDigits(int32_t arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaximumFractionDigits", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setMaximumIntegerDigits(int32_t arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaximumIntegerDigits", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setMinimumFractionDigits(int32_t arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinimumFractionDigits", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setMinimumIntegerDigits(int32_t arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinimumIntegerDigits", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setMultiplier(int32_t arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMultiplier", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setNegativePrefix(const ::java::lang::String& arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNegativePrefix", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setNegativeSuffix(const ::java::lang::String& arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNegativeSuffix", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setPositivePrefix(const ::java::lang::String& arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPositivePrefix", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setPositiveSuffix(const ::java::lang::String& arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPositiveSuffix", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::DecimalFormat::setParseBigDecimal(bool arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParseBigDecimal", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::text::DecimalFormat::toLocalizedPattern() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "toLocalizedPattern", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::text::DecimalFormat::toPattern() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "toPattern", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::math::RoundingMode java::text::DecimalFormat::getRoundingMode() const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoundingMode", "()Ljava/math/RoundingMode;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::RoundingMode _ret(ret);
    return _ret;
}

void java::text::DecimalFormat::setRoundingMode(const ::java::math::RoundingMode& arg0) const {
    if (!::java::text::DecimalFormat::_class) ::java::text::DecimalFormat::_class = java::fetch_class("java/text/DecimalFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRoundingMode", "(Ljava/math/RoundingMode;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::StringCharacterIterator::StringCharacterIterator(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::CharacterIterator((jobject)0) {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::StringCharacterIterator::StringCharacterIterator(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::CharacterIterator((jobject)0) {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::StringCharacterIterator::StringCharacterIterator(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::CharacterIterator((jobject)0) {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::Object java::text::StringCharacterIterator::clone() const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

uint16_t java::text::StringCharacterIterator::current() const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "current", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

bool java::text::StringCharacterIterator::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

uint16_t java::text::StringCharacterIterator::first() const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "first", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

int32_t java::text::StringCharacterIterator::getBeginIndex() const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBeginIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::StringCharacterIterator::getEndIndex() const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEndIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::StringCharacterIterator::getIndex() const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::StringCharacterIterator::hashCode() const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

uint16_t java::text::StringCharacterIterator::last() const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "last", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::StringCharacterIterator::next() const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::StringCharacterIterator::previous() const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "previous", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::text::StringCharacterIterator::setIndex(int32_t arg0) const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIndex", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

void java::text::StringCharacterIterator::setText(const ::java::lang::String& arg0) const {
    if (!::java::text::StringCharacterIterator::_class) ::java::text::StringCharacterIterator::_class = java::fetch_class("java/text/StringCharacterIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::text::ParseException::ParseException(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::text::ParseException::_class) ::java::text::ParseException::_class = java::fetch_class("java/text/ParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t java::text::ParseException::getErrorOffset() const {
    if (!::java::text::ParseException::_class) ::java::text::ParseException::_class = java::fetch_class("java/text/ParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::text::NumberFormat::clone() const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::text::NumberFormat::equals(const ::java::lang::Object& arg0) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::text::NumberFormat::format(double arg0) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(D)Ljava/lang/String;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::text::NumberFormat::format(double arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    double _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::String java::text::NumberFormat::format(int64_t arg0) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(J)Ljava/lang/String;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::text::NumberFormat::format(int64_t arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::text::NumberFormat::format(const ::java::lang::Object& arg0, const ::java::lang::StringBuffer& arg1, const ::java::text::FieldPosition& arg2) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

std::vector< ::java::util::Locale> java::text::NumberFormat::getAvailableLocales(){
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAvailableLocales", "()[Ljava/util/Locale;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::util::Locale> _ret(rets, ::java::util::Locale((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::util::Locale retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::util::Currency java::text::NumberFormat::getCurrency() const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrency", "()Ljava/util/Currency;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Currency _ret(ret);
    return _ret;
}

::java::text::NumberFormat java::text::NumberFormat::getCurrencyInstance(){
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCurrencyInstance", "()Ljava/text/NumberFormat;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::NumberFormat _ret(ret);
    return _ret;
}

::java::text::NumberFormat java::text::NumberFormat::getCurrencyInstance(const ::java::util::Locale& arg0){
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::NumberFormat _ret(ret);
    return _ret;
}

::java::text::NumberFormat java::text::NumberFormat::getIntegerInstance(){
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getIntegerInstance", "()Ljava/text/NumberFormat;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::NumberFormat _ret(ret);
    return _ret;
}

::java::text::NumberFormat java::text::NumberFormat::getIntegerInstance(const ::java::util::Locale& arg0){
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::NumberFormat _ret(ret);
    return _ret;
}

::java::text::NumberFormat java::text::NumberFormat::getInstance(){
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Ljava/text/NumberFormat;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::NumberFormat _ret(ret);
    return _ret;
}

::java::text::NumberFormat java::text::NumberFormat::getInstance(const ::java::util::Locale& arg0){
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::NumberFormat _ret(ret);
    return _ret;
}

int32_t java::text::NumberFormat::getMaximumFractionDigits() const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaximumFractionDigits", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::NumberFormat::getMaximumIntegerDigits() const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaximumIntegerDigits", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::NumberFormat::getMinimumFractionDigits() const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumFractionDigits", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::NumberFormat::getMinimumIntegerDigits() const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumIntegerDigits", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::text::NumberFormat java::text::NumberFormat::getNumberInstance(){
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNumberInstance", "()Ljava/text/NumberFormat;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::NumberFormat _ret(ret);
    return _ret;
}

::java::text::NumberFormat java::text::NumberFormat::getNumberInstance(const ::java::util::Locale& arg0){
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::NumberFormat _ret(ret);
    return _ret;
}

::java::text::NumberFormat java::text::NumberFormat::getPercentInstance(){
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPercentInstance", "()Ljava/text/NumberFormat;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::NumberFormat _ret(ret);
    return _ret;
}

::java::text::NumberFormat java::text::NumberFormat::getPercentInstance(const ::java::util::Locale& arg0){
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::NumberFormat _ret(ret);
    return _ret;
}

int32_t java::text::NumberFormat::hashCode() const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::text::NumberFormat::isGroupingUsed() const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGroupingUsed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::text::NumberFormat::isParseIntegerOnly() const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isParseIntegerOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Number java::text::NumberFormat::parse(const ::java::lang::String& arg0) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;)Ljava/lang/Number;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Number _ret(ret);
    return _ret;
}

::java::lang::Number java::text::NumberFormat::parse(const ::java::lang::String& arg0, const ::java::text::ParsePosition& arg1) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Number _ret(ret);
    return _ret;
}

::java::lang::Object java::text::NumberFormat::parseObject(const ::java::lang::String& arg0, const ::java::text::ParsePosition& arg1) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::text::NumberFormat::setCurrency(const ::java::util::Currency& arg0) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrency", "(Ljava/util/Currency;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::NumberFormat::setGroupingUsed(bool arg0) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGroupingUsed", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::NumberFormat::setMaximumFractionDigits(int32_t arg0) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaximumFractionDigits", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::NumberFormat::setMaximumIntegerDigits(int32_t arg0) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaximumIntegerDigits", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::NumberFormat::setMinimumFractionDigits(int32_t arg0) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinimumFractionDigits", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::NumberFormat::setMinimumIntegerDigits(int32_t arg0) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinimumIntegerDigits", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::text::NumberFormat::setParseIntegerOnly(bool arg0) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParseIntegerOnly", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::math::RoundingMode java::text::NumberFormat::getRoundingMode() const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoundingMode", "()Ljava/math/RoundingMode;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::RoundingMode _ret(ret);
    return _ret;
}

void java::text::NumberFormat::setRoundingMode(const ::java::math::RoundingMode& arg0) const {
    if (!::java::text::NumberFormat::_class) ::java::text::NumberFormat::_class = java::fetch_class("java/text/NumberFormat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRoundingMode", "(Ljava/math/RoundingMode;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::util::Locale> java::text::BreakIterator::getAvailableLocales(){
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAvailableLocales", "()[Ljava/util/Locale;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::util::Locale> _ret(rets, ::java::util::Locale((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::util::Locale retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::text::BreakIterator java::text::BreakIterator::getCharacterInstance(){
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCharacterInstance", "()Ljava/text/BreakIterator;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::BreakIterator _ret(ret);
    return _ret;
}

::java::text::BreakIterator java::text::BreakIterator::getCharacterInstance(const ::java::util::Locale& arg0){
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCharacterInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::BreakIterator _ret(ret);
    return _ret;
}

::java::text::BreakIterator java::text::BreakIterator::getLineInstance(){
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLineInstance", "()Ljava/text/BreakIterator;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::BreakIterator _ret(ret);
    return _ret;
}

::java::text::BreakIterator java::text::BreakIterator::getLineInstance(const ::java::util::Locale& arg0){
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLineInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::BreakIterator _ret(ret);
    return _ret;
}

::java::text::BreakIterator java::text::BreakIterator::getSentenceInstance(){
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSentenceInstance", "()Ljava/text/BreakIterator;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::BreakIterator _ret(ret);
    return _ret;
}

::java::text::BreakIterator java::text::BreakIterator::getSentenceInstance(const ::java::util::Locale& arg0){
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSentenceInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::BreakIterator _ret(ret);
    return _ret;
}

::java::text::BreakIterator java::text::BreakIterator::getWordInstance(){
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getWordInstance", "()Ljava/text/BreakIterator;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::text::BreakIterator _ret(ret);
    return _ret;
}

::java::text::BreakIterator java::text::BreakIterator::getWordInstance(const ::java::util::Locale& arg0){
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getWordInstance", "(Ljava/util/Locale;)Ljava/text/BreakIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::text::BreakIterator _ret(ret);
    return _ret;
}

bool java::text::BreakIterator::isBoundary(int32_t arg0) const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBoundary", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::text::BreakIterator::preceding(int32_t arg0) const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "preceding", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void java::text::BreakIterator::setText(const ::java::lang::String& arg0) const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::text::BreakIterator::current() const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "current", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::BreakIterator::first() const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "first", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::BreakIterator::following(int32_t arg0) const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "following", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::text::CharacterIterator java::text::BreakIterator::getText() const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/text/CharacterIterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::text::CharacterIterator _ret(ret);
    return _ret;
}

int32_t java::text::BreakIterator::last() const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "last", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::BreakIterator::next() const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::text::BreakIterator::next(int32_t arg0) const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::text::BreakIterator::previous() const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "previous", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::text::BreakIterator::setText(const ::java::text::CharacterIterator& arg0) const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/text/CharacterIterator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::text::BreakIterator::clone() const {
    if (!::java::text::BreakIterator::_class) ::java::text::BreakIterator::_class = java::fetch_class("java/text/BreakIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::text::Normalizer::isNormalized(const ::java::lang::CharSequence& arg0, const ::java::text::Normalizer_Form& arg1){
    if (!::java::text::Normalizer::_class) ::java::text::Normalizer::_class = java::fetch_class("java/text/Normalizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isNormalized", "(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String java::text::Normalizer::normalize(const ::java::lang::CharSequence& arg0, const ::java::text::Normalizer_Form& arg1){
    if (!::java::text::Normalizer::_class) ::java::text::Normalizer::_class = java::fetch_class("java/text/Normalizer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "normalize", "(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

