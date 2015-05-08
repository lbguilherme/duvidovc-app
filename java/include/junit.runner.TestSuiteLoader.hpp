#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }

namespace junit {
namespace runner {
class TestSuiteLoader : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TestSuiteLoader(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TestSuiteLoader(const ::junit::runner::TestSuiteLoader& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TestSuiteLoader(::junit::runner::TestSuiteLoader&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::runner::TestSuiteLoader& operator=(const ::junit::runner::TestSuiteLoader& x) {obj = x.obj; return *this;}
    ::junit::runner::TestSuiteLoader& operator=(::junit::runner::TestSuiteLoader&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Class load(const ::java::lang::String&) const ;
    ::java::lang::Class reload(const ::java::lang::Class&) const ;

};
}
}


