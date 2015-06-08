#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace nio {
namespace charset {
class CodingErrorAction : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CodingErrorAction(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CodingErrorAction(const ::java::nio::charset::CodingErrorAction& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CodingErrorAction(::java::nio::charset::CodingErrorAction&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::charset::CodingErrorAction& operator=(const ::java::nio::charset::CodingErrorAction& x) {obj = x.obj; return *this;}
    ::java::nio::charset::CodingErrorAction& operator=(::java::nio::charset::CodingErrorAction&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String toString() const;

};
}
}
}


