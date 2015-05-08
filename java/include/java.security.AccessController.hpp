#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace security { class AccessControlContext; } }
namespace java { namespace security { class Permission; } }
namespace java { namespace security { class PrivilegedAction; } }
namespace java { namespace security { class PrivilegedExceptionAction; } }

namespace java {
namespace security {
class AccessController : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessController(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessController(const ::java::security::AccessController& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessController(::java::security::AccessController&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::AccessController& operator=(const ::java::security::AccessController& x) {obj = x.obj; return *this;}
    ::java::security::AccessController& operator=(::java::security::AccessController&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::Object doPrivileged(const ::java::security::PrivilegedAction&);
    static ::java::lang::Object doPrivileged(const ::java::security::PrivilegedAction&, const ::java::security::AccessControlContext&);
    static ::java::lang::Object doPrivileged(const ::java::security::PrivilegedExceptionAction&);
    static ::java::lang::Object doPrivileged(const ::java::security::PrivilegedExceptionAction&, const ::java::security::AccessControlContext&);
    static ::java::lang::Object doPrivilegedWithCombiner(const ::java::security::PrivilegedAction&);
    static ::java::lang::Object doPrivilegedWithCombiner(const ::java::security::PrivilegedExceptionAction&);
    static void checkPermission(const ::java::security::Permission&);
    static ::java::security::AccessControlContext getContext();

};
}
}


