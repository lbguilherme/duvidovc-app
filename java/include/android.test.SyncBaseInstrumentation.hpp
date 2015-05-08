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
class SyncBaseInstrumentation : public virtual ::java::lang::Object,
                                public virtual ::android::test::InstrumentationTestCase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SyncBaseInstrumentation(jobject _obj) : ::java::lang::Object(_obj), ::android::test::InstrumentationTestCase(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestCase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SyncBaseInstrumentation(const ::android::test::SyncBaseInstrumentation& x) : ::java::lang::Object((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj;}
    SyncBaseInstrumentation(::android::test::SyncBaseInstrumentation&& x) : ::java::lang::Object((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::SyncBaseInstrumentation& operator=(const ::android::test::SyncBaseInstrumentation& x) {obj = x.obj; return *this;}
    ::android::test::SyncBaseInstrumentation& operator=(::android::test::SyncBaseInstrumentation&& x) {obj = std::move(x.obj); return *this;}
    
    SyncBaseInstrumentation();

};
}
}


