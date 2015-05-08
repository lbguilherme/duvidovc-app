#include "java-core.hpp"
#include <memory>
#include "android.content.ContentResolver.hpp"
#include "android.content.ContentValues.hpp"
#include "android.content.Context.hpp"
#include "android.database.AbstractCursor.hpp"
#include "android.database.AbstractWindowedCursor.hpp"
#include "android.database.CharArrayBuffer.hpp"
#include "android.database.ContentObservable.hpp"
#include "android.database.ContentObserver.hpp"
#include "android.database.CrossProcessCursor.hpp"
#include "android.database.CrossProcessCursorWrapper.hpp"
#include "android.database.Cursor.hpp"
#include "android.database.CursorIndexOutOfBoundsException.hpp"
#include "android.database.CursorJoiner.hpp"
#include "android.database.CursorWindow.hpp"
#include "android.database.CursorWrapper.hpp"
#include "android.database.DataSetObservable.hpp"
#include "android.database.DataSetObserver.hpp"
#include "android.database.DatabaseErrorHandler.hpp"
#include "android.database.DatabaseUtils.hpp"
#include "android.database.DefaultDatabaseErrorHandler.hpp"
#include "android.database.MatrixCursor.hpp"
#include "android.database.MergeCursor.hpp"
#include "android.database.Observable.hpp"
#include "android.database.SQLException.hpp"
#include "android.database.StaleDataException.hpp"
#include "android.database.sqlite.SQLiteDatabase.hpp"
#include "android.database.sqlite.SQLiteProgram.hpp"
#include "android.database.sqlite.SQLiteStatement.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Handler.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.ParcelFileDescriptor.hpp"
#include "java.io.PrintStream.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Iterable.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.StringBuilder.hpp"
#include "java.util.Iterator.hpp"

jclass android::database::ContentObservable::_class = nullptr;
jclass android::database::CrossProcessCursorWrapper::_class = nullptr;
jclass android::database::CharArrayBuffer::_class = nullptr;
jclass android::database::AbstractWindowedCursor::_class = nullptr;
jclass android::database::DefaultDatabaseErrorHandler::_class = nullptr;
jclass android::database::DataSetObservable::_class = nullptr;
jclass android::database::CrossProcessCursor::_class = nullptr;
jclass android::database::MatrixCursor_RowBuilder::_class = nullptr;
jclass android::database::CursorJoiner::_class = nullptr;
jclass android::database::DataSetObserver::_class = nullptr;
jclass android::database::AbstractCursor::_class = nullptr;
jclass android::database::AbstractCursor_SelfContentObserver::_class = nullptr;
jclass android::database::MergeCursor::_class = nullptr;
jclass android::database::CursorWrapper::_class = nullptr;
jclass android::database::CursorJoiner_Result::_class = nullptr;
jclass android::database::StaleDataException::_class = nullptr;
jclass android::database::Cursor::_class = nullptr;
jclass android::database::Observable::_class = nullptr;
jclass android::database::DatabaseUtils_InsertHelper::_class = nullptr;
jclass android::database::DatabaseUtils::_class = nullptr;
jclass android::database::MatrixCursor::_class = nullptr;
jclass android::database::CursorWindow::_class = nullptr;
jclass android::database::ContentObserver::_class = nullptr;
jclass android::database::DatabaseErrorHandler::_class = nullptr;
jclass android::database::SQLException::_class = nullptr;
jclass android::database::CursorIndexOutOfBoundsException::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::ContentObservable::ContentObservable() : ::java::lang::Object((jobject)0), ::android::database::Observable((jobject)0) {
    if (!::android::database::ContentObservable::_class) ::android::database::ContentObservable::_class = java::fetch_class("android/database/ContentObservable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::database::ContentObservable::registerObserver(const ::android::database::ContentObserver& arg0) const {
    if (!::android::database::ContentObservable::_class) ::android::database::ContentObservable::_class = java::fetch_class("android/database/ContentObservable");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerObserver", "(Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::ContentObservable::dispatchChange(bool arg0) const {
    if (!::android::database::ContentObservable::_class) ::android::database::ContentObservable::_class = java::fetch_class("android/database/ContentObservable");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchChange", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::ContentObservable::notifyChange(bool arg0) const {
    if (!::android::database::ContentObservable::_class) ::android::database::ContentObservable::_class = java::fetch_class("android/database/ContentObservable");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyChange", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::ContentObservable::registerObserver(const ::java::lang::Object& arg0) const {
    if (!::android::database::ContentObservable::_class) ::android::database::ContentObservable::_class = java::fetch_class("android/database/ContentObservable");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerObserver", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::CrossProcessCursorWrapper::CrossProcessCursorWrapper(const ::android::database::Cursor& arg0) : ::java::lang::Object((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0), ::android::database::CursorWrapper((jobject)0) {
    if (!::android::database::CrossProcessCursorWrapper::_class) ::android::database::CrossProcessCursorWrapper::_class = java::fetch_class("android/database/CrossProcessCursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::database::CrossProcessCursorWrapper::fillWindow(int32_t arg0, const ::android::database::CursorWindow& arg1) const {
    if (!::android::database::CrossProcessCursorWrapper::_class) ::android::database::CrossProcessCursorWrapper::_class = java::fetch_class("android/database/CrossProcessCursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "fillWindow", "(ILandroid/database/CursorWindow;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::database::CursorWindow android::database::CrossProcessCursorWrapper::getWindow() const {
    if (!::android::database::CrossProcessCursorWrapper::_class) ::android::database::CrossProcessCursorWrapper::_class = java::fetch_class("android/database/CrossProcessCursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindow", "()Landroid/database/CursorWindow;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::CursorWindow _ret(ret);
    return _ret;
}

bool android::database::CrossProcessCursorWrapper::onMove(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CrossProcessCursorWrapper::_class) ::android::database::CrossProcessCursorWrapper::_class = java::fetch_class("android/database/CrossProcessCursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMove", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::CharArrayBuffer::CharArrayBuffer(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::database::CharArrayBuffer::_class) ::android::database::CharArrayBuffer::_class = java::fetch_class("android/database/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::CharArrayBuffer::CharArrayBuffer(const std::vector< uint16_t>& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::database::CharArrayBuffer::_class) ::android::database::CharArrayBuffer::_class = java::fetch_class("android/database/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::AbstractWindowedCursor::AbstractWindowedCursor() : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

std::vector< int8_t> android::database::AbstractWindowedCursor::getBlob(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlob", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String android::database::AbstractWindowedCursor::getString(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::AbstractWindowedCursor::copyStringToBuffer(int32_t arg0, const ::android::database::CharArrayBuffer& arg1) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyStringToBuffer", "(ILandroid/database/CharArrayBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int16_t android::database::AbstractWindowedCursor::getShort(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int32_t android::database::AbstractWindowedCursor::getInt(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t android::database::AbstractWindowedCursor::getLong(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

float android::database::AbstractWindowedCursor::getFloat(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

double android::database::AbstractWindowedCursor::getDouble(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

bool android::database::AbstractWindowedCursor::isNull(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNull", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::database::AbstractWindowedCursor::isBlob(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBlob", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::database::AbstractWindowedCursor::isString(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isString", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::database::AbstractWindowedCursor::isLong(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLong", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::database::AbstractWindowedCursor::isFloat(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFloat", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::database::AbstractWindowedCursor::getType(int32_t arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::database::CursorWindow android::database::AbstractWindowedCursor::getWindow() const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindow", "()Landroid/database/CursorWindow;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::CursorWindow _ret(ret);
    return _ret;
}

void android::database::AbstractWindowedCursor::setWindow(const ::android::database::CursorWindow& arg0) const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWindow", "(Landroid/database/CursorWindow;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::database::AbstractWindowedCursor::hasWindow() const {
    if (!::android::database::AbstractWindowedCursor::_class) ::android::database::AbstractWindowedCursor::_class = java::fetch_class("android/database/AbstractWindowedCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasWindow", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::DefaultDatabaseErrorHandler::DefaultDatabaseErrorHandler() : ::java::lang::Object((jobject)0), ::android::database::DatabaseErrorHandler((jobject)0) {
    if (!::android::database::DefaultDatabaseErrorHandler::_class) ::android::database::DefaultDatabaseErrorHandler::_class = java::fetch_class("android/database/DefaultDatabaseErrorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::database::DefaultDatabaseErrorHandler::onCorruption(const ::android::database::sqlite::SQLiteDatabase& arg0) const {
    if (!::android::database::DefaultDatabaseErrorHandler::_class) ::android::database::DefaultDatabaseErrorHandler::_class = java::fetch_class("android/database/DefaultDatabaseErrorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCorruption", "(Landroid/database/sqlite/SQLiteDatabase;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::DataSetObservable::DataSetObservable() : ::java::lang::Object((jobject)0), ::android::database::Observable((jobject)0) {
    if (!::android::database::DataSetObservable::_class) ::android::database::DataSetObservable::_class = java::fetch_class("android/database/DataSetObservable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::database::DataSetObservable::notifyChanged() const {
    if (!::android::database::DataSetObservable::_class) ::android::database::DataSetObservable::_class = java::fetch_class("android/database/DataSetObservable");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::DataSetObservable::notifyInvalidated() const {
    if (!::android::database::DataSetObservable::_class) ::android::database::DataSetObservable::_class = java::fetch_class("android/database/DataSetObservable");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyInvalidated", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::database::CursorWindow android::database::CrossProcessCursor::getWindow() const {
    if (!::android::database::CrossProcessCursor::_class) ::android::database::CrossProcessCursor::_class = java::fetch_class("android/database/CrossProcessCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindow", "()Landroid/database/CursorWindow;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::CursorWindow _ret(ret);
    return _ret;
}

void android::database::CrossProcessCursor::fillWindow(int32_t arg0, const ::android::database::CursorWindow& arg1) const {
    if (!::android::database::CrossProcessCursor::_class) ::android::database::CrossProcessCursor::_class = java::fetch_class("android/database/CrossProcessCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "fillWindow", "(ILandroid/database/CursorWindow;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::database::CrossProcessCursor::onMove(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CrossProcessCursor::_class) ::android::database::CrossProcessCursor::_class = java::fetch_class("android/database/CrossProcessCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMove", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::database::MatrixCursor_RowBuilder android::database::MatrixCursor_RowBuilder::add(const ::java::lang::Object& arg0) const {
    if (!::android::database::MatrixCursor_RowBuilder::_class) ::android::database::MatrixCursor_RowBuilder::_class = java::fetch_class("android/database/MatrixCursor$RowBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Landroid/database/MatrixCursor$RowBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::MatrixCursor_RowBuilder _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::CursorJoiner::CursorJoiner(const ::android::database::Cursor& arg0, const std::vector< ::java::lang::String>& arg1, const ::android::database::Cursor& arg2, const std::vector< ::java::lang::String>& arg3) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Iterator((jobject)0) {
    if (!::android::database::CursorJoiner::_class) ::android::database::CursorJoiner::_class = java::fetch_class("android/database/CursorJoiner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/database/Cursor;[Ljava/lang/String;Landroid/database/Cursor;[Ljava/lang/String;)V");
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
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::util::Iterator android::database::CursorJoiner::iterator() const {
    if (!::android::database::CursorJoiner::_class) ::android::database::CursorJoiner::_class = java::fetch_class("android/database/CursorJoiner");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool android::database::CursorJoiner::hasNext() const {
    if (!::android::database::CursorJoiner::_class) ::android::database::CursorJoiner::_class = java::fetch_class("android/database/CursorJoiner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::database::CursorJoiner_Result android::database::CursorJoiner::next() const {
    if (!::android::database::CursorJoiner::_class) ::android::database::CursorJoiner::_class = java::fetch_class("android/database/CursorJoiner");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()Landroid/database/CursorJoiner$Result;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::CursorJoiner_Result _ret(ret);
    return _ret;
}

void android::database::CursorJoiner::remove() const {
    if (!::android::database::CursorJoiner::_class) ::android::database::CursorJoiner::_class = java::fetch_class("android/database/CursorJoiner");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::DataSetObserver::DataSetObserver() : ::java::lang::Object((jobject)0) {
    if (!::android::database::DataSetObserver::_class) ::android::database::DataSetObserver::_class = java::fetch_class("android/database/DataSetObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::database::DataSetObserver::onChanged() const {
    if (!::android::database::DataSetObserver::_class) ::android::database::DataSetObserver::_class = java::fetch_class("android/database/DataSetObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::DataSetObserver::onInvalidated() const {
    if (!::android::database::DataSetObserver::_class) ::android::database::DataSetObserver::_class = java::fetch_class("android/database/DataSetObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInvalidated", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::AbstractCursor::AbstractCursor() : ::java::lang::Object((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::database::AbstractCursor::getCount() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::lang::String> android::database::AbstractCursor::getColumnNames() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
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

::java::lang::String android::database::AbstractCursor::getString(int32_t arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int16_t android::database::AbstractCursor::getShort(int32_t arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int32_t android::database::AbstractCursor::getInt(int32_t arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t android::database::AbstractCursor::getLong(int32_t arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

float android::database::AbstractCursor::getFloat(int32_t arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

double android::database::AbstractCursor::getDouble(int32_t arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

bool android::database::AbstractCursor::isNull(int32_t arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNull", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::database::AbstractCursor::getType(int32_t arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

std::vector< int8_t> android::database::AbstractCursor::getBlob(int32_t arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlob", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::android::database::CursorWindow android::database::AbstractCursor::getWindow() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindow", "()Landroid/database/CursorWindow;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::CursorWindow _ret(ret);
    return _ret;
}

int32_t android::database::AbstractCursor::getColumnCount() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::database::AbstractCursor::deactivate() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "deactivate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::database::AbstractCursor::requery() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "requery", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::AbstractCursor::isClosed() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClosed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::database::AbstractCursor::close() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::database::AbstractCursor::onMove(int32_t arg0, int32_t arg1) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMove", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::database::AbstractCursor::copyStringToBuffer(int32_t arg0, const ::android::database::CharArrayBuffer& arg1) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyStringToBuffer", "(ILandroid/database/CharArrayBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::database::AbstractCursor::getPosition() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::database::AbstractCursor::moveToPosition(int32_t arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToPosition", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::database::AbstractCursor::fillWindow(int32_t arg0, const ::android::database::CursorWindow& arg1) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "fillWindow", "(ILandroid/database/CursorWindow;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::database::AbstractCursor::move(int32_t arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "move", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::database::AbstractCursor::moveToFirst() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::AbstractCursor::moveToLast() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::AbstractCursor::moveToNext() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::AbstractCursor::moveToPrevious() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToPrevious", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::AbstractCursor::isFirst() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::AbstractCursor::isLast() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::AbstractCursor::isBeforeFirst() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBeforeFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::AbstractCursor::isAfterLast() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAfterLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::database::AbstractCursor::getColumnIndex(const ::java::lang::String& arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnIndex", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::database::AbstractCursor::getColumnIndexOrThrow(const ::java::lang::String& arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnIndexOrThrow", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String android::database::AbstractCursor::getColumnName(int32_t arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::AbstractCursor::registerContentObserver(const ::android::database::ContentObserver& arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerContentObserver", "(Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::AbstractCursor::unregisterContentObserver(const ::android::database::ContentObserver& arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterContentObserver", "(Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::AbstractCursor::registerDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::AbstractCursor::unregisterDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::AbstractCursor::setNotificationUri(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNotificationUri", "(Landroid/content/ContentResolver;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::net::Uri android::database::AbstractCursor::getNotificationUri() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNotificationUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

bool android::database::AbstractCursor::getWantsAllOnMoveCalls() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWantsAllOnMoveCalls", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::os::Bundle android::database::AbstractCursor::getExtras() const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::database::AbstractCursor::respond(const ::android::os::Bundle& arg0) const {
    if (!::android::database::AbstractCursor::_class) ::android::database::AbstractCursor::_class = java::fetch_class("android/database/AbstractCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "respond", "(Landroid/os/Bundle;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::AbstractCursor_SelfContentObserver::AbstractCursor_SelfContentObserver(const ::android::database::AbstractCursor& arg0) : ::java::lang::Object((jobject)0), ::android::database::ContentObserver((jobject)0) {
    if (!::android::database::AbstractCursor_SelfContentObserver::_class) ::android::database::AbstractCursor_SelfContentObserver::_class = java::fetch_class("android/database/AbstractCursor$SelfContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/database/AbstractCursor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::database::AbstractCursor_SelfContentObserver::deliverSelfNotifications() const {
    if (!::android::database::AbstractCursor_SelfContentObserver::_class) ::android::database::AbstractCursor_SelfContentObserver::_class = java::fetch_class("android/database/AbstractCursor$SelfContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "deliverSelfNotifications", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::database::AbstractCursor_SelfContentObserver::onChange(bool arg0) const {
    if (!::android::database::AbstractCursor_SelfContentObserver::_class) ::android::database::AbstractCursor_SelfContentObserver::_class = java::fetch_class("android/database/AbstractCursor$SelfContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChange", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::MergeCursor::MergeCursor(const std::vector< ::android::database::Cursor>& arg0) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Landroid/database/Cursor;)V");
    unsigned arg0s = arg0.size();
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::database::Cursor::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::database::Cursor& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::database::MergeCursor::getCount() const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::database::MergeCursor::onMove(int32_t arg0, int32_t arg1) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMove", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::database::MergeCursor::getString(int32_t arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int16_t android::database::MergeCursor::getShort(int32_t arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int32_t android::database::MergeCursor::getInt(int32_t arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t android::database::MergeCursor::getLong(int32_t arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

float android::database::MergeCursor::getFloat(int32_t arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

double android::database::MergeCursor::getDouble(int32_t arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

int32_t android::database::MergeCursor::getType(int32_t arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::database::MergeCursor::isNull(int32_t arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNull", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< int8_t> android::database::MergeCursor::getBlob(int32_t arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlob", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< ::java::lang::String> android::database::MergeCursor::getColumnNames() const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
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

void android::database::MergeCursor::deactivate() const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "deactivate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::MergeCursor::close() const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::MergeCursor::registerContentObserver(const ::android::database::ContentObserver& arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerContentObserver", "(Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::MergeCursor::unregisterContentObserver(const ::android::database::ContentObserver& arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterContentObserver", "(Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::MergeCursor::registerDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::MergeCursor::unregisterDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::database::MergeCursor::requery() const {
    if (!::android::database::MergeCursor::_class) ::android::database::MergeCursor::_class = java::fetch_class("android/database/MergeCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "requery", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::CursorWrapper::CursorWrapper(const ::android::database::Cursor& arg0) : ::java::lang::Object((jobject)0), ::android::database::Cursor((jobject)0) {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::database::Cursor android::database::CursorWrapper::getWrappedCursor() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWrappedCursor", "()Landroid/database/Cursor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

void android::database::CursorWrapper::close() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::database::CursorWrapper::isClosed() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClosed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::database::CursorWrapper::getCount() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::database::CursorWrapper::deactivate() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "deactivate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::database::CursorWrapper::moveToFirst() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::database::CursorWrapper::getColumnCount() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::database::CursorWrapper::getColumnIndex(const ::java::lang::String& arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnIndex", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::database::CursorWrapper::getColumnIndexOrThrow(const ::java::lang::String& arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnIndexOrThrow", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String android::database::CursorWrapper::getColumnName(int32_t arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::database::CursorWrapper::getColumnNames() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
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

double android::database::CursorWrapper::getDouble(int32_t arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

::android::os::Bundle android::database::CursorWrapper::getExtras() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

float android::database::CursorWrapper::getFloat(int32_t arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

int32_t android::database::CursorWrapper::getInt(int32_t arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t android::database::CursorWrapper::getLong(int32_t arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int16_t android::database::CursorWrapper::getShort(int32_t arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

::java::lang::String android::database::CursorWrapper::getString(int32_t arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::CursorWrapper::copyStringToBuffer(int32_t arg0, const ::android::database::CharArrayBuffer& arg1) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyStringToBuffer", "(ILandroid/database/CharArrayBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> android::database::CursorWrapper::getBlob(int32_t arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlob", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool android::database::CursorWrapper::getWantsAllOnMoveCalls() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWantsAllOnMoveCalls", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::CursorWrapper::isAfterLast() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAfterLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::CursorWrapper::isBeforeFirst() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBeforeFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::CursorWrapper::isFirst() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::CursorWrapper::isLast() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::database::CursorWrapper::getType(int32_t arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::database::CursorWrapper::isNull(int32_t arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNull", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::database::CursorWrapper::moveToLast() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::CursorWrapper::move(int32_t arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "move", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::database::CursorWrapper::moveToPosition(int32_t arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToPosition", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::database::CursorWrapper::moveToNext() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::database::CursorWrapper::getPosition() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::database::CursorWrapper::moveToPrevious() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToPrevious", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::database::CursorWrapper::registerContentObserver(const ::android::database::ContentObserver& arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerContentObserver", "(Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::CursorWrapper::registerDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::database::CursorWrapper::requery() const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "requery", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::os::Bundle android::database::CursorWrapper::respond(const ::android::os::Bundle& arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "respond", "(Landroid/os/Bundle;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::database::CursorWrapper::setNotificationUri(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNotificationUri", "(Landroid/content/ContentResolver;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::database::CursorWrapper::unregisterContentObserver(const ::android::database::ContentObserver& arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterContentObserver", "(Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::CursorWrapper::unregisterDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::database::CursorWrapper::_class) ::android::database::CursorWrapper::_class = java::fetch_class("android/database/CursorWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::database::CursorJoiner_Result> android::database::CursorJoiner_Result::values(){
    if (!::android::database::CursorJoiner_Result::_class) ::android::database::CursorJoiner_Result::_class = java::fetch_class("android/database/CursorJoiner$Result");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/database/CursorJoiner$Result;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::database::CursorJoiner_Result> _ret(rets, ::android::database::CursorJoiner_Result((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::database::CursorJoiner_Result retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::database::CursorJoiner_Result android::database::CursorJoiner_Result::valueOf(const ::java::lang::String& arg0){
    if (!::android::database::CursorJoiner_Result::_class) ::android::database::CursorJoiner_Result::_class = java::fetch_class("android/database/CursorJoiner$Result");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/database/CursorJoiner$Result;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::database::CursorJoiner_Result _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::StaleDataException::StaleDataException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::StaleDataException::_class) ::android::database::StaleDataException::_class = java::fetch_class("android/database/StaleDataException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::StaleDataException::StaleDataException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::StaleDataException::_class) ::android::database::StaleDataException::_class = java::fetch_class("android/database/StaleDataException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::database::Cursor::getCount() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::database::Cursor::getPosition() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::database::Cursor::move(int32_t arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "move", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::database::Cursor::moveToPosition(int32_t arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToPosition", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::database::Cursor::moveToFirst() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::Cursor::moveToLast() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::Cursor::moveToNext() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::Cursor::moveToPrevious() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToPrevious", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::Cursor::isFirst() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::Cursor::isLast() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::Cursor::isBeforeFirst() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBeforeFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::database::Cursor::isAfterLast() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAfterLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::database::Cursor::getColumnIndex(const ::java::lang::String& arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnIndex", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::database::Cursor::getColumnIndexOrThrow(const ::java::lang::String& arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnIndexOrThrow", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String android::database::Cursor::getColumnName(int32_t arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::database::Cursor::getColumnNames() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
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

int32_t android::database::Cursor::getColumnCount() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> android::database::Cursor::getBlob(int32_t arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlob", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String android::database::Cursor::getString(int32_t arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::Cursor::copyStringToBuffer(int32_t arg0, const ::android::database::CharArrayBuffer& arg1) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyStringToBuffer", "(ILandroid/database/CharArrayBuffer;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int16_t android::database::Cursor::getShort(int32_t arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int32_t android::database::Cursor::getInt(int32_t arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t android::database::Cursor::getLong(int32_t arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

float android::database::Cursor::getFloat(int32_t arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

double android::database::Cursor::getDouble(int32_t arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

int32_t android::database::Cursor::getType(int32_t arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::database::Cursor::isNull(int32_t arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNull", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::database::Cursor::deactivate() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "deactivate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::database::Cursor::requery() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "requery", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::database::Cursor::close() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::database::Cursor::isClosed() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClosed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::database::Cursor::registerContentObserver(const ::android::database::ContentObserver& arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerContentObserver", "(Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::Cursor::unregisterContentObserver(const ::android::database::ContentObserver& arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterContentObserver", "(Landroid/database/ContentObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::Cursor::registerDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::Cursor::unregisterDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::Cursor::setNotificationUri(const ::android::content::ContentResolver& arg0, const ::android::net::Uri& arg1) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNotificationUri", "(Landroid/content/ContentResolver;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::database::Cursor::getWantsAllOnMoveCalls() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWantsAllOnMoveCalls", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::os::Bundle android::database::Cursor::getExtras() const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::database::Cursor::respond(const ::android::os::Bundle& arg0) const {
    if (!::android::database::Cursor::_class) ::android::database::Cursor::_class = java::fetch_class("android/database/Cursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "respond", "(Landroid/os/Bundle;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::Observable::Observable() : ::java::lang::Object((jobject)0) {
    if (!::android::database::Observable::_class) ::android::database::Observable::_class = java::fetch_class("android/database/Observable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::database::Observable::registerObserver(const ::java::lang::Object& arg0) const {
    if (!::android::database::Observable::_class) ::android::database::Observable::_class = java::fetch_class("android/database/Observable");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerObserver", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::Observable::unregisterObserver(const ::java::lang::Object& arg0) const {
    if (!::android::database::Observable::_class) ::android::database::Observable::_class = java::fetch_class("android/database/Observable");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterObserver", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::Observable::unregisterAll() const {
    if (!::android::database::Observable::_class) ::android::database::Observable::_class = java::fetch_class("android/database/Observable");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::DatabaseUtils_InsertHelper::DatabaseUtils_InsertHelper(const ::android::database::sqlite::SQLiteDatabase& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t android::database::DatabaseUtils_InsertHelper::getColumnIndex(const ::java::lang::String& arg0) const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnIndex", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::database::DatabaseUtils_InsertHelper::bind(int32_t arg0, double arg1) const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(ID)V");
    int32_t _arg0 = arg0;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::database::DatabaseUtils_InsertHelper::bind(int32_t arg0, float arg1) const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::database::DatabaseUtils_InsertHelper::bind(int32_t arg0, int64_t arg1) const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(IJ)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::database::DatabaseUtils_InsertHelper::bind(int32_t arg0, int32_t arg1) const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::database::DatabaseUtils_InsertHelper::bind(int32_t arg0, bool arg1) const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::database::DatabaseUtils_InsertHelper::bindNull(int32_t arg0) const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindNull", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::DatabaseUtils_InsertHelper::bind(int32_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(I[B)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::database::DatabaseUtils_InsertHelper::bind(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int64_t android::database::DatabaseUtils_InsertHelper::insert(const ::android::content::ContentValues& arg0) const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(Landroid/content/ContentValues;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t android::database::DatabaseUtils_InsertHelper::execute() const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::database::DatabaseUtils_InsertHelper::prepareForInsert() const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareForInsert", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::DatabaseUtils_InsertHelper::prepareForReplace() const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareForReplace", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t android::database::DatabaseUtils_InsertHelper::replace(const ::android::content::ContentValues& arg0) const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(Landroid/content/ContentValues;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void android::database::DatabaseUtils_InsertHelper::close() const {
    if (!::android::database::DatabaseUtils_InsertHelper::_class) ::android::database::DatabaseUtils_InsertHelper::_class = java::fetch_class("android/database/DatabaseUtils$InsertHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::DatabaseUtils::DatabaseUtils() : ::java::lang::Object((jobject)0) {
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::database::DatabaseUtils::writeExceptionToParcel(const ::android::os::Parcel& arg0, const ::java::lang::Exception& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeExceptionToParcel", "(Landroid/os/Parcel;Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::database::DatabaseUtils::readExceptionFromParcel(const ::android::os::Parcel& arg0){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readExceptionFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::database::DatabaseUtils::readExceptionWithFileNotFoundExceptionFromParcel(const ::android::os::Parcel& arg0){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readExceptionWithFileNotFoundExceptionFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::database::DatabaseUtils::readExceptionWithOperationApplicationExceptionFromParcel(const ::android::os::Parcel& arg0){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readExceptionWithOperationApplicationExceptionFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::database::DatabaseUtils::bindObjectToProgram(const ::android::database::sqlite::SQLiteProgram& arg0, int32_t arg1, const ::java::lang::Object& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "bindObjectToProgram", "(Landroid/database/sqlite/SQLiteProgram;ILjava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::database::DatabaseUtils::appendEscapedSQLString(const ::java::lang::StringBuilder& arg0, const ::java::lang::String& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "appendEscapedSQLString", "(Ljava/lang/StringBuilder;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String android::database::DatabaseUtils::sqlEscapeString(const ::java::lang::String& arg0){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sqlEscapeString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::DatabaseUtils::appendValueToSql(const ::java::lang::StringBuilder& arg0, const ::java::lang::Object& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "appendValueToSql", "(Ljava/lang/StringBuilder;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String android::database::DatabaseUtils::concatenateWhere(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "concatenateWhere", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::database::DatabaseUtils::getCollationKey(const ::java::lang::String& arg0){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCollationKey", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::database::DatabaseUtils::getHexCollationKey(const ::java::lang::String& arg0){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getHexCollationKey", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::DatabaseUtils::dumpCursor(const ::android::database::Cursor& arg0){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpCursor", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::database::DatabaseUtils::dumpCursor(const ::android::database::Cursor& arg0, const ::java::io::PrintStream& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpCursor", "(Landroid/database/Cursor;Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::database::DatabaseUtils::dumpCursor(const ::android::database::Cursor& arg0, const ::java::lang::StringBuilder& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpCursor", "(Landroid/database/Cursor;Ljava/lang/StringBuilder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String android::database::DatabaseUtils::dumpCursorToString(const ::android::database::Cursor& arg0){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpCursorToString", "(Landroid/database/Cursor;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::DatabaseUtils::dumpCurrentRow(const ::android::database::Cursor& arg0){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpCurrentRow", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::database::DatabaseUtils::dumpCurrentRow(const ::android::database::Cursor& arg0, const ::java::io::PrintStream& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpCurrentRow", "(Landroid/database/Cursor;Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::database::DatabaseUtils::dumpCurrentRow(const ::android::database::Cursor& arg0, const ::java::lang::StringBuilder& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpCurrentRow", "(Landroid/database/Cursor;Ljava/lang/StringBuilder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String android::database::DatabaseUtils::dumpCurrentRowToString(const ::android::database::Cursor& arg0){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpCurrentRowToString", "(Landroid/database/Cursor;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::DatabaseUtils::cursorStringToContentValues(const ::android::database::Cursor& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorStringToContentValues", "(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::database::DatabaseUtils::cursorStringToInsertHelper(const ::android::database::Cursor& arg0, const ::java::lang::String& arg1, const ::android::database::DatabaseUtils_InsertHelper& arg2, int32_t arg3){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorStringToInsertHelper", "(Landroid/database/Cursor;Ljava/lang/String;Landroid/database/DatabaseUtils$InsertHelper;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::database::DatabaseUtils::cursorStringToContentValues(const ::android::database::Cursor& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2, const ::java::lang::String& arg3){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorStringToContentValues", "(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::database::DatabaseUtils::cursorIntToContentValues(const ::android::database::Cursor& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorIntToContentValues", "(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::database::DatabaseUtils::cursorIntToContentValues(const ::android::database::Cursor& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2, const ::java::lang::String& arg3){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorIntToContentValues", "(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::database::DatabaseUtils::cursorLongToContentValues(const ::android::database::Cursor& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorLongToContentValues", "(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::database::DatabaseUtils::cursorLongToContentValues(const ::android::database::Cursor& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2, const ::java::lang::String& arg3){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorLongToContentValues", "(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::database::DatabaseUtils::cursorDoubleToCursorValues(const ::android::database::Cursor& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorDoubleToCursorValues", "(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::database::DatabaseUtils::cursorDoubleToContentValues(const ::android::database::Cursor& arg0, const ::java::lang::String& arg1, const ::android::content::ContentValues& arg2, const ::java::lang::String& arg3){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorDoubleToContentValues", "(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::database::DatabaseUtils::cursorRowToContentValues(const ::android::database::Cursor& arg0, const ::android::content::ContentValues& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorRowToContentValues", "(Landroid/database/Cursor;Landroid/content/ContentValues;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int64_t android::database::DatabaseUtils::queryNumEntries(const ::android::database::sqlite::SQLiteDatabase& arg0, const ::java::lang::String& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "queryNumEntries", "(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

int64_t android::database::DatabaseUtils::queryNumEntries(const ::android::database::sqlite::SQLiteDatabase& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "queryNumEntries", "(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1, _arg2);
}

int64_t android::database::DatabaseUtils::queryNumEntries(const ::android::database::sqlite::SQLiteDatabase& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "queryNumEntries", "(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)J");
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
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int64_t android::database::DatabaseUtils::longForQuery(const ::android::database::sqlite::SQLiteDatabase& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "longForQuery", "(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)J");
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
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1, _arg2);
}

int64_t android::database::DatabaseUtils::longForQuery(const ::android::database::sqlite::SQLiteStatement& arg0, const std::vector< ::java::lang::String>& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "longForQuery", "(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String android::database::DatabaseUtils::stringForQuery(const ::android::database::sqlite::SQLiteDatabase& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stringForQuery", "(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;");
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
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::database::DatabaseUtils::stringForQuery(const ::android::database::sqlite::SQLiteStatement& arg0, const std::vector< ::java::lang::String>& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stringForQuery", "(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::database::DatabaseUtils::blobFileDescriptorForQuery(const ::android::database::sqlite::SQLiteDatabase& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "blobFileDescriptorForQuery", "(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;");
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
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::database::DatabaseUtils::blobFileDescriptorForQuery(const ::android::database::sqlite::SQLiteStatement& arg0, const std::vector< ::java::lang::String>& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "blobFileDescriptorForQuery", "(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

void android::database::DatabaseUtils::cursorStringToContentValuesIfPresent(const ::android::database::Cursor& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorStringToContentValuesIfPresent", "(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::database::DatabaseUtils::cursorLongToContentValuesIfPresent(const ::android::database::Cursor& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorLongToContentValuesIfPresent", "(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::database::DatabaseUtils::cursorShortToContentValuesIfPresent(const ::android::database::Cursor& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorShortToContentValuesIfPresent", "(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::database::DatabaseUtils::cursorIntToContentValuesIfPresent(const ::android::database::Cursor& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorIntToContentValuesIfPresent", "(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::database::DatabaseUtils::cursorFloatToContentValuesIfPresent(const ::android::database::Cursor& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorFloatToContentValuesIfPresent", "(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::database::DatabaseUtils::cursorDoubleToContentValuesIfPresent(const ::android::database::Cursor& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cursorDoubleToContentValuesIfPresent", "(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::database::DatabaseUtils::createDbFromSqlStatements(const ::android::content::Context& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::String& arg3){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createDbFromSqlStatements", "(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::database::DatabaseUtils::getSqlStatementType(const ::java::lang::String& arg0){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSqlStatementType", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

std::vector< ::java::lang::String> android::database::DatabaseUtils::appendSelectionArgs(const std::vector< ::java::lang::String>& arg0, const std::vector< ::java::lang::String>& arg1){
    if (!::android::database::DatabaseUtils::_class) ::android::database::DatabaseUtils::_class = java::fetch_class("android/database/DatabaseUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "appendSelectionArgs", "([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::MatrixCursor::MatrixCursor(const std::vector< ::java::lang::String>& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/String;I)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::MatrixCursor::MatrixCursor(const std::vector< ::java::lang::String>& arg0) : ::java::lang::Object((jobject)0), ::android::database::AbstractCursor((jobject)0), ::android::database::CrossProcessCursor((jobject)0), ::android::database::Cursor((jobject)0) {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::database::MatrixCursor_RowBuilder android::database::MatrixCursor::newRow() const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "newRow", "()Landroid/database/MatrixCursor$RowBuilder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::MatrixCursor_RowBuilder _ret(ret);
    return _ret;
}

void android::database::MatrixCursor::addRow(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRow", "([Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::MatrixCursor::addRow(const ::java::lang::Iterable& arg0) const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRow", "(Ljava/lang/Iterable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::database::MatrixCursor::getCount() const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::lang::String> android::database::MatrixCursor::getColumnNames() const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
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

::java::lang::String android::database::MatrixCursor::getString(int32_t arg0) const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int16_t android::database::MatrixCursor::getShort(int32_t arg0) const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int32_t android::database::MatrixCursor::getInt(int32_t arg0) const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t android::database::MatrixCursor::getLong(int32_t arg0) const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

float android::database::MatrixCursor::getFloat(int32_t arg0) const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

double android::database::MatrixCursor::getDouble(int32_t arg0) const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

std::vector< int8_t> android::database::MatrixCursor::getBlob(int32_t arg0) const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlob", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::database::MatrixCursor::getType(int32_t arg0) const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::database::MatrixCursor::isNull(int32_t arg0) const {
    if (!::android::database::MatrixCursor::_class) ::android::database::MatrixCursor::_class = java::fetch_class("android/database/MatrixCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNull", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::CursorWindow::CursorWindow(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::database::sqlite::SQLiteClosable((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::CursorWindow::CursorWindow(bool arg0) : ::java::lang::Object((jobject)0), ::android::database::sqlite::SQLiteClosable((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::database::CursorWindow::close() const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::database::CursorWindow::clear() const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::database::CursorWindow::getStartPosition() const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::database::CursorWindow::setStartPosition(int32_t arg0) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartPosition", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::database::CursorWindow::getNumRows() const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumRows", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::database::CursorWindow::setNumColumns(int32_t arg0) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNumColumns", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::database::CursorWindow::allocRow() const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "allocRow", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::database::CursorWindow::freeLastRow() const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "freeLastRow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::database::CursorWindow::isNull(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNull", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::database::CursorWindow::isBlob(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBlob", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::database::CursorWindow::isLong(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLong", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::database::CursorWindow::isFloat(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFloat", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::database::CursorWindow::isString(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isString", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::database::CursorWindow::getType(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> android::database::CursorWindow::getBlob(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlob", "(II)[B");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String android::database::CursorWindow::getString(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::database::CursorWindow::copyStringToBuffer(int32_t arg0, int32_t arg1, const ::android::database::CharArrayBuffer& arg2) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyStringToBuffer", "(IILandroid/database/CharArrayBuffer;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t android::database::CursorWindow::getLong(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(II)J");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

double android::database::CursorWindow::getDouble(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(II)D");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallDoubleMethod(obj, mid, _arg0, _arg1);
}

int16_t android::database::CursorWindow::getShort(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(II)S");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallShortMethod(obj, mid, _arg0, _arg1);
}

int32_t android::database::CursorWindow::getInt(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

float android::database::CursorWindow::getFloat(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(II)F");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

bool android::database::CursorWindow::putBlob(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "putBlob", "([BII)Z");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::database::CursorWindow::putString(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "putString", "(Ljava/lang/String;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::database::CursorWindow::putLong(int64_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLong", "(JII)Z");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::database::CursorWindow::putDouble(double arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "putDouble", "(DII)Z");
    double _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::database::CursorWindow::putNull(int32_t arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "putNull", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::database::CursorWindow android::database::CursorWindow::newFromParcel(const ::android::os::Parcel& arg0){
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newFromParcel", "(Landroid/os/Parcel;)Landroid/database/CursorWindow;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::database::CursorWindow _ret(ret);
    return _ret;
}

int32_t android::database::CursorWindow::describeContents() const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::database::CursorWindow::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::database::CursorWindow::toString() const {
    if (!::android::database::CursorWindow::_class) ::android::database::CursorWindow::_class = java::fetch_class("android/database/CursorWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::ContentObserver::ContentObserver(const ::android::os::Handler& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::database::ContentObserver::_class) ::android::database::ContentObserver::_class = java::fetch_class("android/database/ContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::database::ContentObserver::deliverSelfNotifications() const {
    if (!::android::database::ContentObserver::_class) ::android::database::ContentObserver::_class = java::fetch_class("android/database/ContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "deliverSelfNotifications", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::database::ContentObserver::onChange(bool arg0) const {
    if (!::android::database::ContentObserver::_class) ::android::database::ContentObserver::_class = java::fetch_class("android/database/ContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChange", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::ContentObserver::dispatchChange(bool arg0) const {
    if (!::android::database::ContentObserver::_class) ::android::database::ContentObserver::_class = java::fetch_class("android/database/ContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchChange", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::database::DatabaseErrorHandler::onCorruption(const ::android::database::sqlite::SQLiteDatabase& arg0) const {
    if (!::android::database::DatabaseErrorHandler::_class) ::android::database::DatabaseErrorHandler::_class = java::fetch_class("android/database/DatabaseErrorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCorruption", "(Landroid/database/sqlite/SQLiteDatabase;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::SQLException::SQLException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::SQLException::_class) ::android::database::SQLException::_class = java::fetch_class("android/database/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::SQLException::SQLException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::SQLException::_class) ::android::database::SQLException::_class = java::fetch_class("android/database/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::CursorIndexOutOfBoundsException::CursorIndexOutOfBoundsException(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IndexOutOfBoundsException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::CursorIndexOutOfBoundsException::_class) ::android::database::CursorIndexOutOfBoundsException::_class = java::fetch_class("android/database/CursorIndexOutOfBoundsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::database::CursorIndexOutOfBoundsException::CursorIndexOutOfBoundsException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IndexOutOfBoundsException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::database::CursorIndexOutOfBoundsException::_class) ::android::database::CursorIndexOutOfBoundsException::_class = java::fetch_class("android/database/CursorIndexOutOfBoundsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

