#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "junit.framework.Test.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { namespace reflect { class Constructor; } } }
namespace java { namespace util { class Enumeration; } }
namespace junit { namespace framework { class Test; } }
namespace junit { namespace framework { class TestResult; } }

namespace junit {
namespace framework {
class TestSuite : public virtual ::java::lang::Object,
                  public virtual ::junit::framework::Test {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestSuite(jobject _obj) : ::java::lang::Object(_obj), ::junit::framework::Test(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestSuite(const ::junit::framework::TestSuite& x) : ::java::lang::Object((jobject)0), ::junit::framework::Test((jobject)0) {obj = x.obj;}
    TestSuite(::junit::framework::TestSuite&& x) : ::java::lang::Object((jobject)0), ::junit::framework::Test((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::framework::TestSuite& operator=(const ::junit::framework::TestSuite& x) {obj = x.obj; return *this;}
    ::junit::framework::TestSuite& operator=(::junit::framework::TestSuite&& x) {obj = std::move(x.obj); return *this;}
    
    TestSuite();
    TestSuite(const ::java::lang::Class&, const ::java::lang::String&);
    TestSuite(const ::java::lang::Class&);
    TestSuite(const ::java::lang::String&);
    void addTest(const ::junit::framework::Test&) const ;
    void addTestSuite(const ::java::lang::Class&) const ;
    static ::junit::framework::Test createTest(const ::java::lang::Class&, const ::java::lang::String&);
    int32_t countTestCases() const ;
    static ::java::lang::reflect::Constructor getTestConstructor(const ::java::lang::Class&);
    void run(const ::junit::framework::TestResult&) const ;
    void runTest(const ::junit::framework::Test&, const ::junit::framework::TestResult&) const ;
    ::junit::framework::Test testAt(int32_t) const ;
    int32_t testCount() const ;
    ::java::util::Enumeration tests() const ;
    ::java::lang::String toString() const ;
    void setName(const ::java::lang::String&) const ;
    ::java::lang::String getName() const ;

};
}
}


