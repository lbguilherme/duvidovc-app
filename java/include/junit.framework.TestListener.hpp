#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Throwable; } }
namespace junit { namespace framework { class AssertionFailedError; } }
namespace junit { namespace framework { class Test; } }

namespace junit {
namespace framework {
class TestListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestListener(const ::junit::framework::TestListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TestListener(::junit::framework::TestListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::framework::TestListener& operator=(const ::junit::framework::TestListener& x) {obj = x.obj; return *this;}
    ::junit::framework::TestListener& operator=(::junit::framework::TestListener&& x) {obj = std::move(x.obj); return *this;}
    
    void addError(const ::junit::framework::Test&, const ::java::lang::Throwable&) const;
    void addFailure(const ::junit::framework::Test&, const ::junit::framework::AssertionFailedError&) const;
    void endTest(const ::junit::framework::Test&) const;
    void startTest(const ::junit::framework::Test&) const;

};
}
}


