#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "junit.framework.Assert.hpp"
#include "junit.framework.Test.hpp"

namespace java { namespace lang { class String; } }
namespace junit { namespace framework { class TestResult; } }

namespace junit {
namespace framework {
class TestCase : public virtual ::java::lang::Object,
                 public virtual ::junit::framework::Assert,
                 public virtual ::junit::framework::Test {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestCase(jobject _obj) : ::java::lang::Object(_obj), ::junit::framework::Assert(_obj), ::junit::framework::Test(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestCase(const ::junit::framework::TestCase& x) : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0) {obj = x.obj;}
    TestCase(::junit::framework::TestCase&& x) : ::java::lang::Object((jobject)0), ::junit::framework::Assert((jobject)0), ::junit::framework::Test((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::framework::TestCase& operator=(const ::junit::framework::TestCase& x) {obj = x.obj; return *this;}
    ::junit::framework::TestCase& operator=(::junit::framework::TestCase&& x) {obj = std::move(x.obj); return *this;}
    
    TestCase();
    TestCase(const ::java::lang::String&);
    int32_t countTestCases() const ;
    ::junit::framework::TestResult run() const ;
    void run(const ::junit::framework::TestResult&) const ;
    void runBare() const ;
    ::java::lang::String toString() const ;
    ::java::lang::String getName() const ;
    void setName(const ::java::lang::String&) const ;

};
}
}


