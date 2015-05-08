#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.test.ActivityTestCase.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace app { class Application; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace java { namespace lang { class Class; } }

namespace android {
namespace test {
class ActivityUnitTestCase : public virtual ::java::lang::Object,
                             public virtual ::android::test::ActivityTestCase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActivityUnitTestCase(jobject _obj) : ::java::lang::Object(_obj), ::android::test::ActivityTestCase(_obj), ::android::test::InstrumentationTestCase(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestCase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActivityUnitTestCase(const ::android::test::ActivityUnitTestCase& x) : ::java::lang::Object((jobject)0), ::android::test::ActivityTestCase((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj;}
    ActivityUnitTestCase(::android::test::ActivityUnitTestCase&& x) : ::java::lang::Object((jobject)0), ::android::test::ActivityTestCase((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::ActivityUnitTestCase& operator=(const ::android::test::ActivityUnitTestCase& x) {obj = x.obj; return *this;}
    ::android::test::ActivityUnitTestCase& operator=(::android::test::ActivityUnitTestCase&& x) {obj = std::move(x.obj); return *this;}
    
    ActivityUnitTestCase(const ::java::lang::Class&);
    ::android::app::Activity getActivity() const ;
    void setApplication(const ::android::app::Application&) const ;
    void setActivityContext(const ::android::content::Context&) const ;
    int32_t getRequestedOrientation() const ;
    ::android::content::Intent getStartedActivityIntent() const ;
    int32_t getStartedActivityRequest() const ;
    bool isFinishCalled() const ;
    int32_t getFinishedActivityRequest() const ;

};
}
}


