#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.Statement.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class Reader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace math { class BigDecimal; } }
namespace java { namespace net { class URL; } }
namespace java { namespace sql { class Array; } }
namespace java { namespace sql { class Blob; } }
namespace java { namespace sql { class Clob; } }
namespace java { namespace sql { class Date; } }
namespace java { namespace sql { class NClob; } }
namespace java { namespace sql { class ParameterMetaData; } }
namespace java { namespace sql { class Ref; } }
namespace java { namespace sql { class ResultSet; } }
namespace java { namespace sql { class ResultSetMetaData; } }
namespace java { namespace sql { class RowId; } }
namespace java { namespace sql { class SQLXML; } }
namespace java { namespace sql { class Time; } }
namespace java { namespace sql { class Timestamp; } }
namespace java { namespace util { class Calendar; } }

namespace java {
namespace sql {
class PreparedStatement : public virtual ::java::lang::Object,
                          public virtual ::java::sql::Statement {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PreparedStatement(jobject _obj) : ::java::lang::Object(_obj), ::java::sql::Statement(_obj), ::java::sql::Wrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PreparedStatement(const ::java::sql::PreparedStatement& x) : ::java::lang::Object((jobject)0), ::java::sql::Statement((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj;}
    PreparedStatement(::java::sql::PreparedStatement&& x) : ::java::lang::Object((jobject)0), ::java::sql::Statement((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::PreparedStatement& operator=(const ::java::sql::PreparedStatement& x) {obj = x.obj; return *this;}
    ::java::sql::PreparedStatement& operator=(::java::sql::PreparedStatement&& x) {obj = std::move(x.obj); return *this;}
    
    void addBatch() const ;
    void clearParameters() const ;
    bool execute() const ;
    ::java::sql::ResultSet executeQuery() const ;
    int32_t executeUpdate() const ;
    ::java::sql::ResultSetMetaData getMetaData() const ;
    ::java::sql::ParameterMetaData getParameterMetaData() const ;
    void setArray(int32_t, const ::java::sql::Array&) const ;
    void setAsciiStream(int32_t, const ::java::io::InputStream&, int32_t) const ;
    void setBigDecimal(int32_t, const ::java::math::BigDecimal&) const ;
    void setBinaryStream(int32_t, const ::java::io::InputStream&, int32_t) const ;
    void setBlob(int32_t, const ::java::sql::Blob&) const ;
    void setBoolean(int32_t, bool) const ;
    void setByte(int32_t, int8_t) const ;
    void setBytes(int32_t, const std::vector< int8_t>&) const ;
    void setCharacterStream(int32_t, const ::java::io::Reader&, int32_t) const ;
    void setClob(int32_t, const ::java::sql::Clob&) const ;
    void setDate(int32_t, const ::java::sql::Date&) const ;
    void setDate(int32_t, const ::java::sql::Date&, const ::java::util::Calendar&) const ;
    void setDouble(int32_t, double) const ;
    void setFloat(int32_t, float) const ;
    void setInt(int32_t, int32_t) const ;
    void setLong(int32_t, int64_t) const ;
    void setNull(int32_t, int32_t) const ;
    void setNull(int32_t, int32_t, const ::java::lang::String&) const ;
    void setObject(int32_t, const ::java::lang::Object&) const ;
    void setObject(int32_t, const ::java::lang::Object&, int32_t) const ;
    void setObject(int32_t, const ::java::lang::Object&, int32_t, int32_t) const ;
    void setRef(int32_t, const ::java::sql::Ref&) const ;
    void setShort(int32_t, int16_t) const ;
    void setString(int32_t, const ::java::lang::String&) const ;
    void setTime(int32_t, const ::java::sql::Time&) const ;
    void setTime(int32_t, const ::java::sql::Time&, const ::java::util::Calendar&) const ;
    void setTimestamp(int32_t, const ::java::sql::Timestamp&) const ;
    void setTimestamp(int32_t, const ::java::sql::Timestamp&, const ::java::util::Calendar&) const ;
    void setUnicodeStream(int32_t, const ::java::io::InputStream&, int32_t) const ;
    void setURL(int32_t, const ::java::net::URL&) const ;
    void setRowId(int32_t, const ::java::sql::RowId&) const ;
    void setNString(int32_t, const ::java::lang::String&) const ;
    void setNCharacterStream(int32_t, const ::java::io::Reader&, int64_t) const ;
    void setNClob(int32_t, const ::java::sql::NClob&) const ;
    void setClob(int32_t, const ::java::io::Reader&, int64_t) const ;
    void setBlob(int32_t, const ::java::io::InputStream&, int64_t) const ;
    void setNClob(int32_t, const ::java::io::Reader&, int64_t) const ;
    void setSQLXML(int32_t, const ::java::sql::SQLXML&) const ;
    void setAsciiStream(int32_t, const ::java::io::InputStream&, int64_t) const ;
    void setBinaryStream(int32_t, const ::java::io::InputStream&, int64_t) const ;
    void setCharacterStream(int32_t, const ::java::io::Reader&, int64_t) const ;
    void setAsciiStream(int32_t, const ::java::io::InputStream&) const ;
    void setBinaryStream(int32_t, const ::java::io::InputStream&) const ;
    void setCharacterStream(int32_t, const ::java::io::Reader&) const ;
    void setNCharacterStream(int32_t, const ::java::io::Reader&) const ;
    void setClob(int32_t, const ::java::io::Reader&) const ;
    void setBlob(int32_t, const ::java::io::InputStream&) const ;
    void setNClob(int32_t, const ::java::io::Reader&) const ;

};
}
}


