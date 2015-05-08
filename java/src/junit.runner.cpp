#include "java-core.hpp"
#include <memory>
#include "java.lang.Class.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "junit.framework.AssertionFailedError.hpp"
#include "junit.framework.Test.hpp"
#include "junit.runner.BaseTestRunner.hpp"
#include "junit.runner.TestSuiteLoader.hpp"
#include "junit.runner.Version.hpp"

jclass junit::runner::TestSuiteLoader::_class = nullptr;
jclass junit::runner::Version::_class = nullptr;
jclass junit::runner::BaseTestRunner::_class = nullptr;

::java::lang::Class junit::runner::TestSuiteLoader::load(const ::java::lang::String& arg0) const {
    if (!::junit::runner::TestSuiteLoader::_class) ::junit::runner::TestSuiteLoader::_class = java::fetch_class("junit/runner/TestSuiteLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Ljava/lang/String;)Ljava/lang/Class;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::lang::Class junit::runner::TestSuiteLoader::reload(const ::java::lang::Class& arg0) const {
    if (!::junit::runner::TestSuiteLoader::_class) ::junit::runner::TestSuiteLoader::_class = java::fetch_class("junit/runner/TestSuiteLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "reload", "(Ljava/lang/Class;)Ljava/lang/Class;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::java::lang::String junit::runner::Version::id(){
    if (!::junit::runner::Version::_class) ::junit::runner::Version::_class = java::fetch_class("junit/runner/Version");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "id", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::junit::runner::BaseTestRunner::BaseTestRunner() : ::java::lang::Object((jobject)0), ::junit::framework::TestListener((jobject)0) {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void junit::runner::BaseTestRunner::startTest(const ::junit::framework::Test& arg0) const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTest", "(Ljunit/framework/Test;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void junit::runner::BaseTestRunner::savePreferences(){
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "savePreferences", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void junit::runner::BaseTestRunner::setPreference(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreference", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void junit::runner::BaseTestRunner::endTest(const ::junit::framework::Test& arg0) const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "endTest", "(Ljunit/framework/Test;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void junit::runner::BaseTestRunner::addError(const ::junit::framework::Test& arg0, const ::java::lang::Throwable& arg1) const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "addError", "(Ljunit/framework/Test;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void junit::runner::BaseTestRunner::addFailure(const ::junit::framework::Test& arg0, const ::junit::framework::AssertionFailedError& arg1) const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFailure", "(Ljunit/framework/Test;Ljunit/framework/AssertionFailedError;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void junit::runner::BaseTestRunner::testStarted(const ::java::lang::String& arg0) const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "testStarted", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void junit::runner::BaseTestRunner::testEnded(const ::java::lang::String& arg0) const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "testEnded", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void junit::runner::BaseTestRunner::testFailed(int32_t arg0, const ::junit::framework::Test& arg1, const ::java::lang::Throwable& arg2) const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "testFailed", "(ILjunit/framework/Test;Ljava/lang/Throwable;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::junit::framework::Test junit::runner::BaseTestRunner::getTest(const ::java::lang::String& arg0) const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTest", "(Ljava/lang/String;)Ljunit/framework/Test;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::junit::framework::Test _ret(ret);
    return _ret;
}

::java::lang::String junit::runner::BaseTestRunner::elapsedTimeAsString(int64_t arg0) const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "elapsedTimeAsString", "(J)Ljava/lang/String;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void junit::runner::BaseTestRunner::setLoading(bool arg0) const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLoading", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String junit::runner::BaseTestRunner::extractClassName(const ::java::lang::String& arg0) const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "extractClassName", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String junit::runner::BaseTestRunner::truncate(const ::java::lang::String& arg0){
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "truncate", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::junit::runner::TestSuiteLoader junit::runner::BaseTestRunner::getLoader() const {
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoader", "()Ljunit/runner/TestSuiteLoader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::junit::runner::TestSuiteLoader _ret(ret);
    return _ret;
}

::java::lang::String junit::runner::BaseTestRunner::getPreference(const ::java::lang::String& arg0){
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPreference", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t junit::runner::BaseTestRunner::getPreference(const ::java::lang::String& arg0, int32_t arg1){
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPreference", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

bool junit::runner::BaseTestRunner::inVAJava(){
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "inVAJava", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

::java::lang::String junit::runner::BaseTestRunner::getFilteredTrace(const ::java::lang::Throwable& arg0){
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFilteredTrace", "(Ljava/lang/Throwable;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String junit::runner::BaseTestRunner::getFilteredTrace(const ::java::lang::String& arg0){
    if (!::junit::runner::BaseTestRunner::_class) ::junit::runner::BaseTestRunner::_class = java::fetch_class("junit/runner/BaseTestRunner");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFilteredTrace", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

