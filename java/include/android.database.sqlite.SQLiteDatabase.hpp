#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.sqlite.SQLiteClosable.hpp"

namespace android { namespace content { class ContentValues; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace database { class DatabaseErrorHandler; } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase_CursorFactory; } } }
namespace android { namespace database { namespace sqlite { class SQLiteStatement; } } }
namespace android { namespace database { namespace sqlite { class SQLiteTransactionListener; } } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Locale; } }
namespace java { namespace util { class Map; } }

namespace android {
namespace database {
namespace sqlite {
class SQLiteDatabase : public virtual ::java::lang::Object,
                       public virtual ::android::database::sqlite::SQLiteClosable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SQLiteDatabase(jobject _obj) : ::java::lang::Object(_obj), ::android::database::sqlite::SQLiteClosable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SQLiteDatabase(const ::android::database::sqlite::SQLiteDatabase& x) : ::java::lang::Object((jobject)0), ::android::database::sqlite::SQLiteClosable((jobject)0) {obj = x.obj;}
    SQLiteDatabase(::android::database::sqlite::SQLiteDatabase&& x) : ::java::lang::Object((jobject)0), ::android::database::sqlite::SQLiteClosable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::sqlite::SQLiteDatabase& operator=(const ::android::database::sqlite::SQLiteDatabase& x) {obj = x.obj; return *this;}
    ::android::database::sqlite::SQLiteDatabase& operator=(::android::database::sqlite::SQLiteDatabase&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t releaseMemory();
    void setLockingEnabled(bool) const ;
    void beginTransaction() const ;
    void beginTransactionNonExclusive() const ;
    void beginTransactionWithListener(const ::android::database::sqlite::SQLiteTransactionListener&) const ;
    void beginTransactionWithListenerNonExclusive(const ::android::database::sqlite::SQLiteTransactionListener&) const ;
    void endTransaction() const ;
    void setTransactionSuccessful() const ;
    bool inTransaction() const ;
    bool isDbLockedByCurrentThread() const ;
    bool isDbLockedByOtherThreads() const ;
    bool yieldIfContended() const ;
    bool yieldIfContendedSafely() const ;
    bool yieldIfContendedSafely(int64_t) const ;
    ::java::util::Map getSyncedTables() const ;
    static ::android::database::sqlite::SQLiteDatabase openDatabase(const ::java::lang::String&, const ::android::database::sqlite::SQLiteDatabase_CursorFactory&, int32_t);
    static ::android::database::sqlite::SQLiteDatabase openDatabase(const ::java::lang::String&, const ::android::database::sqlite::SQLiteDatabase_CursorFactory&, int32_t, const ::android::database::DatabaseErrorHandler&);
    static ::android::database::sqlite::SQLiteDatabase openOrCreateDatabase(const ::java::io::File&, const ::android::database::sqlite::SQLiteDatabase_CursorFactory&);
    static ::android::database::sqlite::SQLiteDatabase openOrCreateDatabase(const ::java::lang::String&, const ::android::database::sqlite::SQLiteDatabase_CursorFactory&);
    static ::android::database::sqlite::SQLiteDatabase openOrCreateDatabase(const ::java::lang::String&, const ::android::database::sqlite::SQLiteDatabase_CursorFactory&, const ::android::database::DatabaseErrorHandler&);
    static ::android::database::sqlite::SQLiteDatabase create(const ::android::database::sqlite::SQLiteDatabase_CursorFactory&);
    void close() const ;
    int32_t getVersion() const ;
    void setVersion(int32_t) const ;
    int64_t getMaximumSize() const ;
    int64_t setMaximumSize(int64_t) const ;
    int64_t getPageSize() const ;
    void setPageSize(int64_t) const ;
    void markTableSyncable(const ::java::lang::String&, const ::java::lang::String&) const ;
    void markTableSyncable(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    static ::java::lang::String findEditTable(const ::java::lang::String&);
    ::android::database::sqlite::SQLiteStatement compileStatement(const ::java::lang::String&) const ;
    ::android::database::Cursor query(bool, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::database::Cursor queryWithFactory(const ::android::database::sqlite::SQLiteDatabase_CursorFactory&, bool, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::database::Cursor query(const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::database::Cursor query(const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::database::Cursor rawQuery(const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    ::android::database::Cursor rawQueryWithFactory(const ::android::database::sqlite::SQLiteDatabase_CursorFactory&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&) const ;
    int64_t insert(const ::java::lang::String&, const ::java::lang::String&, const ::android::content::ContentValues&) const ;
    int64_t insertOrThrow(const ::java::lang::String&, const ::java::lang::String&, const ::android::content::ContentValues&) const ;
    int64_t replace(const ::java::lang::String&, const ::java::lang::String&, const ::android::content::ContentValues&) const ;
    int64_t replaceOrThrow(const ::java::lang::String&, const ::java::lang::String&, const ::android::content::ContentValues&) const ;
    int64_t insertWithOnConflict(const ::java::lang::String&, const ::java::lang::String&, const ::android::content::ContentValues&, int32_t) const ;
    int32_t delete_(const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    int32_t update(const ::java::lang::String&, const ::android::content::ContentValues&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    int32_t updateWithOnConflict(const ::java::lang::String&, const ::android::content::ContentValues&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, int32_t) const ;
    void execSQL(const ::java::lang::String&) const ;
    void execSQL(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    bool isReadOnly() const ;
    bool isOpen() const ;
    bool needUpgrade(int32_t) const ;
    ::java::lang::String getPath() const ;
    void setLocale(const ::java::util::Locale&) const ;
    void setMaxSqlCacheSize(int32_t) const ;
    bool enableWriteAheadLogging() const ;
    ::java::util::List getAttachedDbs() const ;
    bool isDatabaseIntegrityOk() const ;

};
}
}
}

#include "android.database.sqlite.SQLiteDatabase_CursorFactory.hpp"

