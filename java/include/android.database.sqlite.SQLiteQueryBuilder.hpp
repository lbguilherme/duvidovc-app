#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace database { class Cursor; } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase_CursorFactory; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuilder; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace database {
namespace sqlite {
class SQLiteQueryBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteQueryBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteQueryBuilder(const ::android::database::sqlite::SQLiteQueryBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SQLiteQueryBuilder(::android::database::sqlite::SQLiteQueryBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteQueryBuilder& operator=(const ::android::database::sqlite::SQLiteQueryBuilder& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteQueryBuilder& operator=(::android::database::sqlite::SQLiteQueryBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    SQLiteQueryBuilder();
    void setDistinct(bool) const ;
    ::java::lang::String getTables() const ;
    void setTables(const ::java::lang::String&) const ;
    void appendWhere(const ::java::lang::CharSequence&) const ;
    void appendWhereEscapeString(const ::java::lang::String&) const ;
    void setProjectionMap(const ::java::util::Map&) const ;
    void setCursorFactory(const ::android::database::sqlite::SQLiteDatabase_CursorFactory&) const ;
    void setStrict(bool) const ;
    static ::java::lang::String buildQueryString(bool, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static void appendColumns(const ::java::lang::StringBuilder&, const std::vector< ::java::lang::String>&);
    ::android::database::Cursor query(const ::android::database::sqlite::SQLiteDatabase&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::database::Cursor query(const ::android::database::sqlite::SQLiteDatabase&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String buildQuery(const std::vector< ::java::lang::String>&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String buildQuery(const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String buildUnionSubQuery(const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::util::Set&, int32_t, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String buildUnionSubQuery(const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::util::Set&, int32_t, const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String buildUnionQuery(const std::vector< ::java::lang::String>&, const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}


