#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.security.BasicPermission.hpp"
#include "java.security.Guard.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Permission; } }

namespace java {
namespace sql {
class SQLPermission : public virtual ::java::lang::Object,
                      public virtual ::java::io::Serializable,
                      public virtual ::java::security::BasicPermission,
                      public virtual ::java::security::Guard {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLPermission(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::BasicPermission(_obj), ::java::security::Guard(_obj), ::java::security::Permission(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLPermission(const ::java::sql::SQLPermission& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj;}
    SQLPermission(::java::sql::SQLPermission&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::SQLPermission& operator=(const ::java::sql::SQLPermission& x) {obj = x.obj; return *this;}
    ::java::sql::SQLPermission& operator=(::java::sql::SQLPermission&& x) {obj = std::move(x.obj); return *this;}
    
    SQLPermission(const ::java::lang::String&);
    SQLPermission(const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getActions() const;
    bool implies(const ::java::security::Permission&) const;

};
}
}


