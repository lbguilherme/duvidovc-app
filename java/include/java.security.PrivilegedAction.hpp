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
class PrivilegedAction : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PrivilegedAction(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PrivilegedAction(const ::java::security::PrivilegedAction& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PrivilegedAction(::java::security::PrivilegedAction&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::PrivilegedAction& operator=(const ::java::security::PrivilegedAction& x) {obj = x.obj; return *this;}
    ::java::security::PrivilegedAction& operator=(::java::security::PrivilegedAction&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object run() const;

};
}
}


