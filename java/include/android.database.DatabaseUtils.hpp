#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ContentValues; } }
namespace android { namespace content { class Context; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace database { class DatabaseUtils_InsertHelper; } }
namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } }
namespace android { namespace database { namespace sqlite { class SQLiteProgram; } } }
namespace android { namespace database { namespace sqlite { class SQLiteStatement; } } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace io { class PrintStream; } }
namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuilder; } }

namespace android {
namespace database {
class DatabaseUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatabaseUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatabaseUtils(const ::android::database::DatabaseUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DatabaseUtils(::android::database::DatabaseUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::database::DatabaseUtils& operator=(const ::android::database::DatabaseUtils& x) {obj = x.obj; return *this;}
    ::android::database::DatabaseUtils& operator=(::android::database::DatabaseUtils&& x) {obj = std::move(x.obj); return *this;}
    
    DatabaseUtils();
    static void writeExceptionToParcel(const ::android::os::Parcel&, const ::java::lang::Exception&);
    static void readExceptionFromParcel(const ::android::os::Parcel&);
    static void readExceptionWithFileNotFoundExceptionFromParcel(const ::android::os::Parcel&);
    static void readExceptionWithOperationApplicationExceptionFromParcel(const ::android::os::Parcel&);
    static void bindObjectToProgram(const ::android::database::sqlite::SQLiteProgram&, int32_t, const ::java::lang::Object&);
    static void appendEscapedSQLString(const ::java::lang::StringBuilder&, const ::java::lang::String&);
    static ::java::lang::String sqlEscapeString(const ::java::lang::String&);
    static void appendValueToSql(const ::java::lang::StringBuilder&, const ::java::lang::Object&);
    static ::java::lang::String concatenateWhere(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::lang::String getCollationKey(const ::java::lang::String&);
    static ::java::lang::String getHexCollationKey(const ::java::lang::String&);
    static void dumpCursor(const ::android::database::Cursor&);
    static void dumpCursor(const ::android::database::Cursor&, const ::java::io::PrintStream&);
    static void dumpCursor(const ::android::database::Cursor&, const ::java::lang::StringBuilder&);
    static ::java::lang::String dumpCursorToString(const ::android::database::Cursor&);
    static void dumpCurrentRow(const ::android::database::Cursor&);
    static void dumpCurrentRow(const ::android::database::Cursor&, const ::java::io::PrintStream&);
    static void dumpCurrentRow(const ::android::database::Cursor&, const ::java::lang::StringBuilder&);
    static ::java::lang::String dumpCurrentRowToString(const ::android::database::Cursor&);
    static void cursorStringToContentValues(const ::android::database::Cursor&, const ::java::lang::String&, const ::android::content::ContentValues&);
    static void cursorStringToInsertHelper(const ::android::database::Cursor&, const ::java::lang::String&, const ::android::database::DatabaseUtils_InsertHelper&, int32_t);
    static void cursorStringToContentValues(const ::android::database::Cursor&, const ::java::lang::String&, const ::android::content::ContentValues&, const ::java::lang::String&);
    static void cursorIntToContentValues(const ::android::database::Cursor&, const ::java::lang::String&, const ::android::content::ContentValues&);
    static void cursorIntToContentValues(const ::android::database::Cursor&, const ::java::lang::String&, const ::android::content::ContentValues&, const ::java::lang::String&);
    static void cursorLongToContentValues(const ::android::database::Cursor&, const ::java::lang::String&, const ::android::content::ContentValues&);
    static void cursorLongToContentValues(const ::android::database::Cursor&, const ::java::lang::String&, const ::android::content::ContentValues&, const ::java::lang::String&);
    static void cursorDoubleToCursorValues(const ::android::database::Cursor&, const ::java::lang::String&, const ::android::content::ContentValues&);
    static void cursorDoubleToContentValues(const ::android::database::Cursor&, const ::java::lang::String&, const ::android::content::ContentValues&, const ::java::lang::String&);
    static void cursorRowToContentValues(const ::android::database::Cursor&, const ::android::content::ContentValues&);
    static int64_t queryNumEntries(const ::android::database::sqlite::SQLiteDatabase&, const ::java::lang::String&);
    static int64_t queryNumEntries(const ::android::database::sqlite::SQLiteDatabase&, const ::java::lang::String&, const ::java::lang::String&);
    static int64_t queryNumEntries(const ::android::database::sqlite::SQLiteDatabase&, const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::String>&);
    static int64_t longForQuery(const ::android::database::sqlite::SQLiteDatabase&, const ::java::lang::String&, const std::vector< ::java::lang::String>&);
    static int64_t longForQuery(const ::android::database::sqlite::SQLiteStatement&, const std::vector< ::java::lang::String>&);
    static ::java::lang::String stringForQuery(const ::android::database::sqlite::SQLiteDatabase&, const ::java::lang::String&, const std::vector< ::java::lang::String>&);
    static ::java::lang::String stringForQuery(const ::android::database::sqlite::SQLiteStatement&, const std::vector< ::java::lang::String>&);
    static ::android::os::ParcelFileDescriptor blobFileDescriptorForQuery(const ::android::database::sqlite::SQLiteDatabase&, const ::java::lang::String&, const std::vector< ::java::lang::String>&);
    static ::android::os::ParcelFileDescriptor blobFileDescriptorForQuery(const ::android::database::sqlite::SQLiteStatement&, const std::vector< ::java::lang::String>&);
    static void cursorStringToContentValuesIfPresent(const ::android::database::Cursor&, const ::android::content::ContentValues&, const ::java::lang::String&);
    static void cursorLongToContentValuesIfPresent(const ::android::database::Cursor&, const ::android::content::ContentValues&, const ::java::lang::String&);
    static void cursorShortToContentValuesIfPresent(const ::android::database::Cursor&, const ::android::content::ContentValues&, const ::java::lang::String&);
    static void cursorIntToContentValuesIfPresent(const ::android::database::Cursor&, const ::android::content::ContentValues&, const ::java::lang::String&);
    static void cursorFloatToContentValuesIfPresent(const ::android::database::Cursor&, const ::android::content::ContentValues&, const ::java::lang::String&);
    static void cursorDoubleToContentValuesIfPresent(const ::android::database::Cursor&, const ::android::content::ContentValues&, const ::java::lang::String&);
    static void createDbFromSqlStatements(const ::android::content::Context&, const ::java::lang::String&, int32_t, const ::java::lang::String&);
    static int32_t getSqlStatementType(const ::java::lang::String&);
    static std::vector< ::java::lang::String> appendSelectionArgs(const std::vector< ::java::lang::String>&, const std::vector< ::java::lang::String>&);

};
}
}

#include "android.database.DatabaseUtils_InsertHelper.hpp"

