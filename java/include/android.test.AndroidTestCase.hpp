#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "junit.framework.TestCase.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace test {
class AndroidTestCase : public virtual ::java::lang::Object,
                        public virtual ::junit::framework::TestCase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AndroidTestCase(jobject _obj) : ::java::lang::Object(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestCase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AndroidTestCase(const ::android::test::AndroidTestCase& x) : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj;}
    AndroidTestCase(::android::test::AndroidTestCase&& x) : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::AndroidTestCase& operator=(const ::android::test::AndroidTestCase& x) {obj = x.obj; return *this;}
    ::android::test::AndroidTestCase& operator=(::android::test::AndroidTestCase&& x) {obj = std::move(x.obj); return *this;}
    
    AndroidTestCase();
    void testAndroidTestCaseSetupProperly() const ;
    void setContext(const ::android::content::Context&) const ;
    ::android::content::Context getContext() const ;
    void assertActivityRequiresPermission(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void assertReadingContentUriRequiresPermission(const ::android::net::Uri&, const ::java::lang::String&) const ;
    void assertWritingContentUriRequiresPermission(const ::android::net::Uri&, const ::java::lang::String&) const ;

};
}
}


