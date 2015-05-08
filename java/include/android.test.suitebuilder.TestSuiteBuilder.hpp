#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace test { namespace suitebuilder { class TestSuiteBuilder; } } }
namespace com { namespace android { namespace internal { namespace util { class Predicate; } } } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace junit { namespace framework { class TestSuite; } }

namespace android {
namespace test {
namespace suitebuilder {
class TestSuiteBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestSuiteBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestSuiteBuilder(const ::android::test::suitebuilder::TestSuiteBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TestSuiteBuilder(::android::test::suitebuilder::TestSuiteBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::suitebuilder::TestSuiteBuilder& operator=(const ::android::test::suitebuilder::TestSuiteBuilder& x) {obj = x.obj; return *this;}
    ::android::test::suitebuilder::TestSuiteBuilder& operator=(::android::test::suitebuilder::TestSuiteBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    TestSuiteBuilder(const ::java::lang::Class&);
    TestSuiteBuilder(const ::java::lang::String&, const ::java::lang::ClassLoader&);
    ::android::test::suitebuilder::TestSuiteBuilder includePackages(const std::vector< ::java::lang::String>&) const ;
    ::android::test::suitebuilder::TestSuiteBuilder excludePackages(const std::vector< ::java::lang::String>&) const ;
    ::android::test::suitebuilder::TestSuiteBuilder addRequirements(const ::java::util::List&) const ;
    ::android::test::suitebuilder::TestSuiteBuilder includeAllPackagesUnderHere() const ;
    ::android::test::suitebuilder::TestSuiteBuilder named(const ::java::lang::String&) const ;
    ::junit::framework::TestSuite build() const ;
    ::android::test::suitebuilder::TestSuiteBuilder addRequirements(const std::vector< ::com::android::internal::util::Predicate>&) const ;

};
}
}
}

#include "android.test.suitebuilder.TestSuiteBuilder_FailedToCreateTests.hpp"

