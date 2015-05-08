#include "java-core.hpp"
#include <memory>
#include "java.lang.CharSequence.hpp"
#include "java.lang.String.hpp"
#include "java.lang.StringBuffer.hpp"
#include "java.util.regex.MatchResult.hpp"
#include "java.util.regex.Matcher.hpp"
#include "java.util.regex.Pattern.hpp"
#include "java.util.regex.PatternSyntaxException.hpp"

jclass java::util::regex::Matcher::_class = nullptr;
jclass java::util::regex::Pattern::_class = nullptr;
jclass java::util::regex::PatternSyntaxException::_class = nullptr;
jclass java::util::regex::MatchResult::_class = nullptr;

::java::util::regex::Matcher java::util::regex::Matcher::appendReplacement(const ::java::lang::StringBuffer& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendReplacement", "(Ljava/lang/StringBuffer;Ljava/lang/String;)Ljava/util/regex/Matcher;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::regex::Matcher _ret(ret);
    return _ret;
}

::java::util::regex::Matcher java::util::regex::Matcher::reset() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()Ljava/util/regex/Matcher;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::regex::Matcher _ret(ret);
    return _ret;
}

::java::util::regex::Matcher java::util::regex::Matcher::reset(const ::java::lang::CharSequence& arg0) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::regex::Matcher _ret(ret);
    return _ret;
}

::java::util::regex::Matcher java::util::regex::Matcher::usePattern(const ::java::util::regex::Pattern& arg0) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "usePattern", "(Ljava/util/regex/Pattern;)Ljava/util/regex/Matcher;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::regex::Matcher _ret(ret);
    return _ret;
}

::java::util::regex::Matcher java::util::regex::Matcher::region(int32_t arg0, int32_t arg1) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "region", "(II)Ljava/util/regex/Matcher;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::regex::Matcher _ret(ret);
    return _ret;
}

::java::lang::StringBuffer java::util::regex::Matcher::appendTail(const ::java::lang::StringBuffer& arg0) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendTail", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::StringBuffer _ret(ret);
    return _ret;
}

::java::lang::String java::util::regex::Matcher::replaceFirst(const ::java::lang::String& arg0) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceFirst", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::regex::Matcher::replaceAll(const ::java::lang::String& arg0) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceAll", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::regex::Pattern java::util::regex::Matcher::pattern() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "pattern", "()Ljava/util/regex/Pattern;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::regex::Pattern _ret(ret);
    return _ret;
}

::java::lang::String java::util::regex::Matcher::group(int32_t arg0) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "group", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::regex::Matcher::group() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "group", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::regex::Matcher::find(int32_t arg0) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "find", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::regex::Matcher::find() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "find", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::regex::Matcher::lookingAt() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "lookingAt", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::regex::Matcher::matches() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "matches", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::regex::Matcher::start(int32_t arg0) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::regex::Matcher::end(int32_t arg0) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "end", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::util::regex::Matcher::quoteReplacement(const ::java::lang::String& arg0){
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "quoteReplacement", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::regex::Matcher::start() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::regex::Matcher::groupCount() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "groupCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::regex::Matcher::end() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "end", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::regex::MatchResult java::util::regex::Matcher::toMatchResult() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "toMatchResult", "()Ljava/util/regex/MatchResult;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::regex::MatchResult _ret(ret);
    return _ret;
}

::java::util::regex::Matcher java::util::regex::Matcher::useAnchoringBounds(bool arg0) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "useAnchoringBounds", "(Z)Ljava/util/regex/Matcher;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::regex::Matcher _ret(ret);
    return _ret;
}

bool java::util::regex::Matcher::hasAnchoringBounds() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAnchoringBounds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::regex::Matcher java::util::regex::Matcher::useTransparentBounds(bool arg0) const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "useTransparentBounds", "(Z)Ljava/util/regex/Matcher;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::regex::Matcher _ret(ret);
    return _ret;
}

bool java::util::regex::Matcher::hasTransparentBounds() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasTransparentBounds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::regex::Matcher::regionStart() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "regionStart", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::regex::Matcher::regionEnd() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "regionEnd", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::regex::Matcher::requireEnd() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "requireEnd", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::regex::Matcher::hitEnd() const {
    if (!::java::util::regex::Matcher::_class) ::java::util::regex::Matcher::_class = java::fetch_class("java/util/regex/Matcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "hitEnd", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::regex::Matcher java::util::regex::Pattern::matcher(const ::java::lang::CharSequence& arg0) const {
    if (!::java::util::regex::Pattern::_class) ::java::util::regex::Pattern::_class = java::fetch_class("java/util/regex/Pattern");
    static jmethodID mid = java::jni->GetMethodID(_class, "matcher", "(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::regex::Matcher _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> java::util::regex::Pattern::split(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::java::util::regex::Pattern::_class) ::java::util::regex::Pattern::_class = java::fetch_class("java/util/regex/Pattern");
    static jmethodID mid = java::jni->GetMethodID(_class, "split", "(Ljava/lang/CharSequence;I)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> java::util::regex::Pattern::split(const ::java::lang::CharSequence& arg0) const {
    if (!::java::util::regex::Pattern::_class) ::java::util::regex::Pattern::_class = java::fetch_class("java/util/regex/Pattern");
    static jmethodID mid = java::jni->GetMethodID(_class, "split", "(Ljava/lang/CharSequence;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::util::regex::Pattern::pattern() const {
    if (!::java::util::regex::Pattern::_class) ::java::util::regex::Pattern::_class = java::fetch_class("java/util/regex/Pattern");
    static jmethodID mid = java::jni->GetMethodID(_class, "pattern", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::regex::Pattern::toString() const {
    if (!::java::util::regex::Pattern::_class) ::java::util::regex::Pattern::_class = java::fetch_class("java/util/regex/Pattern");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::regex::Pattern::flags() const {
    if (!::java::util::regex::Pattern::_class) ::java::util::regex::Pattern::_class = java::fetch_class("java/util/regex/Pattern");
    static jmethodID mid = java::jni->GetMethodID(_class, "flags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::regex::Pattern java::util::regex::Pattern::compile(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::util::regex::Pattern::_class) ::java::util::regex::Pattern::_class = java::fetch_class("java/util/regex/Pattern");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compile", "(Ljava/lang/String;I)Ljava/util/regex/Pattern;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::regex::Pattern _ret(ret);
    return _ret;
}

::java::util::regex::Pattern java::util::regex::Pattern::compile(const ::java::lang::String& arg0){
    if (!::java::util::regex::Pattern::_class) ::java::util::regex::Pattern::_class = java::fetch_class("java/util/regex/Pattern");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "compile", "(Ljava/lang/String;)Ljava/util/regex/Pattern;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::regex::Pattern _ret(ret);
    return _ret;
}

bool java::util::regex::Pattern::matches(const ::java::lang::String& arg0, const ::java::lang::CharSequence& arg1){
    if (!::java::util::regex::Pattern::_class) ::java::util::regex::Pattern::_class = java::fetch_class("java/util/regex/Pattern");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "matches", "(Ljava/lang/String;Ljava/lang/CharSequence;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String java::util::regex::Pattern::quote(const ::java::lang::String& arg0){
    if (!::java::util::regex::Pattern::_class) ::java::util::regex::Pattern::_class = java::fetch_class("java/util/regex/Pattern");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "quote", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::regex::PatternSyntaxException::PatternSyntaxException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::regex::PatternSyntaxException::_class) ::java::util::regex::PatternSyntaxException::_class = java::fetch_class("java/util/regex/PatternSyntaxException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::regex::PatternSyntaxException::getPattern() const {
    if (!::java::util::regex::PatternSyntaxException::_class) ::java::util::regex::PatternSyntaxException::_class = java::fetch_class("java/util/regex/PatternSyntaxException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPattern", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::regex::PatternSyntaxException::getMessage() const {
    if (!::java::util::regex::PatternSyntaxException::_class) ::java::util::regex::PatternSyntaxException::_class = java::fetch_class("java/util/regex/PatternSyntaxException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::regex::PatternSyntaxException::getDescription() const {
    if (!::java::util::regex::PatternSyntaxException::_class) ::java::util::regex::PatternSyntaxException::_class = java::fetch_class("java/util/regex/PatternSyntaxException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescription", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::regex::PatternSyntaxException::getIndex() const {
    if (!::java::util::regex::PatternSyntaxException::_class) ::java::util::regex::PatternSyntaxException::_class = java::fetch_class("java/util/regex/PatternSyntaxException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::regex::MatchResult::end() const {
    if (!::java::util::regex::MatchResult::_class) ::java::util::regex::MatchResult::_class = java::fetch_class("java/util/regex/MatchResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "end", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::regex::MatchResult::end(int32_t arg0) const {
    if (!::java::util::regex::MatchResult::_class) ::java::util::regex::MatchResult::_class = java::fetch_class("java/util/regex/MatchResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "end", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::util::regex::MatchResult::group() const {
    if (!::java::util::regex::MatchResult::_class) ::java::util::regex::MatchResult::_class = java::fetch_class("java/util/regex/MatchResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "group", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::regex::MatchResult::group(int32_t arg0) const {
    if (!::java::util::regex::MatchResult::_class) ::java::util::regex::MatchResult::_class = java::fetch_class("java/util/regex/MatchResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "group", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::regex::MatchResult::groupCount() const {
    if (!::java::util::regex::MatchResult::_class) ::java::util::regex::MatchResult::_class = java::fetch_class("java/util/regex/MatchResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "groupCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::regex::MatchResult::start() const {
    if (!::java::util::regex::MatchResult::_class) ::java::util::regex::MatchResult::_class = java::fetch_class("java/util/regex/MatchResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::regex::MatchResult::start(int32_t arg0) const {
    if (!::java::util::regex::MatchResult::_class) ::java::util::regex::MatchResult::_class = java::fetch_class("java/util/regex/MatchResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

