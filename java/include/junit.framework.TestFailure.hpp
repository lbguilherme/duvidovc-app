#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }
namespace junit { namespace framework { class Test; } }

namespace junit {
namespace framework {
class TestFailure : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestFailure(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestFailure(const ::junit::framework::TestFailure& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TestFailure(::junit::framework::TestFailure&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::framework::TestFailure& operator=(const ::junit::framework::TestFailure& x) {obj = x.obj; return *this;}
    ::junit::framework::TestFailure& operator=(::junit::framework::TestFailure&& x) {obj = std::move(x.obj); return *this;}
    
    TestFailure(const ::junit::framework::Test&, const ::java::lang::Throwable&);
    ::junit::framework::Test failedTest() const ;
    ::java::lang::Throwable thrownException() const ;
    ::java::lang::String toString() const ;
    ::java::lang::String trace() const ;
    ::java::lang::String exceptionMessage() const ;
    bool isFailure() const ;

};
}
}


