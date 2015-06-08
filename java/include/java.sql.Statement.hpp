#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.Wrapper.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace sql { class Connection; } }
namespace java { namespace sql { class ResultSet; } }
namespace java { namespace sql { class SQLWarning; } }

namespace java {
namespace sql {
class Statement : public virtual ::java::lang::Object,
                  public virtual ::java::sql::Wrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Statement(jobject _obj) : ::java::lang::Object(_obj), ::java::sql::Wrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Statement(const ::java::sql::Statement& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj;}
    Statement(::java::sql::Statement&& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Statement& operator=(const ::java::sql::Statement& x) {obj = x.obj; return *this;}
    ::java::sql::Statement& operator=(::java::sql::Statement&& x) {obj = std::move(x.obj); return *this;}
    
    void addBatch(const ::java::lang::String&) const;
    void cancel() const;
    void clearBatch() const;
    void clearWarnings() const;
    void close() const;
    bool execute(const ::java::lang::String&) const;
    bool execute(const ::java::lang::String&, int32_t) const;
    bool execute(const ::java::lang::String&, const std::vector< int32_t>&) const;
    bool execute(const ::java::lang::String&, const std::vector< ::java::lang::String>&) const;
    std::vector< int32_t> executeBatch() const;
    ::java::sql::ResultSet executeQuery(const ::java::lang::String&) const;
    int32_t executeUpdate(const ::java::lang::String&) const;
    int32_t executeUpdate(const ::java::lang::String&, int32_t) const;
    int32_t executeUpdate(const ::java::lang::String&, const std::vector< int32_t>&) const;
    int32_t executeUpdate(const ::java::lang::String&, const std::vector< ::java::lang::String>&) const;
    ::java::sql::Connection getConnection() const;
    int32_t getFetchDirection() const;
    int32_t getFetchSize() const;
    ::java::sql::ResultSet getGeneratedKeys() const;
    int32_t getMaxFieldSize() const;
    int32_t getMaxRows() const;
    bool getMoreResults() const;
    bool getMoreResults(int32_t) const;
    int32_t getQueryTimeout() const;
    ::java::sql::ResultSet getResultSet() const;
    int32_t getResultSetConcurrency() const;
    int32_t getResultSetHoldability() const;
    int32_t getResultSetType() const;
    int32_t getUpdateCount() const;
    ::java::sql::SQLWarning getWarnings() const;
    void setCursorName(const ::java::lang::String&) const;
    void setEscapeProcessing(bool) const;
    void setFetchDirection(int32_t) const;
    void setFetchSize(int32_t) const;
    void setMaxFieldSize(int32_t) const;
    void setMaxRows(int32_t) const;
    void setQueryTimeout(int32_t) const;
    bool isClosed() const;
    void setPoolable(bool) const;
    bool isPoolable() const;

};
}
}


