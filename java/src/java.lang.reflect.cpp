#include "java-core.hpp"
#include <memory>
#include "java.lang.Class.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.lang.annotation.Annotation.hpp"
#include "java.lang.reflect.AccessibleObject.hpp"
#include "java.lang.reflect.AnnotatedElement.hpp"
#include "java.lang.reflect.Array.hpp"
#include "java.lang.reflect.Constructor.hpp"
#include "java.lang.reflect.Field.hpp"
#include "java.lang.reflect.GenericArrayType.hpp"
#include "java.lang.reflect.GenericDeclaration.hpp"
#include "java.lang.reflect.GenericSignatureFormatError.hpp"
#include "java.lang.reflect.InvocationHandler.hpp"
#include "java.lang.reflect.InvocationTargetException.hpp"
#include "java.lang.reflect.MalformedParameterizedTypeException.hpp"
#include "java.lang.reflect.Member.hpp"
#include "java.lang.reflect.Method.hpp"
#include "java.lang.reflect.Modifier.hpp"
#include "java.lang.reflect.ParameterizedType.hpp"
#include "java.lang.reflect.Proxy.hpp"
#include "java.lang.reflect.ReflectPermission.hpp"
#include "java.lang.reflect.Type.hpp"
#include "java.lang.reflect.TypeVariable.hpp"
#include "java.lang.reflect.UndeclaredThrowableException.hpp"
#include "java.lang.reflect.WildcardType.hpp"
#include "java.security.Permission.hpp"

jclass java::lang::reflect::Field::_class = nullptr;
jclass java::lang::reflect::Array::_class = nullptr;
jclass java::lang::reflect::TypeVariable::_class = nullptr;
jclass java::lang::reflect::Method::_class = nullptr;
jclass java::lang::reflect::GenericArrayType::_class = nullptr;
jclass java::lang::reflect::Proxy::_class = nullptr;
jclass java::lang::reflect::ReflectPermission::_class = nullptr;
jclass java::lang::reflect::MalformedParameterizedTypeException::_class = nullptr;
jclass java::lang::reflect::ParameterizedType::_class = nullptr;
jclass java::lang::reflect::UndeclaredThrowableException::_class = nullptr;
jclass java::lang::reflect::Member::_class = nullptr;
jclass java::lang::reflect::GenericSignatureFormatError::_class = nullptr;
jclass java::lang::reflect::GenericDeclaration::_class = nullptr;
jclass java::lang::reflect::InvocationHandler::_class = nullptr;
jclass java::lang::reflect::Type::_class = nullptr;
jclass java::lang::reflect::WildcardType::_class = nullptr;
jclass java::lang::reflect::AnnotatedElement::_class = nullptr;
jclass java::lang::reflect::Modifier::_class = nullptr;
jclass java::lang::reflect::InvocationTargetException::_class = nullptr;
jclass java::lang::reflect::AccessibleObject::_class = nullptr;
jclass java::lang::reflect::Constructor::_class = nullptr;

bool java::lang::reflect::Field::isSynthetic() const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSynthetic", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::lang::reflect::Field::toGenericString() const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "toGenericString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::lang::reflect::Field::isEnumConstant() const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnumConstant", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::reflect::Type java::lang::reflect::Field::getGenericType() const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGenericType", "()Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::reflect::Type _ret(ret);
    return _ret;
}

std::vector< ::java::lang::annotation::Annotation> java::lang::reflect::Field::getDeclaredAnnotations() const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::annotation::Annotation java::lang::reflect::Field::getAnnotation(const ::java::lang::Class& arg0) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::annotation::Annotation _ret(ret);
    return _ret;
}

bool java::lang::reflect::Field::isAnnotationPresent(const ::java::lang::Class& arg0) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnnotationPresent", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::lang::reflect::Field::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::lang::reflect::Field::get(const ::java::lang::Object& arg0) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::lang::reflect::Field::getBoolean(const ::java::lang::Object& arg0) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int8_t java::lang::reflect::Field::getByte(const ::java::lang::Object& arg0) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByte", "(Ljava/lang/Object;)B");
    jobject _arg0 = arg0.obj;
    return java::jni->CallByteMethod(obj, mid, _arg0);
}

uint16_t java::lang::reflect::Field::getChar(const ::java::lang::Object& arg0) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChar", "(Ljava/lang/Object;)C");
    jobject _arg0 = arg0.obj;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

::java::lang::Class java::lang::reflect::Field::getDeclaringClass() const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaringClass", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

double java::lang::reflect::Field::getDouble(const ::java::lang::Object& arg0) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(Ljava/lang/Object;)D");
    jobject _arg0 = arg0.obj;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

float java::lang::reflect::Field::getFloat(const ::java::lang::Object& arg0) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(Ljava/lang/Object;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

int32_t java::lang::reflect::Field::getInt(const ::java::lang::Object& arg0) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t java::lang::reflect::Field::getLong(const ::java::lang::Object& arg0) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(Ljava/lang/Object;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int32_t java::lang::reflect::Field::getModifiers() const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModifiers", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::lang::reflect::Field::getName() const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int16_t java::lang::reflect::Field::getShort(const ::java::lang::Object& arg0) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(Ljava/lang/Object;)S");
    jobject _arg0 = arg0.obj;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

::java::lang::Class java::lang::reflect::Field::getType() const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

int32_t java::lang::reflect::Field::hashCode() const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::lang::reflect::Field::set(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::reflect::Field::setBoolean(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoolean", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::reflect::Field::setByte(const ::java::lang::Object& arg0, int8_t arg1) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "setByte", "(Ljava/lang/Object;B)V");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::reflect::Field::setChar(const ::java::lang::Object& arg0, uint16_t arg1) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChar", "(Ljava/lang/Object;C)V");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::reflect::Field::setDouble(const ::java::lang::Object& arg0, double arg1) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDouble", "(Ljava/lang/Object;D)V");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::reflect::Field::setFloat(const ::java::lang::Object& arg0, float arg1) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFloat", "(Ljava/lang/Object;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::reflect::Field::setInt(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInt", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::reflect::Field::setLong(const ::java::lang::Object& arg0, int64_t arg1) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLong", "(Ljava/lang/Object;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::lang::reflect::Field::setShort(const ::java::lang::Object& arg0, int16_t arg1) const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShort", "(Ljava/lang/Object;S)V");
    jobject _arg0 = arg0.obj;
    int16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::lang::reflect::Field::toString() const {
    if (!::java::lang::reflect::Field::_class) ::java::lang::reflect::Field::_class = java::fetch_class("java/lang/reflect/Field");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object java::lang::reflect::Array::get(const ::java::lang::Object& arg0, int32_t arg1){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Ljava/lang/Object;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::lang::reflect::Array::getBoolean(const ::java::lang::Object& arg0, int32_t arg1){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBoolean", "(Ljava/lang/Object;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

int8_t java::lang::reflect::Array::getByte(const ::java::lang::Object& arg0, int32_t arg1){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getByte", "(Ljava/lang/Object;I)B");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticByteMethod(_class, mid, _arg0, _arg1);
}

uint16_t java::lang::reflect::Array::getChar(const ::java::lang::Object& arg0, int32_t arg1){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getChar", "(Ljava/lang/Object;I)C");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticCharMethod(_class, mid, _arg0, _arg1);
}

double java::lang::reflect::Array::getDouble(const ::java::lang::Object& arg0, int32_t arg1){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDouble", "(Ljava/lang/Object;I)D");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticDoubleMethod(_class, mid, _arg0, _arg1);
}

float java::lang::reflect::Array::getFloat(const ::java::lang::Object& arg0, int32_t arg1){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFloat", "(Ljava/lang/Object;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::reflect::Array::getInt(const ::java::lang::Object& arg0, int32_t arg1){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInt", "(Ljava/lang/Object;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::lang::reflect::Array::getLength(const ::java::lang::Object& arg0){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLength", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int64_t java::lang::reflect::Array::getLong(const ::java::lang::Object& arg0, int32_t arg1){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLong", "(Ljava/lang/Object;I)J");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

int16_t java::lang::reflect::Array::getShort(const ::java::lang::Object& arg0, int32_t arg1){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getShort", "(Ljava/lang/Object;I)S");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticShortMethod(_class, mid, _arg0, _arg1);
}

::java::lang::Object java::lang::reflect::Array::newInstance(const ::java::lang::Class& arg0, const std::vector< int32_t>& arg1){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/Class;[I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::lang::reflect::Array::newInstance(const ::java::lang::Class& arg0, int32_t arg1){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/Class;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::lang::reflect::Array::set(const ::java::lang::Object& arg0, int32_t arg1, const ::java::lang::Object& arg2){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "set", "(Ljava/lang/Object;ILjava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::lang::reflect::Array::setBoolean(const ::java::lang::Object& arg0, int32_t arg1, bool arg2){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setBoolean", "(Ljava/lang/Object;IZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::lang::reflect::Array::setByte(const ::java::lang::Object& arg0, int32_t arg1, int8_t arg2){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setByte", "(Ljava/lang/Object;IB)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int8_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::lang::reflect::Array::setChar(const ::java::lang::Object& arg0, int32_t arg1, uint16_t arg2){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setChar", "(Ljava/lang/Object;IC)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    uint16_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::lang::reflect::Array::setDouble(const ::java::lang::Object& arg0, int32_t arg1, double arg2){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDouble", "(Ljava/lang/Object;ID)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    double _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::lang::reflect::Array::setFloat(const ::java::lang::Object& arg0, int32_t arg1, float arg2){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setFloat", "(Ljava/lang/Object;IF)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::lang::reflect::Array::setInt(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setInt", "(Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::lang::reflect::Array::setLong(const ::java::lang::Object& arg0, int32_t arg1, int64_t arg2){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLong", "(Ljava/lang/Object;IJ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::lang::reflect::Array::setShort(const ::java::lang::Object& arg0, int32_t arg1, int16_t arg2){
    if (!::java::lang::reflect::Array::_class) ::java::lang::reflect::Array::_class = java::fetch_class("java/lang/reflect/Array");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setShort", "(Ljava/lang/Object;IS)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int16_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

std::vector< ::java::lang::reflect::Type> java::lang::reflect::TypeVariable::getBounds() const {
    if (!::java::lang::reflect::TypeVariable::_class) ::java::lang::reflect::TypeVariable::_class = java::fetch_class("java/lang/reflect/TypeVariable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBounds", "()[Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Type> _ret(rets, ::java::lang::reflect::Type((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Type retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::reflect::GenericDeclaration java::lang::reflect::TypeVariable::getGenericDeclaration() const {
    if (!::java::lang::reflect::TypeVariable::_class) ::java::lang::reflect::TypeVariable::_class = java::fetch_class("java/lang/reflect/TypeVariable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGenericDeclaration", "()Ljava/lang/reflect/GenericDeclaration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::reflect::GenericDeclaration _ret(ret);
    return _ret;
}

::java::lang::String java::lang::reflect::TypeVariable::getName() const {
    if (!::java::lang::reflect::TypeVariable::_class) ::java::lang::reflect::TypeVariable::_class = java::fetch_class("java/lang/reflect/TypeVariable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::reflect::TypeVariable> java::lang::reflect::Method::getTypeParameters() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeParameters", "()[Ljava/lang/reflect/TypeVariable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::TypeVariable> _ret(rets, ::java::lang::reflect::TypeVariable((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::TypeVariable retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::lang::reflect::Method::toGenericString() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "toGenericString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::reflect::Type> java::lang::reflect::Method::getGenericParameterTypes() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGenericParameterTypes", "()[Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Type> _ret(rets, ::java::lang::reflect::Type((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Type retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::reflect::Type> java::lang::reflect::Method::getGenericExceptionTypes() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGenericExceptionTypes", "()[Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Type> _ret(rets, ::java::lang::reflect::Type((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Type retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::reflect::Type java::lang::reflect::Method::getGenericReturnType() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGenericReturnType", "()Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::reflect::Type _ret(ret);
    return _ret;
}

std::vector< ::java::lang::annotation::Annotation> java::lang::reflect::Method::getDeclaredAnnotations() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::annotation::Annotation java::lang::reflect::Method::getAnnotation(const ::java::lang::Class& arg0) const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::annotation::Annotation _ret(ret);
    return _ret;
}

bool java::lang::reflect::Method::isAnnotationPresent(const ::java::lang::Class& arg0) const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnnotationPresent", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::annotation::Annotation> java::lang::reflect::Method::getParameterAnnotations() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool java::lang::reflect::Method::isVarArgs() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVarArgs", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::reflect::Method::isBridge() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBridge", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::reflect::Method::isSynthetic() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSynthetic", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::lang::reflect::Method::getDefaultValue() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultValue", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::lang::reflect::Method::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Class java::lang::reflect::Method::getDeclaringClass() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaringClass", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Class> java::lang::reflect::Method::getExceptionTypes() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExceptionTypes", "()[Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Class> _ret(rets, ::java::lang::Class((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Class retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t java::lang::reflect::Method::getModifiers() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModifiers", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::lang::reflect::Method::getName() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Class> java::lang::reflect::Method::getParameterTypes() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterTypes", "()[Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Class> _ret(rets, ::java::lang::Class((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Class retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::Class java::lang::reflect::Method::getReturnType() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReturnType", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

int32_t java::lang::reflect::Method::hashCode() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::lang::reflect::Method::invoke(const ::java::lang::Object& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "invoke", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String java::lang::reflect::Method::toString() const {
    if (!::java::lang::reflect::Method::_class) ::java::lang::reflect::Method::_class = java::fetch_class("java/lang/reflect/Method");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::reflect::Type java::lang::reflect::GenericArrayType::getGenericComponentType() const {
    if (!::java::lang::reflect::GenericArrayType::_class) ::java::lang::reflect::GenericArrayType::_class = java::fetch_class("java/lang/reflect/GenericArrayType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGenericComponentType", "()Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::reflect::Type _ret(ret);
    return _ret;
}

::java::lang::Class java::lang::reflect::Proxy::getProxyClass(const ::java::lang::ClassLoader& arg0, const std::vector< ::java::lang::Class>& arg1){
    if (!::java::lang::reflect::Proxy::_class) ::java::lang::reflect::Proxy::_class = java::fetch_class("java/lang/reflect/Proxy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProxyClass", "(Ljava/lang/ClassLoader;[Ljava/lang/Class;)Ljava/lang/Class;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Class::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Class& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::lang::Object java::lang::reflect::Proxy::newProxyInstance(const ::java::lang::ClassLoader& arg0, const std::vector< ::java::lang::Class>& arg1, const ::java::lang::reflect::InvocationHandler& arg2){
    if (!::java::lang::reflect::Proxy::_class) ::java::lang::reflect::Proxy::_class = java::fetch_class("java/lang/reflect/Proxy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newProxyInstance", "(Ljava/lang/ClassLoader;[Ljava/lang/Class;Ljava/lang/reflect/InvocationHandler;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Class::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Class& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::lang::reflect::Proxy::isProxyClass(const ::java::lang::Class& arg0){
    if (!::java::lang::reflect::Proxy::_class) ::java::lang::reflect::Proxy::_class = java::fetch_class("java/lang/reflect/Proxy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isProxyClass", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::reflect::InvocationHandler java::lang::reflect::Proxy::getInvocationHandler(const ::java::lang::Object& arg0){
    if (!::java::lang::reflect::Proxy::_class) ::java::lang::reflect::Proxy::_class = java::fetch_class("java/lang/reflect/Proxy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInvocationHandler", "(Ljava/lang/Object;)Ljava/lang/reflect/InvocationHandler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::reflect::InvocationHandler _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::reflect::ReflectPermission::ReflectPermission(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::lang::reflect::ReflectPermission::_class) ::java::lang::reflect::ReflectPermission::_class = java::fetch_class("java/lang/reflect/ReflectPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::reflect::ReflectPermission::ReflectPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::lang::reflect::ReflectPermission::_class) ::java::lang::reflect::ReflectPermission::_class = java::fetch_class("java/lang/reflect/ReflectPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::lang::reflect::ReflectPermission::getActions() const {
    if (!::java::lang::reflect::ReflectPermission::_class) ::java::lang::reflect::ReflectPermission::_class = java::fetch_class("java/lang/reflect/ReflectPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::lang::reflect::ReflectPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::lang::reflect::ReflectPermission::_class) ::java::lang::reflect::ReflectPermission::_class = java::fetch_class("java/lang/reflect/ReflectPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::reflect::MalformedParameterizedTypeException::MalformedParameterizedTypeException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::reflect::MalformedParameterizedTypeException::_class) ::java::lang::reflect::MalformedParameterizedTypeException::_class = java::fetch_class("java/lang/reflect/MalformedParameterizedTypeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

std::vector< ::java::lang::reflect::Type> java::lang::reflect::ParameterizedType::getActualTypeArguments() const {
    if (!::java::lang::reflect::ParameterizedType::_class) ::java::lang::reflect::ParameterizedType::_class = java::fetch_class("java/lang/reflect/ParameterizedType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActualTypeArguments", "()[Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Type> _ret(rets, ::java::lang::reflect::Type((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Type retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::reflect::Type java::lang::reflect::ParameterizedType::getOwnerType() const {
    if (!::java::lang::reflect::ParameterizedType::_class) ::java::lang::reflect::ParameterizedType::_class = java::fetch_class("java/lang/reflect/ParameterizedType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOwnerType", "()Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::reflect::Type _ret(ret);
    return _ret;
}

::java::lang::reflect::Type java::lang::reflect::ParameterizedType::getRawType() const {
    if (!::java::lang::reflect::ParameterizedType::_class) ::java::lang::reflect::ParameterizedType::_class = java::fetch_class("java/lang/reflect/ParameterizedType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawType", "()Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::reflect::Type _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::reflect::UndeclaredThrowableException::UndeclaredThrowableException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::reflect::UndeclaredThrowableException::_class) ::java::lang::reflect::UndeclaredThrowableException::_class = java::fetch_class("java/lang/reflect/UndeclaredThrowableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::reflect::UndeclaredThrowableException::UndeclaredThrowableException(const ::java::lang::Throwable& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::reflect::UndeclaredThrowableException::_class) ::java::lang::reflect::UndeclaredThrowableException::_class = java::fetch_class("java/lang/reflect/UndeclaredThrowableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Throwable java::lang::reflect::UndeclaredThrowableException::getUndeclaredThrowable() const {
    if (!::java::lang::reflect::UndeclaredThrowableException::_class) ::java::lang::reflect::UndeclaredThrowableException::_class = java::fetch_class("java/lang/reflect/UndeclaredThrowableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUndeclaredThrowable", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

::java::lang::Throwable java::lang::reflect::UndeclaredThrowableException::getCause() const {
    if (!::java::lang::reflect::UndeclaredThrowableException::_class) ::java::lang::reflect::UndeclaredThrowableException::_class = java::fetch_class("java/lang/reflect/UndeclaredThrowableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCause", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

::java::lang::Class java::lang::reflect::Member::getDeclaringClass() const {
    if (!::java::lang::reflect::Member::_class) ::java::lang::reflect::Member::_class = java::fetch_class("java/lang/reflect/Member");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaringClass", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

int32_t java::lang::reflect::Member::getModifiers() const {
    if (!::java::lang::reflect::Member::_class) ::java::lang::reflect::Member::_class = java::fetch_class("java/lang/reflect/Member");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModifiers", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::lang::reflect::Member::getName() const {
    if (!::java::lang::reflect::Member::_class) ::java::lang::reflect::Member::_class = java::fetch_class("java/lang/reflect/Member");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::lang::reflect::Member::isSynthetic() const {
    if (!::java::lang::reflect::Member::_class) ::java::lang::reflect::Member::_class = java::fetch_class("java/lang/reflect/Member");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSynthetic", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::reflect::GenericSignatureFormatError::GenericSignatureFormatError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::ClassFormatError((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::LinkageError((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::reflect::GenericSignatureFormatError::_class) ::java::lang::reflect::GenericSignatureFormatError::_class = java::fetch_class("java/lang/reflect/GenericSignatureFormatError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

std::vector< ::java::lang::reflect::TypeVariable> java::lang::reflect::GenericDeclaration::getTypeParameters() const {
    if (!::java::lang::reflect::GenericDeclaration::_class) ::java::lang::reflect::GenericDeclaration::_class = java::fetch_class("java/lang/reflect/GenericDeclaration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeParameters", "()[Ljava/lang/reflect/TypeVariable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::TypeVariable> _ret(rets, ::java::lang::reflect::TypeVariable((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::TypeVariable retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::Object java::lang::reflect::InvocationHandler::invoke(const ::java::lang::Object& arg0, const ::java::lang::reflect::Method& arg1, const std::vector< ::java::lang::Object>& arg2) const {
    if (!::java::lang::reflect::InvocationHandler::_class) ::java::lang::reflect::InvocationHandler::_class = java::fetch_class("java/lang/reflect/InvocationHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

std::vector< ::java::lang::reflect::Type> java::lang::reflect::WildcardType::getUpperBounds() const {
    if (!::java::lang::reflect::WildcardType::_class) ::java::lang::reflect::WildcardType::_class = java::fetch_class("java/lang/reflect/WildcardType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUpperBounds", "()[Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Type> _ret(rets, ::java::lang::reflect::Type((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Type retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::reflect::Type> java::lang::reflect::WildcardType::getLowerBounds() const {
    if (!::java::lang::reflect::WildcardType::_class) ::java::lang::reflect::WildcardType::_class = java::fetch_class("java/lang/reflect/WildcardType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLowerBounds", "()[Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Type> _ret(rets, ::java::lang::reflect::Type((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Type retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::annotation::Annotation java::lang::reflect::AnnotatedElement::getAnnotation(const ::java::lang::Class& arg0) const {
    if (!::java::lang::reflect::AnnotatedElement::_class) ::java::lang::reflect::AnnotatedElement::_class = java::fetch_class("java/lang/reflect/AnnotatedElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::annotation::Annotation _ret(ret);
    return _ret;
}

std::vector< ::java::lang::annotation::Annotation> java::lang::reflect::AnnotatedElement::getAnnotations() const {
    if (!::java::lang::reflect::AnnotatedElement::_class) ::java::lang::reflect::AnnotatedElement::_class = java::fetch_class("java/lang/reflect/AnnotatedElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::annotation::Annotation> java::lang::reflect::AnnotatedElement::getDeclaredAnnotations() const {
    if (!::java::lang::reflect::AnnotatedElement::_class) ::java::lang::reflect::AnnotatedElement::_class = java::fetch_class("java/lang/reflect/AnnotatedElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool java::lang::reflect::AnnotatedElement::isAnnotationPresent(const ::java::lang::Class& arg0) const {
    if (!::java::lang::reflect::AnnotatedElement::_class) ::java::lang::reflect::AnnotatedElement::_class = java::fetch_class("java/lang/reflect/AnnotatedElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnnotationPresent", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::reflect::Modifier::Modifier() : ::java::lang::Object((jobject)0) {
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool java::lang::reflect::Modifier::isAbstract(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isAbstract", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::reflect::Modifier::isFinal(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isFinal", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::reflect::Modifier::isInterface(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isInterface", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::reflect::Modifier::isNative(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isNative", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::reflect::Modifier::isPrivate(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isPrivate", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::reflect::Modifier::isProtected(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isProtected", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::reflect::Modifier::isPublic(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isPublic", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::reflect::Modifier::isStatic(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isStatic", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::reflect::Modifier::isStrict(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isStrict", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::reflect::Modifier::isSynchronized(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSynchronized", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::reflect::Modifier::isTransient(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isTransient", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::lang::reflect::Modifier::isVolatile(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isVolatile", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String java::lang::reflect::Modifier::toString(int32_t arg0){
    if (!::java::lang::reflect::Modifier::_class) ::java::lang::reflect::Modifier::_class = java::fetch_class("java/lang/reflect/Modifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::reflect::InvocationTargetException::InvocationTargetException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::reflect::InvocationTargetException::_class) ::java::lang::reflect::InvocationTargetException::_class = java::fetch_class("java/lang/reflect/InvocationTargetException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::lang::reflect::InvocationTargetException::InvocationTargetException(const ::java::lang::Throwable& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::lang::reflect::InvocationTargetException::_class) ::java::lang::reflect::InvocationTargetException::_class = java::fetch_class("java/lang/reflect/InvocationTargetException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Throwable java::lang::reflect::InvocationTargetException::getTargetException() const {
    if (!::java::lang::reflect::InvocationTargetException::_class) ::java::lang::reflect::InvocationTargetException::_class = java::fetch_class("java/lang/reflect/InvocationTargetException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetException", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

::java::lang::Throwable java::lang::reflect::InvocationTargetException::getCause() const {
    if (!::java::lang::reflect::InvocationTargetException::_class) ::java::lang::reflect::InvocationTargetException::_class = java::fetch_class("java/lang/reflect/InvocationTargetException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCause", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

void java::lang::reflect::AccessibleObject::setAccessible(const std::vector< ::java::lang::reflect::AccessibleObject>& arg0, bool arg1){
    if (!::java::lang::reflect::AccessibleObject::_class) ::java::lang::reflect::AccessibleObject::_class = java::fetch_class("java/lang/reflect/AccessibleObject");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setAccessible", "([Ljava/lang/reflect/AccessibleObject;Z)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::reflect::AccessibleObject::_class) ::java::lang::reflect::AccessibleObject::_class = java::fetch_class("java/lang/reflect/AccessibleObject");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::reflect::AccessibleObject::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::reflect::AccessibleObject& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool java::lang::reflect::AccessibleObject::isAccessible() const {
    if (!::java::lang::reflect::AccessibleObject::_class) ::java::lang::reflect::AccessibleObject::_class = java::fetch_class("java/lang/reflect/AccessibleObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAccessible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::lang::reflect::AccessibleObject::setAccessible(bool arg0) const {
    if (!::java::lang::reflect::AccessibleObject::_class) ::java::lang::reflect::AccessibleObject::_class = java::fetch_class("java/lang/reflect/AccessibleObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessible", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::lang::reflect::AccessibleObject::isAnnotationPresent(const ::java::lang::Class& arg0) const {
    if (!::java::lang::reflect::AccessibleObject::_class) ::java::lang::reflect::AccessibleObject::_class = java::fetch_class("java/lang/reflect/AccessibleObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnnotationPresent", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::annotation::Annotation> java::lang::reflect::AccessibleObject::getDeclaredAnnotations() const {
    if (!::java::lang::reflect::AccessibleObject::_class) ::java::lang::reflect::AccessibleObject::_class = java::fetch_class("java/lang/reflect/AccessibleObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::annotation::Annotation> java::lang::reflect::AccessibleObject::getAnnotations() const {
    if (!::java::lang::reflect::AccessibleObject::_class) ::java::lang::reflect::AccessibleObject::_class = java::fetch_class("java/lang/reflect/AccessibleObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::annotation::Annotation java::lang::reflect::AccessibleObject::getAnnotation(const ::java::lang::Class& arg0) const {
    if (!::java::lang::reflect::AccessibleObject::_class) ::java::lang::reflect::AccessibleObject::_class = java::fetch_class("java/lang/reflect/AccessibleObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::annotation::Annotation _ret(ret);
    return _ret;
}

std::vector< ::java::lang::reflect::TypeVariable> java::lang::reflect::Constructor::getTypeParameters() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeParameters", "()[Ljava/lang/reflect/TypeVariable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::TypeVariable> _ret(rets, ::java::lang::reflect::TypeVariable((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::TypeVariable retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::lang::reflect::Constructor::toGenericString() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "toGenericString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::reflect::Type> java::lang::reflect::Constructor::getGenericParameterTypes() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGenericParameterTypes", "()[Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Type> _ret(rets, ::java::lang::reflect::Type((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Type retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::reflect::Type> java::lang::reflect::Constructor::getGenericExceptionTypes() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGenericExceptionTypes", "()[Ljava/lang/reflect/Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::reflect::Type> _ret(rets, ::java::lang::reflect::Type((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::reflect::Type retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::annotation::Annotation> java::lang::reflect::Constructor::getDeclaredAnnotations() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::annotation::Annotation java::lang::reflect::Constructor::getAnnotation(const ::java::lang::Class& arg0) const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::annotation::Annotation _ret(ret);
    return _ret;
}

bool java::lang::reflect::Constructor::isAnnotationPresent(const ::java::lang::Class& arg0) const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnnotationPresent", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::annotation::Annotation> java::lang::reflect::Constructor::getParameterAnnotations() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterAnnotations", "()[Ljava/lang/annotation/Annotation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::annotation::Annotation> _ret(rets, ::java::lang::annotation::Annotation((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::annotation::Annotation retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool java::lang::reflect::Constructor::isVarArgs() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVarArgs", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::reflect::Constructor::isSynthetic() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSynthetic", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::lang::reflect::Constructor::equals(const ::java::lang::Object& arg0) const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Class java::lang::reflect::Constructor::getDeclaringClass() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclaringClass", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Class> java::lang::reflect::Constructor::getExceptionTypes() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExceptionTypes", "()[Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Class> _ret(rets, ::java::lang::Class((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Class retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t java::lang::reflect::Constructor::getModifiers() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModifiers", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::lang::reflect::Constructor::getName() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Class> java::lang::reflect::Constructor::getParameterTypes() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterTypes", "()[Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Class> _ret(rets, ::java::lang::Class((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Class retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t java::lang::reflect::Constructor::hashCode() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::lang::reflect::Constructor::newInstance(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String java::lang::reflect::Constructor::toString() const {
    if (!::java::lang::reflect::Constructor::_class) ::java::lang::reflect::Constructor::_class = java::fetch_class("java/lang/reflect/Constructor");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

