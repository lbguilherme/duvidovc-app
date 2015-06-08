#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "junit.framework.TestCase.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace app { class Instrumentation; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace test {
class InstrumentationTestCase : public virtual ::java::lang::Object,
                                public virtual ::junit::framework::TestCase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InstrumentationTestCase(jobject _obj) : ::java::lang::Object(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestCase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InstrumentationTestCase(const ::android::test::InstrumentationTestCase& x) : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj;}
    InstrumentationTestCase(::android::test::InstrumentationTestCase&& x) : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::InstrumentationTestCase& operator=(const ::android::test::InstrumentationTestCase& x) {obj = x.obj; return *this;}
    ::android::test::InstrumentationTestCase& operator=(::android::test::InstrumentationTestCase&& x) {obj = std::move(x.obj); return *this;}
    
    InstrumentationTestCase();
    void injectInstrumentation(const ::android::app::Instrumentation&) const;
    void injectInsrumentation(const ::android::app::Instrumentation&) const;
    ::android::app::Instrumentation getInstrumentation() const;
    ::android::app::Activity launchActivity(const ::java::lang::String&, const ::java::lang::Class&, const ::android::os::Bundle&) const;
    ::android::app::Activity launchActivityWithIntent(const ::java::lang::String&, const ::java::lang::Class&, const ::android::content::Intent&) const;
    void runTestOnUiThread(const ::java::lang::Runnable&) const;
    void sendKeys(const ::java::lang::String&) const;
    void sendKeys(const std::vector< int32_t>&) const;
    void sendRepeatedKeys(const std::vector< int32_t>&) const;

};
}
}


