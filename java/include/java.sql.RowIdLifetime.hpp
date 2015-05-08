#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace sql { class RowIdLifetime; } }

namespace java {
namespace sql {
class RowIdLifetime : public virtual ::java::lang::Object,
                      public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RowIdLifetime(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RowIdLifetime(const ::java::sql::RowIdLifetime& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    RowIdLifetime(::java::sql::RowIdLifetime&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::RowIdLifetime& operator=(const ::java::sql::RowIdLifetime& x) {obj = x.obj; return *this;}
    ::java::sql::RowIdLifetime& operator=(::java::sql::RowIdLifetime&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::java::sql::RowIdLifetime> values();
    static ::java::sql::RowIdLifetime valueOf(const ::java::lang::String&);

};
}
}


