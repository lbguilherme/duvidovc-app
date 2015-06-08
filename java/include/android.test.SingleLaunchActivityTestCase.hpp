#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.test.InstrumentationTestCase.hpp"

namespace android { namespace app { class Activity; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace test {
class SingleLaunchActivityTestCase : public virtual ::java::lang::Object,
                                     public virtual ::android::test::InstrumentationTestCase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SingleLaunchActivityTestCase(jobject _obj) : ::java::lang::Object(_obj), ::android::test::InstrumentationTestCase(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestCase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SingleLaunchActivityTestCase(const ::android::test::SingleLaunchActivityTestCase& x) : ::java::lang::Object((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj;}
    SingleLaunchActivityTestCase(::android::test::SingleLaunchActivityTestCase&& x) : ::java::lang::Object((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::SingleLaunchActivityTestCase& operator=(const ::android::test::SingleLaunchActivityTestCase& x) {obj = x.obj; return *this;}
    ::android::test::SingleLaunchActivityTestCase& operator=(::android::test::SingleLaunchActivityTestCase&& x) {obj = std::move(x.obj); return *this;}
    
    SingleLaunchActivityTestCase(const ::java::lang::String&, const ::java::lang::Class&);
    ::android::app::Activity getActivity() const;
    void testActivityTestCaseSetUpProperly() const;

};
}
}


