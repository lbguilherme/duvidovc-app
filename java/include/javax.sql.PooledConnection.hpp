#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace sql { class Connection; } }
namespace javax { namespace sql { class ConnectionEventListener; } }
namespace javax { namespace sql { class StatementEventListener; } }

namespace javax {
namespace sql {
class PooledConnection : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PooledConnection(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PooledConnection(const ::javax::sql::PooledConnection& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PooledConnection(::javax::sql::PooledConnection&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::PooledConnection& operator=(const ::javax::sql::PooledConnection& x) {obj = x.obj; return *this;}
    ::javax::sql::PooledConnection& operator=(::javax::sql::PooledConnection&& x) {obj = std::move(x.obj); return *this;}
    
    void addConnectionEventListener(const ::javax::sql::ConnectionEventListener&) const ;
    void close() const ;
    ::java::sql::Connection getConnection() const ;
    void removeConnectionEventListener(const ::javax::sql::ConnectionEventListener&) const ;
    void addStatementEventListener(const ::javax::sql::StatementEventListener&) const ;
    void removeStatementEventListener(const ::javax::sql::StatementEventListener&) const ;

};
}
}


