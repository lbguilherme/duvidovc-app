#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.ResultSetMetaData.hpp"

namespace java { namespace lang { class String; } }

namespace javax {
namespace sql {
class RowSetMetaData : public virtual ::java::lang::Object,
                       public virtual ::java::sql::ResultSetMetaData {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RowSetMetaData(jobject _obj) : ::java::lang::Object(_obj), ::java::sql::ResultSetMetaData(_obj), ::java::sql::Wrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RowSetMetaData(const ::javax::sql::RowSetMetaData& x) : ::java::lang::Object((jobject)0), ::java::sql::ResultSetMetaData((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj;}
    RowSetMetaData(::javax::sql::RowSetMetaData&& x) : ::java::lang::Object((jobject)0), ::java::sql::ResultSetMetaData((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::RowSetMetaData& operator=(const ::javax::sql::RowSetMetaData& x) {obj = x.obj; return *this;}
    ::javax::sql::RowSetMetaData& operator=(::javax::sql::RowSetMetaData&& x) {obj = std::move(x.obj); return *this;}
    
    void setAutoIncrement(int32_t, bool) const ;
    void setCaseSensitive(int32_t, bool) const ;
    void setCatalogName(int32_t, const ::java::lang::String&) const ;
    void setColumnCount(int32_t) const ;
    void setColumnDisplaySize(int32_t, int32_t) const ;
    void setColumnLabel(int32_t, const ::java::lang::String&) const ;
    void setColumnName(int32_t, const ::java::lang::String&) const ;
    void setColumnType(int32_t, int32_t) const ;
    void setColumnTypeName(int32_t, const ::java::lang::String&) const ;
    void setCurrency(int32_t, bool) const ;
    void setNullable(int32_t, int32_t) const ;
    void setPrecision(int32_t, int32_t) const ;
    void setScale(int32_t, int32_t) const ;
    void setSchemaName(int32_t, const ::java::lang::String&) const ;
    void setSearchable(int32_t, bool) const ;
    void setSigned(int32_t, bool) const ;
    void setTableName(int32_t, const ::java::lang::String&) const ;

};
}
}


