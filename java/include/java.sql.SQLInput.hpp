#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

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

namespace java {
namespace sql {
class SQLInput : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLInput(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLInput(const ::java::sql::SQLInput& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SQLInput(::java::sql::SQLInput&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::SQLInput& operator=(const ::java::sql::SQLInput& x) {obj = x.obj; return *this;}
    ::java::sql::SQLInput& operator=(::java::sql::SQLInput&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String readString() const ;
    bool readBoolean() const ;
    int8_t readByte() const ;
    int16_t readShort() const ;
    int32_t readInt() const ;
    int64_t readLong() const ;
    float readFloat() const ;
    double readDouble() const ;
    ::java::math::BigDecimal readBigDecimal() const ;
    std::vector< int8_t> readBytes() const ;
    ::java::sql::Date readDate() const ;
    ::java::sql::Time readTime() const ;
    ::java::sql::Timestamp readTimestamp() const ;
    ::java::io::Reader readCharacterStream() const ;
    ::java::io::InputStream readAsciiStream() const ;
    ::java::io::InputStream readBinaryStream() const ;
    ::java::lang::Object readObject() const ;
    ::java::sql::Ref readRef() const ;
    ::java::sql::Blob readBlob() const ;
    ::java::sql::Clob readClob() const ;
    ::java::sql::Array readArray() const ;
    bool wasNull() const ;
    ::java::net::URL readURL() const ;
    ::java::sql::NClob readNClob() const ;
    ::java::lang::String readNString() const ;
    ::java::sql::SQLXML readSQLXML() const ;
    ::java::sql::RowId readRowId() const ;

};
}
}


