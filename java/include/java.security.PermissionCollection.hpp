#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace security { class Permission; } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace security {
class PermissionCollection : public virtual ::java::lang::Object,
                             public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PermissionCollection(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PermissionCollection(const ::java::security::PermissionCollection& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    PermissionCollection(::java::security::PermissionCollection&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::PermissionCollection& operator=(const ::java::security::PermissionCollection& x) {obj = x.obj; return *this;}
    ::java::security::PermissionCollection& operator=(::java::security::PermissionCollection&& x) {obj = std::move(x.obj); return *this;}
    
    PermissionCollection();
    void add(const ::java::security::Permission&) const;
    ::java::util::Enumeration elements() const;
    bool implies(const ::java::security::Permission&) const;
    bool isReadOnly() const;
    void setReadOnly() const;

};
}
}


