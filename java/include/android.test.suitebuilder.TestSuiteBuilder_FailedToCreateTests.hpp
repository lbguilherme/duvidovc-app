#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "junit.framework.TestCase.hpp"

namespace java { namespace lang { class Exception; } }

namespace android {
namespace test {
namespace suitebuilder {
class TestSuiteBuilder_FailedToCreateTests : public virtual ::java::lang::Object,
                                             public virtual ::junit::framework::TestCase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestSuiteBuilder_FailedToCreateTests(jobject _obj) : ::java::lang::Object(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestCase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestSuiteBuilder_FailedToCreateTests(const ::android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests& x) : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj;}
    TestSuiteBuilder_FailedToCreateTests(::android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests&& x) : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests& operator=(const ::android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests& x) {obj = x.obj; return *this;}
    ::android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests& operator=(::android::test::suitebuilder::TestSuiteBuilder_FailedToCreateTests&& x) {obj = std::move(x.obj); return *this;}
    
    TestSuiteBuilder_FailedToCreateTests(const ::java::lang::Exception&);
    void testSuiteConstructionFailed() const;

};
}
}
}


