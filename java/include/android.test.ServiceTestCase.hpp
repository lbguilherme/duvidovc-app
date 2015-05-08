#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.test.AndroidTestCase.hpp"

namespace android { namespace app { class Application; } }
namespace android { namespace app { class Service; } }
namespace android { namespace content { class Context; } }
namespace java { namespace lang { class Class; } }

namespace android {
namespace test {
class ServiceTestCase : public virtual ::java::lang::Object,
                        public virtual ::android::test::AndroidTestCase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ServiceTestCase(jobject _obj) : ::java::lang::Object(_obj), ::android::test::AndroidTestCase(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestCase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ServiceTestCase(const ::android::test::ServiceTestCase& x) : ::java::lang::Object((jobject)0), ::android::test::AndroidTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj;}
    ServiceTestCase(::android::test::ServiceTestCase&& x) : ::java::lang::Object((jobject)0), ::android::test::AndroidTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::ServiceTestCase& operator=(const ::android::test::ServiceTestCase& x) {obj = x.obj; return *this;}
    ::android::test::ServiceTestCase& operator=(::android::test::ServiceTestCase&& x) {obj = std::move(x.obj); return *this;}
    
    ServiceTestCase(const ::java::lang::Class&);
    ::android::app::Service getService() const ;
    void setApplication(const ::android::app::Application&) const ;
    ::android::app::Application getApplication() const ;
    ::android::content::Context getSystemContext() const ;
    void testServiceTestCaseSetUpProperly() const ;

};
}
}


