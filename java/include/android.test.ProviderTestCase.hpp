#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.test.InstrumentationTestCase.hpp"

namespace android { namespace content { class ContentProvider; } }
namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class Context; } }
namespace android { namespace test { class IsolatedContext; } }
namespace android { namespace test { namespace mock { class MockContentResolver; } } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace test {
class ProviderTestCase : public virtual ::java::lang::Object,
                         public virtual ::android::test::InstrumentationTestCase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProviderTestCase(jobject _obj) : ::java::lang::Object(_obj), ::android::test::InstrumentationTestCase(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj), ::junit::framework::TestCase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProviderTestCase(const ::android::test::ProviderTestCase& x) : ::java::lang::Object((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj;}
    ProviderTestCase(::android::test::ProviderTestCase&& x) : ::java::lang::Object((jobject)0), ::android::test::InstrumentationTestCase((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0), ::junit::framework::TestCase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::ProviderTestCase& operator=(const ::android::test::ProviderTestCase& x) {obj = x.obj; return *this;}
    ::android::test::ProviderTestCase& operator=(::android::test::ProviderTestCase&& x) {obj = std::move(x.obj); return *this;}
    
    ProviderTestCase(const ::java::lang::Class&, const ::java::lang::String&);
    ::android::content::ContentProvider getProvider() const ;
    ::android::test::mock::MockContentResolver getMockContentResolver() const ;
    ::android::test::IsolatedContext getMockContext() const ;
    static ::android::content::ContentResolver newResolverWithContentProviderFromSql(const ::android::content::Context&, const ::java::lang::Class&, const ::java::lang::String&, const ::java::lang::String&, int32_t, const ::java::lang::String&);

};
}
}


