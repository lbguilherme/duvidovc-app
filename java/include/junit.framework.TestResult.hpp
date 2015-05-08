#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Throwable; } }
namespace java { namespace util { class Enumeration; } }
namespace junit { namespace framework { class AssertionFailedError; } }
namespace junit { namespace framework { class Protectable; } }
namespace junit { namespace framework { class Test; } }
namespace junit { namespace framework { class TestListener; } }

namespace junit {
namespace framework {
class TestResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestResult(const ::junit::framework::TestResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TestResult(::junit::framework::TestResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::framework::TestResult& operator=(const ::junit::framework::TestResult& x) {obj = x.obj; return *this;}
    ::junit::framework::TestResult& operator=(::junit::framework::TestResult&& x) {obj = std::move(x.obj); return *this;}
    
    TestResult();
    void addError(const ::junit::framework::Test&, const ::java::lang::Throwable&) const ;
    void addFailure(const ::junit::framework::Test&, const ::junit::framework::AssertionFailedError&) const ;
    void addListener(const ::junit::framework::TestListener&) const ;
    void removeListener(const ::junit::framework::TestListener&) const ;
    void endTest(const ::junit::framework::Test&) const ;
    int32_t errorCount() const ;
    ::java::util::Enumeration errors() const ;
    int32_t failureCount() const ;
    ::java::util::Enumeration failures() const ;
    int32_t runCount() const ;
    void runProtected(const ::junit::framework::Test&, const ::junit::framework::Protectable&) const ;
    bool shouldStop() const ;
    void startTest(const ::junit::framework::Test&) const ;
    void stop() const ;
    bool wasSuccessful() const ;

};
}
}


