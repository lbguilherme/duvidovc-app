#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.test.InstrumentationTestCase.hpp"


namespace android {
namespace test {
class ActivityTestCase : public virtual ::java::lang::Object,
                         public virtual ::android::test::InstrumentationTestCase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActivityTestCase(jobject _obj) : ::java::lang::Object(_obj), ::android::test::InstrumentationTestCase(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestCase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActivityTestCase(const ::android::test::ActivityTestCase& x) : ::java::lang::Object((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj;}
    ActivityTestCase(::android::test::ActivityTestCase&& x) : ::java::lang::Object((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::ActivityTestCase& operator=(const ::android::test::ActivityTestCase& x) {obj = x.obj; return *this;}
    ::android::test::ActivityTestCase& operator=(::android::test::ActivityTestCase&& x) {obj = std::move(x.obj); return *this;}
    
    ActivityTestCase();

};
}
}


