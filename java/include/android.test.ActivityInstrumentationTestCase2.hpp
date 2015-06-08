#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.test.ActivityTestCase.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Intent; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace test {
class ActivityInstrumentationTestCase2 : public virtual ::java::lang::Object,
                                         public virtual ::android::test::ActivityTestCase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActivityInstrumentationTestCase2(jobject _obj) : ::java::lang::Object(_obj), ::android::test::ActivityTestCase(_obj), ::android::test::InstrumentationTestCase(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestCase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActivityInstrumentationTestCase2(const ::android::test::ActivityInstrumentationTestCase2& x) : ::java::lang::Object((jobject)0), ::android::test::ActivityTestCase((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj;}
    ActivityInstrumentationTestCase2(::android::test::ActivityInstrumentationTestCase2&& x) : ::java::lang::Object((jobject)0), ::android::test::ActivityTestCase((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::ActivityInstrumentationTestCase2& operator=(const ::android::test::ActivityInstrumentationTestCase2& x) {obj = x.obj; return *this;}
    ::android::test::ActivityInstrumentationTestCase2& operator=(::android::test::ActivityInstrumentationTestCase2&& x) {obj = std::move(x.obj); return *this;}
    
    ActivityInstrumentationTestCase2(const ::java::lang::String&, const ::java::lang::Class&);
    ActivityInstrumentationTestCase2(const ::java::lang::Class&);
    ::android::app::Activity getActivity() const;
    void setActivityIntent(const ::android::content::Intent&) const;
    void setActivityInitialTouchMode(bool) const;

};
}
}


