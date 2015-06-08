#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace sql { class ResultSet; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace sql {
class Array : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Array(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Array(const ::java::sql::Array& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Array(::java::sql::Array&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Array& operator=(const ::java::sql::Array& x) {obj = x.obj; return *this;}
    ::java::sql::Array& operator=(::java::sql::Array&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object getArray() const;
    ::java::lang::Object getArray(int64_t, int32_t) const;
    ::java::lang::Object getArray(int64_t, int32_t, const ::java::util::Map&) const;
    ::java::lang::Object getArray(const ::java::util::Map&) const;
    int32_t getBaseType() const;
    ::java::lang::String getBaseTypeName() const;
    ::java::sql::ResultSet getResultSet() const;
    ::java::sql::ResultSet getResultSet(int64_t, int32_t) const;
    ::java::sql::ResultSet getResultSet(int64_t, int32_t, const ::java::util::Map&) const;
    ::java::sql::ResultSet getResultSet(const ::java::util::Map&) const;
    void free() const;

};
}
}


