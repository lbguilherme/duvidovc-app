#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace junit {
namespace runner {
class Version : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Version(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Version(const ::junit::runner::Version& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Version(::junit::runner::Version&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::runner::Version& operator=(const ::junit::runner::Version& x) {obj = x.obj; return *this;}
    ::junit::runner::Version& operator=(::junit::runner::Version&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String id();

};
}
}


