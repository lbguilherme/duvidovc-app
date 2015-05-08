#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.app.Application.hpp"
#include "android.app.Instrumentation.hpp"
#include "android.app.Service.hpp"
#include "android.content.BroadcastReceiver.hpp"
#include "android.content.ContentProvider.hpp"
#include "android.content.ContentResolver.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.content.IntentFilter.hpp"
#include "android.content.Loader.hpp"
#include "android.content.ServiceConnection.hpp"
#include "android.database.DatabaseErrorHandler.hpp"
#include "android.database.sqlite.SQLiteDatabase.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.test.ActivityInstrumentationTestCase.hpp"
#include "android.test.ActivityInstrumentationTestCase2.hpp"
#include "android.test.ActivityTestCase.hpp"
#include "android.test.ActivityUnitTestCase.hpp"
#include "android.test.AndroidTestCase.hpp"
#include "android.test.AndroidTestRunner.hpp"
#include "android.test.ApplicationTestCase.hpp"
#include "android.test.AssertionFailedError.hpp"
#include "android.test.ComparisonFailure.hpp"
#include "android.test.FlakyTest.hpp"
#include "android.test.InstrumentationTestCase.hpp"
#include "android.test.InstrumentationTestRunner.hpp"
#include "android.test.InstrumentationTestSuite.hpp"
#include "android.test.IsolatedContext.hpp"
#include "android.test.LoaderTestCase.hpp"
#include "android.test.MoreAsserts.hpp"
#include "android.test.PerformanceTestCase.hpp"
#include "android.test.ProviderTestCase.hpp"
#include "android.test.ProviderTestCase2.hpp"
#include "android.test.RenamingDelegatingContext.hpp"
#include "android.test.ServiceTestCase.hpp"
#include "android.test.SingleLaunchActivityTestCase.hpp"
#include "android.test.SyncBaseInstrumentation.hpp"
#include "android.test.TestSuiteProvider.hpp"
#include "android.test.TouchUtils.hpp"
#include "android.test.UiThreadTest.hpp"
#include "android.test.ViewAsserts.hpp"
#include "android.test.mock.MockContentResolver.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewGroup.hpp"
#include "java.io.File.hpp"
#include "java.io.FileInputStream.hpp"
#include "java.io.FileOutputStream.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Iterable.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "java.util.Set.hpp"
#include "java.util.regex.MatchResult.hpp"
#include "junit.framework.Test.hpp"
#include "junit.framework.TestListener.hpp"
#include "junit.framework.TestResult.hpp"
#include "junit.framework.TestSuite.hpp"

jclass android::test::InstrumentationTestCase::_class = nullptr;
jclass android::test::ActivityInstrumentationTestCase2::_class = nullptr;
jclass android::test::IsolatedContext::_class = nullptr;
jclass android::test::TestSuiteProvider::_class = nullptr;
jclass android::test::LoaderTestCase::_class = nullptr;
jclass android::test::ViewAsserts::_class = nullptr;
jclass android::test::RenamingDelegatingContext::_class = nullptr;
jclass android::test::ApplicationTestCase::_class = nullptr;
jclass android::test::AndroidTestRunner::_class = nullptr;
jclass android::test::ServiceTestCase::_class = nullptr;
jclass android::test::MoreAsserts::_class = nullptr;
jclass android::test::InstrumentationTestRunner::_class = nullptr;
jclass android::test::TouchUtils::_class = nullptr;
jclass android::test::InstrumentationTestSuite::_class = nullptr;
jclass android::test::AssertionFailedError::_class = nullptr;
jclass android::test::ActivityInstrumentationTestCase::_class = nullptr;
jclass android::test::ActivityTestCase::_class = nullptr;
jclass android::test::ProviderTestCase::_class = nullptr;
jclass android::test::AndroidTestCase::_class = nullptr;
jclass android::test::ActivityUnitTestCase::_class = nullptr;
jclass android::test::UiThreadTest::_class = nullptr;
jclass android::test::PerformanceTestCase::_class = nullptr;
jclass android::test::FlakyTest::_class = nullptr;
jclass android::test::ProviderTestCase2::_class = nullptr;
jclass android::test::SingleLaunchActivityTestCase::_class = nullptr;
jclass android::test::ComparisonFailure::_class = nullptr;
jclass android::test::SyncBaseInstrumentation::_class = nullptr;
jclass android::test::PerformanceTestCase_Intermediates::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::InstrumentationTestCase::InstrumentationTestCase() : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::InstrumentationTestCase::_class) ::android::test::InstrumentationTestCase::_class = java::fetch_class("android/test/InstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::test::InstrumentationTestCase::injectInstrumentation(const ::android::app::Instrumentation& arg0) const {
    if (!::android::test::InstrumentationTestCase::_class) ::android::test::InstrumentationTestCase::_class = java::fetch_class("android/test/InstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "injectInstrumentation", "(Landroid/app/Instrumentation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::InstrumentationTestCase::injectInsrumentation(const ::android::app::Instrumentation& arg0) const {
    if (!::android::test::InstrumentationTestCase::_class) ::android::test::InstrumentationTestCase::_class = java::fetch_class("android/test/InstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "injectInsrumentation", "(Landroid/app/Instrumentation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Instrumentation android::test::InstrumentationTestCase::getInstrumentation() const {
    if (!::android::test::InstrumentationTestCase::_class) ::android::test::InstrumentationTestCase::_class = java::fetch_class("android/test/InstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstrumentation", "()Landroid/app/Instrumentation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Instrumentation _ret(ret);
    return _ret;
}

::android::app::Activity android::test::InstrumentationTestCase::launchActivity(const ::java::lang::String& arg0, const ::java::lang::Class& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::test::InstrumentationTestCase::_class) ::android::test::InstrumentationTestCase::_class = java::fetch_class("android/test/InstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "launchActivity", "(Ljava/lang/String;Ljava/lang/Class;Landroid/os/Bundle;)Landroid/app/Activity;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::Activity _ret(ret);
    return _ret;
}

::android::app::Activity android::test::InstrumentationTestCase::launchActivityWithIntent(const ::java::lang::String& arg0, const ::java::lang::Class& arg1, const ::android::content::Intent& arg2) const {
    if (!::android::test::InstrumentationTestCase::_class) ::android::test::InstrumentationTestCase::_class = java::fetch_class("android/test/InstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "launchActivityWithIntent", "(Ljava/lang/String;Ljava/lang/Class;Landroid/content/Intent;)Landroid/app/Activity;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::app::Activity _ret(ret);
    return _ret;
}

void android::test::InstrumentationTestCase::runTestOnUiThread(const ::java::lang::Runnable& arg0) const {
    if (!::android::test::InstrumentationTestCase::_class) ::android::test::InstrumentationTestCase::_class = java::fetch_class("android/test/InstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "runTestOnUiThread", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::InstrumentationTestCase::sendKeys(const ::java::lang::String& arg0) const {
    if (!::android::test::InstrumentationTestCase::_class) ::android::test::InstrumentationTestCase::_class = java::fetch_class("android/test/InstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendKeys", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::InstrumentationTestCase::sendKeys(const std::vector< int32_t>& arg0) const {
    if (!::android::test::InstrumentationTestCase::_class) ::android::test::InstrumentationTestCase::_class = java::fetch_class("android/test/InstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendKeys", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::InstrumentationTestCase::sendRepeatedKeys(const std::vector< int32_t>& arg0) const {
    if (!::android::test::InstrumentationTestCase::_class) ::android::test::InstrumentationTestCase::_class = java::fetch_class("android/test/InstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendRepeatedKeys", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::ActivityInstrumentationTestCase2::ActivityInstrumentationTestCase2(const ::java::lang::String& arg0, const ::java::lang::Class& arg1) : ::java::lang::Object((jobject)0), ::android::test::ActivityTestCase((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::ActivityInstrumentationTestCase2::_class) ::android::test::ActivityInstrumentationTestCase2::_class = java::fetch_class("android/test/ActivityInstrumentationTestCase2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::ActivityInstrumentationTestCase2::ActivityInstrumentationTestCase2(const ::java::lang::Class& arg0) : ::java::lang::Object((jobject)0), ::android::test::ActivityTestCase((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::ActivityInstrumentationTestCase2::_class) ::android::test::ActivityInstrumentationTestCase2::_class = java::fetch_class("android/test/ActivityInstrumentationTestCase2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::app::Activity android::test::ActivityInstrumentationTestCase2::getActivity() const {
    if (!::android::test::ActivityInstrumentationTestCase2::_class) ::android::test::ActivityInstrumentationTestCase2::_class = java::fetch_class("android/test/ActivityInstrumentationTestCase2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivity", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

void android::test::ActivityInstrumentationTestCase2::setActivityIntent(const ::android::content::Intent& arg0) const {
    if (!::android::test::ActivityInstrumentationTestCase2::_class) ::android::test::ActivityInstrumentationTestCase2::_class = java::fetch_class("android/test/ActivityInstrumentationTestCase2");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActivityIntent", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::ActivityInstrumentationTestCase2::setActivityInitialTouchMode(bool arg0) const {
    if (!::android::test::ActivityInstrumentationTestCase2::_class) ::android::test::ActivityInstrumentationTestCase2::_class = java::fetch_class("android/test/ActivityInstrumentationTestCase2");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActivityInitialTouchMode", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::IsolatedContext::IsolatedContext(const ::android::content::ContentResolver& arg0, const ::android::content::Context& arg1) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::test::IsolatedContext::_class) ::android::test::IsolatedContext::_class = java::fetch_class("android/test/IsolatedContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/ContentResolver;Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::util::List android::test::IsolatedContext::getAndClearBroadcastIntents() const {
    if (!::android::test::IsolatedContext::_class) ::android::test::IsolatedContext::_class = java::fetch_class("android/test/IsolatedContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndClearBroadcastIntents", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::content::ContentResolver android::test::IsolatedContext::getContentResolver() const {
    if (!::android::test::IsolatedContext::_class) ::android::test::IsolatedContext::_class = java::fetch_class("android/test/IsolatedContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentResolver", "()Landroid/content/ContentResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ContentResolver _ret(ret);
    return _ret;
}

bool android::test::IsolatedContext::bindService(const ::android::content::Intent& arg0, const ::android::content::ServiceConnection& arg1, int32_t arg2) const {
    if (!::android::test::IsolatedContext::_class) ::android::test::IsolatedContext::_class = java::fetch_class("android/test/IsolatedContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindService", "(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::content::Intent android::test::IsolatedContext::registerReceiver(const ::android::content::BroadcastReceiver& arg0, const ::android::content::IntentFilter& arg1) const {
    if (!::android::test::IsolatedContext::_class) ::android::test::IsolatedContext::_class = java::fetch_class("android/test/IsolatedContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerReceiver", "(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::test::IsolatedContext::unregisterReceiver(const ::android::content::BroadcastReceiver& arg0) const {
    if (!::android::test::IsolatedContext::_class) ::android::test::IsolatedContext::_class = java::fetch_class("android/test/IsolatedContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterReceiver", "(Landroid/content/BroadcastReceiver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::IsolatedContext::sendBroadcast(const ::android::content::Intent& arg0) const {
    if (!::android::test::IsolatedContext::_class) ::android::test::IsolatedContext::_class = java::fetch_class("android/test/IsolatedContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendBroadcast", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::IsolatedContext::sendOrderedBroadcast(const ::android::content::Intent& arg0, const ::java::lang::String& arg1) const {
    if (!::android::test::IsolatedContext::_class) ::android::test::IsolatedContext::_class = java::fetch_class("android/test/IsolatedContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendOrderedBroadcast", "(Landroid/content/Intent;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::test::IsolatedContext::checkUriPermission(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::test::IsolatedContext::_class) ::android::test::IsolatedContext::_class = java::fetch_class("android/test/IsolatedContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkUriPermission", "(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;III)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

int32_t android::test::IsolatedContext::checkUriPermission(const ::android::net::Uri& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::test::IsolatedContext::_class) ::android::test::IsolatedContext::_class = java::fetch_class("android/test/IsolatedContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkUriPermission", "(Landroid/net/Uri;III)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::java::lang::Object android::test::IsolatedContext::getSystemService(const ::java::lang::String& arg0) const {
    if (!::android::test::IsolatedContext::_class) ::android::test::IsolatedContext::_class = java::fetch_class("android/test/IsolatedContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::io::File android::test::IsolatedContext::getFilesDir() const {
    if (!::android::test::IsolatedContext::_class) ::android::test::IsolatedContext::_class = java::fetch_class("android/test/IsolatedContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilesDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::junit::framework::TestSuite android::test::TestSuiteProvider::getTestSuite() const {
    if (!::android::test::TestSuiteProvider::_class) ::android::test::TestSuiteProvider::_class = java::fetch_class("android/test/TestSuiteProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTestSuite", "()Ljunit/framework/TestSuite;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::junit::framework::TestSuite _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::LoaderTestCase::LoaderTestCase() : ::java::lang::Object((jobject)0), ::android::test::AndroidTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::LoaderTestCase::_class) ::android::test::LoaderTestCase::_class = java::fetch_class("android/test/LoaderTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object android::test::LoaderTestCase::getLoaderResultSynchronously(const ::android::content::Loader& arg0) const {
    if (!::android::test::LoaderTestCase::_class) ::android::test::LoaderTestCase::_class = java::fetch_class("android/test/LoaderTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoaderResultSynchronously", "(Landroid/content/Loader;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::test::ViewAsserts::assertOnScreen(const ::android::view::View& arg0, const ::android::view::View& arg1){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertOnScreen", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::ViewAsserts::assertOffScreenBelow(const ::android::view::View& arg0, const ::android::view::View& arg1){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertOffScreenBelow", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::ViewAsserts::assertOffScreenAbove(const ::android::view::View& arg0, const ::android::view::View& arg1){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertOffScreenAbove", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::ViewAsserts::assertHasScreenCoordinates(const ::android::view::View& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertHasScreenCoordinates", "(Landroid/view/View;Landroid/view/View;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::test::ViewAsserts::assertBaselineAligned(const ::android::view::View& arg0, const ::android::view::View& arg1){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertBaselineAligned", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::ViewAsserts::assertRightAligned(const ::android::view::View& arg0, const ::android::view::View& arg1){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertRightAligned", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::ViewAsserts::assertRightAligned(const ::android::view::View& arg0, const ::android::view::View& arg1, int32_t arg2){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertRightAligned", "(Landroid/view/View;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::ViewAsserts::assertLeftAligned(const ::android::view::View& arg0, const ::android::view::View& arg1){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertLeftAligned", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::ViewAsserts::assertLeftAligned(const ::android::view::View& arg0, const ::android::view::View& arg1, int32_t arg2){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertLeftAligned", "(Landroid/view/View;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::ViewAsserts::assertBottomAligned(const ::android::view::View& arg0, const ::android::view::View& arg1){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertBottomAligned", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::ViewAsserts::assertBottomAligned(const ::android::view::View& arg0, const ::android::view::View& arg1, int32_t arg2){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertBottomAligned", "(Landroid/view/View;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::ViewAsserts::assertTopAligned(const ::android::view::View& arg0, const ::android::view::View& arg1){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertTopAligned", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::ViewAsserts::assertTopAligned(const ::android::view::View& arg0, const ::android::view::View& arg1, int32_t arg2){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertTopAligned", "(Landroid/view/View;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::ViewAsserts::assertHorizontalCenterAligned(const ::android::view::View& arg0, const ::android::view::View& arg1){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertHorizontalCenterAligned", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::ViewAsserts::assertVerticalCenterAligned(const ::android::view::View& arg0, const ::android::view::View& arg1){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertVerticalCenterAligned", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::ViewAsserts::assertGroupIntegrity(const ::android::view::ViewGroup& arg0){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertGroupIntegrity", "(Landroid/view/ViewGroup;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::test::ViewAsserts::assertGroupContains(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertGroupContains", "(Landroid/view/ViewGroup;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::ViewAsserts::assertGroupNotContains(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1){
    if (!::android::test::ViewAsserts::_class) ::android::test::ViewAsserts::_class = java::fetch_class("android/test/ViewAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertGroupNotContains", "(Landroid/view/ViewGroup;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::RenamingDelegatingContext::RenamingDelegatingContext(const ::android::content::Context& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::RenamingDelegatingContext::RenamingDelegatingContext(const ::android::content::Context& arg0, const ::android::content::Context& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/content/Context;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::content::ContentProvider android::test::RenamingDelegatingContext::providerWithRenamedContext(const ::java::lang::Class& arg0, const ::android::content::Context& arg1, const ::java::lang::String& arg2){
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "providerWithRenamedContext", "(Ljava/lang/Class;Landroid/content/Context;Ljava/lang/String;)Landroid/content/ContentProvider;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::content::ContentProvider _ret(ret);
    return _ret;
}

::android::content::ContentProvider android::test::RenamingDelegatingContext::providerWithRenamedContext(const ::java::lang::Class& arg0, const ::android::content::Context& arg1, const ::java::lang::String& arg2, bool arg3){
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "providerWithRenamedContext", "(Ljava/lang/Class;Landroid/content/Context;Ljava/lang/String;Z)Landroid/content/ContentProvider;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::content::ContentProvider _ret(ret);
    return _ret;
}

void android::test::RenamingDelegatingContext::makeExistingFilesAndDbsAccessible() const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeExistingFilesAndDbsAccessible", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::test::RenamingDelegatingContext::getDatabasePrefix() const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabasePrefix", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::test::RenamingDelegatingContext::openOrCreateDatabase(const ::java::lang::String& arg0, int32_t arg1, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg2) const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "openOrCreateDatabase", "(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::test::RenamingDelegatingContext::openOrCreateDatabase(const ::java::lang::String& arg0, int32_t arg1, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg2, const ::android::database::DatabaseErrorHandler& arg3) const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "openOrCreateDatabase", "(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

bool android::test::RenamingDelegatingContext::deleteDatabase(const ::java::lang::String& arg0) const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteDatabase", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::io::File android::test::RenamingDelegatingContext::getDatabasePath(const ::java::lang::String& arg0) const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabasePath", "(Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::test::RenamingDelegatingContext::databaseList() const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "databaseList", "()[Ljava/lang/String;");
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

::java::io::FileInputStream android::test::RenamingDelegatingContext::openFileInput(const ::java::lang::String& arg0) const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFileInput", "(Ljava/lang/String;)Ljava/io/FileInputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::FileInputStream _ret(ret);
    return _ret;
}

::java::io::FileOutputStream android::test::RenamingDelegatingContext::openFileOutput(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFileOutput", "(Ljava/lang/String;I)Ljava/io/FileOutputStream;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::FileOutputStream _ret(ret);
    return _ret;
}

::java::io::File android::test::RenamingDelegatingContext::getFileStreamPath(const ::java::lang::String& arg0) const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileStreamPath", "(Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

bool android::test::RenamingDelegatingContext::deleteFile(const ::java::lang::String& arg0) const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteFile", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::String> android::test::RenamingDelegatingContext::fileList() const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "fileList", "()[Ljava/lang/String;");
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

::java::io::File android::test::RenamingDelegatingContext::getCacheDir() const {
    if (!::android::test::RenamingDelegatingContext::_class) ::android::test::RenamingDelegatingContext::_class = java::fetch_class("android/test/RenamingDelegatingContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCacheDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::ApplicationTestCase::ApplicationTestCase(const ::java::lang::Class& arg0) : ::java::lang::Object((jobject)0), ::android::test::AndroidTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::ApplicationTestCase::_class) ::android::test::ApplicationTestCase::_class = java::fetch_class("android/test/ApplicationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::app::Application android::test::ApplicationTestCase::getApplication() const {
    if (!::android::test::ApplicationTestCase::_class) ::android::test::ApplicationTestCase::_class = java::fetch_class("android/test/ApplicationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplication", "()Landroid/app/Application;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Application _ret(ret);
    return _ret;
}

::android::content::Context android::test::ApplicationTestCase::getSystemContext() const {
    if (!::android::test::ApplicationTestCase::_class) ::android::test::ApplicationTestCase::_class = java::fetch_class("android/test/ApplicationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

void android::test::ApplicationTestCase::testApplicationTestCaseSetUpProperly() const {
    if (!::android::test::ApplicationTestCase::_class) ::android::test::ApplicationTestCase::_class = java::fetch_class("android/test/ApplicationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "testApplicationTestCaseSetUpProperly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::AndroidTestRunner::AndroidTestRunner() : ::java::lang::Object((jobject)0), ::junit::framework::TestListener((jobject)0), ::junit::runner::BaseTestRunner((jobject)0) {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::test::AndroidTestRunner::setTestClassName(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTestClassName", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::test::AndroidTestRunner::setTest(const ::junit::framework::Test& arg0) const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTest", "(Ljunit/framework/Test;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::AndroidTestRunner::clearTestListeners() const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearTestListeners", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::test::AndroidTestRunner::addTestListener(const ::junit::framework::TestListener& arg0) const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTestListener", "(Ljunit/framework/TestListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::test::AndroidTestRunner::getTestCases() const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTestCases", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String android::test::AndroidTestRunner::getTestClassName() const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTestClassName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::junit::framework::TestResult android::test::AndroidTestRunner::getTestResult() const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTestResult", "()Ljunit/framework/TestResult;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::junit::framework::TestResult _ret(ret);
    return _ret;
}

void android::test::AndroidTestRunner::runTest() const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "runTest", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::test::AndroidTestRunner::runTest(const ::junit::framework::TestResult& arg0) const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "runTest", "(Ljunit/framework/TestResult;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::AndroidTestRunner::setContext(const ::android::content::Context& arg0) const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContext", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::AndroidTestRunner::setInstrumentation(const ::android::app::Instrumentation& arg0) const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInstrumentation", "(Landroid/app/Instrumentation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::AndroidTestRunner::setInstrumentaiton(const ::android::app::Instrumentation& arg0) const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInstrumentaiton", "(Landroid/app/Instrumentation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::AndroidTestRunner::testStarted(const ::java::lang::String& arg0) const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "testStarted", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::AndroidTestRunner::testEnded(const ::java::lang::String& arg0) const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "testEnded", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::AndroidTestRunner::testFailed(int32_t arg0, const ::junit::framework::Test& arg1, const ::java::lang::Throwable& arg2) const {
    if (!::android::test::AndroidTestRunner::_class) ::android::test::AndroidTestRunner::_class = java::fetch_class("android/test/AndroidTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "testFailed", "(ILjunit/framework/Test;Ljava/lang/Throwable;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::ServiceTestCase::ServiceTestCase(const ::java::lang::Class& arg0) : ::java::lang::Object((jobject)0), ::android::test::AndroidTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::ServiceTestCase::_class) ::android::test::ServiceTestCase::_class = java::fetch_class("android/test/ServiceTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::app::Service android::test::ServiceTestCase::getService() const {
    if (!::android::test::ServiceTestCase::_class) ::android::test::ServiceTestCase::_class = java::fetch_class("android/test/ServiceTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getService", "()Landroid/app/Service;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Service _ret(ret);
    return _ret;
}

void android::test::ServiceTestCase::setApplication(const ::android::app::Application& arg0) const {
    if (!::android::test::ServiceTestCase::_class) ::android::test::ServiceTestCase::_class = java::fetch_class("android/test/ServiceTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setApplication", "(Landroid/app/Application;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Application android::test::ServiceTestCase::getApplication() const {
    if (!::android::test::ServiceTestCase::_class) ::android::test::ServiceTestCase::_class = java::fetch_class("android/test/ServiceTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplication", "()Landroid/app/Application;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Application _ret(ret);
    return _ret;
}

::android::content::Context android::test::ServiceTestCase::getSystemContext() const {
    if (!::android::test::ServiceTestCase::_class) ::android::test::ServiceTestCase::_class = java::fetch_class("android/test/ServiceTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

void android::test::ServiceTestCase::testServiceTestCaseSetUpProperly() const {
    if (!::android::test::ServiceTestCase::_class) ::android::test::ServiceTestCase::_class = java::fetch_class("android/test/ServiceTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "testServiceTestCaseSetUpProperly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::test::MoreAsserts::assertAssignableFrom(const ::java::lang::Class& arg0, const ::java::lang::Object& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertAssignableFrom", "(Ljava/lang/Class;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertAssignableFrom(const ::java::lang::Class& arg0, const ::java::lang::Class& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertAssignableFrom", "(Ljava/lang/Class;Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertNotEqual(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotEqual", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::MoreAsserts::assertNotEqual(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotEqual", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertEquals(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1, const std::vector< int8_t>& arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;[B[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::MoreAsserts::assertEquals(const std::vector< int8_t>& arg0, const std::vector< int8_t>& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "([B[B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertEquals(const ::java::lang::String& arg0, const std::vector< int32_t>& arg1, const std::vector< int32_t>& arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;[I[I)V");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::MoreAsserts::assertEquals(const std::vector< int32_t>& arg0, const std::vector< int32_t>& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "([I[I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertEquals(const ::java::lang::String& arg0, const std::vector< double>& arg1, const std::vector< double>& arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;[D[D)V");
    jobject _arg0 = arg0.obj;
    jdoubleArray _arg1 = java::jni->NewDoubleArray(arg1.size());
    java::jni->SetDoubleArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jdoubleArray _arg2 = java::jni->NewDoubleArray(arg2.size());
    java::jni->SetDoubleArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::MoreAsserts::assertEquals(const std::vector< double>& arg0, const std::vector< double>& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "([D[D)V");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jdoubleArray _arg1 = java::jni->NewDoubleArray(arg1.size());
    java::jni->SetDoubleArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertEquals(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1, const std::vector< ::java::lang::Object>& arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::MoreAsserts::assertEquals(const std::vector< ::java::lang::Object>& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "([Ljava/lang/Object;[Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertEquals(const ::java::lang::String& arg0, const ::java::util::Set& arg1, const ::java::util::Set& arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/lang/String;Ljava/util/Set;Ljava/util/Set;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::MoreAsserts::assertEquals(const ::java::util::Set& arg0, const ::java::util::Set& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEquals", "(Ljava/util/Set;Ljava/util/Set;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::util::regex::MatchResult android::test::MoreAsserts::assertMatchesRegex(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertMatchesRegex", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/regex/MatchResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::util::regex::MatchResult _ret(ret);
    return _ret;
}

::java::util::regex::MatchResult android::test::MoreAsserts::assertMatchesRegex(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertMatchesRegex", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/regex/MatchResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::regex::MatchResult _ret(ret);
    return _ret;
}

::java::util::regex::MatchResult android::test::MoreAsserts::assertContainsRegex(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertContainsRegex", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/regex/MatchResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::util::regex::MatchResult _ret(ret);
    return _ret;
}

::java::util::regex::MatchResult android::test::MoreAsserts::assertContainsRegex(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertContainsRegex", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/regex/MatchResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::regex::MatchResult _ret(ret);
    return _ret;
}

void android::test::MoreAsserts::assertNotMatchesRegex(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotMatchesRegex", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::MoreAsserts::assertNotMatchesRegex(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotMatchesRegex", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertNotContainsRegex(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotContainsRegex", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::MoreAsserts::assertNotContainsRegex(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotContainsRegex", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertContentsInOrder(const ::java::lang::String& arg0, const ::java::lang::Iterable& arg1, const std::vector< ::java::lang::Object>& arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertContentsInOrder", "(Ljava/lang/String;Ljava/lang/Iterable;[Ljava/lang/Object;)V");
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
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::MoreAsserts::assertContentsInOrder(const ::java::lang::Iterable& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertContentsInOrder", "(Ljava/lang/Iterable;[Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertContentsInAnyOrder(const ::java::lang::String& arg0, const ::java::lang::Iterable& arg1, const std::vector< ::java::lang::Object>& arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertContentsInAnyOrder", "(Ljava/lang/String;Ljava/lang/Iterable;[Ljava/lang/Object;)V");
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
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::MoreAsserts::assertContentsInAnyOrder(const ::java::lang::Iterable& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertContentsInAnyOrder", "(Ljava/lang/Iterable;[Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertEmpty(const ::java::lang::String& arg0, const ::java::lang::Iterable& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEmpty", "(Ljava/lang/String;Ljava/lang/Iterable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertEmpty(const ::java::lang::Iterable& arg0){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEmpty", "(Ljava/lang/Iterable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::test::MoreAsserts::assertEmpty(const ::java::lang::String& arg0, const ::java::util::Map& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEmpty", "(Ljava/lang/String;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertEmpty(const ::java::util::Map& arg0){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertEmpty", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::test::MoreAsserts::assertNotEmpty(const ::java::lang::String& arg0, const ::java::lang::Iterable& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotEmpty", "(Ljava/lang/String;Ljava/lang/Iterable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertNotEmpty(const ::java::lang::Iterable& arg0){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotEmpty", "(Ljava/lang/Iterable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::test::MoreAsserts::assertNotEmpty(const ::java::lang::String& arg0, const ::java::util::Map& arg1){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotEmpty", "(Ljava/lang/String;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::MoreAsserts::assertNotEmpty(const ::java::util::Map& arg0){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "assertNotEmpty", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::test::MoreAsserts::checkEqualsAndHashCodeMethods(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2, bool arg3){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "checkEqualsAndHashCodeMethods", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::test::MoreAsserts::checkEqualsAndHashCodeMethods(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1, bool arg2){
    if (!::android::test::MoreAsserts::_class) ::android::test::MoreAsserts::_class = java::fetch_class("android/test/MoreAsserts");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "checkEqualsAndHashCodeMethods", "(Ljava/lang/Object;Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::InstrumentationTestRunner::InstrumentationTestRunner() : ::java::lang::Object((jobject)0), ::android::app::Instrumentation((jobject)0), ::android::test::TestSuiteProvider((jobject)0) {
    if (!::android::test::InstrumentationTestRunner::_class) ::android::test::InstrumentationTestRunner::_class = java::fetch_class("android/test/InstrumentationTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::test::InstrumentationTestRunner::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::android::test::InstrumentationTestRunner::_class) ::android::test::InstrumentationTestRunner::_class = java::fetch_class("android/test/InstrumentationTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::InstrumentationTestRunner::onStart() const {
    if (!::android::test::InstrumentationTestRunner::_class) ::android::test::InstrumentationTestRunner::_class = java::fetch_class("android/test/InstrumentationTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::junit::framework::TestSuite android::test::InstrumentationTestRunner::getTestSuite() const {
    if (!::android::test::InstrumentationTestRunner::_class) ::android::test::InstrumentationTestRunner::_class = java::fetch_class("android/test/InstrumentationTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTestSuite", "()Ljunit/framework/TestSuite;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::junit::framework::TestSuite _ret(ret);
    return _ret;
}

::junit::framework::TestSuite android::test::InstrumentationTestRunner::getAllTests() const {
    if (!::android::test::InstrumentationTestRunner::_class) ::android::test::InstrumentationTestRunner::_class = java::fetch_class("android/test/InstrumentationTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllTests", "()Ljunit/framework/TestSuite;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::junit::framework::TestSuite _ret(ret);
    return _ret;
}

::java::lang::ClassLoader android::test::InstrumentationTestRunner::getLoader() const {
    if (!::android::test::InstrumentationTestRunner::_class) ::android::test::InstrumentationTestRunner::_class = java::fetch_class("android/test/InstrumentationTestRunner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoader", "()Ljava/lang/ClassLoader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ClassLoader _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::TouchUtils::TouchUtils() : ::java::lang::Object((jobject)0) {
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::test::TouchUtils::dragQuarterScreenDown(const ::android::test::ActivityInstrumentationTestCase& arg0){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragQuarterScreenDown", "(Landroid/test/ActivityInstrumentationTestCase;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::test::TouchUtils::dragQuarterScreenDown(const ::android::test::InstrumentationTestCase& arg0, const ::android::app::Activity& arg1){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragQuarterScreenDown", "(Landroid/test/InstrumentationTestCase;Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::TouchUtils::dragQuarterScreenUp(const ::android::test::ActivityInstrumentationTestCase& arg0){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragQuarterScreenUp", "(Landroid/test/ActivityInstrumentationTestCase;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::test::TouchUtils::dragQuarterScreenUp(const ::android::test::InstrumentationTestCase& arg0, const ::android::app::Activity& arg1){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragQuarterScreenUp", "(Landroid/test/InstrumentationTestCase;Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::TouchUtils::scrollToBottom(const ::android::test::ActivityInstrumentationTestCase& arg0, const ::android::view::ViewGroup& arg1){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "scrollToBottom", "(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/ViewGroup;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::TouchUtils::scrollToBottom(const ::android::test::InstrumentationTestCase& arg0, const ::android::app::Activity& arg1, const ::android::view::ViewGroup& arg2){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "scrollToBottom", "(Landroid/test/InstrumentationTestCase;Landroid/app/Activity;Landroid/view/ViewGroup;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::TouchUtils::scrollToTop(const ::android::test::ActivityInstrumentationTestCase& arg0, const ::android::view::ViewGroup& arg1){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "scrollToTop", "(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/ViewGroup;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::TouchUtils::scrollToTop(const ::android::test::InstrumentationTestCase& arg0, const ::android::app::Activity& arg1, const ::android::view::ViewGroup& arg2){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "scrollToTop", "(Landroid/test/InstrumentationTestCase;Landroid/app/Activity;Landroid/view/ViewGroup;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::TouchUtils::dragViewToBottom(const ::android::test::ActivityInstrumentationTestCase& arg0, const ::android::view::View& arg1){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewToBottom", "(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::TouchUtils::dragViewToBottom(const ::android::test::InstrumentationTestCase& arg0, const ::android::app::Activity& arg1, const ::android::view::View& arg2){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewToBottom", "(Landroid/test/InstrumentationTestCase;Landroid/app/Activity;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::TouchUtils::dragViewToBottom(const ::android::test::ActivityInstrumentationTestCase& arg0, const ::android::view::View& arg1, int32_t arg2){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewToBottom", "(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::TouchUtils::dragViewToBottom(const ::android::test::InstrumentationTestCase& arg0, const ::android::app::Activity& arg1, const ::android::view::View& arg2, int32_t arg3){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewToBottom", "(Landroid/test/InstrumentationTestCase;Landroid/app/Activity;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::test::TouchUtils::tapView(const ::android::test::InstrumentationTestCase& arg0, const ::android::view::View& arg1){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "tapView", "(Landroid/test/InstrumentationTestCase;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::TouchUtils::touchAndCancelView(const ::android::test::InstrumentationTestCase& arg0, const ::android::view::View& arg1){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "touchAndCancelView", "(Landroid/test/InstrumentationTestCase;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::TouchUtils::clickView(const ::android::test::InstrumentationTestCase& arg0, const ::android::view::View& arg1){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clickView", "(Landroid/test/InstrumentationTestCase;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::TouchUtils::longClickView(const ::android::test::ActivityInstrumentationTestCase& arg0, const ::android::view::View& arg1){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "longClickView", "(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::TouchUtils::longClickView(const ::android::test::InstrumentationTestCase& arg0, const ::android::view::View& arg1){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "longClickView", "(Landroid/test/InstrumentationTestCase;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::TouchUtils::dragViewToTop(const ::android::test::ActivityInstrumentationTestCase& arg0, const ::android::view::View& arg1){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewToTop", "(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::TouchUtils::dragViewToTop(const ::android::test::ActivityInstrumentationTestCase& arg0, const ::android::view::View& arg1, int32_t arg2){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewToTop", "(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::test::TouchUtils::dragViewToTop(const ::android::test::InstrumentationTestCase& arg0, const ::android::view::View& arg1){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewToTop", "(Landroid/test/InstrumentationTestCase;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::test::TouchUtils::dragViewToTop(const ::android::test::InstrumentationTestCase& arg0, const ::android::view::View& arg1, int32_t arg2){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewToTop", "(Landroid/test/InstrumentationTestCase;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::test::TouchUtils::dragViewBy(const ::android::test::ActivityInstrumentationTestCase& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewBy", "(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;III)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t android::test::TouchUtils::dragViewBy(const ::android::test::InstrumentationTestCase& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewBy", "(Landroid/test/InstrumentationTestCase;Landroid/view/View;III)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t android::test::TouchUtils::dragViewTo(const ::android::test::ActivityInstrumentationTestCase& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewTo", "(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;III)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t android::test::TouchUtils::dragViewTo(const ::android::test::InstrumentationTestCase& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewTo", "(Landroid/test/InstrumentationTestCase;Landroid/view/View;III)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t android::test::TouchUtils::dragViewToX(const ::android::test::ActivityInstrumentationTestCase& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewToX", "(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;II)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::test::TouchUtils::dragViewToX(const ::android::test::InstrumentationTestCase& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewToX", "(Landroid/test/InstrumentationTestCase;Landroid/view/View;II)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::test::TouchUtils::dragViewToY(const ::android::test::ActivityInstrumentationTestCase& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewToY", "(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;II)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::test::TouchUtils::dragViewToY(const ::android::test::InstrumentationTestCase& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dragViewToY", "(Landroid/test/InstrumentationTestCase;Landroid/view/View;II)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::test::TouchUtils::drag(const ::android::test::ActivityInstrumentationTestCase& arg0, float arg1, float arg2, float arg3, float arg4, int32_t arg5){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "drag", "(Landroid/test/ActivityInstrumentationTestCase;FFFFI)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::test::TouchUtils::drag(const ::android::test::InstrumentationTestCase& arg0, float arg1, float arg2, float arg3, float arg4, int32_t arg5){
    if (!::android::test::TouchUtils::_class) ::android::test::TouchUtils::_class = java::fetch_class("android/test/TouchUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "drag", "(Landroid/test/InstrumentationTestCase;FFFFI)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    float _arg3 = arg3;
    float _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::InstrumentationTestSuite::InstrumentationTestSuite(const ::android::app::Instrumentation& arg0) : ::java::lang::Object((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestSuite((jobject)0) {
    if (!::android::test::InstrumentationTestSuite::_class) ::android::test::InstrumentationTestSuite::_class = java::fetch_class("android/test/InstrumentationTestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Instrumentation;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::InstrumentationTestSuite::InstrumentationTestSuite(const ::java::lang::String& arg0, const ::android::app::Instrumentation& arg1) : ::java::lang::Object((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestSuite((jobject)0) {
    if (!::android::test::InstrumentationTestSuite::_class) ::android::test::InstrumentationTestSuite::_class = java::fetch_class("android/test/InstrumentationTestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Landroid/app/Instrumentation;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::InstrumentationTestSuite::InstrumentationTestSuite(const ::java::lang::Class& arg0, const ::android::app::Instrumentation& arg1) : ::java::lang::Object((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestSuite((jobject)0) {
    if (!::android::test::InstrumentationTestSuite::_class) ::android::test::InstrumentationTestSuite::_class = java::fetch_class("android/test/InstrumentationTestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;Landroid/app/Instrumentation;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::test::InstrumentationTestSuite::addTestSuite(const ::java::lang::Class& arg0) const {
    if (!::android::test::InstrumentationTestSuite::_class) ::android::test::InstrumentationTestSuite::_class = java::fetch_class("android/test/InstrumentationTestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTestSuite", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::InstrumentationTestSuite::runTest(const ::junit::framework::Test& arg0, const ::junit::framework::TestResult& arg1) const {
    if (!::android::test::InstrumentationTestSuite::_class) ::android::test::InstrumentationTestSuite::_class = java::fetch_class("android/test/InstrumentationTestSuite");
    static jmethodID mid = java::jni->GetMethodID(_class, "runTest", "(Ljunit/framework/Test;Ljunit/framework/TestResult;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::AssertionFailedError::AssertionFailedError() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::test::AssertionFailedError::_class) ::android::test::AssertionFailedError::_class = java::fetch_class("android/test/AssertionFailedError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::AssertionFailedError::AssertionFailedError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::test::AssertionFailedError::_class) ::android::test::AssertionFailedError::_class = java::fetch_class("android/test/AssertionFailedError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::ActivityInstrumentationTestCase::ActivityInstrumentationTestCase(const ::java::lang::String& arg0, const ::java::lang::Class& arg1) : ::java::lang::Object((jobject)0), ::android::test::ActivityTestCase((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::ActivityInstrumentationTestCase::_class) ::android::test::ActivityInstrumentationTestCase::_class = java::fetch_class("android/test/ActivityInstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::ActivityInstrumentationTestCase::ActivityInstrumentationTestCase(const ::java::lang::String& arg0, const ::java::lang::Class& arg1, bool arg2) : ::java::lang::Object((jobject)0), ::android::test::ActivityTestCase((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::ActivityInstrumentationTestCase::_class) ::android::test::ActivityInstrumentationTestCase::_class = java::fetch_class("android/test/ActivityInstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Class;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::app::Activity android::test::ActivityInstrumentationTestCase::getActivity() const {
    if (!::android::test::ActivityInstrumentationTestCase::_class) ::android::test::ActivityInstrumentationTestCase::_class = java::fetch_class("android/test/ActivityInstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivity", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

void android::test::ActivityInstrumentationTestCase::testActivityTestCaseSetUpProperly() const {
    if (!::android::test::ActivityInstrumentationTestCase::_class) ::android::test::ActivityInstrumentationTestCase::_class = java::fetch_class("android/test/ActivityInstrumentationTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "testActivityTestCaseSetUpProperly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::ActivityTestCase::ActivityTestCase() : ::java::lang::Object((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::ActivityTestCase::_class) ::android::test::ActivityTestCase::_class = java::fetch_class("android/test/ActivityTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::ProviderTestCase::ProviderTestCase(const ::java::lang::Class& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::ProviderTestCase::_class) ::android::test::ProviderTestCase::_class = java::fetch_class("android/test/ProviderTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::content::ContentProvider android::test::ProviderTestCase::getProvider() const {
    if (!::android::test::ProviderTestCase::_class) ::android::test::ProviderTestCase::_class = java::fetch_class("android/test/ProviderTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Landroid/content/ContentProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ContentProvider _ret(ret);
    return _ret;
}

::android::test::mock::MockContentResolver android::test::ProviderTestCase::getMockContentResolver() const {
    if (!::android::test::ProviderTestCase::_class) ::android::test::ProviderTestCase::_class = java::fetch_class("android/test/ProviderTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMockContentResolver", "()Landroid/test/mock/MockContentResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::test::mock::MockContentResolver _ret(ret);
    return _ret;
}

::android::test::IsolatedContext android::test::ProviderTestCase::getMockContext() const {
    if (!::android::test::ProviderTestCase::_class) ::android::test::ProviderTestCase::_class = java::fetch_class("android/test/ProviderTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMockContext", "()Landroid/test/IsolatedContext;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::test::IsolatedContext _ret(ret);
    return _ret;
}

::android::content::ContentResolver android::test::ProviderTestCase::newResolverWithContentProviderFromSql(const ::android::content::Context& arg0, const ::java::lang::Class& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, int32_t arg4, const ::java::lang::String& arg5){
    if (!::android::test::ProviderTestCase::_class) ::android::test::ProviderTestCase::_class = java::fetch_class("android/test/ProviderTestCase");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newResolverWithContentProviderFromSql", "(Landroid/content/Context;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)Landroid/content/ContentResolver;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::android::content::ContentResolver _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::AndroidTestCase::AndroidTestCase() : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::AndroidTestCase::_class) ::android::test::AndroidTestCase::_class = java::fetch_class("android/test/AndroidTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::test::AndroidTestCase::testAndroidTestCaseSetupProperly() const {
    if (!::android::test::AndroidTestCase::_class) ::android::test::AndroidTestCase::_class = java::fetch_class("android/test/AndroidTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "testAndroidTestCaseSetupProperly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::test::AndroidTestCase::setContext(const ::android::content::Context& arg0) const {
    if (!::android::test::AndroidTestCase::_class) ::android::test::AndroidTestCase::_class = java::fetch_class("android/test/AndroidTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContext", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Context android::test::AndroidTestCase::getContext() const {
    if (!::android::test::AndroidTestCase::_class) ::android::test::AndroidTestCase::_class = java::fetch_class("android/test/AndroidTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

void android::test::AndroidTestCase::assertActivityRequiresPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::test::AndroidTestCase::_class) ::android::test::AndroidTestCase::_class = java::fetch_class("android/test/AndroidTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "assertActivityRequiresPermission", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::test::AndroidTestCase::assertReadingContentUriRequiresPermission(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::test::AndroidTestCase::_class) ::android::test::AndroidTestCase::_class = java::fetch_class("android/test/AndroidTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "assertReadingContentUriRequiresPermission", "(Landroid/net/Uri;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::test::AndroidTestCase::assertWritingContentUriRequiresPermission(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::test::AndroidTestCase::_class) ::android::test::AndroidTestCase::_class = java::fetch_class("android/test/AndroidTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "assertWritingContentUriRequiresPermission", "(Landroid/net/Uri;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::ActivityUnitTestCase::ActivityUnitTestCase(const ::java::lang::Class& arg0) : ::java::lang::Object((jobject)0), ::android::test::ActivityTestCase((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::ActivityUnitTestCase::_class) ::android::test::ActivityUnitTestCase::_class = java::fetch_class("android/test/ActivityUnitTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::app::Activity android::test::ActivityUnitTestCase::getActivity() const {
    if (!::android::test::ActivityUnitTestCase::_class) ::android::test::ActivityUnitTestCase::_class = java::fetch_class("android/test/ActivityUnitTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivity", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

void android::test::ActivityUnitTestCase::setApplication(const ::android::app::Application& arg0) const {
    if (!::android::test::ActivityUnitTestCase::_class) ::android::test::ActivityUnitTestCase::_class = java::fetch_class("android/test/ActivityUnitTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setApplication", "(Landroid/app/Application;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::ActivityUnitTestCase::setActivityContext(const ::android::content::Context& arg0) const {
    if (!::android::test::ActivityUnitTestCase::_class) ::android::test::ActivityUnitTestCase::_class = java::fetch_class("android/test/ActivityUnitTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActivityContext", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::test::ActivityUnitTestCase::getRequestedOrientation() const {
    if (!::android::test::ActivityUnitTestCase::_class) ::android::test::ActivityUnitTestCase::_class = java::fetch_class("android/test/ActivityUnitTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestedOrientation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::content::Intent android::test::ActivityUnitTestCase::getStartedActivityIntent() const {
    if (!::android::test::ActivityUnitTestCase::_class) ::android::test::ActivityUnitTestCase::_class = java::fetch_class("android/test/ActivityUnitTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartedActivityIntent", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

int32_t android::test::ActivityUnitTestCase::getStartedActivityRequest() const {
    if (!::android::test::ActivityUnitTestCase::_class) ::android::test::ActivityUnitTestCase::_class = java::fetch_class("android/test/ActivityUnitTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartedActivityRequest", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::test::ActivityUnitTestCase::isFinishCalled() const {
    if (!::android::test::ActivityUnitTestCase::_class) ::android::test::ActivityUnitTestCase::_class = java::fetch_class("android/test/ActivityUnitTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinishCalled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::test::ActivityUnitTestCase::getFinishedActivityRequest() const {
    if (!::android::test::ActivityUnitTestCase::_class) ::android::test::ActivityUnitTestCase::_class = java::fetch_class("android/test/ActivityUnitTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinishedActivityRequest", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::test::PerformanceTestCase::startPerformance(const ::android::test::PerformanceTestCase_Intermediates& arg0) const {
    if (!::android::test::PerformanceTestCase::_class) ::android::test::PerformanceTestCase::_class = java::fetch_class("android/test/PerformanceTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "startPerformance", "(Landroid/test/PerformanceTestCase$Intermediates;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::test::PerformanceTestCase::isPerformanceOnly() const {
    if (!::android::test::PerformanceTestCase::_class) ::android::test::PerformanceTestCase::_class = java::fetch_class("android/test/PerformanceTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPerformanceOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::test::FlakyTest::tolerance() const {
    if (!::android::test::FlakyTest::_class) ::android::test::FlakyTest::_class = java::fetch_class("android/test/FlakyTest");
    static jmethodID mid = java::jni->GetMethodID(_class, "tolerance", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::ProviderTestCase2::ProviderTestCase2(const ::java::lang::Class& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::test::AndroidTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::ProviderTestCase2::_class) ::android::test::ProviderTestCase2::_class = java::fetch_class("android/test/ProviderTestCase2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::content::ContentProvider android::test::ProviderTestCase2::getProvider() const {
    if (!::android::test::ProviderTestCase2::_class) ::android::test::ProviderTestCase2::_class = java::fetch_class("android/test/ProviderTestCase2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Landroid/content/ContentProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ContentProvider _ret(ret);
    return _ret;
}

::android::test::mock::MockContentResolver android::test::ProviderTestCase2::getMockContentResolver() const {
    if (!::android::test::ProviderTestCase2::_class) ::android::test::ProviderTestCase2::_class = java::fetch_class("android/test/ProviderTestCase2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMockContentResolver", "()Landroid/test/mock/MockContentResolver;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::test::mock::MockContentResolver _ret(ret);
    return _ret;
}

::android::test::IsolatedContext android::test::ProviderTestCase2::getMockContext() const {
    if (!::android::test::ProviderTestCase2::_class) ::android::test::ProviderTestCase2::_class = java::fetch_class("android/test/ProviderTestCase2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMockContext", "()Landroid/test/IsolatedContext;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::test::IsolatedContext _ret(ret);
    return _ret;
}

::android::content::ContentResolver android::test::ProviderTestCase2::newResolverWithContentProviderFromSql(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::java::lang::Class& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, int32_t arg5, const ::java::lang::String& arg6){
    if (!::android::test::ProviderTestCase2::_class) ::android::test::ProviderTestCase2::_class = java::fetch_class("android/test/ProviderTestCase2");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newResolverWithContentProviderFromSql", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)Landroid/content/ContentResolver;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    ::android::content::ContentResolver _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::SingleLaunchActivityTestCase::SingleLaunchActivityTestCase(const ::java::lang::String& arg0, const ::java::lang::Class& arg1) : ::java::lang::Object((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::SingleLaunchActivityTestCase::_class) ::android::test::SingleLaunchActivityTestCase::_class = java::fetch_class("android/test/SingleLaunchActivityTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::app::Activity android::test::SingleLaunchActivityTestCase::getActivity() const {
    if (!::android::test::SingleLaunchActivityTestCase::_class) ::android::test::SingleLaunchActivityTestCase::_class = java::fetch_class("android/test/SingleLaunchActivityTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivity", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

void android::test::SingleLaunchActivityTestCase::testActivityTestCaseSetUpProperly() const {
    if (!::android::test::SingleLaunchActivityTestCase::_class) ::android::test::SingleLaunchActivityTestCase::_class = java::fetch_class("android/test/SingleLaunchActivityTestCase");
    static jmethodID mid = java::jni->GetMethodID(_class, "testActivityTestCaseSetUpProperly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::ComparisonFailure::ComparisonFailure(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::android::test::AssertionFailedError((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::test::ComparisonFailure::_class) ::android::test::ComparisonFailure::_class = java::fetch_class("android/test/ComparisonFailure");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::String android::test::ComparisonFailure::getMessage() const {
    if (!::android::test::ComparisonFailure::_class) ::android::test::ComparisonFailure::_class = java::fetch_class("android/test/ComparisonFailure");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::test::SyncBaseInstrumentation::SyncBaseInstrumentation() : ::java::lang::Object((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {
    if (!::android::test::SyncBaseInstrumentation::_class) ::android::test::SyncBaseInstrumentation::_class = java::fetch_class("android/test/SyncBaseInstrumentation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::test::PerformanceTestCase_Intermediates::setInternalIterations(int32_t arg0) const {
    if (!::android::test::PerformanceTestCase_Intermediates::_class) ::android::test::PerformanceTestCase_Intermediates::_class = java::fetch_class("android/test/PerformanceTestCase$Intermediates");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInternalIterations", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::PerformanceTestCase_Intermediates::startTiming(bool arg0) const {
    if (!::android::test::PerformanceTestCase_Intermediates::_class) ::android::test::PerformanceTestCase_Intermediates::_class = java::fetch_class("android/test/PerformanceTestCase$Intermediates");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTiming", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::PerformanceTestCase_Intermediates::addIntermediate(const ::java::lang::String& arg0) const {
    if (!::android::test::PerformanceTestCase_Intermediates::_class) ::android::test::PerformanceTestCase_Intermediates::_class = java::fetch_class("android/test/PerformanceTestCase$Intermediates");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIntermediate", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::test::PerformanceTestCase_Intermediates::addIntermediate(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::android::test::PerformanceTestCase_Intermediates::_class) ::android::test::PerformanceTestCase_Intermediates::_class = java::fetch_class("android/test/PerformanceTestCase$Intermediates");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIntermediate", "(Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::test::PerformanceTestCase_Intermediates::finishTiming(bool arg0) const {
    if (!::android::test::PerformanceTestCase_Intermediates::_class) ::android::test::PerformanceTestCase_Intermediates::_class = java::fetch_class("android/test/PerformanceTestCase$Intermediates");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishTiming", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

