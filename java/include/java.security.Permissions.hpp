#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.security.PermissionCollection.hpp"

namespace java { namespace security { class Permission; } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace security {
class Permissions : public virtual ::java::lang::Object,
                    public virtual ::java::io::Serializable,
                    public virtual ::java::security::PermissionCollection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Permissions(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::PermissionCollection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Permissions(const ::java::security::Permissions& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::PermissionCollection((jobject)0) {obj = x.obj;}
    Permissions(::java::security::Permissions&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::PermissionCollection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Permissions& operator=(const ::java::security::Permissions& x) {obj = x.obj; return *this;}
    ::java::security::Permissions& operator=(::java::security::Permissions&& x) {obj = std::move(x.obj); return *this;}
    
    Permissions();
    void add(const ::java::security::Permission&) const;
    ::java::util::Enumeration elements() const;
    bool implies(const ::java::security::Permission&) const;

};
}
}


