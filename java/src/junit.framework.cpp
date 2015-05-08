#include "java-core.hpp"
#include <memory>
#include "java.lang.Class.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.lang.reflect.Constructor.hpp"
#include "java.util.Enumeration.hpp"
#include "junit.framework.Assert.hpp"
#include "junit.framework.AssertionFailedError.hpp"
#include "junit.framework.ComparisonFailure.hpp"
#include "junit.framework.Protectable.hpp"
#include "junit.framework.Test.hpp"
#include "junit.framework.TestCase.hpp"
#include "junit.framework.TestFailure.hpp"
#include "junit.framework.TestListener.hpp"
#include "junit.framework.TestResult.hpp"
#include "junit.framework.TestSuite.hpp"

jclass junit::framework::TestResult::_class = nullptr;
jclass junit::framework::TestListener::_class = nullptr;
jclass junit::framework::Test::_class = nullptr;
jclass junit::framework::AssertionFailedError::_class = nullptr;
jclass junit::framework::Protectable::_class = nullptr;
jclass junit::framework::TestCase::_class = nullptr;
jclass junit::framework::TestFailure::_class = nullptr;
jclass junit::framework::Assert::_class = nullptr;
jclass junit::framework::ComparisonFailure::_class = nullptr;
jclass junit::framework::TestSuite::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::junit::framework::TestResult::TestResult() : ::java::lang::Object((jobject)0) {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void junit::framework::TestResult::addError(const ::junit::framework::Test& arg0, const ::java::lang::Throwable& arg1) const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "addError", "(Ljunit/framework/Test;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void junit::framework::TestResult::addFailure(const ::junit::framework::Test& arg0, const ::junit::framework::AssertionFailedError& arg1) const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFailure", "(Ljunit/framework/Test;Ljunit/framework/AssertionFailedError;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void junit::framework::TestResult::addListener(const ::junit::framework::TestListener& arg0) const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "addListener", "(Ljunit/framework/TestListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void junit::framework::TestResult::removeListener(const ::junit::framework::TestListener& arg0) const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeListener", "(Ljunit/framework/TestListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void junit::framework::TestResult::endTest(const ::junit::framework::Test& arg0) const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "endTest", "(Ljunit/framework/Test;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t junit::framework::TestResult::errorCount() const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "errorCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Enumeration junit::framework::TestResult::errors() const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "errors", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

int32_t junit::framework::TestResult::failureCount() const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "failureCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Enumeration junit::framework::TestResult::failures() const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "failures", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

int32_t junit::framework::TestResult::runCount() const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "runCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void junit::framework::TestResult::runProtected(const ::junit::framework::Test& arg0, const ::junit::framework::Protectable& arg1) const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "runProtected", "(Ljunit/framework/Test;Ljunit/framework/Protectable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool junit::framework::TestResult::shouldStop() const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldStop", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void junit::framework::TestResult::startTest(const ::junit::framework::Test& arg0) const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTest", "(Ljunit/framework/Test;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void junit::framework::TestResult::stop() const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool junit::framework::TestResult::wasSuccessful() const {
    if (!::junit::framework::TestResult::_class) ::junit::framework::TestResult::_class = java::fetch_class("junit/framework/TestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "wasSuccessful", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void junit::framework::TestListener::addError(const ::junit::framework::Test& arg0, const ::java::lang::Throwable& arg1) const {
    if (!::junit::framework::TestListener::_class) ::junit::framework::TestListener::_class = java::fetch_class("junit/framework/TestListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "addError", "(Ljunit/framework/Test;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void junit::framework::TestListener::addFailure(const ::junit::framework::Test& arg0, const ::junit::framework::AssertionFailedError& arg1) const {
    if (!::junit::framework::TestListener::_class) ::junit::framework::TestListener::_class = java::fetch_class("junit/framework/TestListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFailure", "(Ljunit/framework/Test;Ljunit/framework/AssertionFailedError;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void junit::framework::TestListener::endTest(const ::junit::framework::Test& arg0) const {
    if (!::junit::framework::TestListener::_class) ::junit::framework::TestListener::_class = java::fetch_class("junit/framework/TestListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "endTest", "(Ljunit/framework/Test;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void junit::framework::TestListener::startTest(const ::junit::framework::Test& arg0) const {
    if (!::junit::framework::TestListener::_class) ::junit::framework::TestListener::_class = java::fetch_class("junit/framework/TestListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTest", "(Ljunit/framework/Test;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t junit::framework::Test::countTestCases() const {
    if (!::junit::framework::Test::_class) ::junit::framework::Test::_class = java::fetch_class("junit/framework/Test");
    static jmethodID mid = java::jni->GetMethodID(_class, "countTestCases", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void junit::framework::Test::run(const ::junit::framework::TestResult& arg0) const {
    if (!::junit::framework::Test::_class) ::junit::framework::Test::_class = java::fetch_class("junit/framework/Test");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "(Ljunit/framework/TestResult;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::junit::framework::AssertionFailedError::AssertionFailedError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::junit::framework::AssertionFailedError::_class) ::junit::framework::AssertionFailedError::_class = java::fetch_class("junit/framework/AssertionFailedError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::junit::framework::AssertionFailedError::AssertionFailedError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::junit::framework::AssertionFailedError::_class) ::junit::framework::AssertionFailedError::_class = java::fetch_class("junit/framework/AssertionFailedError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void junit::framework::Protectable::protect() const {
    if (!::junit::framework::Protectable::_class) ::junit::framework::Protectable::_class = java::fetch_class("junit/framework/Protectable");
    static jmethodID mid = java::jni->GetMethodID(_class, "protect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::junit::framework::TestCase::TestCase() : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0) {
    if (!::junit::framework::TestCase::_class) ::junit::framework::TestCase::_class = java::fetch_class("junit/framework/TestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::junit::framework::TestCase::TestCase(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0) {
    if (!::junit::framework::TestCase::_class) ::junit::framework::TestCase::_class = java::fetch_class("junit/framework/TestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t junit::framework::TestCase::countTestCases() const {
    if (!::junit::framework::TestCase::_class) ::junit::framework::TestCase::_class = java::fetch_class("junit/framework/TestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "countTestCases", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::junit::framework::TestResult junit::framework::TestCase::run() const {
    if (!::junit::framework::TestCase::_class) ::junit::framework::TestCase::_class = java::fetch_class("junit/framework/TestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()Ljunit/framework/TestResult;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::junit::framework::TestResult _ret(ret);
    return _ret;
}

void junit::framework::TestCase::run(const ::junit::framework::TestResult& arg0) const {
    if (!::junit::framework::TestCase::_class) ::junit::framework::TestCase::_class = java::fetch_class("junit/framework/TestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "(Ljunit/framework/TestResult;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void junit::framework::TestCase::runBare() const {
    if (!::junit::framework::TestCase::_class) ::junit::framework::TestCase::_class = java::fetch_class("junit/framework/TestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "runBare", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String junit::framework::TestCase::toString() const {
    if (!::junit::framework::TestCase::_class) ::junit::framework::TestCase::_class = java::fetch_class("junit/framework/TestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String junit::framework::TestCase::getName() const {
    if (!::junit::framework::TestCase::_class) ::junit::framework::TestCase::_class = java::fetch_class("junit/framework/TestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void junit::framework::TestCase::setName(const ::java::lang::String& arg0) const {
    if (!::junit::framework::TestCase::_class) ::junit::framework::TestCase::_class = java::fetch_class("junit/framework/TestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::junit::framework::TestFailure::TestFailure(const ::junit::framework::Test& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0) {
    if (!::junit::framework::TestFailure::_class) ::junit::framework::TestFailure::_class = java::fetch_class("junit/framework/TestFailure");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljunit/framework/Test;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::junit::framework::Test junit::framework::TestFailure::failedTest() const {
    if (!::junit::framework::TestFailure::_class) ::junit::framework::TestFailure::_class = java::fetch_class("junit/framework/TestFailure");
    static jmethodID mid = java::jni->GetMethodID(_class, "failedTest", "()Ljunit/framework/Test;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::junit::framework::Test _ret(ret);
    return _ret;
}

::java::lang::Throwable junit::framework::TestFailure::thrownException() const {
    if (!::junit::framework::TestFailure::_class) ::junit::framework::TestFailure::_class = java::fetch_class("junit/framework/TestFailure");
    static jmethodID mid = java::jni->GetMethodID(_class, "thrownException", "()Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Throwable _ret(ret);
    return _ret;
}

::java::lang::String junit::framework::TestFailure::toString() const {
    if (!::junit::framework::TestFailure::_class) ::junit::framework::TestFailure::_class = java::fetch_class("junit/framework/TestFailure");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String junit::framework::TestFailure::trace() const {
    if (!::junit::framework::TestFailure::_class) ::junit::framework::TestFailure::_class = java::fetch_class("junit/framework/TestFailure");
    static jmethodID mid = java::jni->GetMethodID(_class, "trace", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String junit::framework::TestFailure::exceptionMessage() const {
    if (!::junit::framework::TestFailure::_class) ::junit::framework::TestFailure::_class = java::fetch_class("junit/framework/TestFailure");
    static jmethodID mid = java::jni->GetMethodID(_class, "exceptionMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool junit::framework::TestFailure::isFailure() const {
    if (!::junit::framework::TestFailure::_class) ::junit::framework::TestFailure::_class = java::fetch_class("junit/framework/TestFailure");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFailure", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void junit::framework::Assert::assertTrue(const ::java::lang::String& arg0, bool arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertTrue", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertTrue(bool arg0){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertTrue", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void junit::framework::Assert::assertFalse(const ::java::lang::String& arg0, bool arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertFalse", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertFalse(bool arg0){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertFalse", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void junit::framework::Assert::fail(const ::java::lang::String& arg0){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fail", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void junit::framework::Assert::fail(){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fail", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void junit::framework::Assert::assertEquals(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void junit::framework::Assert::assertEquals(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertEquals(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void junit::framework::Assert::assertEquals(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertEquals(const ::java::lang::String& arg0, double arg1, double arg2, double arg3){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;DDD)V");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    double _arg2 = arg2;
    double _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void junit::framework::Assert::assertEquals(double arg0, double arg1, double arg2){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(DDD)V");
    double _arg0 = arg0;
    double _arg1 = arg1;
    double _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void junit::framework::Assert::assertEquals(const ::java::lang::String& arg0, float arg1, float arg2, float arg3){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;FFF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void junit::framework::Assert::assertEquals(float arg0, float arg1, float arg2){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(FFF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void junit::framework::Assert::assertEquals(const ::java::lang::String& arg0, int64_t arg1, int64_t arg2){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;JJ)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void junit::framework::Assert::assertEquals(int64_t arg0, int64_t arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(JJ)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertEquals(const ::java::lang::String& arg0, bool arg1, bool arg2){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;ZZ)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void junit::framework::Assert::assertEquals(bool arg0, bool arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(ZZ)V");
    bool _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertEquals(const ::java::lang::String& arg0, int8_t arg1, int8_t arg2){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;BB)V");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    int8_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void junit::framework::Assert::assertEquals(int8_t arg0, int8_t arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(BB)V");
    int8_t _arg0 = arg0;
    int8_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertEquals(const ::java::lang::String& arg0, uint16_t arg1, uint16_t arg2){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;CC)V");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    uint16_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void junit::framework::Assert::assertEquals(uint16_t arg0, uint16_t arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(CC)V");
    uint16_t _arg0 = arg0;
    uint16_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertEquals(const ::java::lang::String& arg0, int16_t arg1, int16_t arg2){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;SS)V");
    jobject _arg0 = arg0.obj;
    int16_t _arg1 = arg1;
    int16_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void junit::framework::Assert::assertEquals(int16_t arg0, int16_t arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(SS)V");
    int16_t _arg0 = arg0;
    int16_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertEquals(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void junit::framework::Assert::assertEquals(int32_t arg0, int32_t arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertNotNull(const ::java::lang::Object& arg0){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotNull", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void junit::framework::Assert::assertNotNull(const ::java::lang::String& arg0, const ::java::lang::Object& arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotNull", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertNull(const ::java::lang::Object& arg0){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNull", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void junit::framework::Assert::assertNull(const ::java::lang::String& arg0, const ::java::lang::Object& arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNull", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertSame(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertSame", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void junit::framework::Assert::assertSame(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertSame", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void junit::framework::Assert::assertNotSame(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotSame", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void junit::framework::Assert::assertNotSame(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1){
    if (!::junit::framework::Assert::_class) ::junit::framework::Assert::_class = java::fetch_class("junit/framework/Assert");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotSame", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::junit::framework::ComparisonFailure::ComparisonFailure(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0), ::junit::framework::AssertionFailedError((jobject)0) {
    if (!::junit::framework::ComparisonFailure::_class) ::junit::framework::ComparisonFailure::_class = java::fetch_class("junit/framework/ComparisonFailure");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::String junit::framework::ComparisonFailure::getMessage() const {
    if (!::junit::framework::ComparisonFailure::_class) ::junit::framework::ComparisonFailure::_class = java::fetch_class("junit/framework/ComparisonFailure");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::junit::framework::TestSuite::TestSuite() : ::java::lang::Object((jobject)0), ::junit::framework::Test((jobject)0) {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::junit::framework::TestSuite::TestSuite(const ::java::lang::Class& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::junit::framework::Test((jobject)0) {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::junit::framework::TestSuite::TestSuite(const ::java::lang::Class& arg0) : ::java::lang::Object((jobject)0), ::junit::framework::Test((jobject)0) {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::junit::framework::TestSuite::TestSuite(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::junit::framework::Test((jobject)0) {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void junit::framework::TestSuite::addTest(const ::junit::framework::Test& arg0) const {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTest", "(Ljunit/framework/Test;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void junit::framework::TestSuite::addTestSuite(const ::java::lang::Class& arg0) const {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTestSuite", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::junit::framework::Test junit::framework::TestSuite::createTest(const ::java::lang::Class& arg0, const ::java::lang::String& arg1){
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createTest", "(Ljava/lang/Class;Ljava/lang/String;)Ljunit/framework/Test;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::junit::framework::Test _ret(ret);
    return _ret;
}

int32_t junit::framework::TestSuite::countTestCases() const {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "countTestCases", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::reflect::Constructor junit::framework::TestSuite::getTestConstructor(const ::java::lang::Class& arg0){
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTestConstructor", "(Ljava/lang/Class;)Ljava/lang/reflect/Constructor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::reflect::Constructor _ret(ret);
    return _ret;
}

void junit::framework::TestSuite::run(const ::junit::framework::TestResult& arg0) const {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "(Ljunit/framework/TestResult;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void junit::framework::TestSuite::runTest(const ::junit::framework::Test& arg0, const ::junit::framework::TestResult& arg1) const {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "runTest", "(Ljunit/framework/Test;Ljunit/framework/TestResult;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::junit::framework::Test junit::framework::TestSuite::testAt(int32_t arg0) const {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "testAt", "(I)Ljunit/framework/Test;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::junit::framework::Test _ret(ret);
    return _ret;
}

int32_t junit::framework::TestSuite::testCount() const {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "testCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Enumeration junit::framework::TestSuite::tests() const {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "tests", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::lang::String junit::framework::TestSuite::toString() const {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void junit::framework::TestSuite::setName(const ::java::lang::String& arg0) const {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "setName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String junit::framework::TestSuite::getName() const {
    if (!::junit::framework::TestSuite::_class) ::junit::framework::TestSuite::_class = java::fetch_class("junit/framework/TestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

