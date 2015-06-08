#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace junit { namespace framework { class TestSuite; } }

namespace android {
namespace test {
class TestSuiteProvider : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestSuiteProvider(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestSuiteProvider(const ::android::test::TestSuiteProvider& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TestSuiteProvider(::android::test::TestSuiteProvider&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::TestSuiteProvider& operator=(const ::android::test::TestSuiteProvider& x) {obj = x.obj; return *this;}
    ::android::test::TestSuiteProvider& operator=(::android::test::TestSuiteProvider&& x) {obj = std::move(x.obj); return *this;}
    
    ::junit::framework::TestSuite getTestSuite() const;

};
}
}


