#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace database { class DatabaseErrorHandler; } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase_CursorFactory; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace database {
namespace sqlite {
class SQLiteOpenHelper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteOpenHelper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteOpenHelper(const ::android::database::sqlite::SQLiteOpenHelper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SQLiteOpenHelper(::android::database::sqlite::SQLiteOpenHelper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteOpenHelper& operator=(const ::android::database::sqlite::SQLiteOpenHelper& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteOpenHelper& operator=(::android::database::sqlite::SQLiteOpenHelper&& x) {obj = std::move(x.obj); return *this;}
    
    SQLiteOpenHelper(const ::android::content::Context&, const ::java::lang::String&, const ::android::database::sqlite::SQLiteDatabase_CursorFactory&, int32_t);
    SQLiteOpenHelper(const ::android::content::Context&, const ::java::lang::String&, const ::android::database::sqlite::SQLiteDatabase_CursorFactory&, int32_t, const ::android::database::DatabaseErrorHandler&);
    ::java::lang::String getDatabaseName() const;
    ::android::database::sqlite::SQLiteDatabase getWritableDatabase() const;
    ::android::database::sqlite::SQLiteDatabase getReadableDatabase() const;
    void close() const;
    void onCreate(const ::android::database::sqlite::SQLiteDatabase&) const;
    void onUpgrade(const ::android::database::sqlite::SQLiteDatabase&, int32_t, int32_t) const;
    void onDowngrade(const ::android::database::sqlite::SQLiteDatabase&, int32_t, int32_t) const;
    void onOpen(const ::android::database::sqlite::SQLiteDatabase&) const;

};
}
}
}


