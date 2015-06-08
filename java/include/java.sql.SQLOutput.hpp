#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class Reader; } }
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
namespace java { namespace sql { class SQLData; } }
namespace java { namespace sql { class SQLXML; } }
namespace java { namespace sql { class Struct; } }
namespace java { namespace sql { class Time; } }
namespace java { namespace sql { class Timestamp; } }

namespace java {
namespace sql {
class SQLOutput : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLOutput(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLOutput(const ::java::sql::SQLOutput& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SQLOutput(::java::sql::SQLOutput&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::SQLOutput& operator=(const ::java::sql::SQLOutput& x) {obj = x.obj; return *this;}
    ::java::sql::SQLOutput& operator=(::java::sql::SQLOutput&& x) {obj = std::move(x.obj); return *this;}
    
    void writeString(const ::java::lang::String&) const;
    void writeBoolean(bool) const;
    void writeByte(int8_t) const;
    void writeShort(int16_t) const;
    void writeInt(int32_t) const;
    void writeLong(int64_t) const;
    void writeFloat(float) const;
    void writeDouble(double) const;
    void writeBigDecimal(const ::java::math::BigDecimal&) const;
    void writeBytes(const std::vector< int8_t>&) const;
    void writeDate(const ::java::sql::Date&) const;
    void writeTime(const ::java::sql::Time&) const;
    void writeTimestamp(const ::java::sql::Timestamp&) const;
    void writeCharacterStream(const ::java::io::Reader&) const;
    void writeAsciiStream(const ::java::io::InputStream&) const;
    void writeBinaryStream(const ::java::io::InputStream&) const;
    void writeObject(const ::java::sql::SQLData&) const;
    void writeRef(const ::java::sql::Ref&) const;
    void writeBlob(const ::java::sql::Blob&) const;
    void writeClob(const ::java::sql::Clob&) const;
    void writeStruct(const ::java::sql::Struct&) const;
    void writeArray(const ::java::sql::Array&) const;
    void writeURL(const ::java::net::URL&) const;
    void writeNString(const ::java::lang::String&) const;
    void writeNClob(const ::java::sql::NClob&) const;
    void writeRowId(const ::java::sql::RowId&) const;
    void writeSQLXML(const ::java::sql::SQLXML&) const;

};
}
}


