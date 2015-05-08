#include "java-core.hpp"
#include <memory>
#include "java.lang.Number.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Collection.hpp"
#include "java.util.Iterator.hpp"
#include "java.util.Map.hpp"
#include "org.json.JSONArray.hpp"
#include "org.json.JSONException.hpp"
#include "org.json.JSONObject.hpp"
#include "org.json.JSONStringer.hpp"
#include "org.json.JSONTokener.hpp"

jclass org::json::JSONTokener::_class = nullptr;
jclass org::json::JSONStringer::_class = nullptr;
jclass org::json::JSONArray::_class = nullptr;
jclass org::json::JSONObject::_class = nullptr;
jclass org::json::JSONException::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::json::JSONTokener::JSONTokener(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object org::json::JSONTokener::nextValue() const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextValue", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONTokener::nextString(uint16_t arg0) const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextString", "(C)Ljava/lang/String;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::json::JSONException org::json::JSONTokener::syntaxError(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "syntaxError", "(Ljava/lang/String;)Lorg/json/JSONException;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONException _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONTokener::toString() const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::json::JSONTokener::more() const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "more", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

uint16_t org::json::JSONTokener::next() const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t org::json::JSONTokener::next(uint16_t arg0) const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "(C)C");
    uint16_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

uint16_t org::json::JSONTokener::nextClean() const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextClean", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

::java::lang::String org::json::JSONTokener::next(int32_t arg0) const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONTokener::nextTo(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextTo", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONTokener::nextTo(uint16_t arg0) const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextTo", "(C)Ljava/lang/String;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::json::JSONTokener::skipPast(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipPast", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

uint16_t org::json::JSONTokener::skipTo(uint16_t arg0) const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipTo", "(C)C");
    uint16_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

void org::json::JSONTokener::back() const {
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetMethodID(_class, "back", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t org::json::JSONTokener::dehexchar(uint16_t arg0){
    if (!::org::json::JSONTokener::_class) ::org::json::JSONTokener::_class = java::fetch_class("org/json/JSONTokener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dehexchar", "(C)I");
    uint16_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::json::JSONStringer::JSONStringer() : ::java::lang::Object((jobject)0) {
    if (!::org::json::JSONStringer::_class) ::org::json::JSONStringer::_class = java::fetch_class("org/json/JSONStringer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::json::JSONStringer org::json::JSONStringer::array() const {
    if (!::org::json::JSONStringer::_class) ::org::json::JSONStringer::_class = java::fetch_class("org/json/JSONStringer");
    static jmethodID mid = java::jni->GetMethodID(_class, "array", "()Lorg/json/JSONStringer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::json::JSONStringer _ret(ret);
    return _ret;
}

::org::json::JSONStringer org::json::JSONStringer::endArray() const {
    if (!::org::json::JSONStringer::_class) ::org::json::JSONStringer::_class = java::fetch_class("org/json/JSONStringer");
    static jmethodID mid = java::jni->GetMethodID(_class, "endArray", "()Lorg/json/JSONStringer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::json::JSONStringer _ret(ret);
    return _ret;
}

::org::json::JSONStringer org::json::JSONStringer::object() const {
    if (!::org::json::JSONStringer::_class) ::org::json::JSONStringer::_class = java::fetch_class("org/json/JSONStringer");
    static jmethodID mid = java::jni->GetMethodID(_class, "object", "()Lorg/json/JSONStringer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::json::JSONStringer _ret(ret);
    return _ret;
}

::org::json::JSONStringer org::json::JSONStringer::endObject() const {
    if (!::org::json::JSONStringer::_class) ::org::json::JSONStringer::_class = java::fetch_class("org/json/JSONStringer");
    static jmethodID mid = java::jni->GetMethodID(_class, "endObject", "()Lorg/json/JSONStringer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::json::JSONStringer _ret(ret);
    return _ret;
}

::org::json::JSONStringer org::json::JSONStringer::value(const ::java::lang::Object& arg0) const {
    if (!::org::json::JSONStringer::_class) ::org::json::JSONStringer::_class = java::fetch_class("org/json/JSONStringer");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "(Ljava/lang/Object;)Lorg/json/JSONStringer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONStringer _ret(ret);
    return _ret;
}

::org::json::JSONStringer org::json::JSONStringer::value(bool arg0) const {
    if (!::org::json::JSONStringer::_class) ::org::json::JSONStringer::_class = java::fetch_class("org/json/JSONStringer");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "(Z)Lorg/json/JSONStringer;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONStringer _ret(ret);
    return _ret;
}

::org::json::JSONStringer org::json::JSONStringer::value(double arg0) const {
    if (!::org::json::JSONStringer::_class) ::org::json::JSONStringer::_class = java::fetch_class("org/json/JSONStringer");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "(D)Lorg/json/JSONStringer;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONStringer _ret(ret);
    return _ret;
}

::org::json::JSONStringer org::json::JSONStringer::value(int64_t arg0) const {
    if (!::org::json::JSONStringer::_class) ::org::json::JSONStringer::_class = java::fetch_class("org/json/JSONStringer");
    static jmethodID mid = java::jni->GetMethodID(_class, "value", "(J)Lorg/json/JSONStringer;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONStringer _ret(ret);
    return _ret;
}

::org::json::JSONStringer org::json::JSONStringer::key(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONStringer::_class) ::org::json::JSONStringer::_class = java::fetch_class("org/json/JSONStringer");
    static jmethodID mid = java::jni->GetMethodID(_class, "key", "(Ljava/lang/String;)Lorg/json/JSONStringer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONStringer _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONStringer::toString() const {
    if (!::org::json::JSONStringer::_class) ::org::json::JSONStringer::_class = java::fetch_class("org/json/JSONStringer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::json::JSONArray::JSONArray() : ::java::lang::Object((jobject)0) {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::json::JSONArray::JSONArray(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::json::JSONArray::JSONArray(const ::org::json::JSONTokener& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/json/JSONTokener;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::json::JSONArray::JSONArray(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t org::json::JSONArray::length() const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::json::JSONArray org::json::JSONArray::put(bool arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Z)Lorg/json/JSONArray;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONArray::put(double arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(D)Lorg/json/JSONArray;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONArray::put(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(I)Lorg/json/JSONArray;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONArray::put(int64_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(J)Lorg/json/JSONArray;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONArray::put(const ::java::lang::Object& arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;)Lorg/json/JSONArray;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONArray::put(int32_t arg0, bool arg1) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(IZ)Lorg/json/JSONArray;");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONArray::put(int32_t arg0, double arg1) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(ID)Lorg/json/JSONArray;");
    int32_t _arg0 = arg0;
    double _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONArray::put(int32_t arg0, int32_t arg1) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(II)Lorg/json/JSONArray;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONArray::put(int32_t arg0, int64_t arg1) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(IJ)Lorg/json/JSONArray;");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONArray::put(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(ILjava/lang/Object;)Lorg/json/JSONArray;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

bool org::json::JSONArray::isNull(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNull", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object org::json::JSONArray::get(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::json::JSONArray::opt(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "opt", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool org::json::JSONArray::getBoolean(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::json::JSONArray::optBoolean(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "optBoolean", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::json::JSONArray::optBoolean(int32_t arg0, bool arg1) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "optBoolean", "(IZ)Z");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

double org::json::JSONArray::getDouble(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

double org::json::JSONArray::optDouble(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "optDouble", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

double org::json::JSONArray::optDouble(int32_t arg0, double arg1) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "optDouble", "(ID)D");
    int32_t _arg0 = arg0;
    double _arg1 = arg1;
    return java::jni->CallDoubleMethod(obj, mid, _arg0, _arg1);
}

int32_t org::json::JSONArray::getInt(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t org::json::JSONArray::optInt(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "optInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t org::json::JSONArray::optInt(int32_t arg0, int32_t arg1) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "optInt", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int64_t org::json::JSONArray::getLong(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t org::json::JSONArray::optLong(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "optLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t org::json::JSONArray::optLong(int32_t arg0, int64_t arg1) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "optLong", "(IJ)J");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String org::json::JSONArray::getString(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONArray::optString(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "optString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONArray::optString(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "optString", "(ILjava/lang/String;)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONArray::getJSONArray(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJSONArray", "(I)Lorg/json/JSONArray;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONArray::optJSONArray(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "optJSONArray", "(I)Lorg/json/JSONArray;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONObject org::json::JSONArray::getJSONObject(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJSONObject", "(I)Lorg/json/JSONObject;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject org::json::JSONArray::optJSONObject(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "optJSONObject", "(I)Lorg/json/JSONObject;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject org::json::JSONArray::toJSONObject(const ::org::json::JSONArray& arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "toJSONObject", "(Lorg/json/JSONArray;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONArray::join(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "join", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONArray::toString() const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONArray::toString(int32_t arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::json::JSONArray::equals(const ::java::lang::Object& arg0) const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t org::json::JSONArray::hashCode() const {
    if (!::org::json::JSONArray::_class) ::org::json::JSONArray::_class = java::fetch_class("org/json/JSONArray");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::json::JSONObject::JSONObject() : ::java::lang::Object((jobject)0) {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::json::JSONObject::JSONObject(const ::java::util::Map& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::json::JSONObject::JSONObject(const ::org::json::JSONTokener& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/json/JSONTokener;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::json::JSONObject::JSONObject(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::json::JSONObject::JSONObject(const ::org::json::JSONObject& arg0, const std::vector< ::java::lang::String>& arg1) : ::java::lang::Object((jobject)0) {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/json/JSONObject;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
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

int32_t org::json::JSONObject::length() const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::json::JSONObject org::json::JSONObject::put(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Z)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject org::json::JSONObject::put(const ::java::lang::String& arg0, double arg1) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;D)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject org::json::JSONObject::put(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;I)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject org::json::JSONObject::put(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;J)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject org::json::JSONObject::put(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject org::json::JSONObject::putOpt(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "putOpt", "(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject org::json::JSONObject::accumulate(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "accumulate", "(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::java::lang::Object org::json::JSONObject::remove(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool org::json::JSONObject::isNull(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNull", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::json::JSONObject::has(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "has", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object org::json::JSONObject::get(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::json::JSONObject::opt(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "opt", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool org::json::JSONObject::getBoolean(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::json::JSONObject::optBoolean(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "optBoolean", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::json::JSONObject::optBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "optBoolean", "(Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

double org::json::JSONObject::getDouble(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(Ljava/lang/String;)D");
    jobject _arg0 = arg0.obj;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

double org::json::JSONObject::optDouble(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "optDouble", "(Ljava/lang/String;)D");
    jobject _arg0 = arg0.obj;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

double org::json::JSONObject::optDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "optDouble", "(Ljava/lang/String;D)D");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    return java::jni->CallDoubleMethod(obj, mid, _arg0, _arg1);
}

int32_t org::json::JSONObject::getInt(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t org::json::JSONObject::optInt(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "optInt", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t org::json::JSONObject::optInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "optInt", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int64_t org::json::JSONObject::getLong(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t org::json::JSONObject::optLong(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "optLong", "(Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t org::json::JSONObject::optLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "optLong", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String org::json::JSONObject::getString(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONObject::optString(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "optString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONObject::optString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "optString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONObject::getJSONArray(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJSONArray", "(Ljava/lang/String;)Lorg/json/JSONArray;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONObject::optJSONArray(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "optJSONArray", "(Ljava/lang/String;)Lorg/json/JSONArray;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONObject org::json::JSONObject::getJSONObject(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJSONObject", "(Ljava/lang/String;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject org::json::JSONObject::optJSONObject(const ::java::lang::String& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "optJSONObject", "(Ljava/lang/String;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONObject::toJSONArray(const ::org::json::JSONArray& arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "toJSONArray", "(Lorg/json/JSONArray;)Lorg/json/JSONArray;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::java::util::Iterator org::json::JSONObject::keys() const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "keys", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::org::json::JSONArray org::json::JSONObject::names() const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "names", "()Lorg/json/JSONArray;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONObject::toString() const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONObject::toString(int32_t arg0) const {
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONObject::numberToString(const ::java::lang::Number& arg0){
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "numberToString", "(Ljava/lang/Number;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::json::JSONObject::quote(const ::java::lang::String& arg0){
    if (!::org::json::JSONObject::_class) ::org::json::JSONObject::_class = java::fetch_class("org/json/JSONObject");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "quote", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::json::JSONException::JSONException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::json::JSONException::_class) ::org::json::JSONException::_class = java::fetch_class("org/json/JSONException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

