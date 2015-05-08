#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Instrumentation.hpp"
#include "android.test.TestSuiteProvider.hpp"

namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class ClassLoader; } }
namespace junit { namespace framework { class TestSuite; } }

namespace android {
namespace test {
class InstrumentationTestRunner : public virtual ::java::lang::Object,
                                  public virtual ::android::app::Instrumentation,
                                  public virtual ::android::test::TestSuiteProvider {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InstrumentationTestRunner(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Instrumentation(_obj), ::android::test::TestSuiteProvider(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InstrumentationTestRunner(const ::android::test::InstrumentationTestRunner& x) : ::java::lang::Object((jobject)0), ::android::app::Instrumentation((jobject)0), ::android::test::TestSuiteProvider((jobject)0) {obj = x.obj;}
    InstrumentationTestRunner(::android::test::InstrumentationTestRunner&& x) : ::java::lang::Object((jobject)0), ::android::app::Instrumentation((jobject)0), ::android::test::TestSuiteProvider((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::InstrumentationTestRunner& operator=(const ::android::test::InstrumentationTestRunner& x) {obj = x.obj; return *this;}
    ::android::test::InstrumentationTestRunner& operator=(::android::test::InstrumentationTestRunner&& x) {obj = std::move(x.obj); return *this;}
    
    InstrumentationTestRunner();
    void onCreate(const ::android::os::Bundle&) const ;
    void onStart() const ;
    ::junit::framework::TestSuite getTestSuite() const ;
    ::junit::framework::TestSuite getAllTests() const ;
    ::java::lang::ClassLoader getLoader() const ;

};
}
}


