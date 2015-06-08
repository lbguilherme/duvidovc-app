#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace sql { class Connection; } }
namespace java { namespace sql { class ResultSet; } }
namespace javax { namespace sql { class RowSetMetaData; } }

namespace javax {
namespace sql {
class RowSetInternal : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RowSetInternal(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RowSetInternal(const ::javax::sql::RowSetInternal& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RowSetInternal(::javax::sql::RowSetInternal&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::RowSetInternal& operator=(const ::javax::sql::RowSetInternal& x) {obj = x.obj; return *this;}
    ::javax::sql::RowSetInternal& operator=(::javax::sql::RowSetInternal&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::sql::Connection getConnection() const;
    ::java::sql::ResultSet getOriginal() const;
    ::java::sql::ResultSet getOriginalRow() const;
    std::vector< ::java::lang::Object> getParams() const;
    void setMetaData(const ::javax::sql::RowSetMetaData&) const;

};
}
}


