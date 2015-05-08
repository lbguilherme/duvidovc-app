#include "java-core.hpp"
#include <memory>
#include "java.awt.font.NumericShaper.hpp"
#include "java.awt.font.TextAttribute.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"

jclass java::awt::font::NumericShaper::_class = nullptr;
jclass java::awt::font::TextAttribute::_class = nullptr;

int32_t java::awt::font::NumericShaper::hashCode() const {
    if (!::java::awt::font::NumericShaper::_class) ::java::awt::font::NumericShaper::_class = java::fetch_class("java/awt/font/NumericShaper");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::awt::font::NumericShaper::equals(const ::java::lang::Object& arg0) const {
    if (!::java::awt::font::NumericShaper::_class) ::java::awt::font::NumericShaper::_class = java::fetch_class("java/awt/font/NumericShaper");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::awt::font::NumericShaper::toString() const {
    if (!::java::awt::font::NumericShaper::_class) ::java::awt::font::NumericShaper::_class = java::fetch_class("java/awt/font/NumericShaper");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::awt::font::NumericShaper java::awt::font::NumericShaper::getContextualShaper(int32_t arg0, int32_t arg1){
    if (!::java::awt::font::NumericShaper::_class) ::java::awt::font::NumericShaper::_class = java::fetch_class("java/awt/font/NumericShaper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContextualShaper", "(II)Ljava/awt/font/NumericShaper;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::awt::font::NumericShaper _ret(ret);
    return _ret;
}

::java::awt::font::NumericShaper java::awt::font::NumericShaper::getContextualShaper(int32_t arg0){
    if (!::java::awt::font::NumericShaper::_class) ::java::awt::font::NumericShaper::_class = java::fetch_class("java/awt/font/NumericShaper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContextualShaper", "(I)Ljava/awt/font/NumericShaper;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::awt::font::NumericShaper _ret(ret);
    return _ret;
}

int32_t java::awt::font::NumericShaper::getRanges() const {
    if (!::java::awt::font::NumericShaper::_class) ::java::awt::font::NumericShaper::_class = java::fetch_class("java/awt/font/NumericShaper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRanges", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::awt::font::NumericShaper java::awt::font::NumericShaper::getShaper(int32_t arg0){
    if (!::java::awt::font::NumericShaper::_class) ::java::awt::font::NumericShaper::_class = java::fetch_class("java/awt/font/NumericShaper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getShaper", "(I)Ljava/awt/font/NumericShaper;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::awt::font::NumericShaper _ret(ret);
    return _ret;
}

bool java::awt::font::NumericShaper::isContextual() const {
    if (!::java::awt::font::NumericShaper::_class) ::java::awt::font::NumericShaper::_class = java::fetch_class("java/awt/font/NumericShaper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isContextual", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::awt::font::NumericShaper::shape(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::awt::font::NumericShaper::_class) ::java::awt::font::NumericShaper::_class = java::fetch_class("java/awt/font/NumericShaper");
    static jmethodID mid = java::jni->GetMethodID(_class, "shape", "([CIII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::awt::font::NumericShaper::shape(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::awt::font::NumericShaper::_class) ::java::awt::font::NumericShaper::_class = java::fetch_class("java/awt/font/NumericShaper");
    static jmethodID mid = java::jni->GetMethodID(_class, "shape", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

