#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "junit.framework.TestListener.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }
namespace junit { namespace framework { class AssertionFailedError; } }
namespace junit { namespace framework { class Test; } }
namespace junit { namespace runner { class TestSuiteLoader; } }

namespace junit {
namespace runner {
class BaseTestRunner : public virtual ::java::lang::Object,
                       public virtual ::junit::framework::TestListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BaseTestRunner(jobject _obj) : ::java::lang::Object(_obj), ::junit::framework::TestListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BaseTestRunner(const ::junit::runner::BaseTestRunner& x) : ::java::lang::Object((jobject)0), ::junit::framework::TestListener((jobject)0) {obj = x.obj;}
    BaseTestRunner(::junit::runner::BaseTestRunner&& x) : ::java::lang::Object((jobject)0), ::junit::framework::TestListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::runner::BaseTestRunner& operator=(const ::junit::runner::BaseTestRunner& x) {obj = x.obj; return *this;}
    ::junit::runner::BaseTestRunner& operator=(::junit::runner::BaseTestRunner&& x) {obj = std::move(x.obj); return *this;}
    
    BaseTestRunner();
    void startTest(const ::junit::framework::Test&) const;
    static void savePreferences();
    void setPreference(const ::java::lang::String&, const ::java::lang::String&) const;
    void endTest(const ::junit::framework::Test&) const;
    void addError(const ::junit::framework::Test&, const ::java::lang::Throwable&) const;
    void addFailure(const ::junit::framework::Test&, const ::junit::framework::AssertionFailedError&) const;
    void testStarted(const ::java::lang::String&) const;
    void testEnded(const ::java::lang::String&) const;
    void testFailed(int32_t, const ::junit::framework::Test&, const ::java::lang::Throwable&) const;
    ::junit::framework::Test getTest(const ::java::lang::String&) const;
    ::java::lang::String elapsedTimeAsString(int64_t) const;
    void setLoading(bool) const;
    ::java::lang::String extractClassName(const ::java::lang::String&) const;
    static ::java::lang::String truncate(const ::java::lang::String&);
    ::junit::runner::TestSuiteLoader getLoader() const;
    static ::java::lang::String getPreference(const ::java::lang::String&);
    static int32_t getPreference(const ::java::lang::String&, int32_t);
    static bool inVAJava();
    static ::java::lang::String getFilteredTrace(const ::java::lang::Throwable&);
    static ::java::lang::String getFilteredTrace(const ::java::lang::String&);

};
}
}


