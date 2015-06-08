#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "junit.runner.BaseTestRunner.hpp"

namespace android { namespace app { class Instrumentation; } }
namespace android { namespace content { class Context; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }
namespace java { namespace util { class List; } }
namespace junit { namespace framework { class Test; } }
namespace junit { namespace framework { class TestListener; } }
namespace junit { namespace framework { class TestResult; } }

namespace android {
namespace test {
class AndroidTestRunner : public virtual ::java::lang::Object,
                          public virtual ::junit::runner::BaseTestRunner {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AndroidTestRunner(jobject _obj) : ::java::lang::Object(_obj), ::junit::framework::TestListener(_obj), ::junit::runner::BaseTestRunner(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AndroidTestRunner(const ::android::test::AndroidTestRunner& x) : ::java::lang::Object((jobject)0), ::junit::framework::TestListener((jobject)0), ::junit::runner::BaseTestRunner((jobject)0) {obj = x.obj;}
    AndroidTestRunner(::android::test::AndroidTestRunner&& x) : ::java::lang::Object((jobject)0), ::junit::framework::TestListener((jobject)0), ::junit::runner::BaseTestRunner((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::AndroidTestRunner& operator=(const ::android::test::AndroidTestRunner& x) {obj = x.obj; return *this;}
    ::android::test::AndroidTestRunner& operator=(::android::test::AndroidTestRunner&& x) {obj = std::move(x.obj); return *this;}
    
    AndroidTestRunner();
    void setTestClassName(const ::java::lang::String&, const ::java::lang::String&) const;
    void setTest(const ::junit::framework::Test&) const;
    void clearTestListeners() const;
    void addTestListener(const ::junit::framework::TestListener&) const;
    ::java::util::List getTestCases() const;
    ::java::lang::String getTestClassName() const;
    ::junit::framework::TestResult getTestResult() const;
    void runTest() const;
    void runTest(const ::junit::framework::TestResult&) const;
    void setContext(const ::android::content::Context&) const;
    void setInstrumentation(const ::android::app::Instrumentation&) const;
    void setInstrumentaiton(const ::android::app::Instrumentation&) const;
    void testStarted(const ::java::lang::String&) const;
    void testEnded(const ::java::lang::String&) const;
    void testFailed(int32_t, const ::junit::framework::Test&, const ::java::lang::Throwable&) const;

};
}
}


