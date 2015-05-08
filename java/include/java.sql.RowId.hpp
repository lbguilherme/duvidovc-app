#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace sql {
class RowId : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RowId(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RowId(const ::java::sql::RowId& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RowId(::java::sql::RowId&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::RowId& operator=(const ::java::sql::RowId& x) {obj = x.obj; return *this;}
    ::java::sql::RowId& operator=(::java::sql::RowId&& x) {obj = std::move(x.obj); return *this;}
    
    bool equals(const ::java::lang::Object&) const ;
    std::vector< int8_t> getBytes() const ;
    ::java::lang::String toString() const ;
    int32_t hashCode() const ;

};
}
}


