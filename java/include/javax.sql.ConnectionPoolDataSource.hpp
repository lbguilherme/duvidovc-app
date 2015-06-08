#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.sql.CommonDataSource.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace sql { class PooledConnection; } }

namespace javax {
namespace sql {
class ConnectionPoolDataSource : public virtual ::java::lang::Object,
                                 public virtual ::javax::sql::CommonDataSource {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectionPoolDataSource(jobject _obj) : ::java::lang::Object(_obj), ::javax::sql::CommonDataSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectionPoolDataSource(const ::javax::sql::ConnectionPoolDataSource& x) : ::java::lang::Object((jobject)0), ::javax::sql::CommonDataSource((jobject)0) {obj = x.obj;}
    ConnectionPoolDataSource(::javax::sql::ConnectionPoolDataSource&& x) : ::java::lang::Object((jobject)0), ::javax::sql::CommonDataSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::ConnectionPoolDataSource& operator=(const ::javax::sql::ConnectionPoolDataSource& x) {obj = x.obj; return *this;}
    ::javax::sql::ConnectionPoolDataSource& operator=(::javax::sql::ConnectionPoolDataSource&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::sql::PooledConnection getPooledConnection() const;
    ::javax::sql::PooledConnection getPooledConnection(const ::java::lang::String&, const ::java::lang::String&) const;

};
}
}


