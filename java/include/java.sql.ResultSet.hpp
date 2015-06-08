#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.Wrapper.hpp"

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
namespace java { namespace sql { class ResultSetMetaData; } }
namespace java { namespace sql { class RowId; } }
namespace java { namespace sql { class SQLWarning; } }
namespace java { namespace sql { class SQLXML; } }
namespace java { namespace sql { class Statement; } }
namespace java { namespace sql { class Time; } }
namespace java { namespace sql { class Timestamp; } }
namespace java { namespace util { class Calendar; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace sql {
class ResultSet : public virtual ::java::lang::Object,
                  public virtual ::java::sql::Wrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResultSet(jobject _obj) : ::java::lang::Object(_obj), ::java::sql::Wrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResultSet(const ::java::sql::ResultSet& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj;}
    ResultSet(::java::sql::ResultSet&& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::ResultSet& operator=(const ::java::sql::ResultSet& x) {obj = x.obj; return *this;}
    ::java::sql::ResultSet& operator=(::java::sql::ResultSet&& x) {obj = std::move(x.obj); return *this;}
    
    bool absolute(int32_t) const;
    void afterLast() const;
    void beforeFirst() const;
    void cancelRowUpdates() const;
    void clearWarnings() const;
    void close() const;
    void deleteRow() const;
    int32_t findColumn(const ::java::lang::String&) const;
    bool first() const;
    ::java::sql::Array getArray(int32_t) const;
    ::java::sql::Array getArray(const ::java::lang::String&) const;
    ::java::io::InputStream getAsciiStream(int32_t) const;
    ::java::io::InputStream getAsciiStream(const ::java::lang::String&) const;
    ::java::math::BigDecimal getBigDecimal(int32_t) const;
    ::java::math::BigDecimal getBigDecimal(int32_t, int32_t) const;
    ::java::math::BigDecimal getBigDecimal(const ::java::lang::String&) const;
    ::java::math::BigDecimal getBigDecimal(const ::java::lang::String&, int32_t) const;
    ::java::io::InputStream getBinaryStream(int32_t) const;
    ::java::io::InputStream getBinaryStream(const ::java::lang::String&) const;
    ::java::sql::Blob getBlob(int32_t) const;
    ::java::sql::Blob getBlob(const ::java::lang::String&) const;
    bool getBoolean(int32_t) const;
    bool getBoolean(const ::java::lang::String&) const;
    int8_t getByte(int32_t) const;
    int8_t getByte(const ::java::lang::String&) const;
    std::vector< int8_t> getBytes(int32_t) const;
    std::vector< int8_t> getBytes(const ::java::lang::String&) const;
    ::java::io::Reader getCharacterStream(int32_t) const;
    ::java::io::Reader getCharacterStream(const ::java::lang::String&) const;
    ::java::sql::Clob getClob(int32_t) const;
    ::java::sql::Clob getClob(const ::java::lang::String&) const;
    int32_t getConcurrency() const;
    ::java::lang::String getCursorName() const;
    ::java::sql::Date getDate(int32_t) const;
    ::java::sql::Date getDate(int32_t, const ::java::util::Calendar&) const;
    ::java::sql::Date getDate(const ::java::lang::String&) const;
    ::java::sql::Date getDate(const ::java::lang::String&, const ::java::util::Calendar&) const;
    double getDouble(int32_t) const;
    double getDouble(const ::java::lang::String&) const;
    int32_t getFetchDirection() const;
    int32_t getFetchSize() const;
    float getFloat(int32_t) const;
    float getFloat(const ::java::lang::String&) const;
    int32_t getInt(int32_t) const;
    int32_t getInt(const ::java::lang::String&) const;
    int64_t getLong(int32_t) const;
    int64_t getLong(const ::java::lang::String&) const;
    ::java::sql::ResultSetMetaData getMetaData() const;
    ::java::lang::Object getObject(int32_t) const;
    ::java::lang::Object getObject(int32_t, const ::java::util::Map&) const;
    ::java::lang::Object getObject(const ::java::lang::String&) const;
    ::java::lang::Object getObject(const ::java::lang::String&, const ::java::util::Map&) const;
    ::java::sql::Ref getRef(int32_t) const;
    ::java::sql::Ref getRef(const ::java::lang::String&) const;
    int32_t getRow() const;
    int16_t getShort(int32_t) const;
    int16_t getShort(const ::java::lang::String&) const;
    ::java::sql::Statement getStatement() const;
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
    int32_t getType() const;
    ::java::io::InputStream getUnicodeStream(int32_t) const;
    ::java::io::InputStream getUnicodeStream(const ::java::lang::String&) const;
    ::java::net::URL getURL(int32_t) const;
    ::java::net::URL getURL(const ::java::lang::String&) const;
    ::java::sql::SQLWarning getWarnings() const;
    void insertRow() const;
    bool isAfterLast() const;
    bool isBeforeFirst() const;
    bool isFirst() const;
    bool isLast() const;
    bool last() const;
    void moveToCurrentRow() const;
    void moveToInsertRow() const;
    bool next() const;
    bool previous() const;
    void refreshRow() const;
    bool relative(int32_t) const;
    bool rowDeleted() const;
    bool rowInserted() const;
    bool rowUpdated() const;
    void setFetchDirection(int32_t) const;
    void setFetchSize(int32_t) const;
    void updateArray(int32_t, const ::java::sql::Array&) const;
    void updateArray(const ::java::lang::String&, const ::java::sql::Array&) const;
    void updateAsciiStream(int32_t, const ::java::io::InputStream&, int32_t) const;
    void updateAsciiStream(const ::java::lang::String&, const ::java::io::InputStream&, int32_t) const;
    void updateBigDecimal(int32_t, const ::java::math::BigDecimal&) const;
    void updateBigDecimal(const ::java::lang::String&, const ::java::math::BigDecimal&) const;
    void updateBinaryStream(int32_t, const ::java::io::InputStream&, int32_t) const;
    void updateBinaryStream(const ::java::lang::String&, const ::java::io::InputStream&, int32_t) const;
    void updateBlob(int32_t, const ::java::sql::Blob&) const;
    void updateBlob(const ::java::lang::String&, const ::java::sql::Blob&) const;
    void updateBoolean(int32_t, bool) const;
    void updateBoolean(const ::java::lang::String&, bool) const;
    void updateByte(int32_t, int8_t) const;
    void updateByte(const ::java::lang::String&, int8_t) const;
    void updateBytes(int32_t, const std::vector< int8_t>&) const;
    void updateBytes(const ::java::lang::String&, const std::vector< int8_t>&) const;
    void updateCharacterStream(int32_t, const ::java::io::Reader&, int32_t) const;
    void updateCharacterStream(const ::java::lang::String&, const ::java::io::Reader&, int32_t) const;
    void updateClob(int32_t, const ::java::sql::Clob&) const;
    void updateClob(const ::java::lang::String&, const ::java::sql::Clob&) const;
    void updateDate(int32_t, const ::java::sql::Date&) const;
    void updateDate(const ::java::lang::String&, const ::java::sql::Date&) const;
    void updateDouble(int32_t, double) const;
    void updateDouble(const ::java::lang::String&, double) const;
    void updateFloat(int32_t, float) const;
    void updateFloat(const ::java::lang::String&, float) const;
    void updateInt(int32_t, int32_t) const;
    void updateInt(const ::java::lang::String&, int32_t) const;
    void updateLong(int32_t, int64_t) const;
    void updateLong(const ::java::lang::String&, int64_t) const;
    void updateNull(int32_t) const;
    void updateNull(const ::java::lang::String&) const;
    void updateObject(int32_t, const ::java::lang::Object&) const;
    void updateObject(int32_t, const ::java::lang::Object&, int32_t) const;
    void updateObject(const ::java::lang::String&, const ::java::lang::Object&) const;
    void updateObject(const ::java::lang::String&, const ::java::lang::Object&, int32_t) const;
    void updateRef(int32_t, const ::java::sql::Ref&) const;
    void updateRef(const ::java::lang::String&, const ::java::sql::Ref&) const;
    void updateRow() const;
    void updateShort(int32_t, int16_t) const;
    void updateShort(const ::java::lang::String&, int16_t) const;
    void updateString(int32_t, const ::java::lang::String&) const;
    void updateString(const ::java::lang::String&, const ::java::lang::String&) const;
    void updateTime(int32_t, const ::java::sql::Time&) const;
    void updateTime(const ::java::lang::String&, const ::java::sql::Time&) const;
    void updateTimestamp(int32_t, const ::java::sql::Timestamp&) const;
    void updateTimestamp(const ::java::lang::String&, const ::java::sql::Timestamp&) const;
    bool wasNull() const;
    ::java::sql::RowId getRowId(int32_t) const;
    ::java::sql::RowId getRowId(const ::java::lang::String&) const;
    void updateRowId(int32_t, const ::java::sql::RowId&) const;
    void updateRowId(const ::java::lang::String&, const ::java::sql::RowId&) const;
    int32_t getHoldability() const;
    bool isClosed() const;
    void updateNString(int32_t, const ::java::lang::String&) const;
    void updateNString(const ::java::lang::String&, const ::java::lang::String&) const;
    void updateNClob(int32_t, const ::java::sql::NClob&) const;
    void updateNClob(const ::java::lang::String&, const ::java::sql::NClob&) const;
    ::java::sql::NClob getNClob(int32_t) const;
    ::java::sql::NClob getNClob(const ::java::lang::String&) const;
    ::java::sql::SQLXML getSQLXML(int32_t) const;
    ::java::sql::SQLXML getSQLXML(const ::java::lang::String&) const;
    void updateSQLXML(int32_t, const ::java::sql::SQLXML&) const;
    void updateSQLXML(const ::java::lang::String&, const ::java::sql::SQLXML&) const;
    ::java::lang::String getNString(int32_t) const;
    ::java::lang::String getNString(const ::java::lang::String&) const;
    ::java::io::Reader getNCharacterStream(int32_t) const;
    ::java::io::Reader getNCharacterStream(const ::java::lang::String&) const;
    void updateNCharacterStream(int32_t, const ::java::io::Reader&, int64_t) const;
    void updateNCharacterStream(const ::java::lang::String&, const ::java::io::Reader&, int64_t) const;
    void updateAsciiStream(int32_t, const ::java::io::InputStream&, int64_t) const;
    void updateBinaryStream(int32_t, const ::java::io::InputStream&, int64_t) const;
    void updateCharacterStream(int32_t, const ::java::io::Reader&, int64_t) const;
    void updateAsciiStream(const ::java::lang::String&, const ::java::io::InputStream&, int64_t) const;
    void updateBinaryStream(const ::java::lang::String&, const ::java::io::InputStream&, int64_t) const;
    void updateCharacterStream(const ::java::lang::String&, const ::java::io::Reader&, int64_t) const;
    void updateBlob(int32_t, const ::java::io::InputStream&, int64_t) const;
    void updateBlob(const ::java::lang::String&, const ::java::io::InputStream&, int64_t) const;
    void updateClob(int32_t, const ::java::io::Reader&, int64_t) const;
    void updateClob(const ::java::lang::String&, const ::java::io::Reader&, int64_t) const;
    void updateNClob(int32_t, const ::java::io::Reader&, int64_t) const;
    void updateNClob(const ::java::lang::String&, const ::java::io::Reader&, int64_t) const;
    void updateNCharacterStream(int32_t, const ::java::io::Reader&) const;
    void updateNCharacterStream(const ::java::lang::String&, const ::java::io::Reader&) const;
    void updateAsciiStream(int32_t, const ::java::io::InputStream&) const;
    void updateBinaryStream(int32_t, const ::java::io::InputStream&) const;
    void updateCharacterStream(int32_t, const ::java::io::Reader&) const;
    void updateAsciiStream(const ::java::lang::String&, const ::java::io::InputStream&) const;
    void updateBinaryStream(const ::java::lang::String&, const ::java::io::InputStream&) const;
    void updateCharacterStream(const ::java::lang::String&, const ::java::io::Reader&) const;
    void updateBlob(int32_t, const ::java::io::InputStream&) const;
    void updateBlob(const ::java::lang::String&, const ::java::io::InputStream&) const;
    void updateClob(int32_t, const ::java::io::Reader&) const;
    void updateClob(const ::java::lang::String&, const ::java::io::Reader&) const;
    void updateNClob(int32_t, const ::java::io::Reader&) const;
    void updateNClob(const ::java::lang::String&, const ::java::io::Reader&) const;

};
}
}


