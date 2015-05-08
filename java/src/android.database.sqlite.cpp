#include "java-core.hpp"
#include <memory>
#include "android.content.ContentValues.hpp"
#include "android.content.Context.hpp"
#include "android.database.Cursor.hpp"
#include "android.database.CursorWindow.hpp"
#include "android.database.DatabaseErrorHandler.hpp"
#include "android.database.sqlite.SQLiteAbortException.hpp"
#include "android.database.sqlite.SQLiteAccessPermException.hpp"
#include "android.database.sqlite.SQLiteBindOrColumnIndexOutOfRangeException.hpp"
#include "android.database.sqlite.SQLiteBlobTooBigException.hpp"
#include "android.database.sqlite.SQLiteCantOpenDatabaseException.hpp"
#include "android.database.sqlite.SQLiteClosable.hpp"
#include "android.database.sqlite.SQLiteConstraintException.hpp"
#include "android.database.sqlite.SQLiteCursor.hpp"
#include "android.database.sqlite.SQLiteCursorDriver.hpp"
#include "android.database.sqlite.SQLiteDatabase.hpp"
#include "android.database.sqlite.SQLiteDatabaseCorruptException.hpp"
#include "android.database.sqlite.SQLiteDatabaseLockedException.hpp"
#include "android.database.sqlite.SQLiteDatatypeMismatchException.hpp"
#include "android.database.sqlite.SQLiteDiskIOException.hpp"
#include "android.database.sqlite.SQLiteDoneException.hpp"
#include "android.database.sqlite.SQLiteException.hpp"
#include "android.database.sqlite.SQLiteFullException.hpp"
#include "android.database.sqlite.SQLiteMisuseException.hpp"
#include "android.database.sqlite.SQLiteOpenHelper.hpp"
#include "android.database.sqlite.SQLiteOutOfMemoryException.hpp"
#include "android.database.sqlite.SQLiteProgram.hpp"
#include "android.database.sqlite.SQLiteQuery.hpp"
#include "android.database.sqlite.SQLiteQueryBuilder.hpp"
#include "android.database.sqlite.SQLiteReadOnlyDatabaseException.hpp"
#include "android.database.sqlite.SQLiteStatement.hpp"
#include "android.database.sqlite.SQLiteTableLockedException.hpp"
#include "android.database.sqlite.SQLiteTransactionListener.hpp"
#include "android.os.ParcelFileDescriptor.hpp"
#include "java.io.File.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.StringBuilder.hpp"
#include "java.util.List.hpp"
#include "java.util.Locale.hpp"
#include "java.util.Map.hpp"
#include "java.util.Set.hpp"

jclass android::database::sqlite::SQLiteConstraintException::_class = nullptr;
jclass android::database::sqlite::SQLiteStatement::_class = nullptr;
jclass android::database::sqlite::SQLiteBindOrColumnIndexOutOfRangeException::_class = nullptr;
jclass android::database::sqlite::SQLiteOpenHelper::_class = nullptr;
jclass android::database::sqlite::SQLiteClosable::_class = nullptr;
jclass android::database::sqlite::SQLiteAbortException::_class = nullptr;
jclass android::database::sqlite::SQLiteBlobTooBigException::_class = nullptr;
jclass android::database::sqlite::SQLiteFullException::_class = nullptr;
jclass android::database::sqlite::SQLiteDatatypeMismatchException::_class = nullptr;
jclass android::database::sqlite::SQLiteQuery::_class = nullptr;
jclass android::database::sqlite::SQLiteCursorDriver::_class = nullptr;
jclass android::database::sqlite::SQLiteDatabase::_class = nullptr;
jclass android::database::sqlite::SQLiteCursor::_class = nullptr;
jclass android::database::sqlite::SQLiteQueryBuilder::_class = nullptr;
jclass android::database::sqlite::SQLiteTableLockedException::_class = nullptr;
jclass android::database::sqlite::SQLiteTransactionListener::_class = nullptr;
jclass android::database::sqlite::SQLiteCantOpenDatabaseException::_class = nullptr;
jclass android::database::sqlite::SQLiteReadOnlyDatabaseException::_class = nullptr;
jclass android::database::sqlite::SQLiteProgram::_class = nullptr;
jclass android::database::sqlite::SQLiteDatabase_CursorFactory::_class = nullptr;
jclass android::database::sqlite::SQLiteOutOfMemoryException::_class = nullptr;
jclass android::database::sqlite::SQLiteAccessPermException::_class = nullptr;
jclass android::database::sqlite::SQLiteDiskIOException::_class = nullptr;
jclass android::database::sqlite::SQLiteDatabaseLockedException::_class = nullptr;
jclass android::database::sqlite::SQLiteException::_class = nullptr;
jclass android::database::sqlite::SQLiteMisuseException::_class = nullptr;
jclass android::database::sqlite::SQLiteDoneException::_class = nullptr;
jclass android::database::sqlite::SQLiteDatabaseCorruptException::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteConstraintException::SQLiteConstraintException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteConstraintException::_class) ::android::database::sqlite::SQLiteConstraintException::_class = java::fetch_class("android/database/sqlite/SQLiteConstraintException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteConstraintException::SQLiteConstraintException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteConstraintException::_class) ::android::database::sqlite::SQLiteConstraintException::_class = java::fetch_class("android/database/sqlite/SQLiteConstraintException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::database::sqlite::SQLiteStatement::execute() const {
    if (!::android::database::sqlite::SQLiteStatement::_class) ::android::database::sqlite::SQLiteStatement::_class = java::fetch_class("android/database/sqlite/SQLiteStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::database::sqlite::SQLiteStatement::executeUpdateDelete() const {
    if (!::android::database::sqlite::SQLiteStatement::_class) ::android::database::sqlite::SQLiteStatement::_class = java::fetch_class("android/database/sqlite/SQLiteStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeUpdateDelete", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::database::sqlite::SQLiteStatement::executeInsert() const {
    if (!::android::database::sqlite::SQLiteStatement::_class) ::android::database::sqlite::SQLiteStatement::_class = java::fetch_class("android/database/sqlite/SQLiteStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeInsert", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::database::sqlite::SQLiteStatement::simpleQueryForLong() const {
    if (!::android::database::sqlite::SQLiteStatement::_class) ::android::database::sqlite::SQLiteStatement::_class = java::fetch_class("android/database/sqlite/SQLiteStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "simpleQueryForLong", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::lang::String android::database::sqlite::SQLiteStatement::simpleQueryForString() const {
    if (!::android::database::sqlite::SQLiteStatement::_class) ::android::database::sqlite::SQLiteStatement::_class = java::fetch_class("android/database/sqlite/SQLiteStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "simpleQueryForString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::database::sqlite::SQLiteStatement::simpleQueryForBlobFileDescriptor() const {
    if (!::android::database::sqlite::SQLiteStatement::_class) ::android::database::sqlite::SQLiteStatement::_class = java::fetch_class("android/database/sqlite/SQLiteStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "simpleQueryForBlobFileDescriptor", "()Landroid/os/ParcelFileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteBindOrColumnIndexOutOfRangeException::SQLiteBindOrColumnIndexOutOfRangeException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteBindOrColumnIndexOutOfRangeException::_class) ::android::database::sqlite::SQLiteBindOrColumnIndexOutOfRangeException::_class = java::fetch_class("android/database/sqlite/SQLiteBindOrColumnIndexOutOfRangeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteBindOrColumnIndexOutOfRangeException::SQLiteBindOrColumnIndexOutOfRangeException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteBindOrColumnIndexOutOfRangeException::_class) ::android::database::sqlite::SQLiteBindOrColumnIndexOutOfRangeException::_class = java::fetch_class("android/database/sqlite/SQLiteBindOrColumnIndexOutOfRangeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteOpenHelper::SQLiteOpenHelper(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg2, int32_t arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::database::sqlite::SQLiteOpenHelper::_class) ::android::database::sqlite::SQLiteOpenHelper::_class = java::fetch_class("android/database/sqlite/SQLiteOpenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteOpenHelper::SQLiteOpenHelper(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg2, int32_t arg3, const ::android::database::DatabaseErrorHandler& arg4) : ::java::lang::Object((jobject)0) {
    if (!::android::database::sqlite::SQLiteOpenHelper::_class) ::android::database::sqlite::SQLiteOpenHelper::_class = java::fetch_class("android/database/sqlite/SQLiteOpenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ILandroid/database/DatabaseErrorHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

::java::lang::String android::database::sqlite::SQLiteOpenHelper::getDatabaseName() const {
    if (!::android::database::sqlite::SQLiteOpenHelper::_class) ::android::database::sqlite::SQLiteOpenHelper::_class = java::fetch_class("android/database/sqlite/SQLiteOpenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabaseName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::database::sqlite::SQLiteOpenHelper::getWritableDatabase() const {
    if (!::android::database::sqlite::SQLiteOpenHelper::_class) ::android::database::sqlite::SQLiteOpenHelper::_class = java::fetch_class("android/database/sqlite/SQLiteOpenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWritableDatabase", "()Landroid/database/sqlite/SQLiteDatabase;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::database::sqlite::SQLiteOpenHelper::getReadableDatabase() const {
    if (!::android::database::sqlite::SQLiteOpenHelper::_class) ::android::database::sqlite::SQLiteOpenHelper::_class = java::fetch_class("android/database/sqlite/SQLiteOpenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReadableDatabase", "()Landroid/database/sqlite/SQLiteDatabase;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

void android::database::sqlite::SQLiteOpenHelper::close() const {
    if (!::android::database::sqlite::SQLiteOpenHelper::_class) ::android::database::sqlite::SQLiteOpenHelper::_class = java::fetch_class("android/database/sqlite/SQLiteOpenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteOpenHelper::onCreate(const ::android::database::sqlite::SQLiteDatabase& arg0) const {
    if (!::android::database::sqlite::SQLiteOpenHelper::_class) ::android::database::sqlite::SQLiteOpenHelper::_class = java::fetch_class("android/database/sqlite/SQLiteOpenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/database/sqlite/SQLiteDatabase;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteOpenHelper::onUpgrade(const ::android::database::sqlite::SQLiteDatabase& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::database::sqlite::SQLiteOpenHelper::_class) ::android::database::sqlite::SQLiteOpenHelper::_class = java::fetch_class("android/database/sqlite/SQLiteOpenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUpgrade", "(Landroid/database/sqlite/SQLiteDatabase;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::database::sqlite::SQLiteOpenHelper::onDowngrade(const ::android::database::sqlite::SQLiteDatabase& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::database::sqlite::SQLiteOpenHelper::_class) ::android::database::sqlite::SQLiteOpenHelper::_class = java::fetch_class("android/database/sqlite/SQLiteOpenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDowngrade", "(Landroid/database/sqlite/SQLiteDatabase;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::database::sqlite::SQLiteOpenHelper::onOpen(const ::android::database::sqlite::SQLiteDatabase& arg0) const {
    if (!::android::database::sqlite::SQLiteOpenHelper::_class) ::android::database::sqlite::SQLiteOpenHelper::_class = java::fetch_class("android/database/sqlite/SQLiteOpenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOpen", "(Landroid/database/sqlite/SQLiteDatabase;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteClosable::SQLiteClosable() : ::java::lang::Object((jobject)0) {
    if (!::android::database::sqlite::SQLiteClosable::_class) ::android::database::sqlite::SQLiteClosable::_class = java::fetch_class("android/database/sqlite/SQLiteClosable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::database::sqlite::SQLiteClosable::acquireReference() const {
    if (!::android::database::sqlite::SQLiteClosable::_class) ::android::database::sqlite::SQLiteClosable::_class = java::fetch_class("android/database/sqlite/SQLiteClosable");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireReference", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteClosable::releaseReference() const {
    if (!::android::database::sqlite::SQLiteClosable::_class) ::android::database::sqlite::SQLiteClosable::_class = java::fetch_class("android/database/sqlite/SQLiteClosable");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseReference", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteClosable::releaseReferenceFromContainer() const {
    if (!::android::database::sqlite::SQLiteClosable::_class) ::android::database::sqlite::SQLiteClosable::_class = java::fetch_class("android/database/sqlite/SQLiteClosable");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseReferenceFromContainer", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteAbortException::SQLiteAbortException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteAbortException::_class) ::android::database::sqlite::SQLiteAbortException::_class = java::fetch_class("android/database/sqlite/SQLiteAbortException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteAbortException::SQLiteAbortException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteAbortException::_class) ::android::database::sqlite::SQLiteAbortException::_class = java::fetch_class("android/database/sqlite/SQLiteAbortException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteBlobTooBigException::SQLiteBlobTooBigException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteBlobTooBigException::_class) ::android::database::sqlite::SQLiteBlobTooBigException::_class = java::fetch_class("android/database/sqlite/SQLiteBlobTooBigException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteBlobTooBigException::SQLiteBlobTooBigException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteBlobTooBigException::_class) ::android::database::sqlite::SQLiteBlobTooBigException::_class = java::fetch_class("android/database/sqlite/SQLiteBlobTooBigException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteFullException::SQLiteFullException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteFullException::_class) ::android::database::sqlite::SQLiteFullException::_class = java::fetch_class("android/database/sqlite/SQLiteFullException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteFullException::SQLiteFullException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteFullException::_class) ::android::database::sqlite::SQLiteFullException::_class = java::fetch_class("android/database/sqlite/SQLiteFullException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteDatatypeMismatchException::SQLiteDatatypeMismatchException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteDatatypeMismatchException::_class) ::android::database::sqlite::SQLiteDatatypeMismatchException::_class = java::fetch_class("android/database/sqlite/SQLiteDatatypeMismatchException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteDatatypeMismatchException::SQLiteDatatypeMismatchException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteDatatypeMismatchException::_class) ::android::database::sqlite::SQLiteDatatypeMismatchException::_class = java::fetch_class("android/database/sqlite/SQLiteDatatypeMismatchException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::database::sqlite::SQLiteQuery::toString() const {
    if (!::android::database::sqlite::SQLiteQuery::_class) ::android::database::sqlite::SQLiteQuery::_class = java::fetch_class("android/database/sqlite/SQLiteQuery");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::sqlite::SQLiteQuery::close() const {
    if (!::android::database::sqlite::SQLiteQuery::_class) ::android::database::sqlite::SQLiteQuery::_class = java::fetch_class("android/database/sqlite/SQLiteQuery");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::database::Cursor android::database::sqlite::SQLiteCursorDriver::query(const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::android::database::sqlite::SQLiteCursorDriver::_class) ::android::database::sqlite::SQLiteCursorDriver::_class = java::fetch_class("android/database/sqlite/SQLiteCursorDriver");
    static jmethodID mid = java::jni->GetMethodID(_class, "query", "(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;[Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

void android::database::sqlite::SQLiteCursorDriver::cursorDeactivated() const {
    if (!::android::database::sqlite::SQLiteCursorDriver::_class) ::android::database::sqlite::SQLiteCursorDriver::_class = java::fetch_class("android/database/sqlite/SQLiteCursorDriver");
    static jmethodID mid = java::jni->GetMethodID(_class, "cursorDeactivated", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteCursorDriver::cursorRequeried(const ::android::database::Cursor& arg0) const {
    if (!::android::database::sqlite::SQLiteCursorDriver::_class) ::android::database::sqlite::SQLiteCursorDriver::_class = java::fetch_class("android/database/sqlite/SQLiteCursorDriver");
    static jmethodID mid = java::jni->GetMethodID(_class, "cursorRequeried", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteCursorDriver::cursorClosed() const {
    if (!::android::database::sqlite::SQLiteCursorDriver::_class) ::android::database::sqlite::SQLiteCursorDriver::_class = java::fetch_class("android/database/sqlite/SQLiteCursorDriver");
    static jmethodID mid = java::jni->GetMethodID(_class, "cursorClosed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteCursorDriver::setBindArguments(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::database::sqlite::SQLiteCursorDriver::_class) ::android::database::sqlite::SQLiteCursorDriver::_class = java::fetch_class("android/database/sqlite/SQLiteCursorDriver");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBindArguments", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::database::sqlite::SQLiteDatabase::releaseMemory(){
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "releaseMemory", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

void android::database::sqlite::SQLiteDatabase::setLockingEnabled(bool arg0) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLockingEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteDatabase::beginTransaction() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginTransaction", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteDatabase::beginTransactionNonExclusive() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginTransactionNonExclusive", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteDatabase::beginTransactionWithListener(const ::android::database::sqlite::SQLiteTransactionListener& arg0) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginTransactionWithListener", "(Landroid/database/sqlite/SQLiteTransactionListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteDatabase::beginTransactionWithListenerNonExclusive(const ::android::database::sqlite::SQLiteTransactionListener& arg0) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginTransactionWithListenerNonExclusive", "(Landroid/database/sqlite/SQLiteTransactionListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteDatabase::endTransaction() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "endTransaction", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteDatabase::setTransactionSuccessful() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransactionSuccessful", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::database::sqlite::SQLiteDatabase::inTransaction() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "inTransaction", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::sqlite::SQLiteDatabase::isDbLockedByCurrentThread() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDbLockedByCurrentThread", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::sqlite::SQLiteDatabase::isDbLockedByOtherThreads() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDbLockedByOtherThreads", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::sqlite::SQLiteDatabase::yieldIfContended() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "yieldIfContended", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::sqlite::SQLiteDatabase::yieldIfContendedSafely() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "yieldIfContendedSafely", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::sqlite::SQLiteDatabase::yieldIfContendedSafely(int64_t arg0) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "yieldIfContendedSafely", "(J)Z");
    int64_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Map android::database::sqlite::SQLiteDatabase::getSyncedTables() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSyncedTables", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::database::sqlite::SQLiteDatabase::openDatabase(const ::java::lang::String& arg0, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg1, int32_t arg2){
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "openDatabase", "(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::database::sqlite::SQLiteDatabase::openDatabase(const ::java::lang::String& arg0, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg1, int32_t arg2, const ::android::database::DatabaseErrorHandler& arg3){
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "openDatabase", "(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ILandroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::database::sqlite::SQLiteDatabase::openOrCreateDatabase(const ::java::io::File& arg0, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg1){
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "openOrCreateDatabase", "(Ljava/io/File;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::database::sqlite::SQLiteDatabase::openOrCreateDatabase(const ::java::lang::String& arg0, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg1){
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "openOrCreateDatabase", "(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::database::sqlite::SQLiteDatabase::openOrCreateDatabase(const ::java::lang::String& arg0, const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg1, const ::android::database::DatabaseErrorHandler& arg2){
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "openOrCreateDatabase", "(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteDatabase android::database::sqlite::SQLiteDatabase::create(const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg0){
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

void android::database::sqlite::SQLiteDatabase::close() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::database::sqlite::SQLiteDatabase::getVersion() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::database::sqlite::SQLiteDatabase::setVersion(int32_t arg0) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVersion", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::database::sqlite::SQLiteDatabase::getMaximumSize() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaximumSize", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::database::sqlite::SQLiteDatabase::setMaximumSize(int64_t arg0) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaximumSize", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t android::database::sqlite::SQLiteDatabase::getPageSize() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPageSize", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::database::sqlite::SQLiteDatabase::setPageSize(int64_t arg0) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPageSize", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteDatabase::markTableSyncable(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "markTableSyncable", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::database::sqlite::SQLiteDatabase::markTableSyncable(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "markTableSyncable", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::database::sqlite::SQLiteDatabase::findEditTable(const ::java::lang::String& arg0){
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "findEditTable", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::database::sqlite::SQLiteStatement android::database::sqlite::SQLiteDatabase::compileStatement(const ::java::lang::String& arg0) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "compileStatement", "(Ljava/lang/String;)Landroid/database/sqlite/SQLiteStatement;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::sqlite::SQLiteStatement _ret(ret);
    return _ret;
}

::android::database::Cursor android::database::sqlite::SQLiteDatabase::query(bool arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2, const ::java::lang::String& arg3, const std::vector< ::java::lang::String>& arg4, const ::java::lang::String& arg5, const ::java::lang::String& arg6, const ::java::lang::String& arg7, const ::java::lang::String& arg8) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "query", "(ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject _arg3 = arg3.obj;
    unsigned arg4s = arg4.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::java::lang::String::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::java::lang::String& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    jobject _arg8 = arg8.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::database::sqlite::SQLiteDatabase::queryWithFactory(const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg0, bool arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4, const std::vector< ::java::lang::String>& arg5, const ::java::lang::String& arg6, const ::java::lang::String& arg7, const ::java::lang::String& arg8, const ::java::lang::String& arg9) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryWithFactory", "(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject _arg4 = arg4.obj;
    unsigned arg5s = arg5.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg5 = java::jni->NewObjectArray(arg5s, ::java::lang::String::_class, nullptr);
    for (unsigned arg5i = 0; arg5i < arg5s; ++arg5i) {
      const ::java::lang::String& arg5e = arg5[arg5i];
        jobject arg5d = arg5e.obj;
      java::jni->SetObjectArrayElement(_arg5, arg5i, arg5d);
    }
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    jobject _arg8 = arg8.obj;
    jobject _arg9 = arg9.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::database::sqlite::SQLiteDatabase::query(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const ::java::lang::String& arg6) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "query", "(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::database::sqlite::SQLiteDatabase::query(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const ::java::lang::String& arg6, const ::java::lang::String& arg7) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "query", "(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::database::sqlite::SQLiteDatabase::rawQuery(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "rawQuery", "(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::database::sqlite::SQLiteDatabase::rawQueryWithFactory(const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2, const ::java::lang::String& arg3) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "rawQueryWithFactory", "(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

int64_t android::database::sqlite::SQLiteDatabase::insert(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t android::database::sqlite::SQLiteDatabase::insertOrThrow(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "insertOrThrow", "(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t android::database::sqlite::SQLiteDatabase::replace(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t android::database::sqlite::SQLiteDatabase::replaceOrThrow(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceOrThrow", "(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t android::database::sqlite::SQLiteDatabase::insertWithOnConflict(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2, int32_t arg3) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "insertWithOnConflict", "(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;I)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::database::sqlite::SQLiteDatabase::delete_(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::database::sqlite::SQLiteDatabase::update(const ::java::lang::String& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::database::sqlite::SQLiteDatabase::updateWithOnConflict(const ::java::lang::String& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, int32_t arg4) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateWithOnConflict", "(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    int32_t _arg4 = arg4;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::database::sqlite::SQLiteDatabase::execSQL(const ::java::lang::String& arg0) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "execSQL", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteDatabase::execSQL(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "execSQL", "(Ljava/lang/String;[Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::database::sqlite::SQLiteDatabase::isReadOnly() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReadOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::sqlite::SQLiteDatabase::isOpen() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpen", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::sqlite::SQLiteDatabase::needUpgrade(int32_t arg0) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "needUpgrade", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::database::sqlite::SQLiteDatabase::getPath() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::sqlite::SQLiteDatabase::setLocale(const ::java::util::Locale& arg0) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocale", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteDatabase::setMaxSqlCacheSize(int32_t arg0) const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxSqlCacheSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::database::sqlite::SQLiteDatabase::enableWriteAheadLogging() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "enableWriteAheadLogging", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::List android::database::sqlite::SQLiteDatabase::getAttachedDbs() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttachedDbs", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

bool android::database::sqlite::SQLiteDatabase::isDatabaseIntegrityOk() const {
    if (!::android::database::sqlite::SQLiteDatabase::_class) ::android::database::sqlite::SQLiteDatabase::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDatabaseIntegrityOk", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteCursor::SQLiteCursor(const ::android::database::sqlite::SQLiteDatabase& arg0, const ::android::database::sqlite::SQLiteCursorDriver& arg1, const ::java::lang::String& arg2, const ::android::database::sqlite::SQLiteQuery& arg3) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::AbstractWindowedCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {
    if (!::android::database::sqlite::SQLiteCursor::_class) ::android::database::sqlite::SQLiteCursor::_class = java::fetch_class("android/database/sqlite/SQLiteCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/database/sqlite/SQLiteDatabase;Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteCursor::SQLiteCursor(const ::android::database::sqlite::SQLiteCursorDriver& arg0, const ::java::lang::String& arg1, const ::android::database::sqlite::SQLiteQuery& arg2) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::AbstractWindowedCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {
    if (!::android::database::sqlite::SQLiteCursor::_class) ::android::database::sqlite::SQLiteCursor::_class = java::fetch_class("android/database/sqlite/SQLiteCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::database::sqlite::SQLiteDatabase android::database::sqlite::SQLiteCursor::getDatabase() const {
    if (!::android::database::sqlite::SQLiteCursor::_class) ::android::database::sqlite::SQLiteCursor::_class = java::fetch_class("android/database/sqlite/SQLiteCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabase", "()Landroid/database/sqlite/SQLiteDatabase;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::sqlite::SQLiteDatabase _ret(ret);
    return _ret;
}

bool android::database::sqlite::SQLiteCursor::onMove(int32_t arg0, int32_t arg1) const {
    if (!::android::database::sqlite::SQLiteCursor::_class) ::android::database::sqlite::SQLiteCursor::_class = java::fetch_class("android/database/sqlite/SQLiteCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMove", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::database::sqlite::SQLiteCursor::getCount() const {
    if (!::android::database::sqlite::SQLiteCursor::_class) ::android::database::sqlite::SQLiteCursor::_class = java::fetch_class("android/database/sqlite/SQLiteCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::database::sqlite::SQLiteCursor::getColumnIndex(const ::java::lang::String& arg0) const {
    if (!::android::database::sqlite::SQLiteCursor::_class) ::android::database::sqlite::SQLiteCursor::_class = java::fetch_class("android/database/sqlite/SQLiteCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnIndex", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::String> android::database::sqlite::SQLiteCursor::getColumnNames() const {
    if (!::android::database::sqlite::SQLiteCursor::_class) ::android::database::sqlite::SQLiteCursor::_class = java::fetch_class("android/database/sqlite/SQLiteCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnNames", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::database::sqlite::SQLiteCursor::deactivate() const {
    if (!::android::database::sqlite::SQLiteCursor::_class) ::android::database::sqlite::SQLiteCursor::_class = java::fetch_class("android/database/sqlite/SQLiteCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "deactivate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteCursor::close() const {
    if (!::android::database::sqlite::SQLiteCursor::_class) ::android::database::sqlite::SQLiteCursor::_class = java::fetch_class("android/database/sqlite/SQLiteCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::database::sqlite::SQLiteCursor::requery() const {
    if (!::android::database::sqlite::SQLiteCursor::_class) ::android::database::sqlite::SQLiteCursor::_class = java::fetch_class("android/database/sqlite/SQLiteCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "requery", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::database::sqlite::SQLiteCursor::setWindow(const ::android::database::CursorWindow& arg0) const {
    if (!::android::database::sqlite::SQLiteCursor::_class) ::android::database::sqlite::SQLiteCursor::_class = java::fetch_class("android/database/sqlite/SQLiteCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWindow", "(Landroid/database/CursorWindow;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteCursor::setSelectionArguments(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::database::sqlite::SQLiteCursor::_class) ::android::database::sqlite::SQLiteCursor::_class = java::fetch_class("android/database/sqlite/SQLiteCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelectionArguments", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteQueryBuilder::SQLiteQueryBuilder() : ::java::lang::Object((jobject)0) {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::database::sqlite::SQLiteQueryBuilder::setDistinct(bool arg0) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDistinct", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::database::sqlite::SQLiteQueryBuilder::getTables() const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTables", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::sqlite::SQLiteQueryBuilder::setTables(const ::java::lang::String& arg0) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTables", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteQueryBuilder::appendWhere(const ::java::lang::CharSequence& arg0) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendWhere", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteQueryBuilder::appendWhereEscapeString(const ::java::lang::String& arg0) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendWhereEscapeString", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteQueryBuilder::setProjectionMap(const ::java::util::Map& arg0) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProjectionMap", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteQueryBuilder::setCursorFactory(const ::android::database::sqlite::SQLiteDatabase_CursorFactory& arg0) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCursorFactory", "(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteQueryBuilder::setStrict(bool arg0) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStrict", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::database::sqlite::SQLiteQueryBuilder::buildQueryString(bool arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const ::java::lang::String& arg6, const ::java::lang::String& arg7){
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "buildQueryString", "(ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::sqlite::SQLiteQueryBuilder::appendColumns(const ::java::lang::StringBuilder& arg0, const std::vector< ::java::lang::String>& arg1){
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "appendColumns", "(Ljava/lang/StringBuilder;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::database::Cursor android::database::sqlite::SQLiteQueryBuilder::query(const ::android::database::sqlite::SQLiteDatabase& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const ::java::lang::String& arg6) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "query", "(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::database::sqlite::SQLiteQueryBuilder::query(const ::android::database::sqlite::SQLiteDatabase& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const ::java::lang::String& arg6, const ::java::lang::String& arg7) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "query", "(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::java::lang::String android::database::sqlite::SQLiteQueryBuilder::buildQuery(const std::vector< ::java::lang::String>& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "buildQuery", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::database::sqlite::SQLiteQueryBuilder::buildQuery(const std::vector< ::java::lang::String>& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const ::java::lang::String& arg6) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "buildQuery", "([Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::database::sqlite::SQLiteQueryBuilder::buildUnionSubQuery(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::util::Set& arg2, int32_t arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const ::java::lang::String& arg6, const ::java::lang::String& arg7) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "buildUnionSubQuery", "(Ljava/lang/String;[Ljava/lang/String;Ljava/util/Set;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::database::sqlite::SQLiteQueryBuilder::buildUnionSubQuery(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::util::Set& arg2, int32_t arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const std::vector< ::java::lang::String>& arg6, const ::java::lang::String& arg7, const ::java::lang::String& arg8) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "buildUnionSubQuery", "(Ljava/lang/String;[Ljava/lang/String;Ljava/util/Set;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    unsigned arg6s = arg6.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg6 = java::jni->NewObjectArray(arg6s, ::java::lang::String::_class, nullptr);
    for (unsigned arg6i = 0; arg6i < arg6s; ++arg6i) {
      const ::java::lang::String& arg6e = arg6[arg6i];
        jobject arg6d = arg6e.obj;
      java::jni->SetObjectArrayElement(_arg6, arg6i, arg6d);
    }
    jobject _arg7 = arg7.obj;
    jobject _arg8 = arg8.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::database::sqlite::SQLiteQueryBuilder::buildUnionQuery(const std::vector< ::java::lang::String>& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::database::sqlite::SQLiteQueryBuilder::_class) ::android::database::sqlite::SQLiteQueryBuilder::_class = java::fetch_class("android/database/sqlite/SQLiteQueryBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "buildUnionQuery", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteTableLockedException::SQLiteTableLockedException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteTableLockedException::_class) ::android::database::sqlite::SQLiteTableLockedException::_class = java::fetch_class("android/database/sqlite/SQLiteTableLockedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteTableLockedException::SQLiteTableLockedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteTableLockedException::_class) ::android::database::sqlite::SQLiteTableLockedException::_class = java::fetch_class("android/database/sqlite/SQLiteTableLockedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::database::sqlite::SQLiteTransactionListener::onBegin() const {
    if (!::android::database::sqlite::SQLiteTransactionListener::_class) ::android::database::sqlite::SQLiteTransactionListener::_class = java::fetch_class("android/database/sqlite/SQLiteTransactionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBegin", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteTransactionListener::onCommit() const {
    if (!::android::database::sqlite::SQLiteTransactionListener::_class) ::android::database::sqlite::SQLiteTransactionListener::_class = java::fetch_class("android/database/sqlite/SQLiteTransactionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCommit", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteTransactionListener::onRollback() const {
    if (!::android::database::sqlite::SQLiteTransactionListener::_class) ::android::database::sqlite::SQLiteTransactionListener::_class = java::fetch_class("android/database/sqlite/SQLiteTransactionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRollback", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteCantOpenDatabaseException::SQLiteCantOpenDatabaseException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteCantOpenDatabaseException::_class) ::android::database::sqlite::SQLiteCantOpenDatabaseException::_class = java::fetch_class("android/database/sqlite/SQLiteCantOpenDatabaseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteCantOpenDatabaseException::SQLiteCantOpenDatabaseException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteCantOpenDatabaseException::_class) ::android::database::sqlite::SQLiteCantOpenDatabaseException::_class = java::fetch_class("android/database/sqlite/SQLiteCantOpenDatabaseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteReadOnlyDatabaseException::SQLiteReadOnlyDatabaseException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteReadOnlyDatabaseException::_class) ::android::database::sqlite::SQLiteReadOnlyDatabaseException::_class = java::fetch_class("android/database/sqlite/SQLiteReadOnlyDatabaseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteReadOnlyDatabaseException::SQLiteReadOnlyDatabaseException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteReadOnlyDatabaseException::_class) ::android::database::sqlite::SQLiteReadOnlyDatabaseException::_class = java::fetch_class("android/database/sqlite/SQLiteReadOnlyDatabaseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::database::sqlite::SQLiteProgram::getUniqueId() const {
    if (!::android::database::sqlite::SQLiteProgram::_class) ::android::database::sqlite::SQLiteProgram::_class = java::fetch_class("android/database/sqlite/SQLiteProgram");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUniqueId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::database::sqlite::SQLiteProgram::bindNull(int32_t arg0) const {
    if (!::android::database::sqlite::SQLiteProgram::_class) ::android::database::sqlite::SQLiteProgram::_class = java::fetch_class("android/database/sqlite/SQLiteProgram");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindNull", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::sqlite::SQLiteProgram::bindLong(int32_t arg0, int64_t arg1) const {
    if (!::android::database::sqlite::SQLiteProgram::_class) ::android::database::sqlite::SQLiteProgram::_class = java::fetch_class("android/database/sqlite/SQLiteProgram");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindLong", "(IJ)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::database::sqlite::SQLiteProgram::bindDouble(int32_t arg0, double arg1) const {
    if (!::android::database::sqlite::SQLiteProgram::_class) ::android::database::sqlite::SQLiteProgram::_class = java::fetch_class("android/database/sqlite/SQLiteProgram");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindDouble", "(ID)V");
    int32_t _arg0 = arg0;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::database::sqlite::SQLiteProgram::bindString(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::database::sqlite::SQLiteProgram::_class) ::android::database::sqlite::SQLiteProgram::_class = java::fetch_class("android/database/sqlite/SQLiteProgram");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindString", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::database::sqlite::SQLiteProgram::bindBlob(int32_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::android::database::sqlite::SQLiteProgram::_class) ::android::database::sqlite::SQLiteProgram::_class = java::fetch_class("android/database/sqlite/SQLiteProgram");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindBlob", "(I[B)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::database::sqlite::SQLiteProgram::clearBindings() const {
    if (!::android::database::sqlite::SQLiteProgram::_class) ::android::database::sqlite::SQLiteProgram::_class = java::fetch_class("android/database/sqlite/SQLiteProgram");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearBindings", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteProgram::close() const {
    if (!::android::database::sqlite::SQLiteProgram::_class) ::android::database::sqlite::SQLiteProgram::_class = java::fetch_class("android/database/sqlite/SQLiteProgram");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::sqlite::SQLiteProgram::bindAllArgsAsStrings(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::database::sqlite::SQLiteProgram::_class) ::android::database::sqlite::SQLiteProgram::_class = java::fetch_class("android/database/sqlite/SQLiteProgram");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindAllArgsAsStrings", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::database::Cursor android::database::sqlite::SQLiteDatabase_CursorFactory::newCursor(const ::android::database::sqlite::SQLiteDatabase& arg0, const ::android::database::sqlite::SQLiteCursorDriver& arg1, const ::java::lang::String& arg2, const ::android::database::sqlite::SQLiteQuery& arg3) const {
    if (!::android::database::sqlite::SQLiteDatabase_CursorFactory::_class) ::android::database::sqlite::SQLiteDatabase_CursorFactory::_class = java::fetch_class("android/database/sqlite/SQLiteDatabase$CursorFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newCursor", "(Landroid/database/sqlite/SQLiteDatabase;Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteOutOfMemoryException::SQLiteOutOfMemoryException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteOutOfMemoryException::_class) ::android::database::sqlite::SQLiteOutOfMemoryException::_class = java::fetch_class("android/database/sqlite/SQLiteOutOfMemoryException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteOutOfMemoryException::SQLiteOutOfMemoryException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteOutOfMemoryException::_class) ::android::database::sqlite::SQLiteOutOfMemoryException::_class = java::fetch_class("android/database/sqlite/SQLiteOutOfMemoryException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteAccessPermException::SQLiteAccessPermException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteAccessPermException::_class) ::android::database::sqlite::SQLiteAccessPermException::_class = java::fetch_class("android/database/sqlite/SQLiteAccessPermException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteAccessPermException::SQLiteAccessPermException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteAccessPermException::_class) ::android::database::sqlite::SQLiteAccessPermException::_class = java::fetch_class("android/database/sqlite/SQLiteAccessPermException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteDiskIOException::SQLiteDiskIOException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteDiskIOException::_class) ::android::database::sqlite::SQLiteDiskIOException::_class = java::fetch_class("android/database/sqlite/SQLiteDiskIOException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteDiskIOException::SQLiteDiskIOException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteDiskIOException::_class) ::android::database::sqlite::SQLiteDiskIOException::_class = java::fetch_class("android/database/sqlite/SQLiteDiskIOException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteDatabaseLockedException::SQLiteDatabaseLockedException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteDatabaseLockedException::_class) ::android::database::sqlite::SQLiteDatabaseLockedException::_class = java::fetch_class("android/database/sqlite/SQLiteDatabaseLockedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteDatabaseLockedException::SQLiteDatabaseLockedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteDatabaseLockedException::_class) ::android::database::sqlite::SQLiteDatabaseLockedException::_class = java::fetch_class("android/database/sqlite/SQLiteDatabaseLockedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteException::SQLiteException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteException::_class) ::android::database::sqlite::SQLiteException::_class = java::fetch_class("android/database/sqlite/SQLiteException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteException::SQLiteException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteException::_class) ::android::database::sqlite::SQLiteException::_class = java::fetch_class("android/database/sqlite/SQLiteException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteMisuseException::SQLiteMisuseException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteMisuseException::_class) ::android::database::sqlite::SQLiteMisuseException::_class = java::fetch_class("android/database/sqlite/SQLiteMisuseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteMisuseException::SQLiteMisuseException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteMisuseException::_class) ::android::database::sqlite::SQLiteMisuseException::_class = java::fetch_class("android/database/sqlite/SQLiteMisuseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteDoneException::SQLiteDoneException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteDoneException::_class) ::android::database::sqlite::SQLiteDoneException::_class = java::fetch_class("android/database/sqlite/SQLiteDoneException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteDoneException::SQLiteDoneException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteDoneException::_class) ::android::database::sqlite::SQLiteDoneException::_class = java::fetch_class("android/database/sqlite/SQLiteDoneException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException() : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteDatabaseCorruptException::_class) ::android::database::sqlite::SQLiteDatabaseCorruptException::_class = java::fetch_class("android/database/sqlite/SQLiteDatabaseCorruptException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::sqlite::SQLiteDatabaseCorruptException::SQLiteDatabaseCorruptException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::SQLException((jobject)0), ::android::database::sqlite::SQLiteException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::sqlite::SQLiteDatabaseCorruptException::_class) ::android::database::sqlite::SQLiteDatabaseCorruptException::_class = java::fetch_class("android/database/sqlite/SQLiteDatabaseCorruptException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

