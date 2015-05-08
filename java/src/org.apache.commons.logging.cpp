#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.Throwable.hpp"
#include "org.apache.commons.logging.Log.hpp"

jclass org::apache::commons::logging::Log::_class = nullptr;

bool org::apache::commons::logging::Log::isDebugEnabled() const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDebugEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::commons::logging::Log::isErrorEnabled() const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "isErrorEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::commons::logging::Log::isFatalEnabled() const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFatalEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::commons::logging::Log::isInfoEnabled() const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInfoEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::commons::logging::Log::isTraceEnabled() const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTraceEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::commons::logging::Log::isWarnEnabled() const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWarnEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::commons::logging::Log::trace(const ::java::lang::Object& arg0) const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "trace", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::commons::logging::Log::trace(const ::java::lang::Object& arg0, const ::java::lang::Throwable& arg1) const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "trace", "(Ljava/lang/Object;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::commons::logging::Log::debug(const ::java::lang::Object& arg0) const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "debug", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::commons::logging::Log::debug(const ::java::lang::Object& arg0, const ::java::lang::Throwable& arg1) const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "debug", "(Ljava/lang/Object;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::commons::logging::Log::info(const ::java::lang::Object& arg0) const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "info", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::commons::logging::Log::info(const ::java::lang::Object& arg0, const ::java::lang::Throwable& arg1) const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "info", "(Ljava/lang/Object;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::commons::logging::Log::warn(const ::java::lang::Object& arg0) const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "warn", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::commons::logging::Log::warn(const ::java::lang::Object& arg0, const ::java::lang::Throwable& arg1) const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "warn", "(Ljava/lang/Object;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::commons::logging::Log::error(const ::java::lang::Object& arg0) const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "error", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::commons::logging::Log::error(const ::java::lang::Object& arg0, const ::java::lang::Throwable& arg1) const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "error", "(Ljava/lang/Object;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::commons::logging::Log::fatal(const ::java::lang::Object& arg0) const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "fatal", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::commons::logging::Log::fatal(const ::java::lang::Object& arg0, const ::java::lang::Throwable& arg1) const {
    if (!::org::apache::commons::logging::Log::_class) ::org::apache::commons::logging::Log::_class = java::fetch_class("org/apache/commons/logging/Log");
    static jmethodID mid = java::jni->GetMethodID(_class, "fatal", "(Ljava/lang/Object;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

