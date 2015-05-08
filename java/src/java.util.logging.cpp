#include "java-core.hpp"
#include <memory>
#include "java.beans.PropertyChangeListener.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.security.Permission.hpp"
#include "java.util.Enumeration.hpp"
#include "java.util.List.hpp"
#include "java.util.ResourceBundle.hpp"
#include "java.util.logging.ConsoleHandler.hpp"
#include "java.util.logging.ErrorManager.hpp"
#include "java.util.logging.FileHandler.hpp"
#include "java.util.logging.Filter.hpp"
#include "java.util.logging.Formatter.hpp"
#include "java.util.logging.Handler.hpp"
#include "java.util.logging.Level.hpp"
#include "java.util.logging.LogManager.hpp"
#include "java.util.logging.LogRecord.hpp"
#include "java.util.logging.Logger.hpp"
#include "java.util.logging.LoggingMXBean.hpp"
#include "java.util.logging.LoggingPermission.hpp"
#include "java.util.logging.MemoryHandler.hpp"
#include "java.util.logging.SimpleFormatter.hpp"
#include "java.util.logging.SocketHandler.hpp"
#include "java.util.logging.StreamHandler.hpp"
#include "java.util.logging.XMLFormatter.hpp"

jclass java::util::logging::Level::_class = nullptr;
jclass java::util::logging::LogRecord::_class = nullptr;
jclass java::util::logging::StreamHandler::_class = nullptr;
jclass java::util::logging::XMLFormatter::_class = nullptr;
jclass java::util::logging::Logger::_class = nullptr;
jclass java::util::logging::FileHandler::_class = nullptr;
jclass java::util::logging::LoggingPermission::_class = nullptr;
jclass java::util::logging::Handler::_class = nullptr;
jclass java::util::logging::LoggingMXBean::_class = nullptr;
jclass java::util::logging::Formatter::_class = nullptr;
jclass java::util::logging::ConsoleHandler::_class = nullptr;
jclass java::util::logging::Filter::_class = nullptr;
jclass java::util::logging::SocketHandler::_class = nullptr;
jclass java::util::logging::LogManager::_class = nullptr;
jclass java::util::logging::ErrorManager::_class = nullptr;
jclass java::util::logging::SimpleFormatter::_class = nullptr;
jclass java::util::logging::MemoryHandler::_class = nullptr;

::java::util::logging::Level java::util::logging::Level::parse(const ::java::lang::String& arg0){
    if (!::java::util::logging::Level::_class) ::java::util::logging::Level::_class = java::fetch_class("java/util/logging/Level");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parse", "(Ljava/lang/String;)Ljava/util/logging/Level;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::logging::Level _ret(ret);
    return _ret;
}

::java::lang::String java::util::logging::Level::getName() const {
    if (!::java::util::logging::Level::_class) ::java::util::logging::Level::_class = java::fetch_class("java/util/logging/Level");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::logging::Level::getResourceBundleName() const {
    if (!::java::util::logging::Level::_class) ::java::util::logging::Level::_class = java::fetch_class("java/util/logging/Level");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceBundleName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::logging::Level::intValue() const {
    if (!::java::util::logging::Level::_class) ::java::util::logging::Level::_class = java::fetch_class("java/util/logging/Level");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::logging::Level::getLocalizedName() const {
    if (!::java::util::logging::Level::_class) ::java::util::logging::Level::_class = java::fetch_class("java/util/logging/Level");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalizedName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::logging::Level::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::logging::Level::_class) ::java::util::logging::Level::_class = java::fetch_class("java/util/logging/Level");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::logging::Level::hashCode() const {
    if (!::java::util::logging::Level::_class) ::java::util::logging::Level::_class = java::fetch_class("java/util/logging/Level");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::logging::Level::toString() const {
    if (!::java::util::logging::Level::_class) ::java::util::logging::Level::_class = java::fetch_class("java/util/logging/Level");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::LogRecord::LogRecord(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/logging/Level;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::util::logging::Level java::util::logging::LogRecord::getLevel() const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLevel", "()Ljava/util/logging/Level;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::logging::Level _ret(ret);
    return _ret;
}

void java::util::logging::LogRecord::setLevel(const ::java::util::logging::Level& arg0) const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLevel", "(Ljava/util/logging/Level;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::util::logging::LogRecord::getLoggerName() const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoggerName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::logging::LogRecord::setLoggerName(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLoggerName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::util::logging::LogRecord::getMessage() const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::logging::LogRecord::setMessage(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMessage", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t java::util::logging::LogRecord::getMillis() const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMillis", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void java::util::logging::LogRecord::setMillis(int64_t arg0) const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMillis", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::Object> java::util::logging::LogRecord::getParameters() const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()[Ljava/lang/Object;");
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

void java::util::logging::LogRecord::setParameters(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameters", "([Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::ResourceBundle java::util::logging::LogRecord::getResourceBundle() const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceBundle", "()Ljava/util/ResourceBundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ResourceBundle _ret(ret);
    return _ret;
}

void java::util::logging::LogRecord::setResourceBundle(const ::java::util::ResourceBundle& arg0) const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResourceBundle", "(Ljava/util/ResourceBundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::util::logging::LogRecord::getResourceBundleName() const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceBundleName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::logging::LogRecord::setResourceBundleName(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResourceBundleName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t java::util::logging::LogRecord::getSequenceNumber() const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSequenceNumber", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void java::util::logging::LogRecord::setSequenceNumber(int64_t arg0) const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSequenceNumber", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::util::logging::LogRecord::getSourceClassName() const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSourceClassName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::logging::LogRecord::setSourceClassName(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSourceClassName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::util::logging::LogRecord::getSourceMethodName() const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSourceMethodName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::logging::LogRecord::setSourceMethodName(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSourceMethodName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::util::logging::LogRecord::getThreadID() const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThreadID", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::logging::LogRecord::setThreadID(int32_t arg0) const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setThreadID", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Throwable java::util::logging::LogRecord::getThrown() const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThrown", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

void java::util::logging::LogRecord::setThrown(const ::java::lang::Throwable& arg0) const {
    if (!::java::util::logging::LogRecord::_class) ::java::util::logging::LogRecord::_class = java::fetch_class("java/util/logging/LogRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setThrown", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::StreamHandler::StreamHandler() : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0) {
    if (!::java::util::logging::StreamHandler::_class) ::java::util::logging::StreamHandler::_class = java::fetch_class("java/util/logging/StreamHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::StreamHandler::StreamHandler(const ::java::io::OutputStream& arg0, const ::java::util::logging::Formatter& arg1) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0) {
    if (!::java::util::logging::StreamHandler::_class) ::java::util::logging::StreamHandler::_class = java::fetch_class("java/util/logging/StreamHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/util/logging/Formatter;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::util::logging::StreamHandler::setEncoding(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::StreamHandler::_class) ::java::util::logging::StreamHandler::_class = java::fetch_class("java/util/logging/StreamHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEncoding", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::StreamHandler::close() const {
    if (!::java::util::logging::StreamHandler::_class) ::java::util::logging::StreamHandler::_class = java::fetch_class("java/util/logging/StreamHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::logging::StreamHandler::flush() const {
    if (!::java::util::logging::StreamHandler::_class) ::java::util::logging::StreamHandler::_class = java::fetch_class("java/util/logging/StreamHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::logging::StreamHandler::publish(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::StreamHandler::_class) ::java::util::logging::StreamHandler::_class = java::fetch_class("java/util/logging/StreamHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "publish", "(Ljava/util/logging/LogRecord;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::logging::StreamHandler::isLoggable(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::StreamHandler::_class) ::java::util::logging::StreamHandler::_class = java::fetch_class("java/util/logging/StreamHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLoggable", "(Ljava/util/logging/LogRecord;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::XMLFormatter::XMLFormatter() : ::java::lang::Object((jobject)0), ::java::util::logging::Formatter((jobject)0) {
    if (!::java::util::logging::XMLFormatter::_class) ::java::util::logging::XMLFormatter::_class = java::fetch_class("java/util/logging/XMLFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::logging::XMLFormatter::format(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::XMLFormatter::_class) ::java::util::logging::XMLFormatter::_class = java::fetch_class("java/util/logging/XMLFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/util/logging/LogRecord;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::logging::XMLFormatter::getHead(const ::java::util::logging::Handler& arg0) const {
    if (!::java::util::logging::XMLFormatter::_class) ::java::util::logging::XMLFormatter::_class = java::fetch_class("java/util/logging/XMLFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHead", "(Ljava/util/logging/Handler;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::logging::XMLFormatter::getTail(const ::java::util::logging::Handler& arg0) const {
    if (!::java::util::logging::XMLFormatter::_class) ::java::util::logging::XMLFormatter::_class = java::fetch_class("java/util/logging/XMLFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTail", "(Ljava/util/logging/Handler;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::logging::Logger java::util::logging::Logger::getAnonymousLogger(){
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAnonymousLogger", "()Ljava/util/logging/Logger;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::logging::Logger _ret(ret);
    return _ret;
}

::java::util::logging::Logger java::util::logging::Logger::getAnonymousLogger(const ::java::lang::String& arg0){
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAnonymousLogger", "(Ljava/lang/String;)Ljava/util/logging/Logger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::logging::Logger _ret(ret);
    return _ret;
}

::java::util::logging::Logger java::util::logging::Logger::getLogger(const ::java::lang::String& arg0){
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLogger", "(Ljava/lang/String;)Ljava/util/logging/Logger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::logging::Logger _ret(ret);
    return _ret;
}

::java::util::logging::Logger java::util::logging::Logger::getLogger(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLogger", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/logging/Logger;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::logging::Logger _ret(ret);
    return _ret;
}

void java::util::logging::Logger::addHandler(const ::java::util::logging::Handler& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "addHandler", "(Ljava/util/logging/Handler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::util::logging::Handler> java::util::logging::Logger::getHandlers() const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHandlers", "()[Ljava/util/logging/Handler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::util::logging::Handler> _ret(rets, ::java::util::logging::Handler((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::util::logging::Handler retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void java::util::logging::Logger::removeHandler(const ::java::util::logging::Handler& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeHandler", "(Ljava/util/logging/Handler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::logging::Filter java::util::logging::Logger::getFilter() const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilter", "()Ljava/util/logging/Filter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::logging::Filter _ret(ret);
    return _ret;
}

void java::util::logging::Logger::setFilter(const ::java::util::logging::Filter& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilter", "(Ljava/util/logging/Filter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::logging::Level java::util::logging::Logger::getLevel() const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLevel", "()Ljava/util/logging/Level;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::logging::Level _ret(ret);
    return _ret;
}

void java::util::logging::Logger::setLevel(const ::java::util::logging::Level& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLevel", "(Ljava/util/logging/Level;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::logging::Logger::getUseParentHandlers() const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUseParentHandlers", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::util::logging::Logger::setUseParentHandlers(bool arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUseParentHandlers", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::logging::Logger java::util::logging::Logger::getParent() const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Ljava/util/logging/Logger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::logging::Logger _ret(ret);
    return _ret;
}

void java::util::logging::Logger::setParent(const ::java::util::logging::Logger& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParent", "(Ljava/util/logging/Logger;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::util::logging::Logger::getName() const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::ResourceBundle java::util::logging::Logger::getResourceBundle() const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceBundle", "()Ljava/util/ResourceBundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ResourceBundle _ret(ret);
    return _ret;
}

::java::lang::String java::util::logging::Logger::getResourceBundleName() const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourceBundleName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::logging::Logger::isLoggable(const ::java::util::logging::Level& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLoggable", "(Ljava/util/logging/Level;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::logging::Logger::entering(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "entering", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::logging::Logger::entering(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Object& arg2) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "entering", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::logging::Logger::entering(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::Object>& arg2) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "entering", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V");
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
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::logging::Logger::exiting(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "exiting", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::logging::Logger::exiting(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Object& arg2) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "exiting", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::logging::Logger::throwing(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "throwing", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::logging::Logger::severe(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "severe", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::Logger::warning(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "warning", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::Logger::info(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "info", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::Logger::config(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "config", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::Logger::fine(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "fine", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::Logger::finer(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "finer", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::Logger::finest(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "finest", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::Logger::log(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "log", "(Ljava/util/logging/Level;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::logging::Logger::log(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1, const ::java::lang::Object& arg2) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "log", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::logging::Logger::log(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::Object>& arg2) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "log", "(Ljava/util/logging/Level;Ljava/lang/String;[Ljava/lang/Object;)V");
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
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::logging::Logger::log(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "log", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::logging::Logger::log(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "log", "(Ljava/util/logging/LogRecord;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::Logger::logp(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logp", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::logging::Logger::logp(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::Object& arg4) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logp", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void java::util::logging::Logger::logp(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const std::vector< ::java::lang::Object>& arg4) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logp", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    unsigned arg4s = arg4.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::java::lang::Object& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void java::util::logging::Logger::logp(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::Throwable& arg4) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logp", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void java::util::logging::Logger::logrb(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logrb", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void java::util::logging::Logger::logrb(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::lang::Object& arg5) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logrb", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void java::util::logging::Logger::logrb(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const std::vector< ::java::lang::Object>& arg5) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logrb", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    unsigned arg5s = arg5.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg5 = java::jni->NewObjectArray(arg5s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg5i = 0; arg5i < arg5s; ++arg5i) {
      const ::java::lang::Object& arg5e = arg5[arg5i];
        jobject arg5d = arg5e.obj;
      java::jni->SetObjectArrayElement(_arg5, arg5i, arg5d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void java::util::logging::Logger::logrb(const ::java::util::logging::Level& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::lang::Throwable& arg5) const {
    if (!::java::util::logging::Logger::_class) ::java::util::logging::Logger::_class = java::fetch_class("java/util/logging/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logrb", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::FileHandler::FileHandler() : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {
    if (!::java::util::logging::FileHandler::_class) ::java::util::logging::FileHandler::_class = java::fetch_class("java/util/logging/FileHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::FileHandler::FileHandler(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {
    if (!::java::util::logging::FileHandler::_class) ::java::util::logging::FileHandler::_class = java::fetch_class("java/util/logging/FileHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::FileHandler::FileHandler(const ::java::lang::String& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {
    if (!::java::util::logging::FileHandler::_class) ::java::util::logging::FileHandler::_class = java::fetch_class("java/util/logging/FileHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::FileHandler::FileHandler(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {
    if (!::java::util::logging::FileHandler::_class) ::java::util::logging::FileHandler::_class = java::fetch_class("java/util/logging/FileHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::FileHandler::FileHandler(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, bool arg3) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {
    if (!::java::util::logging::FileHandler::_class) ::java::util::logging::FileHandler::_class = java::fetch_class("java/util/logging/FileHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;IIZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

void java::util::logging::FileHandler::close() const {
    if (!::java::util::logging::FileHandler::_class) ::java::util::logging::FileHandler::_class = java::fetch_class("java/util/logging/FileHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::logging::FileHandler::publish(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::FileHandler::_class) ::java::util::logging::FileHandler::_class = java::fetch_class("java/util/logging/FileHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "publish", "(Ljava/util/logging/LogRecord;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::LoggingPermission::LoggingPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::util::logging::LoggingPermission::_class) ::java::util::logging::LoggingPermission::_class = java::fetch_class("java/util/logging/LoggingPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::logging::LoggingPermission::getActions() const {
    if (!::java::util::logging::LoggingPermission::_class) ::java::util::logging::LoggingPermission::_class = java::fetch_class("java/util/logging/LoggingPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::logging::LoggingPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::util::logging::LoggingPermission::_class) ::java::util::logging::LoggingPermission::_class = java::fetch_class("java/util/logging/LoggingPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::logging::Handler::close() const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::logging::Handler::flush() const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::logging::Handler::publish(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "publish", "(Ljava/util/logging/LogRecord;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::util::logging::Handler::getEncoding() const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::logging::ErrorManager java::util::logging::Handler::getErrorManager() const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorManager", "()Ljava/util/logging/ErrorManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::logging::ErrorManager _ret(ret);
    return _ret;
}

::java::util::logging::Filter java::util::logging::Handler::getFilter() const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilter", "()Ljava/util/logging/Filter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::logging::Filter _ret(ret);
    return _ret;
}

::java::util::logging::Formatter java::util::logging::Handler::getFormatter() const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormatter", "()Ljava/util/logging/Formatter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::logging::Formatter _ret(ret);
    return _ret;
}

::java::util::logging::Level java::util::logging::Handler::getLevel() const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLevel", "()Ljava/util/logging/Level;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::logging::Level _ret(ret);
    return _ret;
}

bool java::util::logging::Handler::isLoggable(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLoggable", "(Ljava/util/logging/LogRecord;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::logging::Handler::setEncoding(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEncoding", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::Handler::setErrorManager(const ::java::util::logging::ErrorManager& arg0) const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setErrorManager", "(Ljava/util/logging/ErrorManager;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::Handler::setFilter(const ::java::util::logging::Filter& arg0) const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilter", "(Ljava/util/logging/Filter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::Handler::setFormatter(const ::java::util::logging::Formatter& arg0) const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFormatter", "(Ljava/util/logging/Formatter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::Handler::setLevel(const ::java::util::logging::Level& arg0) const {
    if (!::java::util::logging::Handler::_class) ::java::util::logging::Handler::_class = java::fetch_class("java/util/logging/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLevel", "(Ljava/util/logging/Level;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::util::logging::LoggingMXBean::getLoggerLevel(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::LoggingMXBean::_class) ::java::util::logging::LoggingMXBean::_class = java::fetch_class("java/util/logging/LoggingMXBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoggerLevel", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::List java::util::logging::LoggingMXBean::getLoggerNames() const {
    if (!::java::util::logging::LoggingMXBean::_class) ::java::util::logging::LoggingMXBean::_class = java::fetch_class("java/util/logging/LoggingMXBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoggerNames", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String java::util::logging::LoggingMXBean::getParentLoggerName(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::LoggingMXBean::_class) ::java::util::logging::LoggingMXBean::_class = java::fetch_class("java/util/logging/LoggingMXBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentLoggerName", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::logging::LoggingMXBean::setLoggerLevel(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::logging::LoggingMXBean::_class) ::java::util::logging::LoggingMXBean::_class = java::fetch_class("java/util/logging/LoggingMXBean");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLoggerLevel", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::util::logging::Formatter::format(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::Formatter::_class) ::java::util::logging::Formatter::_class = java::fetch_class("java/util/logging/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/util/logging/LogRecord;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::logging::Formatter::formatMessage(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::Formatter::_class) ::java::util::logging::Formatter::_class = java::fetch_class("java/util/logging/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatMessage", "(Ljava/util/logging/LogRecord;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::logging::Formatter::getHead(const ::java::util::logging::Handler& arg0) const {
    if (!::java::util::logging::Formatter::_class) ::java::util::logging::Formatter::_class = java::fetch_class("java/util/logging/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHead", "(Ljava/util/logging/Handler;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::logging::Formatter::getTail(const ::java::util::logging::Handler& arg0) const {
    if (!::java::util::logging::Formatter::_class) ::java::util::logging::Formatter::_class = java::fetch_class("java/util/logging/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTail", "(Ljava/util/logging/Handler;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::ConsoleHandler::ConsoleHandler() : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {
    if (!::java::util::logging::ConsoleHandler::_class) ::java::util::logging::ConsoleHandler::_class = java::fetch_class("java/util/logging/ConsoleHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::util::logging::ConsoleHandler::close() const {
    if (!::java::util::logging::ConsoleHandler::_class) ::java::util::logging::ConsoleHandler::_class = java::fetch_class("java/util/logging/ConsoleHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::logging::ConsoleHandler::publish(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::ConsoleHandler::_class) ::java::util::logging::ConsoleHandler::_class = java::fetch_class("java/util/logging/ConsoleHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "publish", "(Ljava/util/logging/LogRecord;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::logging::Filter::isLoggable(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::Filter::_class) ::java::util::logging::Filter::_class = java::fetch_class("java/util/logging/Filter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLoggable", "(Ljava/util/logging/LogRecord;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::SocketHandler::SocketHandler() : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {
    if (!::java::util::logging::SocketHandler::_class) ::java::util::logging::SocketHandler::_class = java::fetch_class("java/util/logging/SocketHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::SocketHandler::SocketHandler(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0), ::java::util::logging::StreamHandler((jobject)0) {
    if (!::java::util::logging::SocketHandler::_class) ::java::util::logging::SocketHandler::_class = java::fetch_class("java/util/logging/SocketHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::util::logging::SocketHandler::close() const {
    if (!::java::util::logging::SocketHandler::_class) ::java::util::logging::SocketHandler::_class = java::fetch_class("java/util/logging/SocketHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::logging::SocketHandler::publish(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::SocketHandler::_class) ::java::util::logging::SocketHandler::_class = java::fetch_class("java/util/logging/SocketHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "publish", "(Ljava/util/logging/LogRecord;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::logging::LoggingMXBean java::util::logging::LogManager::getLoggingMXBean(){
    if (!::java::util::logging::LogManager::_class) ::java::util::logging::LogManager::_class = java::fetch_class("java/util/logging/LogManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLoggingMXBean", "()Ljava/util/logging/LoggingMXBean;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::logging::LoggingMXBean _ret(ret);
    return _ret;
}

void java::util::logging::LogManager::checkAccess() const {
    if (!::java::util::logging::LogManager::_class) ::java::util::logging::LogManager::_class = java::fetch_class("java/util/logging/LogManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkAccess", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::logging::LogManager::addLogger(const ::java::util::logging::Logger& arg0) const {
    if (!::java::util::logging::LogManager::_class) ::java::util::logging::LogManager::_class = java::fetch_class("java/util/logging/LogManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLogger", "(Ljava/util/logging/Logger;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::logging::Logger java::util::logging::LogManager::getLogger(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::LogManager::_class) ::java::util::logging::LogManager::_class = java::fetch_class("java/util/logging/LogManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLogger", "(Ljava/lang/String;)Ljava/util/logging/Logger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::logging::Logger _ret(ret);
    return _ret;
}

::java::util::Enumeration java::util::logging::LogManager::getLoggerNames() const {
    if (!::java::util::logging::LogManager::_class) ::java::util::logging::LogManager::_class = java::fetch_class("java/util/logging/LogManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoggerNames", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::util::logging::LogManager java::util::logging::LogManager::getLogManager(){
    if (!::java::util::logging::LogManager::_class) ::java::util::logging::LogManager::_class = java::fetch_class("java/util/logging/LogManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLogManager", "()Ljava/util/logging/LogManager;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::logging::LogManager _ret(ret);
    return _ret;
}

::java::lang::String java::util::logging::LogManager::getProperty(const ::java::lang::String& arg0) const {
    if (!::java::util::logging::LogManager::_class) ::java::util::logging::LogManager::_class = java::fetch_class("java/util/logging/LogManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::logging::LogManager::readConfiguration() const {
    if (!::java::util::logging::LogManager::_class) ::java::util::logging::LogManager::_class = java::fetch_class("java/util/logging/LogManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "readConfiguration", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::logging::LogManager::readConfiguration(const ::java::io::InputStream& arg0) const {
    if (!::java::util::logging::LogManager::_class) ::java::util::logging::LogManager::_class = java::fetch_class("java/util/logging/LogManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "readConfiguration", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::LogManager::reset() const {
    if (!::java::util::logging::LogManager::_class) ::java::util::logging::LogManager::_class = java::fetch_class("java/util/logging/LogManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::logging::LogManager::addPropertyChangeListener(const ::java::beans::PropertyChangeListener& arg0) const {
    if (!::java::util::logging::LogManager::_class) ::java::util::logging::LogManager::_class = java::fetch_class("java/util/logging/LogManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::logging::LogManager::removePropertyChangeListener(const ::java::beans::PropertyChangeListener& arg0) const {
    if (!::java::util::logging::LogManager::_class) ::java::util::logging::LogManager::_class = java::fetch_class("java/util/logging/LogManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::ErrorManager::ErrorManager() : ::java::lang::Object((jobject)0) {
    if (!::java::util::logging::ErrorManager::_class) ::java::util::logging::ErrorManager::_class = java::fetch_class("java/util/logging/ErrorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::util::logging::ErrorManager::error(const ::java::lang::String& arg0, const ::java::lang::Exception& arg1, int32_t arg2) const {
    if (!::java::util::logging::ErrorManager::_class) ::java::util::logging::ErrorManager::_class = java::fetch_class("java/util/logging/ErrorManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "error", "(Ljava/lang/String;Ljava/lang/Exception;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::SimpleFormatter::SimpleFormatter() : ::java::lang::Object((jobject)0), ::java::util::logging::Formatter((jobject)0) {
    if (!::java::util::logging::SimpleFormatter::_class) ::java::util::logging::SimpleFormatter::_class = java::fetch_class("java/util/logging/SimpleFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::logging::SimpleFormatter::format(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::SimpleFormatter::_class) ::java::util::logging::SimpleFormatter::_class = java::fetch_class("java/util/logging/SimpleFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/util/logging/LogRecord;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::MemoryHandler::MemoryHandler() : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0) {
    if (!::java::util::logging::MemoryHandler::_class) ::java::util::logging::MemoryHandler::_class = java::fetch_class("java/util/logging/MemoryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::logging::MemoryHandler::MemoryHandler(const ::java::util::logging::Handler& arg0, int32_t arg1, const ::java::util::logging::Level& arg2) : ::java::lang::Object((jobject)0), ::java::util::logging::Handler((jobject)0) {
    if (!::java::util::logging::MemoryHandler::_class) ::java::util::logging::MemoryHandler::_class = java::fetch_class("java/util/logging/MemoryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/logging/Handler;ILjava/util/logging/Level;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void java::util::logging::MemoryHandler::close() const {
    if (!::java::util::logging::MemoryHandler::_class) ::java::util::logging::MemoryHandler::_class = java::fetch_class("java/util/logging/MemoryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::logging::MemoryHandler::flush() const {
    if (!::java::util::logging::MemoryHandler::_class) ::java::util::logging::MemoryHandler::_class = java::fetch_class("java/util/logging/MemoryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::logging::MemoryHandler::publish(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::MemoryHandler::_class) ::java::util::logging::MemoryHandler::_class = java::fetch_class("java/util/logging/MemoryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "publish", "(Ljava/util/logging/LogRecord;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::logging::Level java::util::logging::MemoryHandler::getPushLevel() const {
    if (!::java::util::logging::MemoryHandler::_class) ::java::util::logging::MemoryHandler::_class = java::fetch_class("java/util/logging/MemoryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPushLevel", "()Ljava/util/logging/Level;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::logging::Level _ret(ret);
    return _ret;
}

bool java::util::logging::MemoryHandler::isLoggable(const ::java::util::logging::LogRecord& arg0) const {
    if (!::java::util::logging::MemoryHandler::_class) ::java::util::logging::MemoryHandler::_class = java::fetch_class("java/util/logging/MemoryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLoggable", "(Ljava/util/logging/LogRecord;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::logging::MemoryHandler::push() const {
    if (!::java::util::logging::MemoryHandler::_class) ::java::util::logging::MemoryHandler::_class = java::fetch_class("java/util/logging/MemoryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "push", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::logging::MemoryHandler::setPushLevel(const ::java::util::logging::Level& arg0) const {
    if (!::java::util::logging::MemoryHandler::_class) ::java::util::logging::MemoryHandler::_class = java::fetch_class("java/util/logging/MemoryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPushLevel", "(Ljava/util/logging/Level;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

