#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.ResultSet.hpp"

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
namespace javax { namespace sql { class RowSetListener; } }

namespace javax {
namespace sql {
class RowSet : public virtual ::java::lang::Object,
               public virtual ::java::sql::ResultSet {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RowSet(jobject _obj) : ::java::lang::Object(_obj), ::java::sql::ResultSet(_obj), ::java::sql::Wrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RowSet(const ::javax::sql::RowSet& x) : ::java::lang::Object((jobject)0), ::java::sql::ResultSet((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj;}
    RowSet(::javax::sql::RowSet&& x) : ::java::lang::Object((jobject)0), ::java::sql::ResultSet((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::RowSet& operator=(const ::javax::sql::RowSet& x) {obj = x.obj; return *this;}
    ::javax::sql::RowSet& operator=(::javax::sql::RowSet&& x) {obj = std::move(x.obj); return *this;}
    
    void addRowSetListener(const ::javax::sql::RowSetListener&) const;
    void clearParameters() const;
    void execute() const;
    ::java::lang::String getCommand() const;
    ::java::lang::String getDataSourceName() const;
    bool getEscapeProcessing() const;
    int32_t getMaxFieldSize() const;
    int32_t getMaxRows() const;
    ::java::lang::String getPassword() const;
    int32_t getQueryTimeout() const;
    int32_t getTransactionIsolation() const;
    ::java::util::Map getTypeMap() const;
    ::java::lang::String getUrl() const;
    ::java::lang::String getUsername() const;
    bool isReadOnly() const;
    void removeRowSetListener(const ::javax::sql::RowSetListener&) const;
    void setArray(int32_t, const ::java::sql::Array&) const;
    void setAsciiStream(int32_t, const ::java::io::InputStream&, int32_t) const;
    void setAsciiStream(int32_t, const ::java::io::InputStream&) const;
    void setAsciiStream(const ::java::lang::String&, const ::java::io::InputStream&) const;
    void setAsciiStream(const ::java::lang::String&, const ::java::io::InputStream&, int32_t) const;
    void setBigDecimal(int32_t, const ::java::math::BigDecimal&) const;
    void setBigDecimal(const ::java::lang::String&, const ::java::math::BigDecimal&) const;
    void setBinaryStream(int32_t, const ::java::io::InputStream&, int32_t) const;
    void setBinaryStream(int32_t, const ::java::io::InputStream&) const;
    void setBinaryStream(const ::java::lang::String&, const ::java::io::InputStream&) const;
    void setBinaryStream(const ::java::lang::String&, const ::java::io::InputStream&, int32_t) const;
    void setBlob(int32_t, const ::java::sql::Blob&) const;
    void setBlob(int32_t, const ::java::io::InputStream&) const;
    void setBlob(int32_t, const ::java::io::InputStream&, int64_t) const;
    void setBlob(const ::java::lang::String&, const ::java::io::InputStream&) const;
    void setBlob(const ::java::lang::String&, const ::java::io::InputStream&, int64_t) const;
    void setBlob(const ::java::lang::String&, const ::java::sql::Blob&) const;
    void setBoolean(int32_t, bool) const;
    void setBoolean(const ::java::lang::String&, bool) const;
    void setByte(int32_t, int8_t) const;
    void setByte(const ::java::lang::String&, int8_t) const;
    void setBytes(int32_t, const std::vector< int8_t>&) const;
    void setBytes(const ::java::lang::String&, const std::vector< int8_t>&) const;
    void setCharacterStream(int32_t, const ::java::io::Reader&, int32_t) const;
    void setCharacterStream(int32_t, const ::java::io::Reader&) const;
    void setCharacterStream(const ::java::lang::String&, const ::java::io::Reader&) const;
    void setCharacterStream(const ::java::lang::String&, const ::java::io::Reader&, int32_t) const;
    void setClob(int32_t, const ::java::sql::Clob&) const;
    void setClob(int32_t, const ::java::io::Reader&) const;
    void setClob(int32_t, const ::java::io::Reader&, int64_t) const;
    void setClob(const ::java::lang::String&, const ::java::sql::Clob&) const;
    void setClob(const ::java::lang::String&, const ::java::io::Reader&) const;
    void setClob(const ::java::lang::String&, const ::java::io::Reader&, int64_t) const;
    void setCommand(const ::java::lang::String&) const;
    void setConcurrency(int32_t) const;
    void setDataSourceName(const ::java::lang::String&) const;
    void setDate(int32_t, const ::java::sql::Date&) const;
    void setDate(int32_t, const ::java::sql::Date&, const ::java::util::Calendar&) const;
    void setDate(const ::java::lang::String&, const ::java::sql::Date&) const;
    void setDate(const ::java::lang::String&, const ::java::sql::Date&, const ::java::util::Calendar&) const;
    void setDouble(int32_t, double) const;
    void setDouble(const ::java::lang::String&, double) const;
    void setEscapeProcessing(bool) const;
    void setFloat(int32_t, float) const;
    void setFloat(const ::java::lang::String&, float) const;
    void setInt(int32_t, int32_t) const;
    void setInt(const ::java::lang::String&, int32_t) const;
    void setLong(int32_t, int64_t) const;
    void setLong(const ::java::lang::String&, int64_t) const;
    void setMaxFieldSize(int32_t) const;
    void setMaxRows(int32_t) const;
    void setNCharacterStream(int32_t, const ::java::io::Reader&) const;
    void setNCharacterStream(int32_t, const ::java::io::Reader&, int64_t) const;
    void setNCharacterStream(const ::java::lang::String&, const ::java::io::Reader&) const;
    void setNCharacterStream(const ::java::lang::String&, const ::java::io::Reader&, int64_t) const;
    void setNClob(int32_t, const ::java::sql::NClob&) const;
    void setNClob(int32_t, const ::java::io::Reader&) const;
    void setNClob(int32_t, const ::java::io::Reader&, int64_t) const;
    void setNClob(const ::java::lang::String&, const ::java::sql::NClob&) const;
    void setNClob(const ::java::lang::String&, const ::java::io::Reader&) const;
    void setNClob(const ::java::lang::String&, const ::java::io::Reader&, int64_t) const;
    void setNString(int32_t, const ::java::lang::String&) const;
    void setNString(const ::java::lang::String&, const ::java::lang::String&) const;
    void setNull(int32_t, int32_t) const;
    void setNull(int32_t, int32_t, const ::java::lang::String&) const;
    void setNull(const ::java::lang::String&, int32_t) const;
    void setNull(const ::java::lang::String&, int32_t, const ::java::lang::String&) const;
    void setObject(int32_t, const ::java::lang::Object&) const;
    void setObject(int32_t, const ::java::lang::Object&, int32_t) const;
    void setObject(int32_t, const ::java::lang::Object&, int32_t, int32_t) const;
    void setObject(const ::java::lang::String&, const ::java::lang::Object&) const;
    void setObject(const ::java::lang::String&, const ::java::lang::Object&, int32_t) const;
    void setObject(const ::java::lang::String&, const ::java::lang::Object&, int32_t, int32_t) const;
    void setPassword(const ::java::lang::String&) const;
    void setQueryTimeout(int32_t) const;
    void setReadOnly(bool) const;
    void setRef(int32_t, const ::java::sql::Ref&) const;
    void setShort(int32_t, int16_t) const;
    void setShort(const ::java::lang::String&, int16_t) const;
    void setString(int32_t, const ::java::lang::String&) const;
    void setString(const ::java::lang::String&, const ::java::lang::String&) const;
    void setRowId(int32_t, const ::java::sql::RowId&) const;
    void setRowId(const ::java::lang::String&, const ::java::sql::RowId&) const;
    void setSQLXML(int32_t, const ::java::sql::SQLXML&) const;
    void setSQLXML(const ::java::lang::String&, const ::java::sql::SQLXML&) const;
    void setTime(int32_t, const ::java::sql::Time&) const;
    void setTime(int32_t, const ::java::sql::Time&, const ::java::util::Calendar&) const;
    void setTime(const ::java::lang::String&, const ::java::sql::Time&) const;
    void setTime(const ::java::lang::String&, const ::java::sql::Time&, const ::java::util::Calendar&) const;
    void setTimestamp(int32_t, const ::java::sql::Timestamp&) const;
    void setTimestamp(int32_t, const ::java::sql::Timestamp&, const ::java::util::Calendar&) const;
    void setTimestamp(const ::java::lang::String&, const ::java::sql::Timestamp&) const;
    void setTimestamp(const ::java::lang::String&, const ::java::sql::Timestamp&, const ::java::util::Calendar&) const;
    void setTransactionIsolation(int32_t) const;
    void setType(int32_t) const;
    void setTypeMap(const ::java::util::Map&) const;
    void setUrl(const ::java::lang::String&) const;
    void setURL(int32_t, const ::java::net::URL&) const;
    void setUsername(const ::java::lang::String&) const;

};
}
}


