#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace sql {
class Struct : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Struct(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Struct(const ::java::sql::Struct& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Struct(::java::sql::Struct&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Struct& operator=(const ::java::sql::Struct& x) {obj = x.obj; return *this;}
    ::java::sql::Struct& operator=(::java::sql::Struct&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getSQLTypeName() const;
    std::vector< ::java::lang::Object> getAttributes() const;
    std::vector< ::java::lang::Object> getAttributes(const ::java::util::Map&) const;

};
}
}


