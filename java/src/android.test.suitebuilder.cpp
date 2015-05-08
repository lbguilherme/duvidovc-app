#include "java-core.hpp"
#include <memory>
#include "android.test.suitebuilder.TestMethod.hpp"
#include "android.test.suitebuilder.TestSuiteBuilder.hpp"
#include "com.android.internal.util.Predicate.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.annotation.Annotation.hpp"
#include "java.lang.reflect.Method.hpp"
#include "java.util.List.hpp"
#include "junit.framework.TestCase.hpp"
#include "junit.framework.TestSuite.hpp"

jclass android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests::_class = nullptr;
jclass android::test::suitebuilder::TestMethod::_class = nullptr;
jclass android::test::suitebuilder::TestSuiteBuilder::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests::TestSuiteBuilder_FailedToCreateTests(const ::java::lang::Exception& arg0) : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests::_class) ::android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests::_class = java::fetch_class("android/test/suitebuilder/TestSuiteBuilder$FailedToCreateTests");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests::testSuiteConstructionFailed() const {
    if (!::android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests::_class) ::android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests::_class = java::fetch_class("android/test/suitebuilder/TestSuiteBuilder$FailedToCreateTests");
    static jmethodID mid = java::jni->GetMethodID(_class, "testSuiteConstructionFailed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::suitebuilder::TestMethod::TestMethod(const ::java::lang::reflect::Method& arg0, const ::java::lang::Class& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::test::suitebuilder::TestMethod::_class) ::android::test::suitebuilder::TestMethod::_class = java::fetch_class("android/test/suitebuilder/TestMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/reflect/Method;Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::suitebuilder::TestMethod::TestMethod(const ::java::lang::String& arg0, const ::java::lang::Class& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::test::suitebuilder::TestMethod::_class) ::android::test::suitebuilder::TestMethod::_class = java::fetch_class("android/test/suitebuilder/TestMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::suitebuilder::TestMethod::TestMethod(const ::junit::framework::TestCase& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::test::suitebuilder::TestMethod::_class) ::android::test::suitebuilder::TestMethod::_class = java::fetch_class("android/test/suitebuilder/TestMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljunit/framework/TestCase;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::test::suitebuilder::TestMethod::getName() const {
    if (!::android::test::suitebuilder::TestMethod::_class) ::android::test::suitebuilder::TestMethod::_class = java::fetch_class("android/test/suitebuilder/TestMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::test::suitebuilder::TestMethod::getEnclosingClassname() const {
    if (!::android::test::suitebuilder::TestMethod::_class) ::android::test::suitebuilder::TestMethod::_class = java::fetch_class("android/test/suitebuilder/TestMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnclosingClassname", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::annotation::Annotation android::test::suitebuilder::TestMethod::getAnnotation(const ::java::lang::Class& arg0) const {
    if (!::android::test::suitebuilder::TestMethod::_class) ::android::test::suitebuilder::TestMethod::_class = java::fetch_class("android/test/suitebuilder/TestMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::annotation::Annotation _ret(ret);
    return _ret;
}

::java::lang::Class android::test::suitebuilder::TestMethod::getEnclosingClass() const {
    if (!::android::test::suitebuilder::TestMethod::_class) ::android::test::suitebuilder::TestMethod::_class = java::fetch_class("android/test/suitebuilder/TestMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnclosingClass", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

::junit::framework::TestCase android::test::suitebuilder::TestMethod::createTest() const {
    if (!::android::test::suitebuilder::TestMethod::_class) ::android::test::suitebuilder::TestMethod::_class = java::fetch_class("android/test/suitebuilder/TestMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "createTest", "()Ljunit/framework/TestCase;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::junit::framework::TestCase _ret(ret);
    return _ret;
}

bool android::test::suitebuilder::TestMethod::equals(const ::java::lang::Object& arg0) const {
    if (!::android::test::suitebuilder::TestMethod::_class) ::android::test::suitebuilder::TestMethod::_class = java::fetch_class("android/test/suitebuilder/TestMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::test::suitebuilder::TestMethod::hashCode() const {
    if (!::android::test::suitebuilder::TestMethod::_class) ::android::test::suitebuilder::TestMethod::_class = java::fetch_class("android/test/suitebuilder/TestMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::test::suitebuilder::TestMethod::toString() const {
    if (!::android::test::suitebuilder::TestMethod::_class) ::android::test::suitebuilder::TestMethod::_class = java::fetch_class("android/test/suitebuilder/TestMethod");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::suitebuilder::TestSuiteBuilder::TestSuiteBuilder(const ::java::lang::Class& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::test::suitebuilder::TestSuiteBuilder::_class) ::android::test::suitebuilder::TestSuiteBuilder::_class = java::fetch_class("android/test/suitebuilder/TestSuiteBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::suitebuilder::TestSuiteBuilder::TestSuiteBuilder(const ::java::lang::String& arg0, const ::java::lang::ClassLoader& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::test::suitebuilder::TestSuiteBuilder::_class) ::android::test::suitebuilder::TestSuiteBuilder::_class = java::fetch_class("android/test/suitebuilder/TestSuiteBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::test::suitebuilder::TestSuiteBuilder android::test::suitebuilder::TestSuiteBuilder::includePackages(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::test::suitebuilder::TestSuiteBuilder::_class) ::android::test::suitebuilder::TestSuiteBuilder::_class = java::fetch_class("android/test/suitebuilder/TestSuiteBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "includePackages", "([Ljava/lang/String;)Landroid/test/suitebuilder/TestSuiteBuilder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::test::suitebuilder::TestSuiteBuilder _ret(ret);
    return _ret;
}

::android::test::suitebuilder::TestSuiteBuilder android::test::suitebuilder::TestSuiteBuilder::excludePackages(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::test::suitebuilder::TestSuiteBuilder::_class) ::android::test::suitebuilder::TestSuiteBuilder::_class = java::fetch_class("android/test/suitebuilder/TestSuiteBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "excludePackages", "([Ljava/lang/String;)Landroid/test/suitebuilder/TestSuiteBuilder;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::test::suitebuilder::TestSuiteBuilder _ret(ret);
    return _ret;
}

::android::test::suitebuilder::TestSuiteBuilder android::test::suitebuilder::TestSuiteBuilder::addRequirements(const ::java::util::List& arg0) const {
    if (!::android::test::suitebuilder::TestSuiteBuilder::_class) ::android::test::suitebuilder::TestSuiteBuilder::_class = java::fetch_class("android/test/suitebuilder/TestSuiteBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRequirements", "(Ljava/util/List;)Landroid/test/suitebuilder/TestSuiteBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::test::suitebuilder::TestSuiteBuilder _ret(ret);
    return _ret;
}

::android::test::suitebuilder::TestSuiteBuilder android::test::suitebuilder::TestSuiteBuilder::includeAllPackagesUnderHere() const {
    if (!::android::test::suitebuilder::TestSuiteBuilder::_class) ::android::test::suitebuilder::TestSuiteBuilder::_class = java::fetch_class("android/test/suitebuilder/TestSuiteBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "includeAllPackagesUnderHere", "()Landroid/test/suitebuilder/TestSuiteBuilder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::test::suitebuilder::TestSuiteBuilder _ret(ret);
    return _ret;
}

::android::test::suitebuilder::TestSuiteBuilder android::test::suitebuilder::TestSuiteBuilder::named(const ::java::lang::String& arg0) const {
    if (!::android::test::suitebuilder::TestSuiteBuilder::_class) ::android::test::suitebuilder::TestSuiteBuilder::_class = java::fetch_class("android/test/suitebuilder/TestSuiteBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "named", "(Ljava/lang/String;)Landroid/test/suitebuilder/TestSuiteBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::test::suitebuilder::TestSuiteBuilder _ret(ret);
    return _ret;
}

::junit::framework::TestSuite android::test::suitebuilder::TestSuiteBuilder::build() const {
    if (!::android::test::suitebuilder::TestSuiteBuilder::_class) ::android::test::suitebuilder::TestSuiteBuilder::_class = java::fetch_class("android/test/suitebuilder/TestSuiteBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Ljunit/framework/TestSuite;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::junit::framework::TestSuite _ret(ret);
    return _ret;
}

::android::test::suitebuilder::TestSuiteBuilder android::test::suitebuilder::TestSuiteBuilder::addRequirements(const std::vector< ::com::android::internal::util::Predicate>& arg0) const {
    if (!::android::test::suitebuilder::TestSuiteBuilder::_class) ::android::test::suitebuilder::TestSuiteBuilder::_class = java::fetch_class("android/test/suitebuilder/TestSuiteBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRequirements", "([Lcom/android/internal/util/Predicate;)Landroid/test/suitebuilder/TestSuiteBuilder;");
    unsigned arg0s = arg0.size();
    if (!::com::android::internal::util::Predicate::_class) ::com::android::internal::util::Predicate::_class = java::fetch_class("com/android/internal/util/Predicate");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::com::android::internal::util::Predicate::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::com::android::internal::util::Predicate& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::test::suitebuilder::TestSuiteBuilder _ret(ret);
    return _ret;
}

