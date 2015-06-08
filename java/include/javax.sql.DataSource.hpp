#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.Wrapper.hpp"
#include "javax.sql.CommonDataSource.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace sql { class Connection; } }

namespace javax {
namespace sql {
class DataSource : public virtual ::java::lang::Object,
                   public virtual ::java::sql::Wrapper,
                   public virtual ::javax::sql::CommonDataSource {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DataSource(jobject _obj) : ::java::lang::Object(_obj), ::java::sql::Wrapper(_obj), ::javax::sql::CommonDataSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DataSource(const ::javax::sql::DataSource& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0), ::javax::sql::CommonDataSource((jobject)0) {obj = x.obj;}
    DataSource(::javax::sql::DataSource&& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0), ::javax::sql::CommonDataSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::sql::DataSource& operator=(const ::javax::sql::DataSource& x) {obj = x.obj; return *this;}
    ::javax::sql::DataSource& operator=(::javax::sql::DataSource&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::sql::Connection getConnection() const;
    ::java::sql::Connection getConnection(const ::java::lang::String&, const ::java::lang::String&) const;

};
}
}


