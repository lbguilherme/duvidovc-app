#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace sql { class SQLInput; } }
namespace java { namespace sql { class SQLOutput; } }

namespace java {
namespace sql {
class SQLData : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLData(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLData(const ::java::sql::SQLData& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SQLData(::java::sql::SQLData&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::SQLData& operator=(const ::java::sql::SQLData& x) {obj = x.obj; return *this;}
    ::java::sql::SQLData& operator=(::java::sql::SQLData&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getSQLTypeName() const;
    void readSQL(const ::java::sql::SQLInput&, const ::java::lang::String&) const;
    void writeSQL(const ::java::sql::SQLOutput&) const;

};
}
}


