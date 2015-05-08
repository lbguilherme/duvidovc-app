#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "junit.framework.TestSuite.hpp"

namespace android { namespace app { class Instrumentation; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }
namespace junit { namespace framework { class Test; } }
namespace junit { namespace framework { class TestResult; } }

namespace android {
namespace test {
class InstrumentationTestSuite : public virtual ::java::lang::Object,
                                 public virtual ::junit::framework::TestSuite {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InstrumentationTestSuite(jobject _obj) : ::java::lang::Object(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestSuite(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InstrumentationTestSuite(const ::android::test::InstrumentationTestSuite& x) : ::java::lang::Object((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestSuite((jobject)0) {obj = x.obj;}
    InstrumentationTestSuite(::android::test::InstrumentationTestSuite&& x) : ::java::lang::Object((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestSuite((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::InstrumentationTestSuite& operator=(const ::android::test::InstrumentationTestSuite& x) {obj = x.obj; return *this;}
    ::android::test::InstrumentationTestSuite& operator=(::android::test::InstrumentationTestSuite&& x) {obj = std::move(x.obj); return *this;}
    
    InstrumentationTestSuite(const ::android::app::Instrumentation&);
    InstrumentationTestSuite(const ::java::lang::String&, const ::android::app::Instrumentation&);
    InstrumentationTestSuite(const ::java::lang::Class&, const ::android::app::Instrumentation&);
    void addTestSuite(const ::java::lang::Class&) const ;
    void runTest(const ::junit::framework::Test&, const ::junit::framework::TestResult&) const ;

};
}
}


