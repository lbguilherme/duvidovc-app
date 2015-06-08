#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.Wrapper.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace sql {
class ResultSetMetaData : public virtual ::java::lang::Object,
                          public virtual ::java::sql::Wrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResultSetMetaData(jobject _obj) : ::java::lang::Object(_obj), ::java::sql::Wrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResultSetMetaData(const ::java::sql::ResultSetMetaData& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj;}
    ResultSetMetaData(::java::sql::ResultSetMetaData&& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::ResultSetMetaData& operator=(const ::java::sql::ResultSetMetaData& x) {obj = x.obj; return *this;}
    ::java::sql::ResultSetMetaData& operator=(::java::sql::ResultSetMetaData&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getCatalogName(int32_t) const;
    ::java::lang::String getColumnClassName(int32_t) const;
    int32_t getColumnCount() const;
    int32_t getColumnDisplaySize(int32_t) const;
    ::java::lang::String getColumnLabel(int32_t) const;
    ::java::lang::String getColumnName(int32_t) const;
    int32_t getColumnType(int32_t) const;
    ::java::lang::String getColumnTypeName(int32_t) const;
    int32_t getPrecision(int32_t) const;
    int32_t getScale(int32_t) const;
    ::java::lang::String getSchemaName(int32_t) const;
    ::java::lang::String getTableName(int32_t) const;
    bool isAutoIncrement(int32_t) const;
    bool isCaseSensitive(int32_t) const;
    bool isCurrency(int32_t) const;
    bool isDefinitelyWritable(int32_t) const;
    int32_t isNullable(int32_t) const;
    bool isReadOnly(int32_t) const;
    bool isSearchable(int32_t) const;
    bool isSigned(int32_t) const;
    bool isWritable(int32_t) const;

};
}
}


