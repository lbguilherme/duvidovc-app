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
class PrivilegedExceptionAction : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PrivilegedExceptionAction(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PrivilegedExceptionAction(const ::java::security::PrivilegedExceptionAction& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PrivilegedExceptionAction(::java::security::PrivilegedExceptionAction&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::PrivilegedExceptionAction& operator=(const ::java::security::PrivilegedExceptionAction& x) {obj = x.obj; return *this;}
    ::java::security::PrivilegedExceptionAction& operator=(::java::security::PrivilegedExceptionAction&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object run() const;

};
}
}


