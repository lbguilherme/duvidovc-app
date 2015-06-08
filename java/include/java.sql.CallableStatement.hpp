#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.PreparedStatement.hpp"

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
namespace java { namespace sql { class Ref; } }
namespace java { namespace sql { class RowId; } }
namespace java { namespace sql { class SQLXML; } }
namespace java { namespace sql { class Time; } }
namespace java { namespace sql { class Timestamp; } }
namespace java { namespace util { class Calendar; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace sql {
class CallableStatement : public virtual ::java::lang::Object,
                          public virtual ::java::sql::PreparedStatement {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CallableStatement(jobject _obj) : ::java::lang::Object(_obj), ::java::sql::PreparedStatement(_obj), ::java::sql::Statement(_obj), ::java::sql::Wrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CallableStatement(const ::java::sql::CallableStatement& x) : ::java::lang::Object((jobject)0), ::java::sql::PreparedStatement((jobject)0), ::java::sql::Statement((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj;}
    CallableStatement(::java::sql::CallableStatement&& x) : ::java::lang::Object((jobject)0), ::java::sql::PreparedStatement((jobject)0), ::java::sql::Statement((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::CallableStatement& operator=(const ::java::sql::CallableStatement& x) {obj = x.obj; return *this;}
    ::java::sql::CallableStatement& operator=(::java::sql::CallableStatement&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::sql::Array getArray(int32_t) const;
    ::java::sql::Array getArray(const ::java::lang::String&) const;
    ::java::math::BigDecimal getBigDecimal(int32_t) const;
    ::java::math::BigDecimal getBigDecimal(int32_t, int32_t) const;
    ::java::math::BigDecimal getBigDecimal(const ::java::lang::String&) const;
    ::java::sql::Blob getBlob(int32_t) const;
    ::java::sql::Blob getBlob(const ::java::lang::String&) const;
    bool getBoolean(int32_t) const;
    bool getBoolean(const ::java::lang::String&) const;
    int8_t getByte(int32_t) const;
    int8_t getByte(const ::java::lang::String&) const;
    std::vector< int8_t> getBytes(int32_t) const;
    std::vector< int8_t> getBytes(const ::java::lang::String&) const;
    ::java::sql::Clob getClob(int32_t) const;
    ::java::sql::Clob getClob(const ::java::lang::String&) const;
    ::java::sql::Date getDate(int32_t) const;
    ::java::sql::Date getDate(int32_t, const ::java::util::Calendar&) const;
    ::java::sql::Date getDate(const ::java::lang::String&) const;
    ::java::sql::Date getDate(const ::java::lang::String&, const ::java::util::Calendar&) const;
    double getDouble(int32_t) const;
    double getDouble(const ::java::lang::String&) const;
    float getFloat(int32_t) const;
    float getFloat(const ::java::lang::String&) const;
    int32_t getInt(int32_t) const;
    int32_t getInt(const ::java::lang::String&) const;
    int64_t getLong(int32_t) const;
    int64_t getLong(const ::java::lang::String&) const;
    ::java::lang::Object getObject(int32_t) const;
    ::java::lang::Object getObject(int32_t, const ::java::util::Map&) const;
    ::java::lang::Object getObject(const ::java::lang::String&) const;
    ::java::lang::Object getObject(const ::java::lang::String&, const ::java::util::Map&) const;
    ::java::sql::Ref getRef(int32_t) const;
    ::java::sql::Ref getRef(const ::java::lang::String&) const;
    int16_t getShort(int32_t) const;
    int16_t getShort(const ::java::lang::String&) const;
    ::java::lang::String getString(int32_t) const;
    ::java::lang::String getString(const ::java::lang::String&) const;
    ::java::sql::Time getTime(int32_t) const;
    ::java::sql::Time getTime(int32_t, const ::java::util::Calendar&) const;
    ::java::sql::Time getTime(const ::java::lang::String&) const;
    ::java::sql::Time getTime(const ::java::lang::String&, const ::java::util::Calendar&) const;
    ::java::sql::Timestamp getTimestamp(int32_t) const;
    ::java::sql::Timestamp getTimestamp(int32_t, const ::java::util::Calendar&) const;
    ::java::sql::Timestamp getTimestamp(const ::java::lang::String&) const;
    ::java::sql::Timestamp getTimestamp(const ::java::lang::String&, const ::java::util::Calendar&) const;
    ::java::net::URL getURL(int32_t) const;
    ::java::net::URL getURL(const ::java::lang::String&) const;
    void registerOutParameter(int32_t, int32_t) const;
    void registerOutParameter(int32_t, int32_t, int32_t) const;
    void registerOutParameter(int32_t, int32_t, const ::java::lang::String&) const;
    void registerOutParameter(const ::java::lang::String&, int32_t) const;
    void registerOutParameter(const ::java::lang::String&, int32_t, int32_t) const;
    void registerOutParameter(const ::java::lang::String&, int32_t, const ::java::lang::String&) const;
    void setAsciiStream(const ::java::lang::String&, const ::java::io::InputStream&, int32_t) const;
    void setBigDecimal(const ::java::lang::String&, const ::java::math::BigDecimal&) const;
    void setBinaryStream(const ::java::lang::String&, const ::java::io::InputStream&, int32_t) const;
    void setBoolean(const ::java::lang::String&, bool) const;
    void setByte(const ::java::lang::String&, int8_t) const;
    void setBytes(const ::java::lang::String&, const std::vector< int8_t>&) const;
    void setCharacterStream(const ::java::lang::String&, const ::java::io::Reader&, int32_t) const;
    void setDate(const ::java::lang::String&, const ::java::sql::Date&) const;
    void setDate(const ::java::lang::String&, const ::java::sql::Date&, const ::java::util::Calendar&) const;
    void setDouble(const ::java::lang::String&, double) const;
    void setFloat(const ::java::lang::String&, float) const;
    void setInt(const ::java::lang::String&, int32_t) const;
    void setLong(const ::java::lang::String&, int64_t) const;
    void setNull(const ::java::lang::String&, int32_t) const;
    void setNull(const ::java::lang::String&, int32_t, const ::java::lang::String&) const;
    void setObject(const ::java::lang::String&, const ::java::lang::Object&) const;
    void setObject(const ::java::lang::String&, const ::java::lang::Object&, int32_t) const;
    void setObject(const ::java::lang::String&, const ::java::lang::Object&, int32_t, int32_t) const;
    void setShort(const ::java::lang::String&, int16_t) const;
    void setString(const ::java::lang::String&, const ::java::lang::String&) const;
    void setTime(const ::java::lang::String&, const ::java::sql::Time&) const;
    void setTime(const ::java::lang::String&, const ::java::sql::Time&, const ::java::util::Calendar&) const;
    void setTimestamp(const ::java::lang::String&, const ::java::sql::Timestamp&) const;
    void setTimestamp(const ::java::lang::String&, const ::java::sql::Timestamp&, const ::java::util::Calendar&) const;
    void setURL(const ::java::lang::String&, const ::java::net::URL&) const;
    bool wasNull() const;
    ::java::sql::RowId getRowId(int32_t) const;
    ::java::sql::RowId getRowId(const ::java::lang::String&) const;
    void setRowId(const ::java::lang::String&, const ::java::sql::RowId&) const;
    void setNString(const ::java::lang::String&, const ::java::lang::String&) const;
    void setNCharacterStream(const ::java::lang::String&, const ::java::io::Reader&, int64_t) const;
    void setNClob(const ::java::lang::String&, const ::java::sql::NClob&) const;
    void setClob(const ::java::lang::String&, const ::java::io::Reader&, int64_t) const;
    void setBlob(const ::java::lang::String&, const ::java::io::InputStream&, int64_t) const;
    void setNClob(const ::java::lang::String&, const ::java::io::Reader&, int64_t) const;
    ::java::sql::NClob getNClob(int32_t) const;
    ::java::sql::NClob getNClob(const ::java::lang::String&) const;
    void setSQLXML(const ::java::lang::String&, const ::java::sql::SQLXML&) const;
    ::java::sql::SQLXML getSQLXML(int32_t) const;
    ::java::sql::SQLXML getSQLXML(const ::java::lang::String&) const;
    ::java::lang::String getNString(int32_t) const;
    ::java::lang::String getNString(const ::java::lang::String&) const;
    ::java::io::Reader getNCharacterStream(int32_t) const;
    ::java::io::Reader getNCharacterStream(const ::java::lang::String&) const;
    ::java::io::Reader getCharacterStream(int32_t) const;
    ::java::io::Reader getCharacterStream(const ::java::lang::String&) const;
    void setBlob(const ::java::lang::String&, const ::java::sql::Blob&) const;
    void setClob(const ::java::lang::String&, const ::java::sql::Clob&) const;
    void setAsciiStream(const ::java::lang::String&, const ::java::io::InputStream&, int64_t) const;
    void setAsciiStream(const ::java::lang::String&, const ::java::io::InputStream&) const;
    void setBinaryStream(const ::java::lang::String&, const ::java::io::InputStream&, int64_t) const;
    void setBinaryStream(const ::java::lang::String&, const ::java::io::InputStream&) const;
    void setCharacterStream(const ::java::lang::String&, const ::java::io::Reader&, int64_t) const;
    void setCharacterStream(const ::java::lang::String&, const ::java::io::Reader&) const;
    void setNCharacterStream(const ::java::lang::String&, const ::java::io::Reader&) const;
    void setClob(const ::java::lang::String&, const ::java::io::Reader&) const;
    void setBlob(const ::java::lang::String&, const ::java::io::InputStream&) const;
    void setNClob(const ::java::lang::String&, const ::java::io::Reader&) const;

};
}
}


