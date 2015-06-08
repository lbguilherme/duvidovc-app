#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace security {
class Guard : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Guard(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Guard(const ::java::security::Guard& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Guard(::java::security::Guard&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Guard& operator=(const ::java::security::Guard& x) {obj = x.obj; return *this;}
    ::java::security::Guard& operator=(::java::security::Guard&& x) {obj = std::move(x.obj); return *this;}
    
    void checkGuard(const ::java::lang::Object&) const;

};
}
}


