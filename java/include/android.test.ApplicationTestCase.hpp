#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.test.AndroidTestCase.hpp"

namespace android { namespace app { class Application; } }
namespace android { namespace content { class Context; } }
namespace java { namespace lang { class Class; } }

namespace android {
namespace test {
class ApplicationTestCase : public virtual ::java::lang::Object,
                            public virtual ::android::test::AndroidTestCase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ApplicationTestCase(jobject _obj) : ::java::lang::Object(_obj), ::android::test::AndroidTestCase(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestCase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ApplicationTestCase(const ::android::test::ApplicationTestCase& x) : ::java::lang::Object((jobject)0), ::android::test::AndroidTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj;}
    ApplicationTestCase(::android::test::ApplicationTestCase&& x) : ::java::lang::Object((jobject)0), ::android::test::AndroidTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::ApplicationTestCase& operator=(const ::android::test::ApplicationTestCase& x) {obj = x.obj; return *this;}
    ::android::test::ApplicationTestCase& operator=(::android::test::ApplicationTestCase&& x) {obj = std::move(x.obj); return *this;}
    
    ApplicationTestCase(const ::java::lang::Class&);
    ::android::app::Application getApplication() const ;
    ::android::content::Context getSystemContext() const ;
    void testApplicationTestCaseSetUpProperly() const ;

};
}
}


