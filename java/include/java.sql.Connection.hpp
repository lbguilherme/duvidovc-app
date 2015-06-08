#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.Wrapper.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace sql { class Array; } }
namespace java { namespace sql { class Blob; } }
namespace java { namespace sql { class CallableStatement; } }
namespace java { namespace sql { class Clob; } }
namespace java { namespace sql { class DatabaseMetaData; } }
namespace java { namespace sql { class NClob; } }
namespace java { namespace sql { class PreparedStatement; } }
namespace java { namespace sql { class SQLWarning; } }
namespace java { namespace sql { class SQLXML; } }
namespace java { namespace sql { class Savepoint; } }
namespace java { namespace sql { class Statement; } }
namespace java { namespace sql { class Struct; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Properties; } }

namespace java {
namespace sql {
class Connection : public virtual ::java::lang::Object,
                   public virtual ::java::sql::Wrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Connection(jobject _obj) : ::java::lang::Object(_obj), ::java::sql::Wrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Connection(const ::java::sql::Connection& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj;}
    Connection(::java::sql::Connection&& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Connection& operator=(const ::java::sql::Connection& x) {obj = x.obj; return *this;}
    ::java::sql::Connection& operator=(::java::sql::Connection&& x) {obj = std::move(x.obj); return *this;}
    
    void clearWarnings() const;
    void close() const;
    void commit() const;
    ::java::sql::Statement createStatement() const;
    ::java::sql::Statement createStatement(int32_t, int32_t) const;
    ::java::sql::Statement createStatement(int32_t, int32_t, int32_t) const;
    bool getAutoCommit() const;
    ::java::lang::String getCatalog() const;
    int32_t getHoldability() const;
    ::java::sql::DatabaseMetaData getMetaData() const;
    int32_t getTransactionIsolation() const;
    ::java::util::Map getTypeMap() const;
    ::java::sql::SQLWarning getWarnings() const;
    bool isClosed() const;
    bool isReadOnly() const;
    ::java::lang::String nativeSQL(const ::java::lang::String&) const;
    ::java::sql::CallableStatement prepareCall(const ::java::lang::String&) const;
    ::java::sql::CallableStatement prepareCall(const ::java::lang::String&, int32_t, int32_t) const;
    ::java::sql::CallableStatement prepareCall(const ::java::lang::String&, int32_t, int32_t, int32_t) const;
    ::java::sql::PreparedStatement prepareStatement(const ::java::lang::String&) const;
    ::java::sql::PreparedStatement prepareStatement(const ::java::lang::String&, int32_t) const;
    ::java::sql::PreparedStatement prepareStatement(const ::java::lang::String&, const std::vector< int32_t>&) const;
    ::java::sql::PreparedStatement prepareStatement(const ::java::lang::String&, int32_t, int32_t) const;
    ::java::sql::PreparedStatement prepareStatement(const ::java::lang::String&, int32_t, int32_t, int32_t) const;
    ::java::sql::PreparedStatement prepareStatement(const ::java::lang::String&, const std::vector< ::java::lang::String>&) const;
    void releaseSavepoint(const ::java::sql::Savepoint&) const;
    void rollback() const;
    void rollback(const ::java::sql::Savepoint&) const;
    void setAutoCommit(bool) const;
    void setCatalog(const ::java::lang::String&) const;
    void setHoldability(int32_t) const;
    void setReadOnly(bool) const;
    ::java::sql::Savepoint setSavepoint() const;
    ::java::sql::Savepoint setSavepoint(const ::java::lang::String&) const;
    void setTransactionIsolation(int32_t) const;
    void setTypeMap(const ::java::util::Map&) const;
    ::java::sql::Clob createClob() const;
    ::java::sql::Blob createBlob() const;
    ::java::sql::NClob createNClob() const;
    ::java::sql::SQLXML createSQLXML() const;
    bool isValid(int32_t) const;
    void setClientInfo(const ::java::lang::String&, const ::java::lang::String&) const;
    void setClientInfo(const ::java::util::Properties&) const;
    ::java::lang::String getClientInfo(const ::java::lang::String&) const;
    ::java::util::Properties getClientInfo() const;
    ::java::sql::Array createArrayOf(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const;
    ::java::sql::Struct createStruct(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const;

};
}
}


