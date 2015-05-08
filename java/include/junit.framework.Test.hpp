#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace junit { namespace framework { class TestResult; } }

namespace junit {
namespace framework {
class Test : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Test(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Test(const ::junit::framework::Test& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Test(::junit::framework::Test&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::framework::Test& operator=(const ::junit::framework::Test& x) {obj = x.obj; return *this;}
    ::junit::framework::Test& operator=(::junit::framework::Test&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t countTestCases() const ;
    void run(const ::junit::framework::TestResult&) const ;

};
}
}


