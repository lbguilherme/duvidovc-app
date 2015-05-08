#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.PrintStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.io.Reader.hpp"
#include "java.io.Writer.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.math.BigDecimal.hpp"
#include "java.net.URL.hpp"
#include "java.security.Permission.hpp"
#include "java.sql.Array.hpp"
#include "java.sql.BatchUpdateException.hpp"
#include "java.sql.Blob.hpp"
#include "java.sql.CallableStatement.hpp"
#include "java.sql.ClientInfoStatus.hpp"
#include "java.sql.Clob.hpp"
#include "java.sql.Connection.hpp"
#include "java.sql.DataTruncation.hpp"
#include "java.sql.DatabaseMetaData.hpp"
#include "java.sql.Date.hpp"
#include "java.sql.Driver.hpp"
#include "java.sql.DriverManager.hpp"
#include "java.sql.DriverPropertyInfo.hpp"
#include "java.sql.NClob.hpp"
#include "java.sql.ParameterMetaData.hpp"
#include "java.sql.PreparedStatement.hpp"
#include "java.sql.Ref.hpp"
#include "java.sql.ResultSet.hpp"
#include "java.sql.ResultSetMetaData.hpp"
#include "java.sql.RowId.hpp"
#include "java.sql.RowIdLifetime.hpp"
#include "java.sql.SQLClientInfoException.hpp"
#include "java.sql.SQLData.hpp"
#include "java.sql.SQLDataException.hpp"
#include "java.sql.SQLException.hpp"
#include "java.sql.SQLFeatureNotSupportedException.hpp"
#include "java.sql.SQLInput.hpp"
#include "java.sql.SQLIntegrityConstraintViolationException.hpp"
#include "java.sql.SQLInvalidAuthorizationSpecException.hpp"
#include "java.sql.SQLNonTransientConnectionException.hpp"
#include "java.sql.SQLNonTransientException.hpp"
#include "java.sql.SQLOutput.hpp"
#include "java.sql.SQLPermission.hpp"
#include "java.sql.SQLRecoverableException.hpp"
#include "java.sql.SQLSyntaxErrorException.hpp"
#include "java.sql.SQLTimeoutException.hpp"
#include "java.sql.SQLTransactionRollbackException.hpp"
#include "java.sql.SQLTransientConnectionException.hpp"
#include "java.sql.SQLTransientException.hpp"
#include "java.sql.SQLWarning.hpp"
#include "java.sql.SQLXML.hpp"
#include "java.sql.Savepoint.hpp"
#include "java.sql.Statement.hpp"
#include "java.sql.Struct.hpp"
#include "java.sql.Time.hpp"
#include "java.sql.Timestamp.hpp"
#include "java.sql.Types.hpp"
#include "java.sql.Wrapper.hpp"
#include "java.util.Calendar.hpp"
#include "java.util.Date.hpp"
#include "java.util.Enumeration.hpp"
#include "java.util.Iterator.hpp"
#include "java.util.Map.hpp"
#include "java.util.Properties.hpp"
#include "javax.xml.transform.Result.hpp"
#include "javax.xml.transform.Source.hpp"

jclass java::sql::DataTruncation::_class = nullptr;
jclass java::sql::ResultSet::_class = nullptr;
jclass java::sql::SQLSyntaxErrorException::_class = nullptr;
jclass java::sql::Ref::_class = nullptr;
jclass java::sql::Types::_class = nullptr;
jclass java::sql::Timestamp::_class = nullptr;
jclass java::sql::Array::_class = nullptr;
jclass java::sql::RowId::_class = nullptr;
jclass java::sql::SQLTransactionRollbackException::_class = nullptr;
jclass java::sql::SQLInvalidAuthorizationSpecException::_class = nullptr;
jclass java::sql::BatchUpdateException::_class = nullptr;
jclass java::sql::SQLIntegrityConstraintViolationException::_class = nullptr;
jclass java::sql::SQLRecoverableException::_class = nullptr;
jclass java::sql::SQLTimeoutException::_class = nullptr;
jclass java::sql::Struct::_class = nullptr;
jclass java::sql::SQLTransientConnectionException::_class = nullptr;
jclass java::sql::DatabaseMetaData::_class = nullptr;
jclass java::sql::SQLWarning::_class = nullptr;
jclass java::sql::NClob::_class = nullptr;
jclass java::sql::DriverManager::_class = nullptr;
jclass java::sql::Blob::_class = nullptr;
jclass java::sql::SQLInput::_class = nullptr;
jclass java::sql::SQLOutput::_class = nullptr;
jclass java::sql::ClientInfoStatus::_class = nullptr;
jclass java::sql::SQLTransientException::_class = nullptr;
jclass java::sql::RowIdLifetime::_class = nullptr;
jclass java::sql::SQLDataException::_class = nullptr;
jclass java::sql::DriverPropertyInfo::_class = nullptr;
jclass java::sql::SQLXML::_class = nullptr;
jclass java::sql::SQLData::_class = nullptr;
jclass java::sql::Clob::_class = nullptr;
jclass java::sql::PreparedStatement::_class = nullptr;
jclass java::sql::SQLFeatureNotSupportedException::_class = nullptr;
jclass java::sql::Statement::_class = nullptr;
jclass java::sql::ParameterMetaData::_class = nullptr;
jclass java::sql::SQLNonTransientException::_class = nullptr;
jclass java::sql::Date::_class = nullptr;
jclass java::sql::SQLNonTransientConnectionException::_class = nullptr;
jclass java::sql::ResultSetMetaData::_class = nullptr;
jclass java::sql::CallableStatement::_class = nullptr;
jclass java::sql::Time::_class = nullptr;
jclass java::sql::SQLException::_class = nullptr;
jclass java::sql::Savepoint::_class = nullptr;
jclass java::sql::SQLPermission::_class = nullptr;
jclass java::sql::SQLClientInfoException::_class = nullptr;
jclass java::sql::Connection::_class = nullptr;
jclass java::sql::Wrapper::_class = nullptr;
jclass java::sql::Driver::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::DataTruncation::DataTruncation(int32_t arg0, bool arg1, bool arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLWarning((jobject)0) {
    if (!::java::sql::DataTruncation::_class) ::java::sql::DataTruncation::_class = java::fetch_class("java/sql/DataTruncation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IZZII)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::DataTruncation::DataTruncation(int32_t arg0, bool arg1, bool arg2, int32_t arg3, int32_t arg4, const ::java::lang::Throwable& arg5) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLWarning((jobject)0) {
    if (!::java::sql::DataTruncation::_class) ::java::sql::DataTruncation::_class = java::fetch_class("java/sql/DataTruncation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IZZIILjava/lang/Throwable;)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

int32_t java::sql::DataTruncation::getDataSize() const {
    if (!::java::sql::DataTruncation::_class) ::java::sql::DataTruncation::_class = java::fetch_class("java/sql/DataTruncation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDataSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DataTruncation::getIndex() const {
    if (!::java::sql::DataTruncation::_class) ::java::sql::DataTruncation::_class = java::fetch_class("java/sql/DataTruncation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::sql::DataTruncation::getParameter() const {
    if (!::java::sql::DataTruncation::_class) ::java::sql::DataTruncation::_class = java::fetch_class("java/sql/DataTruncation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DataTruncation::getRead() const {
    if (!::java::sql::DataTruncation::_class) ::java::sql::DataTruncation::_class = java::fetch_class("java/sql/DataTruncation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRead", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::sql::DataTruncation::getTransferSize() const {
    if (!::java::sql::DataTruncation::_class) ::java::sql::DataTruncation::_class = java::fetch_class("java/sql/DataTruncation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransferSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::sql::ResultSet::absolute(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "absolute", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::sql::ResultSet::afterLast() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "afterLast", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::ResultSet::beforeFirst() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "beforeFirst", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::ResultSet::cancelRowUpdates() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelRowUpdates", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::ResultSet::clearWarnings() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearWarnings", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::ResultSet::close() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::ResultSet::deleteRow() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteRow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::sql::ResultSet::findColumn(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "findColumn", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::sql::ResultSet::first() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "first", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::sql::Array java::sql::ResultSet::getArray(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArray", "(I)Ljava/sql/Array;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Array _ret(ret);
    return _ret;
}

::java::sql::Array java::sql::ResultSet::getArray(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArray", "(Ljava/lang/String;)Ljava/sql/Array;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Array _ret(ret);
    return _ret;
}

::java::io::InputStream java::sql::ResultSet::getAsciiStream(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsciiStream", "(I)Ljava/io/InputStream;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::InputStream java::sql::ResultSet::getAsciiStream(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsciiStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::sql::ResultSet::getBigDecimal(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBigDecimal", "(I)Ljava/math/BigDecimal;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::sql::ResultSet::getBigDecimal(int32_t arg0, int32_t arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBigDecimal", "(II)Ljava/math/BigDecimal;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::sql::ResultSet::getBigDecimal(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBigDecimal", "(Ljava/lang/String;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::sql::ResultSet::getBigDecimal(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBigDecimal", "(Ljava/lang/String;I)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::io::InputStream java::sql::ResultSet::getBinaryStream(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBinaryStream", "(I)Ljava/io/InputStream;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::InputStream java::sql::ResultSet::getBinaryStream(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBinaryStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::sql::Blob java::sql::ResultSet::getBlob(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlob", "(I)Ljava/sql/Blob;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Blob _ret(ret);
    return _ret;
}

::java::sql::Blob java::sql::ResultSet::getBlob(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlob", "(Ljava/lang/String;)Ljava/sql/Blob;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Blob _ret(ret);
    return _ret;
}

bool java::sql::ResultSet::getBoolean(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::ResultSet::getBoolean(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int8_t java::sql::ResultSet::getByte(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByte", "(I)B");
    int32_t _arg0 = arg0;
    return java::jni->CallByteMethod(obj, mid, _arg0);
}

int8_t java::sql::ResultSet::getByte(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByte", "(Ljava/lang/String;)B");
    jobject _arg0 = arg0.obj;
    return java::jni->CallByteMethod(obj, mid, _arg0);
}

std::vector< int8_t> java::sql::ResultSet::getBytes(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytes", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> java::sql::ResultSet::getBytes(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytes", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::io::Reader java::sql::ResultSet::getCharacterStream(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharacterStream", "(I)Ljava/io/Reader;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Reader _ret(ret);
    return _ret;
}

::java::io::Reader java::sql::ResultSet::getCharacterStream(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharacterStream", "(Ljava/lang/String;)Ljava/io/Reader;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Reader _ret(ret);
    return _ret;
}

::java::sql::Clob java::sql::ResultSet::getClob(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClob", "(I)Ljava/sql/Clob;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Clob _ret(ret);
    return _ret;
}

::java::sql::Clob java::sql::ResultSet::getClob(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClob", "(Ljava/lang/String;)Ljava/sql/Clob;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Clob _ret(ret);
    return _ret;
}

int32_t java::sql::ResultSet::getConcurrency() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConcurrency", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::sql::ResultSet::getCursorName() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursorName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::Date java::sql::ResultSet::getDate(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "(I)Ljava/sql/Date;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Date _ret(ret);
    return _ret;
}

::java::sql::Date java::sql::ResultSet::getDate(int32_t arg0, const ::java::util::Calendar& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "(ILjava/util/Calendar;)Ljava/sql/Date;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Date _ret(ret);
    return _ret;
}

::java::sql::Date java::sql::ResultSet::getDate(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "(Ljava/lang/String;)Ljava/sql/Date;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Date _ret(ret);
    return _ret;
}

::java::sql::Date java::sql::ResultSet::getDate(const ::java::lang::String& arg0, const ::java::util::Calendar& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Date;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Date _ret(ret);
    return _ret;
}

double java::sql::ResultSet::getDouble(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

double java::sql::ResultSet::getDouble(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(Ljava/lang/String;)D");
    jobject _arg0 = arg0.obj;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

int32_t java::sql::ResultSet::getFetchDirection() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFetchDirection", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::ResultSet::getFetchSize() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFetchSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float java::sql::ResultSet::getFloat(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float java::sql::ResultSet::getFloat(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(Ljava/lang/String;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

int32_t java::sql::ResultSet::getInt(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::sql::ResultSet::getInt(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t java::sql::ResultSet::getLong(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::sql::ResultSet::getLong(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::java::sql::ResultSetMetaData java::sql::ResultSet::getMetaData() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetaData", "()Ljava/sql/ResultSetMetaData;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSetMetaData _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::ResultSet::getObject(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::ResultSet::getObject(int32_t arg0, const ::java::util::Map& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(ILjava/util/Map;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::ResultSet::getObject(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::ResultSet::getObject(const ::java::lang::String& arg0, const ::java::util::Map& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::sql::Ref java::sql::ResultSet::getRef(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRef", "(I)Ljava/sql/Ref;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Ref _ret(ret);
    return _ret;
}

::java::sql::Ref java::sql::ResultSet::getRef(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRef", "(Ljava/lang/String;)Ljava/sql/Ref;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Ref _ret(ret);
    return _ret;
}

int32_t java::sql::ResultSet::getRow() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRow", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int16_t java::sql::ResultSet::getShort(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int16_t java::sql::ResultSet::getShort(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(Ljava/lang/String;)S");
    jobject _arg0 = arg0.obj;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

::java::sql::Statement java::sql::ResultSet::getStatement() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatement", "()Ljava/sql/Statement;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Statement _ret(ret);
    return _ret;
}

::java::lang::String java::sql::ResultSet::getString(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::ResultSet::getString(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::Time java::sql::ResultSet::getTime(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "(I)Ljava/sql/Time;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Time _ret(ret);
    return _ret;
}

::java::sql::Time java::sql::ResultSet::getTime(int32_t arg0, const ::java::util::Calendar& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "(ILjava/util/Calendar;)Ljava/sql/Time;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Time _ret(ret);
    return _ret;
}

::java::sql::Time java::sql::ResultSet::getTime(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "(Ljava/lang/String;)Ljava/sql/Time;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Time _ret(ret);
    return _ret;
}

::java::sql::Time java::sql::ResultSet::getTime(const ::java::lang::String& arg0, const ::java::util::Calendar& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Time;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Time _ret(ret);
    return _ret;
}

::java::sql::Timestamp java::sql::ResultSet::getTimestamp(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestamp", "(I)Ljava/sql/Timestamp;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Timestamp _ret(ret);
    return _ret;
}

::java::sql::Timestamp java::sql::ResultSet::getTimestamp(int32_t arg0, const ::java::util::Calendar& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestamp", "(ILjava/util/Calendar;)Ljava/sql/Timestamp;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Timestamp _ret(ret);
    return _ret;
}

::java::sql::Timestamp java::sql::ResultSet::getTimestamp(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestamp", "(Ljava/lang/String;)Ljava/sql/Timestamp;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Timestamp _ret(ret);
    return _ret;
}

::java::sql::Timestamp java::sql::ResultSet::getTimestamp(const ::java::lang::String& arg0, const ::java::util::Calendar& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestamp", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Timestamp;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Timestamp _ret(ret);
    return _ret;
}

int32_t java::sql::ResultSet::getType() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::io::InputStream java::sql::ResultSet::getUnicodeStream(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUnicodeStream", "(I)Ljava/io/InputStream;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::InputStream java::sql::ResultSet::getUnicodeStream(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUnicodeStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::net::URL java::sql::ResultSet::getURL(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURL", "(I)Ljava/net/URL;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::URL _ret(ret);
    return _ret;
}

::java::net::URL java::sql::ResultSet::getURL(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURL", "(Ljava/lang/String;)Ljava/net/URL;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::URL _ret(ret);
    return _ret;
}

::java::sql::SQLWarning java::sql::ResultSet::getWarnings() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWarnings", "()Ljava/sql/SQLWarning;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::SQLWarning _ret(ret);
    return _ret;
}

void java::sql::ResultSet::insertRow() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "insertRow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::sql::ResultSet::isAfterLast() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAfterLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::ResultSet::isBeforeFirst() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBeforeFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::ResultSet::isFirst() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFirst", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::ResultSet::isLast() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::ResultSet::last() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "last", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::sql::ResultSet::moveToCurrentRow() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToCurrentRow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::ResultSet::moveToInsertRow() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToInsertRow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::sql::ResultSet::next() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::ResultSet::previous() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "previous", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::sql::ResultSet::refreshRow() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "refreshRow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::sql::ResultSet::relative(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "relative", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::ResultSet::rowDeleted() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "rowDeleted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::ResultSet::rowInserted() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "rowInserted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::ResultSet::rowUpdated() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "rowUpdated", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::sql::ResultSet::setFetchDirection(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFetchDirection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::ResultSet::setFetchSize(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFetchSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::ResultSet::updateArray(int32_t arg0, const ::java::sql::Array& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateArray", "(ILjava/sql/Array;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateArray(const ::java::lang::String& arg0, const ::java::sql::Array& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateArray", "(Ljava/lang/String;Ljava/sql/Array;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateAsciiStream(int32_t arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateAsciiStream", "(ILjava/io/InputStream;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateAsciiStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateBigDecimal(int32_t arg0, const ::java::math::BigDecimal& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBigDecimal", "(ILjava/math/BigDecimal;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateBigDecimal(const ::java::lang::String& arg0, const ::java::math::BigDecimal& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBigDecimal", "(Ljava/lang/String;Ljava/math/BigDecimal;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateBinaryStream(int32_t arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBinaryStream", "(ILjava/io/InputStream;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateBinaryStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateBlob(int32_t arg0, const ::java::sql::Blob& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBlob", "(ILjava/sql/Blob;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateBlob(const ::java::lang::String& arg0, const ::java::sql::Blob& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBlob", "(Ljava/lang/String;Ljava/sql/Blob;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateBoolean(int32_t arg0, bool arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBoolean", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBoolean", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateByte(int32_t arg0, int8_t arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateByte", "(IB)V");
    int32_t _arg0 = arg0;
    int8_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateByte(const ::java::lang::String& arg0, int8_t arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateByte", "(Ljava/lang/String;B)V");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateBytes(int32_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBytes", "(I[B)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateBytes(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBytes", "(Ljava/lang/String;[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateCharacterStream(int32_t arg0, const ::java::io::Reader& arg1, int32_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateCharacterStream", "(ILjava/io/Reader;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int32_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateClob(int32_t arg0, const ::java::sql::Clob& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateClob", "(ILjava/sql/Clob;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateClob(const ::java::lang::String& arg0, const ::java::sql::Clob& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateClob", "(Ljava/lang/String;Ljava/sql/Clob;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateDate(int32_t arg0, const ::java::sql::Date& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDate", "(ILjava/sql/Date;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateDate(const ::java::lang::String& arg0, const ::java::sql::Date& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDate", "(Ljava/lang/String;Ljava/sql/Date;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateDouble(int32_t arg0, double arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDouble", "(ID)V");
    int32_t _arg0 = arg0;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDouble", "(Ljava/lang/String;D)V");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateFloat(int32_t arg0, float arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateFloat", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateFloat(const ::java::lang::String& arg0, float arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateFloat", "(Ljava/lang/String;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateInt(int32_t arg0, int32_t arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateInt", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateInt", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateLong(int32_t arg0, int64_t arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateLong", "(IJ)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateLong", "(Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateNull(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNull", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::ResultSet::updateNull(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNull", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::ResultSet::updateObject(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateObject", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateObject(int32_t arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateObject", "(ILjava/lang/Object;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateObject(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateObject", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateObject(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateObject", "(Ljava/lang/String;Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateRef(int32_t arg0, const ::java::sql::Ref& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateRef", "(ILjava/sql/Ref;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateRef(const ::java::lang::String& arg0, const ::java::sql::Ref& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateRef", "(Ljava/lang/String;Ljava/sql/Ref;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateRow() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateRow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::ResultSet::updateShort(int32_t arg0, int16_t arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateShort", "(IS)V");
    int32_t _arg0 = arg0;
    int16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateShort(const ::java::lang::String& arg0, int16_t arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateShort", "(Ljava/lang/String;S)V");
    jobject _arg0 = arg0.obj;
    int16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateString(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateString", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateString", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateTime(int32_t arg0, const ::java::sql::Time& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateTime", "(ILjava/sql/Time;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateTime(const ::java::lang::String& arg0, const ::java::sql::Time& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateTime", "(Ljava/lang/String;Ljava/sql/Time;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateTimestamp(int32_t arg0, const ::java::sql::Timestamp& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateTimestamp", "(ILjava/sql/Timestamp;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateTimestamp(const ::java::lang::String& arg0, const ::java::sql::Timestamp& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::sql::ResultSet::wasNull() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "wasNull", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::sql::RowId java::sql::ResultSet::getRowId(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRowId", "(I)Ljava/sql/RowId;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::RowId _ret(ret);
    return _ret;
}

::java::sql::RowId java::sql::ResultSet::getRowId(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRowId", "(Ljava/lang/String;)Ljava/sql/RowId;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::RowId _ret(ret);
    return _ret;
}

void java::sql::ResultSet::updateRowId(int32_t arg0, const ::java::sql::RowId& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateRowId", "(ILjava/sql/RowId;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateRowId(const ::java::lang::String& arg0, const ::java::sql::RowId& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateRowId", "(Ljava/lang/String;Ljava/sql/RowId;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t java::sql::ResultSet::getHoldability() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHoldability", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::sql::ResultSet::isClosed() const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClosed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::sql::ResultSet::updateNString(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNString", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateNString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNString", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateNClob(int32_t arg0, const ::java::sql::NClob& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNClob", "(ILjava/sql/NClob;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateNClob(const ::java::lang::String& arg0, const ::java::sql::NClob& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNClob", "(Ljava/lang/String;Ljava/sql/NClob;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::sql::NClob java::sql::ResultSet::getNClob(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNClob", "(I)Ljava/sql/NClob;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::NClob _ret(ret);
    return _ret;
}

::java::sql::NClob java::sql::ResultSet::getNClob(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNClob", "(Ljava/lang/String;)Ljava/sql/NClob;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::NClob _ret(ret);
    return _ret;
}

::java::sql::SQLXML java::sql::ResultSet::getSQLXML(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSQLXML", "(I)Ljava/sql/SQLXML;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::SQLXML _ret(ret);
    return _ret;
}

::java::sql::SQLXML java::sql::ResultSet::getSQLXML(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSQLXML", "(Ljava/lang/String;)Ljava/sql/SQLXML;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::SQLXML _ret(ret);
    return _ret;
}

void java::sql::ResultSet::updateSQLXML(int32_t arg0, const ::java::sql::SQLXML& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateSQLXML", "(ILjava/sql/SQLXML;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateSQLXML(const ::java::lang::String& arg0, const ::java::sql::SQLXML& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateSQLXML", "(Ljava/lang/String;Ljava/sql/SQLXML;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::sql::ResultSet::getNString(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::ResultSet::getNString(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::io::Reader java::sql::ResultSet::getNCharacterStream(int32_t arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNCharacterStream", "(I)Ljava/io/Reader;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Reader _ret(ret);
    return _ret;
}

::java::io::Reader java::sql::ResultSet::getNCharacterStream(const ::java::lang::String& arg0) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNCharacterStream", "(Ljava/lang/String;)Ljava/io/Reader;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Reader _ret(ret);
    return _ret;
}

void java::sql::ResultSet::updateNCharacterStream(int32_t arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNCharacterStream", "(ILjava/io/Reader;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateNCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateAsciiStream(int32_t arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateAsciiStream", "(ILjava/io/InputStream;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateBinaryStream(int32_t arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBinaryStream", "(ILjava/io/InputStream;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateCharacterStream(int32_t arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateCharacterStream", "(ILjava/io/Reader;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateAsciiStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateBinaryStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateBlob(int32_t arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBlob", "(ILjava/io/InputStream;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateBlob(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBlob", "(Ljava/lang/String;Ljava/io/InputStream;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateClob(int32_t arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateClob", "(ILjava/io/Reader;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateClob(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateClob", "(Ljava/lang/String;Ljava/io/Reader;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateNClob(int32_t arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNClob", "(ILjava/io/Reader;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateNClob(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNClob", "(Ljava/lang/String;Ljava/io/Reader;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::ResultSet::updateNCharacterStream(int32_t arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNCharacterStream", "(ILjava/io/Reader;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateNCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateAsciiStream(int32_t arg0, const ::java::io::InputStream& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateAsciiStream", "(ILjava/io/InputStream;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateBinaryStream(int32_t arg0, const ::java::io::InputStream& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBinaryStream", "(ILjava/io/InputStream;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateCharacterStream(int32_t arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateCharacterStream", "(ILjava/io/Reader;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateAsciiStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateBinaryStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateBlob(int32_t arg0, const ::java::io::InputStream& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBlob", "(ILjava/io/InputStream;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateBlob(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateBlob", "(Ljava/lang/String;Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateClob(int32_t arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateClob", "(ILjava/io/Reader;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateClob(const ::java::lang::String& arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateClob", "(Ljava/lang/String;Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateNClob(int32_t arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNClob", "(ILjava/io/Reader;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::ResultSet::updateNClob(const ::java::lang::String& arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::ResultSet::_class) ::java::sql::ResultSet::_class = java::fetch_class("java/sql/ResultSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateNClob", "(Ljava/lang/String;Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLSyntaxErrorException::SQLSyntaxErrorException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLSyntaxErrorException::_class) ::java::sql::SQLSyntaxErrorException::_class = java::fetch_class("java/sql/SQLSyntaxErrorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLSyntaxErrorException::SQLSyntaxErrorException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLSyntaxErrorException::_class) ::java::sql::SQLSyntaxErrorException::_class = java::fetch_class("java/sql/SQLSyntaxErrorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLSyntaxErrorException::SQLSyntaxErrorException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLSyntaxErrorException::_class) ::java::sql::SQLSyntaxErrorException::_class = java::fetch_class("java/sql/SQLSyntaxErrorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLSyntaxErrorException::SQLSyntaxErrorException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLSyntaxErrorException::_class) ::java::sql::SQLSyntaxErrorException::_class = java::fetch_class("java/sql/SQLSyntaxErrorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLSyntaxErrorException::SQLSyntaxErrorException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLSyntaxErrorException::_class) ::java::sql::SQLSyntaxErrorException::_class = java::fetch_class("java/sql/SQLSyntaxErrorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLSyntaxErrorException::SQLSyntaxErrorException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLSyntaxErrorException::_class) ::java::sql::SQLSyntaxErrorException::_class = java::fetch_class("java/sql/SQLSyntaxErrorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLSyntaxErrorException::SQLSyntaxErrorException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLSyntaxErrorException::_class) ::java::sql::SQLSyntaxErrorException::_class = java::fetch_class("java/sql/SQLSyntaxErrorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLSyntaxErrorException::SQLSyntaxErrorException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLSyntaxErrorException::_class) ::java::sql::SQLSyntaxErrorException::_class = java::fetch_class("java/sql/SQLSyntaxErrorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::String java::sql::Ref::getBaseTypeName() const {
    if (!::java::sql::Ref::_class) ::java::sql::Ref::_class = java::fetch_class("java/sql/Ref");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseTypeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::Ref::getObject() const {
    if (!::java::sql::Ref::_class) ::java::sql::Ref::_class = java::fetch_class("java/sql/Ref");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::Ref::getObject(const ::java::util::Map& arg0) const {
    if (!::java::sql::Ref::_class) ::java::sql::Ref::_class = java::fetch_class("java/sql/Ref");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(Ljava/util/Map;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::sql::Ref::setObject(const ::java::lang::Object& arg0) const {
    if (!::java::sql::Ref::_class) ::java::sql::Ref::_class = java::fetch_class("java/sql/Ref");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::Timestamp::Timestamp(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Date((jobject)0) {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::Timestamp::Timestamp(int64_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Date((jobject)0) {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(J)V");
    int64_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::sql::Timestamp::after(const ::java::sql::Timestamp& arg0) const {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "after", "(Ljava/sql/Timestamp;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::Timestamp::before(const ::java::sql::Timestamp& arg0) const {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "before", "(Ljava/sql/Timestamp;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::sql::Timestamp::compareTo(const ::java::util::Date& arg0) const {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/util/Date;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::sql::Timestamp::compareTo(const ::java::sql::Timestamp& arg0) const {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/sql/Timestamp;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::sql::Timestamp::equals(const ::java::lang::Object& arg0) const {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::Timestamp::equals(const ::java::sql::Timestamp& arg0) const {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/sql/Timestamp;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::sql::Timestamp::getNanos() const {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNanos", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::sql::Timestamp::getTime() const {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void java::sql::Timestamp::setNanos(int32_t arg0) const {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNanos", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Timestamp::setTime(int64_t arg0) const {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::sql::Timestamp::toString() const {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::Timestamp java::sql::Timestamp::valueOf(const ::java::lang::String& arg0){
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/sql/Timestamp;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::sql::Timestamp _ret(ret);
    return _ret;
}

int32_t java::sql::Timestamp::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::sql::Timestamp::_class) ::java::sql::Timestamp::_class = java::fetch_class("java/sql/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Object java::sql::Array::getArray() const {
    if (!::java::sql::Array::_class) ::java::sql::Array::_class = java::fetch_class("java/sql/Array");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArray", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::Array::getArray(int64_t arg0, int32_t arg1) const {
    if (!::java::sql::Array::_class) ::java::sql::Array::_class = java::fetch_class("java/sql/Array");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArray", "(JI)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::Array::getArray(int64_t arg0, int32_t arg1, const ::java::util::Map& arg2) const {
    if (!::java::sql::Array::_class) ::java::sql::Array::_class = java::fetch_class("java/sql/Array");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArray", "(JILjava/util/Map;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::Array::getArray(const ::java::util::Map& arg0) const {
    if (!::java::sql::Array::_class) ::java::sql::Array::_class = java::fetch_class("java/sql/Array");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArray", "(Ljava/util/Map;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::sql::Array::getBaseType() const {
    if (!::java::sql::Array::_class) ::java::sql::Array::_class = java::fetch_class("java/sql/Array");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::sql::Array::getBaseTypeName() const {
    if (!::java::sql::Array::_class) ::java::sql::Array::_class = java::fetch_class("java/sql/Array");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseTypeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::Array::getResultSet() const {
    if (!::java::sql::Array::_class) ::java::sql::Array::_class = java::fetch_class("java/sql/Array");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultSet", "()Ljava/sql/ResultSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::Array::getResultSet(int64_t arg0, int32_t arg1) const {
    if (!::java::sql::Array::_class) ::java::sql::Array::_class = java::fetch_class("java/sql/Array");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultSet", "(JI)Ljava/sql/ResultSet;");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::Array::getResultSet(int64_t arg0, int32_t arg1, const ::java::util::Map& arg2) const {
    if (!::java::sql::Array::_class) ::java::sql::Array::_class = java::fetch_class("java/sql/Array");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultSet", "(JILjava/util/Map;)Ljava/sql/ResultSet;");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::Array::getResultSet(const ::java::util::Map& arg0) const {
    if (!::java::sql::Array::_class) ::java::sql::Array::_class = java::fetch_class("java/sql/Array");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultSet", "(Ljava/util/Map;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

void java::sql::Array::free() const {
    if (!::java::sql::Array::_class) ::java::sql::Array::_class = java::fetch_class("java/sql/Array");
    static jmethodID mid = java::jni->GetMethodID(_class, "free", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::sql::RowId::equals(const ::java::lang::Object& arg0) const {
    if (!::java::sql::RowId::_class) ::java::sql::RowId::_class = java::fetch_class("java/sql/RowId");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< int8_t> java::sql::RowId::getBytes() const {
    if (!::java::sql::RowId::_class) ::java::sql::RowId::_class = java::fetch_class("java/sql/RowId");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytes", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::sql::RowId::toString() const {
    if (!::java::sql::RowId::_class) ::java::sql::RowId::_class = java::fetch_class("java/sql/RowId");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::sql::RowId::hashCode() const {
    if (!::java::sql::RowId::_class) ::java::sql::RowId::_class = java::fetch_class("java/sql/RowId");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransactionRollbackException::SQLTransactionRollbackException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransactionRollbackException::_class) ::java::sql::SQLTransactionRollbackException::_class = java::fetch_class("java/sql/SQLTransactionRollbackException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransactionRollbackException::SQLTransactionRollbackException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransactionRollbackException::_class) ::java::sql::SQLTransactionRollbackException::_class = java::fetch_class("java/sql/SQLTransactionRollbackException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransactionRollbackException::SQLTransactionRollbackException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransactionRollbackException::_class) ::java::sql::SQLTransactionRollbackException::_class = java::fetch_class("java/sql/SQLTransactionRollbackException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransactionRollbackException::SQLTransactionRollbackException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransactionRollbackException::_class) ::java::sql::SQLTransactionRollbackException::_class = java::fetch_class("java/sql/SQLTransactionRollbackException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransactionRollbackException::SQLTransactionRollbackException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransactionRollbackException::_class) ::java::sql::SQLTransactionRollbackException::_class = java::fetch_class("java/sql/SQLTransactionRollbackException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransactionRollbackException::SQLTransactionRollbackException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransactionRollbackException::_class) ::java::sql::SQLTransactionRollbackException::_class = java::fetch_class("java/sql/SQLTransactionRollbackException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransactionRollbackException::SQLTransactionRollbackException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransactionRollbackException::_class) ::java::sql::SQLTransactionRollbackException::_class = java::fetch_class("java/sql/SQLTransactionRollbackException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransactionRollbackException::SQLTransactionRollbackException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransactionRollbackException::_class) ::java::sql::SQLTransactionRollbackException::_class = java::fetch_class("java/sql/SQLTransactionRollbackException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLInvalidAuthorizationSpecException::_class) ::java::sql::SQLInvalidAuthorizationSpecException::_class = java::fetch_class("java/sql/SQLInvalidAuthorizationSpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLInvalidAuthorizationSpecException::_class) ::java::sql::SQLInvalidAuthorizationSpecException::_class = java::fetch_class("java/sql/SQLInvalidAuthorizationSpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLInvalidAuthorizationSpecException::_class) ::java::sql::SQLInvalidAuthorizationSpecException::_class = java::fetch_class("java/sql/SQLInvalidAuthorizationSpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLInvalidAuthorizationSpecException::_class) ::java::sql::SQLInvalidAuthorizationSpecException::_class = java::fetch_class("java/sql/SQLInvalidAuthorizationSpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLInvalidAuthorizationSpecException::_class) ::java::sql::SQLInvalidAuthorizationSpecException::_class = java::fetch_class("java/sql/SQLInvalidAuthorizationSpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLInvalidAuthorizationSpecException::_class) ::java::sql::SQLInvalidAuthorizationSpecException::_class = java::fetch_class("java/sql/SQLInvalidAuthorizationSpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLInvalidAuthorizationSpecException::_class) ::java::sql::SQLInvalidAuthorizationSpecException::_class = java::fetch_class("java/sql/SQLInvalidAuthorizationSpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLInvalidAuthorizationSpecException::SQLInvalidAuthorizationSpecException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLInvalidAuthorizationSpecException::_class) ::java::sql::SQLInvalidAuthorizationSpecException::_class = java::fetch_class("java/sql/SQLInvalidAuthorizationSpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::BatchUpdateException::BatchUpdateException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::BatchUpdateException::_class) ::java::sql::BatchUpdateException::_class = java::fetch_class("java/sql/BatchUpdateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::BatchUpdateException::BatchUpdateException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::BatchUpdateException::_class) ::java::sql::BatchUpdateException::_class = java::fetch_class("java/sql/BatchUpdateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::BatchUpdateException::BatchUpdateException(const std::vector< int32_t>& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::BatchUpdateException::_class) ::java::sql::BatchUpdateException::_class = java::fetch_class("java/sql/BatchUpdateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([ILjava/lang/Throwable;)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::BatchUpdateException::BatchUpdateException(const ::java::lang::String& arg0, const std::vector< int32_t>& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::BatchUpdateException::_class) ::java::sql::BatchUpdateException::_class = java::fetch_class("java/sql/BatchUpdateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;[ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::BatchUpdateException::BatchUpdateException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const std::vector< int32_t>& arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::BatchUpdateException::_class) ::java::sql::BatchUpdateException::_class = java::fetch_class("java/sql/BatchUpdateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;[ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::BatchUpdateException::BatchUpdateException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const std::vector< int32_t>& arg3, const ::java::lang::Throwable& arg4) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::BatchUpdateException::_class) ::java::sql::BatchUpdateException::_class = java::fetch_class("java/sql/BatchUpdateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I[ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::BatchUpdateException::BatchUpdateException(const std::vector< int32_t>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::BatchUpdateException::_class) ::java::sql::BatchUpdateException::_class = java::fetch_class("java/sql/BatchUpdateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::BatchUpdateException::BatchUpdateException(const ::java::lang::String& arg0, const std::vector< int32_t>& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::BatchUpdateException::_class) ::java::sql::BatchUpdateException::_class = java::fetch_class("java/sql/BatchUpdateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;[I)V");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::BatchUpdateException::BatchUpdateException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const std::vector< int32_t>& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::BatchUpdateException::_class) ::java::sql::BatchUpdateException::_class = java::fetch_class("java/sql/BatchUpdateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;[I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::BatchUpdateException::BatchUpdateException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const std::vector< int32_t>& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::BatchUpdateException::_class) ::java::sql::BatchUpdateException::_class = java::fetch_class("java/sql/BatchUpdateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I[I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

std::vector< int32_t> java::sql::BatchUpdateException::getUpdateCounts() const {
    if (!::java::sql::BatchUpdateException::_class) ::java::sql::BatchUpdateException::_class = java::fetch_class("java/sql/BatchUpdateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUpdateCounts", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLIntegrityConstraintViolationException::_class) ::java::sql::SQLIntegrityConstraintViolationException::_class = java::fetch_class("java/sql/SQLIntegrityConstraintViolationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLIntegrityConstraintViolationException::_class) ::java::sql::SQLIntegrityConstraintViolationException::_class = java::fetch_class("java/sql/SQLIntegrityConstraintViolationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLIntegrityConstraintViolationException::_class) ::java::sql::SQLIntegrityConstraintViolationException::_class = java::fetch_class("java/sql/SQLIntegrityConstraintViolationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLIntegrityConstraintViolationException::_class) ::java::sql::SQLIntegrityConstraintViolationException::_class = java::fetch_class("java/sql/SQLIntegrityConstraintViolationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLIntegrityConstraintViolationException::_class) ::java::sql::SQLIntegrityConstraintViolationException::_class = java::fetch_class("java/sql/SQLIntegrityConstraintViolationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLIntegrityConstraintViolationException::_class) ::java::sql::SQLIntegrityConstraintViolationException::_class = java::fetch_class("java/sql/SQLIntegrityConstraintViolationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLIntegrityConstraintViolationException::_class) ::java::sql::SQLIntegrityConstraintViolationException::_class = java::fetch_class("java/sql/SQLIntegrityConstraintViolationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLIntegrityConstraintViolationException::SQLIntegrityConstraintViolationException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLIntegrityConstraintViolationException::_class) ::java::sql::SQLIntegrityConstraintViolationException::_class = java::fetch_class("java/sql/SQLIntegrityConstraintViolationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLRecoverableException::SQLRecoverableException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLRecoverableException::_class) ::java::sql::SQLRecoverableException::_class = java::fetch_class("java/sql/SQLRecoverableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLRecoverableException::SQLRecoverableException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLRecoverableException::_class) ::java::sql::SQLRecoverableException::_class = java::fetch_class("java/sql/SQLRecoverableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLRecoverableException::SQLRecoverableException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLRecoverableException::_class) ::java::sql::SQLRecoverableException::_class = java::fetch_class("java/sql/SQLRecoverableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLRecoverableException::SQLRecoverableException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLRecoverableException::_class) ::java::sql::SQLRecoverableException::_class = java::fetch_class("java/sql/SQLRecoverableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLRecoverableException::SQLRecoverableException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLRecoverableException::_class) ::java::sql::SQLRecoverableException::_class = java::fetch_class("java/sql/SQLRecoverableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLRecoverableException::SQLRecoverableException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLRecoverableException::_class) ::java::sql::SQLRecoverableException::_class = java::fetch_class("java/sql/SQLRecoverableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLRecoverableException::SQLRecoverableException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLRecoverableException::_class) ::java::sql::SQLRecoverableException::_class = java::fetch_class("java/sql/SQLRecoverableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLRecoverableException::SQLRecoverableException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLRecoverableException::_class) ::java::sql::SQLRecoverableException::_class = java::fetch_class("java/sql/SQLRecoverableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTimeoutException::SQLTimeoutException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTimeoutException::_class) ::java::sql::SQLTimeoutException::_class = java::fetch_class("java/sql/SQLTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTimeoutException::SQLTimeoutException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTimeoutException::_class) ::java::sql::SQLTimeoutException::_class = java::fetch_class("java/sql/SQLTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTimeoutException::SQLTimeoutException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTimeoutException::_class) ::java::sql::SQLTimeoutException::_class = java::fetch_class("java/sql/SQLTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTimeoutException::SQLTimeoutException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTimeoutException::_class) ::java::sql::SQLTimeoutException::_class = java::fetch_class("java/sql/SQLTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTimeoutException::SQLTimeoutException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTimeoutException::_class) ::java::sql::SQLTimeoutException::_class = java::fetch_class("java/sql/SQLTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTimeoutException::SQLTimeoutException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTimeoutException::_class) ::java::sql::SQLTimeoutException::_class = java::fetch_class("java/sql/SQLTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTimeoutException::SQLTimeoutException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTimeoutException::_class) ::java::sql::SQLTimeoutException::_class = java::fetch_class("java/sql/SQLTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTimeoutException::SQLTimeoutException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTimeoutException::_class) ::java::sql::SQLTimeoutException::_class = java::fetch_class("java/sql/SQLTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::String java::sql::Struct::getSQLTypeName() const {
    if (!::java::sql::Struct::_class) ::java::sql::Struct::_class = java::fetch_class("java/sql/Struct");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSQLTypeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> java::sql::Struct::getAttributes() const {
    if (!::java::sql::Struct::_class) ::java::sql::Struct::_class = java::fetch_class("java/sql/Struct");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributes", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> java::sql::Struct::getAttributes(const ::java::util::Map& arg0) const {
    if (!::java::sql::Struct::_class) ::java::sql::Struct::_class = java::fetch_class("java/sql/Struct");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributes", "(Ljava/util/Map;)[Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientConnectionException::SQLTransientConnectionException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransientConnectionException::_class) ::java::sql::SQLTransientConnectionException::_class = java::fetch_class("java/sql/SQLTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientConnectionException::SQLTransientConnectionException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransientConnectionException::_class) ::java::sql::SQLTransientConnectionException::_class = java::fetch_class("java/sql/SQLTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientConnectionException::SQLTransientConnectionException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransientConnectionException::_class) ::java::sql::SQLTransientConnectionException::_class = java::fetch_class("java/sql/SQLTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientConnectionException::SQLTransientConnectionException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransientConnectionException::_class) ::java::sql::SQLTransientConnectionException::_class = java::fetch_class("java/sql/SQLTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientConnectionException::SQLTransientConnectionException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransientConnectionException::_class) ::java::sql::SQLTransientConnectionException::_class = java::fetch_class("java/sql/SQLTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientConnectionException::SQLTransientConnectionException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransientConnectionException::_class) ::java::sql::SQLTransientConnectionException::_class = java::fetch_class("java/sql/SQLTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientConnectionException::SQLTransientConnectionException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransientConnectionException::_class) ::java::sql::SQLTransientConnectionException::_class = java::fetch_class("java/sql/SQLTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientConnectionException::SQLTransientConnectionException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLTransientException((jobject)0) {
    if (!::java::sql::SQLTransientConnectionException::_class) ::java::sql::SQLTransientConnectionException::_class = java::fetch_class("java/sql/SQLTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

bool java::sql::DatabaseMetaData::allProceduresAreCallable() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "allProceduresAreCallable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::allTablesAreSelectable() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "allTablesAreSelectable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::dataDefinitionCausesTransactionCommit() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "dataDefinitionCausesTransactionCommit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::dataDefinitionIgnoredInTransactions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "dataDefinitionIgnoredInTransactions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::deletesAreDetected(int32_t arg0) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "deletesAreDetected", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::DatabaseMetaData::doesMaxRowSizeIncludeBlobs() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "doesMaxRowSizeIncludeBlobs", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getAttributes(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributes", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getBestRowIdentifier(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, bool arg4) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBestRowIdentifier", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IZ)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    bool _arg4 = arg4;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getCatalogs() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCatalogs", "()Ljava/sql/ResultSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getCatalogSeparator() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCatalogSeparator", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getCatalogTerm() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCatalogTerm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getColumnPrivileges(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnPrivileges", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getColumns(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumns", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::Connection java::sql::DatabaseMetaData::getConnection() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnection", "()Ljava/sql/Connection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Connection _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getCrossReference(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCrossReference", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

int32_t java::sql::DatabaseMetaData::getDatabaseMajorVersion() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabaseMajorVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getDatabaseMinorVersion() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabaseMinorVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::sql::DatabaseMetaData::getDatabaseProductName() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabaseProductName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getDatabaseProductVersion() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabaseProductVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::sql::DatabaseMetaData::getDefaultTransactionIsolation() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultTransactionIsolation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getDriverMajorVersion() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDriverMajorVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getDriverMinorVersion() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDriverMinorVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::sql::DatabaseMetaData::getDriverName() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDriverName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getDriverVersion() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDriverVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getExportedKeys(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExportedKeys", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getExtraNameCharacters() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtraNameCharacters", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getIdentifierQuoteString() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIdentifierQuoteString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getImportedKeys(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImportedKeys", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getIndexInfo(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, bool arg3, bool arg4) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndexInfo", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    bool _arg4 = arg4;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

int32_t java::sql::DatabaseMetaData::getJDBCMajorVersion() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJDBCMajorVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getJDBCMinorVersion() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJDBCMinorVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxBinaryLiteralLength() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxBinaryLiteralLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxCatalogNameLength() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxCatalogNameLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxCharLiteralLength() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxCharLiteralLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxColumnNameLength() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxColumnNameLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxColumnsInGroupBy() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxColumnsInGroupBy", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxColumnsInIndex() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxColumnsInIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxColumnsInOrderBy() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxColumnsInOrderBy", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxColumnsInSelect() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxColumnsInSelect", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxColumnsInTable() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxColumnsInTable", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxConnections() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxConnections", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxCursorNameLength() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxCursorNameLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxIndexLength() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxIndexLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxProcedureNameLength() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxProcedureNameLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxRowSize() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxRowSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxSchemaNameLength() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxSchemaNameLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxStatementLength() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxStatementLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxStatements() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxStatements", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxTableNameLength() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxTableNameLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxTablesInSelect() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxTablesInSelect", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::DatabaseMetaData::getMaxUserNameLength() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxUserNameLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::sql::DatabaseMetaData::getNumericFunctions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumericFunctions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getPrimaryKeys(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimaryKeys", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getProcedureColumns(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProcedureColumns", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getProcedures(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProcedures", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getProcedureTerm() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProcedureTerm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::sql::DatabaseMetaData::getResultSetHoldability() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultSetHoldability", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getSchemas() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemas", "()Ljava/sql/ResultSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getSchemaTerm() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemaTerm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getSearchStringEscape() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSearchStringEscape", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getSQLKeywords() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSQLKeywords", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::sql::DatabaseMetaData::getSQLStateType() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSQLStateType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::sql::DatabaseMetaData::getStringFunctions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringFunctions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getSuperTables(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuperTables", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getSuperTypes(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuperTypes", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getSystemFunctions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemFunctions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getTablePrivileges(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTablePrivileges", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getTables(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTables", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljava/sql/ResultSet;");
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
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getTableTypes() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTableTypes", "()Ljava/sql/ResultSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getTimeDateFunctions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeDateFunctions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getTypeInfo() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeInfo", "()Ljava/sql/ResultSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getUDTs(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const std::vector< int32_t>& arg3) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUDTs", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[I)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getURL() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURL", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::DatabaseMetaData::getUserName() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getVersionColumns(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersionColumns", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

bool java::sql::DatabaseMetaData::insertsAreDetected(int32_t arg0) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "insertsAreDetected", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::DatabaseMetaData::isCatalogAtStart() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCatalogAtStart", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::isReadOnly() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReadOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::locatorsUpdateCopy() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "locatorsUpdateCopy", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::nullPlusNonNullIsNull() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "nullPlusNonNullIsNull", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::nullsAreSortedAtEnd() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "nullsAreSortedAtEnd", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::nullsAreSortedAtStart() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "nullsAreSortedAtStart", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::nullsAreSortedHigh() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "nullsAreSortedHigh", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::nullsAreSortedLow() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "nullsAreSortedLow", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::othersDeletesAreVisible(int32_t arg0) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "othersDeletesAreVisible", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::DatabaseMetaData::othersInsertsAreVisible(int32_t arg0) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "othersInsertsAreVisible", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::DatabaseMetaData::othersUpdatesAreVisible(int32_t arg0) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "othersUpdatesAreVisible", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::DatabaseMetaData::ownDeletesAreVisible(int32_t arg0) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "ownDeletesAreVisible", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::DatabaseMetaData::ownInsertsAreVisible(int32_t arg0) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "ownInsertsAreVisible", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::DatabaseMetaData::ownUpdatesAreVisible(int32_t arg0) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "ownUpdatesAreVisible", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::DatabaseMetaData::storesLowerCaseIdentifiers() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "storesLowerCaseIdentifiers", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::storesLowerCaseQuotedIdentifiers() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "storesLowerCaseQuotedIdentifiers", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::storesMixedCaseIdentifiers() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "storesMixedCaseIdentifiers", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::storesMixedCaseQuotedIdentifiers() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "storesMixedCaseQuotedIdentifiers", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::storesUpperCaseIdentifiers() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "storesUpperCaseIdentifiers", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::storesUpperCaseQuotedIdentifiers() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "storesUpperCaseQuotedIdentifiers", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsAlterTableWithAddColumn() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsAlterTableWithAddColumn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsAlterTableWithDropColumn() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsAlterTableWithDropColumn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsANSI92EntryLevelSQL() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsANSI92EntryLevelSQL", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsANSI92FullSQL() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsANSI92FullSQL", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsANSI92IntermediateSQL() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsANSI92IntermediateSQL", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsBatchUpdates() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsBatchUpdates", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsCatalogsInDataManipulation() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsCatalogsInDataManipulation", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsCatalogsInIndexDefinitions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsCatalogsInIndexDefinitions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsCatalogsInPrivilegeDefinitions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsCatalogsInPrivilegeDefinitions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsCatalogsInProcedureCalls() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsCatalogsInProcedureCalls", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsCatalogsInTableDefinitions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsCatalogsInTableDefinitions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsColumnAliasing() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsColumnAliasing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsConvert() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsConvert", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsConvert(int32_t arg0, int32_t arg1) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsConvert", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::sql::DatabaseMetaData::supportsCoreSQLGrammar() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsCoreSQLGrammar", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsCorrelatedSubqueries() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsCorrelatedSubqueries", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsDataDefinitionAndDataManipulationTransactions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsDataDefinitionAndDataManipulationTransactions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsDataManipulationTransactionsOnly() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsDataManipulationTransactionsOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsDifferentTableCorrelationNames() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsDifferentTableCorrelationNames", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsExpressionsInOrderBy() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsExpressionsInOrderBy", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsExtendedSQLGrammar() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsExtendedSQLGrammar", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsFullOuterJoins() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsFullOuterJoins", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsGetGeneratedKeys() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsGetGeneratedKeys", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsGroupBy() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsGroupBy", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsGroupByBeyondSelect() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsGroupByBeyondSelect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsGroupByUnrelated() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsGroupByUnrelated", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsIntegrityEnhancementFacility() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsIntegrityEnhancementFacility", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsLikeEscapeClause() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsLikeEscapeClause", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsLimitedOuterJoins() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsLimitedOuterJoins", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsMinimumSQLGrammar() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsMinimumSQLGrammar", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsMixedCaseIdentifiers() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsMixedCaseIdentifiers", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsMixedCaseQuotedIdentifiers() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsMixedCaseQuotedIdentifiers", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsMultipleOpenResults() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsMultipleOpenResults", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsMultipleResultSets() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsMultipleResultSets", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsMultipleTransactions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsMultipleTransactions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsNamedParameters() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsNamedParameters", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsNonNullableColumns() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsNonNullableColumns", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsOpenCursorsAcrossCommit() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsOpenCursorsAcrossCommit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsOpenCursorsAcrossRollback() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsOpenCursorsAcrossRollback", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsOpenStatementsAcrossCommit() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsOpenStatementsAcrossCommit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsOpenStatementsAcrossRollback() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsOpenStatementsAcrossRollback", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsOrderByUnrelated() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsOrderByUnrelated", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsOuterJoins() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsOuterJoins", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsPositionedDelete() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsPositionedDelete", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsPositionedUpdate() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsPositionedUpdate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsResultSetConcurrency(int32_t arg0, int32_t arg1) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsResultSetConcurrency", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::sql::DatabaseMetaData::supportsResultSetHoldability(int32_t arg0) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsResultSetHoldability", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::DatabaseMetaData::supportsResultSetType(int32_t arg0) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsResultSetType", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::DatabaseMetaData::supportsSavepoints() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsSavepoints", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsSchemasInDataManipulation() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsSchemasInDataManipulation", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsSchemasInIndexDefinitions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsSchemasInIndexDefinitions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsSchemasInPrivilegeDefinitions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsSchemasInPrivilegeDefinitions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsSchemasInProcedureCalls() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsSchemasInProcedureCalls", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsSchemasInTableDefinitions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsSchemasInTableDefinitions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsSelectForUpdate() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsSelectForUpdate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsStatementPooling() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsStatementPooling", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsStoredProcedures() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsStoredProcedures", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsSubqueriesInComparisons() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsSubqueriesInComparisons", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsSubqueriesInExists() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsSubqueriesInExists", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsSubqueriesInIns() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsSubqueriesInIns", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsSubqueriesInQuantifieds() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsSubqueriesInQuantifieds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsTableCorrelationNames() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsTableCorrelationNames", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsTransactionIsolationLevel(int32_t arg0) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsTransactionIsolationLevel", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::DatabaseMetaData::supportsTransactions() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsTransactions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsUnion() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsUnion", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::supportsUnionAll() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsUnionAll", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::updatesAreDetected(int32_t arg0) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "updatesAreDetected", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::DatabaseMetaData::usesLocalFilePerTable() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "usesLocalFilePerTable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::usesLocalFiles() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "usesLocalFiles", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::DatabaseMetaData::autoCommitFailureClosesAllResultSets() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "autoCommitFailureClosesAllResultSets", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getClientInfoProperties() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClientInfoProperties", "()Ljava/sql/ResultSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getFunctionColumns(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFunctionColumns", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getFunctions(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFunctions", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::RowIdLifetime java::sql::DatabaseMetaData::getRowIdLifetime() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRowIdLifetime", "()Ljava/sql/RowIdLifetime;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::RowIdLifetime _ret(ret);
    return _ret;
}

::java::sql::ResultSet java::sql::DatabaseMetaData::getSchemas(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemas", "(Ljava/lang/String;Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

bool java::sql::DatabaseMetaData::supportsStoredFunctionsUsingCallSyntax() const {
    if (!::java::sql::DatabaseMetaData::_class) ::java::sql::DatabaseMetaData::_class = java::fetch_class("java/sql/DatabaseMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsStoredFunctionsUsingCallSyntax", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLWarning::SQLWarning() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLWarning::_class) ::java::sql::SQLWarning::_class = java::fetch_class("java/sql/SQLWarning");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLWarning::SQLWarning(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLWarning::_class) ::java::sql::SQLWarning::_class = java::fetch_class("java/sql/SQLWarning");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLWarning::SQLWarning(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLWarning::_class) ::java::sql::SQLWarning::_class = java::fetch_class("java/sql/SQLWarning");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLWarning::SQLWarning(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLWarning::_class) ::java::sql::SQLWarning::_class = java::fetch_class("java/sql/SQLWarning");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLWarning::SQLWarning(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLWarning::_class) ::java::sql::SQLWarning::_class = java::fetch_class("java/sql/SQLWarning");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLWarning::SQLWarning(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLWarning::_class) ::java::sql::SQLWarning::_class = java::fetch_class("java/sql/SQLWarning");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLWarning::SQLWarning(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLWarning::_class) ::java::sql::SQLWarning::_class = java::fetch_class("java/sql/SQLWarning");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLWarning::SQLWarning(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLWarning::_class) ::java::sql::SQLWarning::_class = java::fetch_class("java/sql/SQLWarning");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::sql::SQLWarning java::sql::SQLWarning::getNextWarning() const {
    if (!::java::sql::SQLWarning::_class) ::java::sql::SQLWarning::_class = java::fetch_class("java/sql/SQLWarning");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextWarning", "()Ljava/sql/SQLWarning;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::SQLWarning _ret(ret);
    return _ret;
}

void java::sql::SQLWarning::setNextWarning(const ::java::sql::SQLWarning& arg0) const {
    if (!::java::sql::SQLWarning::_class) ::java::sql::SQLWarning::_class = java::fetch_class("java/sql/SQLWarning");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNextWarning", "(Ljava/sql/SQLWarning;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::DriverManager::deregisterDriver(const ::java::sql::Driver& arg0){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "deregisterDriver", "(Ljava/sql/Driver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::sql::Connection java::sql::DriverManager::getConnection(const ::java::lang::String& arg0){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getConnection", "(Ljava/lang/String;)Ljava/sql/Connection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::sql::Connection _ret(ret);
    return _ret;
}

::java::sql::Connection java::sql::DriverManager::getConnection(const ::java::lang::String& arg0, const ::java::util::Properties& arg1){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getConnection", "(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::sql::Connection _ret(ret);
    return _ret;
}

::java::sql::Connection java::sql::DriverManager::getConnection(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getConnection", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/Connection;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::sql::Connection _ret(ret);
    return _ret;
}

::java::sql::Driver java::sql::DriverManager::getDriver(const ::java::lang::String& arg0){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDriver", "(Ljava/lang/String;)Ljava/sql/Driver;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::sql::Driver _ret(ret);
    return _ret;
}

::java::util::Enumeration java::sql::DriverManager::getDrivers(){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDrivers", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

int32_t java::sql::DriverManager::getLoginTimeout(){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLoginTimeout", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

::java::io::PrintStream java::sql::DriverManager::getLogStream(){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLogStream", "()Ljava/io/PrintStream;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::io::PrintStream _ret(ret);
    return _ret;
}

::java::io::PrintWriter java::sql::DriverManager::getLogWriter(){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLogWriter", "()Ljava/io/PrintWriter;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::io::PrintWriter _ret(ret);
    return _ret;
}

void java::sql::DriverManager::println(const ::java::lang::String& arg0){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "println", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::sql::DriverManager::registerDriver(const ::java::sql::Driver& arg0){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "registerDriver", "(Ljava/sql/Driver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::sql::DriverManager::setLoginTimeout(int32_t arg0){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLoginTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::sql::DriverManager::setLogStream(const ::java::io::PrintStream& arg0){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLogStream", "(Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::sql::DriverManager::setLogWriter(const ::java::io::PrintWriter& arg0){
    if (!::java::sql::DriverManager::_class) ::java::sql::DriverManager::_class = java::fetch_class("java/sql/DriverManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLogWriter", "(Ljava/io/PrintWriter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::io::InputStream java::sql::Blob::getBinaryStream() const {
    if (!::java::sql::Blob::_class) ::java::sql::Blob::_class = java::fetch_class("java/sql/Blob");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBinaryStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::InputStream java::sql::Blob::getBinaryStream(int64_t arg0, int64_t arg1) const {
    if (!::java::sql::Blob::_class) ::java::sql::Blob::_class = java::fetch_class("java/sql/Blob");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBinaryStream", "(JJ)Ljava/io/InputStream;");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

std::vector< int8_t> java::sql::Blob::getBytes(int64_t arg0, int32_t arg1) const {
    if (!::java::sql::Blob::_class) ::java::sql::Blob::_class = java::fetch_class("java/sql/Blob");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytes", "(JI)[B");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int64_t java::sql::Blob::length() const {
    if (!::java::sql::Blob::_class) ::java::sql::Blob::_class = java::fetch_class("java/sql/Blob");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::sql::Blob::position(const ::java::sql::Blob& arg0, int64_t arg1) const {
    if (!::java::sql::Blob::_class) ::java::sql::Blob::_class = java::fetch_class("java/sql/Blob");
    static jmethodID mid = java::jni->GetMethodID(_class, "position", "(Ljava/sql/Blob;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

int64_t java::sql::Blob::position(const std::vector< int8_t>& arg0, int64_t arg1) const {
    if (!::java::sql::Blob::_class) ::java::sql::Blob::_class = java::fetch_class("java/sql/Blob");
    static jmethodID mid = java::jni->GetMethodID(_class, "position", "([BJ)J");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

::java::io::OutputStream java::sql::Blob::setBinaryStream(int64_t arg0) const {
    if (!::java::sql::Blob::_class) ::java::sql::Blob::_class = java::fetch_class("java/sql/Blob");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBinaryStream", "(J)Ljava/io/OutputStream;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

int32_t java::sql::Blob::setBytes(int64_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::java::sql::Blob::_class) ::java::sql::Blob::_class = java::fetch_class("java/sql/Blob");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBytes", "(J[B)I");
    int64_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::sql::Blob::setBytes(int64_t arg0, const std::vector< int8_t>& arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::sql::Blob::_class) ::java::sql::Blob::_class = java::fetch_class("java/sql/Blob");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBytes", "(J[BII)I");
    int64_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::sql::Blob::truncate(int64_t arg0) const {
    if (!::java::sql::Blob::_class) ::java::sql::Blob::_class = java::fetch_class("java/sql/Blob");
    static jmethodID mid = java::jni->GetMethodID(_class, "truncate", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Blob::free() const {
    if (!::java::sql::Blob::_class) ::java::sql::Blob::_class = java::fetch_class("java/sql/Blob");
    static jmethodID mid = java::jni->GetMethodID(_class, "free", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String java::sql::SQLInput::readString() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::sql::SQLInput::readBoolean() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBoolean", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int8_t java::sql::SQLInput::readByte() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readByte", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

int16_t java::sql::SQLInput::readShort() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readShort", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

int32_t java::sql::SQLInput::readInt() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readInt", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::sql::SQLInput::readLong() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLong", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

float java::sql::SQLInput::readFloat() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFloat", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

double java::sql::SQLInput::readDouble() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readDouble", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

::java::math::BigDecimal java::sql::SQLInput::readBigDecimal() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBigDecimal", "()Ljava/math/BigDecimal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

std::vector< int8_t> java::sql::SQLInput::readBytes() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBytes", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::sql::Date java::sql::SQLInput::readDate() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readDate", "()Ljava/sql/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Date _ret(ret);
    return _ret;
}

::java::sql::Time java::sql::SQLInput::readTime() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readTime", "()Ljava/sql/Time;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Time _ret(ret);
    return _ret;
}

::java::sql::Timestamp java::sql::SQLInput::readTimestamp() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readTimestamp", "()Ljava/sql/Timestamp;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Timestamp _ret(ret);
    return _ret;
}

::java::io::Reader java::sql::SQLInput::readCharacterStream() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readCharacterStream", "()Ljava/io/Reader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::Reader _ret(ret);
    return _ret;
}

::java::io::InputStream java::sql::SQLInput::readAsciiStream() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readAsciiStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::InputStream java::sql::SQLInput::readBinaryStream() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBinaryStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::SQLInput::readObject() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readObject", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::sql::Ref java::sql::SQLInput::readRef() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readRef", "()Ljava/sql/Ref;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Ref _ret(ret);
    return _ret;
}

::java::sql::Blob java::sql::SQLInput::readBlob() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBlob", "()Ljava/sql/Blob;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Blob _ret(ret);
    return _ret;
}

::java::sql::Clob java::sql::SQLInput::readClob() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readClob", "()Ljava/sql/Clob;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Clob _ret(ret);
    return _ret;
}

::java::sql::Array java::sql::SQLInput::readArray() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readArray", "()Ljava/sql/Array;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Array _ret(ret);
    return _ret;
}

bool java::sql::SQLInput::wasNull() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "wasNull", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::net::URL java::sql::SQLInput::readURL() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readURL", "()Ljava/net/URL;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URL _ret(ret);
    return _ret;
}

::java::sql::NClob java::sql::SQLInput::readNClob() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readNClob", "()Ljava/sql/NClob;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::NClob _ret(ret);
    return _ret;
}

::java::lang::String java::sql::SQLInput::readNString() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readNString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::SQLXML java::sql::SQLInput::readSQLXML() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readSQLXML", "()Ljava/sql/SQLXML;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::SQLXML _ret(ret);
    return _ret;
}

::java::sql::RowId java::sql::SQLInput::readRowId() const {
    if (!::java::sql::SQLInput::_class) ::java::sql::SQLInput::_class = java::fetch_class("java/sql/SQLInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readRowId", "()Ljava/sql/RowId;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::RowId _ret(ret);
    return _ret;
}

void java::sql::SQLOutput::writeString(const ::java::lang::String& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeString", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeBoolean(bool arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBoolean", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeByte(int8_t arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeByte", "(B)V");
    int8_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeShort(int16_t arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeShort", "(S)V");
    int16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeInt(int32_t arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeInt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeLong(int64_t arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLong", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeFloat(float arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeFloat", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeDouble(double arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeDouble", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeBigDecimal(const ::java::math::BigDecimal& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBigDecimal", "(Ljava/math/BigDecimal;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeBytes(const std::vector< int8_t>& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBytes", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeDate(const ::java::sql::Date& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeDate", "(Ljava/sql/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeTime(const ::java::sql::Time& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTime", "(Ljava/sql/Time;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeTimestamp(const ::java::sql::Timestamp& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTimestamp", "(Ljava/sql/Timestamp;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeCharacterStream(const ::java::io::Reader& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeCharacterStream", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeAsciiStream(const ::java::io::InputStream& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeAsciiStream", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeBinaryStream(const ::java::io::InputStream& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBinaryStream", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeObject(const ::java::sql::SQLData& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeObject", "(Ljava/sql/SQLData;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeRef(const ::java::sql::Ref& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeRef", "(Ljava/sql/Ref;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeBlob(const ::java::sql::Blob& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBlob", "(Ljava/sql/Blob;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeClob(const ::java::sql::Clob& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeClob", "(Ljava/sql/Clob;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeStruct(const ::java::sql::Struct& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeStruct", "(Ljava/sql/Struct;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeArray(const ::java::sql::Array& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeArray", "(Ljava/sql/Array;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeURL(const ::java::net::URL& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeURL", "(Ljava/net/URL;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeNString(const ::java::lang::String& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeNString", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeNClob(const ::java::sql::NClob& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeNClob", "(Ljava/sql/NClob;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeRowId(const ::java::sql::RowId& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeRowId", "(Ljava/sql/RowId;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::SQLOutput::writeSQLXML(const ::java::sql::SQLXML& arg0) const {
    if (!::java::sql::SQLOutput::_class) ::java::sql::SQLOutput::_class = java::fetch_class("java/sql/SQLOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeSQLXML", "(Ljava/sql/SQLXML;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::sql::ClientInfoStatus> java::sql::ClientInfoStatus::values(){
    if (!::java::sql::ClientInfoStatus::_class) ::java::sql::ClientInfoStatus::_class = java::fetch_class("java/sql/ClientInfoStatus");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljava/sql/ClientInfoStatus;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::sql::ClientInfoStatus> _ret(rets, ::java::sql::ClientInfoStatus((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::sql::ClientInfoStatus retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::sql::ClientInfoStatus java::sql::ClientInfoStatus::valueOf(const ::java::lang::String& arg0){
    if (!::java::sql::ClientInfoStatus::_class) ::java::sql::ClientInfoStatus::_class = java::fetch_class("java/sql/ClientInfoStatus");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/sql/ClientInfoStatus;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::sql::ClientInfoStatus _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientException::SQLTransientException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLTransientException::_class) ::java::sql::SQLTransientException::_class = java::fetch_class("java/sql/SQLTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientException::SQLTransientException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLTransientException::_class) ::java::sql::SQLTransientException::_class = java::fetch_class("java/sql/SQLTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientException::SQLTransientException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLTransientException::_class) ::java::sql::SQLTransientException::_class = java::fetch_class("java/sql/SQLTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientException::SQLTransientException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLTransientException::_class) ::java::sql::SQLTransientException::_class = java::fetch_class("java/sql/SQLTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientException::SQLTransientException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLTransientException::_class) ::java::sql::SQLTransientException::_class = java::fetch_class("java/sql/SQLTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientException::SQLTransientException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLTransientException::_class) ::java::sql::SQLTransientException::_class = java::fetch_class("java/sql/SQLTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientException::SQLTransientException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLTransientException::_class) ::java::sql::SQLTransientException::_class = java::fetch_class("java/sql/SQLTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLTransientException::SQLTransientException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLTransientException::_class) ::java::sql::SQLTransientException::_class = java::fetch_class("java/sql/SQLTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

std::vector< ::java::sql::RowIdLifetime> java::sql::RowIdLifetime::values(){
    if (!::java::sql::RowIdLifetime::_class) ::java::sql::RowIdLifetime::_class = java::fetch_class("java/sql/RowIdLifetime");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljava/sql/RowIdLifetime;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::sql::RowIdLifetime> _ret(rets, ::java::sql::RowIdLifetime((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::sql::RowIdLifetime retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::sql::RowIdLifetime java::sql::RowIdLifetime::valueOf(const ::java::lang::String& arg0){
    if (!::java::sql::RowIdLifetime::_class) ::java::sql::RowIdLifetime::_class = java::fetch_class("java/sql/RowIdLifetime");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/sql/RowIdLifetime;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::sql::RowIdLifetime _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLDataException::SQLDataException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLDataException::_class) ::java::sql::SQLDataException::_class = java::fetch_class("java/sql/SQLDataException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLDataException::SQLDataException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLDataException::_class) ::java::sql::SQLDataException::_class = java::fetch_class("java/sql/SQLDataException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLDataException::SQLDataException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLDataException::_class) ::java::sql::SQLDataException::_class = java::fetch_class("java/sql/SQLDataException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLDataException::SQLDataException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLDataException::_class) ::java::sql::SQLDataException::_class = java::fetch_class("java/sql/SQLDataException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLDataException::SQLDataException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLDataException::_class) ::java::sql::SQLDataException::_class = java::fetch_class("java/sql/SQLDataException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLDataException::SQLDataException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLDataException::_class) ::java::sql::SQLDataException::_class = java::fetch_class("java/sql/SQLDataException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLDataException::SQLDataException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLDataException::_class) ::java::sql::SQLDataException::_class = java::fetch_class("java/sql/SQLDataException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLDataException::SQLDataException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLDataException::_class) ::java::sql::SQLDataException::_class = java::fetch_class("java/sql/SQLDataException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::DriverPropertyInfo::DriverPropertyInfo(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::sql::DriverPropertyInfo::_class) ::java::sql::DriverPropertyInfo::_class = java::fetch_class("java/sql/DriverPropertyInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::sql::SQLXML::free() const {
    if (!::java::sql::SQLXML::_class) ::java::sql::SQLXML::_class = java::fetch_class("java/sql/SQLXML");
    static jmethodID mid = java::jni->GetMethodID(_class, "free", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::io::InputStream java::sql::SQLXML::getBinaryStream() const {
    if (!::java::sql::SQLXML::_class) ::java::sql::SQLXML::_class = java::fetch_class("java/sql/SQLXML");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBinaryStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::OutputStream java::sql::SQLXML::setBinaryStream() const {
    if (!::java::sql::SQLXML::_class) ::java::sql::SQLXML::_class = java::fetch_class("java/sql/SQLXML");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBinaryStream", "()Ljava/io/OutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

::java::io::Reader java::sql::SQLXML::getCharacterStream() const {
    if (!::java::sql::SQLXML::_class) ::java::sql::SQLXML::_class = java::fetch_class("java/sql/SQLXML");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharacterStream", "()Ljava/io/Reader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::Reader _ret(ret);
    return _ret;
}

::java::io::Writer java::sql::SQLXML::setCharacterStream() const {
    if (!::java::sql::SQLXML::_class) ::java::sql::SQLXML::_class = java::fetch_class("java/sql/SQLXML");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "()Ljava/io/Writer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::Writer _ret(ret);
    return _ret;
}

::java::lang::String java::sql::SQLXML::getString() const {
    if (!::java::sql::SQLXML::_class) ::java::sql::SQLXML::_class = java::fetch_class("java/sql/SQLXML");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::sql::SQLXML::setString(const ::java::lang::String& arg0) const {
    if (!::java::sql::SQLXML::_class) ::java::sql::SQLXML::_class = java::fetch_class("java/sql/SQLXML");
    static jmethodID mid = java::jni->GetMethodID(_class, "setString", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::xml::transform::Source java::sql::SQLXML::getSource(const ::java::lang::Class& arg0) const {
    if (!::java::sql::SQLXML::_class) ::java::sql::SQLXML::_class = java::fetch_class("java/sql/SQLXML");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "(Ljava/lang/Class;)Ljavax/xml/transform/Source;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::transform::Source _ret(ret);
    return _ret;
}

::javax::xml::transform::Result java::sql::SQLXML::setResult(const ::java::lang::Class& arg0) const {
    if (!::java::sql::SQLXML::_class) ::java::sql::SQLXML::_class = java::fetch_class("java/sql/SQLXML");
    static jmethodID mid = java::jni->GetMethodID(_class, "setResult", "(Ljava/lang/Class;)Ljavax/xml/transform/Result;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::xml::transform::Result _ret(ret);
    return _ret;
}

::java::lang::String java::sql::SQLData::getSQLTypeName() const {
    if (!::java::sql::SQLData::_class) ::java::sql::SQLData::_class = java::fetch_class("java/sql/SQLData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSQLTypeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::sql::SQLData::readSQL(const ::java::sql::SQLInput& arg0, const ::java::lang::String& arg1) const {
    if (!::java::sql::SQLData::_class) ::java::sql::SQLData::_class = java::fetch_class("java/sql/SQLData");
    static jmethodID mid = java::jni->GetMethodID(_class, "readSQL", "(Ljava/sql/SQLInput;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::SQLData::writeSQL(const ::java::sql::SQLOutput& arg0) const {
    if (!::java::sql::SQLData::_class) ::java::sql::SQLData::_class = java::fetch_class("java/sql/SQLData");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeSQL", "(Ljava/sql/SQLOutput;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::InputStream java::sql::Clob::getAsciiStream() const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAsciiStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::Reader java::sql::Clob::getCharacterStream() const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharacterStream", "()Ljava/io/Reader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::Reader _ret(ret);
    return _ret;
}

::java::lang::String java::sql::Clob::getSubString(int64_t arg0, int32_t arg1) const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubString", "(JI)Ljava/lang/String;");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::sql::Clob::length() const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::sql::Clob::position(const ::java::sql::Clob& arg0, int64_t arg1) const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "position", "(Ljava/sql/Clob;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

int64_t java::sql::Clob::position(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "position", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

::java::io::OutputStream java::sql::Clob::setAsciiStream(int64_t arg0) const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAsciiStream", "(J)Ljava/io/OutputStream;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

::java::io::Writer java::sql::Clob::setCharacterStream(int64_t arg0) const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(J)Ljava/io/Writer;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Writer _ret(ret);
    return _ret;
}

int32_t java::sql::Clob::setString(int64_t arg0, const ::java::lang::String& arg1) const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "setString", "(JLjava/lang/String;)I");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::sql::Clob::setString(int64_t arg0, const ::java::lang::String& arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "setString", "(JLjava/lang/String;II)I");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::sql::Clob::truncate(int64_t arg0) const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "truncate", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Clob::free() const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "free", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::io::Reader java::sql::Clob::getCharacterStream(int64_t arg0, int64_t arg1) const {
    if (!::java::sql::Clob::_class) ::java::sql::Clob::_class = java::fetch_class("java/sql/Clob");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharacterStream", "(JJ)Ljava/io/Reader;");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::Reader _ret(ret);
    return _ret;
}

void java::sql::PreparedStatement::addBatch() const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "addBatch", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::PreparedStatement::clearParameters() const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearParameters", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::sql::PreparedStatement::execute() const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::sql::ResultSet java::sql::PreparedStatement::executeQuery() const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeQuery", "()Ljava/sql/ResultSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

int32_t java::sql::PreparedStatement::executeUpdate() const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeUpdate", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::sql::ResultSetMetaData java::sql::PreparedStatement::getMetaData() const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetaData", "()Ljava/sql/ResultSetMetaData;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSetMetaData _ret(ret);
    return _ret;
}

::java::sql::ParameterMetaData java::sql::PreparedStatement::getParameterMetaData() const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterMetaData", "()Ljava/sql/ParameterMetaData;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ParameterMetaData _ret(ret);
    return _ret;
}

void java::sql::PreparedStatement::setArray(int32_t arg0, const ::java::sql::Array& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setArray", "(ILjava/sql/Array;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setAsciiStream(int32_t arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAsciiStream", "(ILjava/io/InputStream;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setBigDecimal(int32_t arg0, const ::java::math::BigDecimal& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBigDecimal", "(ILjava/math/BigDecimal;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setBinaryStream(int32_t arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBinaryStream", "(ILjava/io/InputStream;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setBlob(int32_t arg0, const ::java::sql::Blob& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlob", "(ILjava/sql/Blob;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setBoolean(int32_t arg0, bool arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoolean", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setByte(int32_t arg0, int8_t arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setByte", "(IB)V");
    int32_t _arg0 = arg0;
    int8_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setBytes(int32_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBytes", "(I[B)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setCharacterStream(int32_t arg0, const ::java::io::Reader& arg1, int32_t arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(ILjava/io/Reader;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setClob(int32_t arg0, const ::java::sql::Clob& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClob", "(ILjava/sql/Clob;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setDate(int32_t arg0, const ::java::sql::Date& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(ILjava/sql/Date;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setDate(int32_t arg0, const ::java::sql::Date& arg1, const ::java::util::Calendar& arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(ILjava/sql/Date;Ljava/util/Calendar;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setDouble(int32_t arg0, double arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDouble", "(ID)V");
    int32_t _arg0 = arg0;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setFloat(int32_t arg0, float arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFloat", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setInt(int32_t arg0, int32_t arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInt", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setLong(int32_t arg0, int64_t arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLong", "(IJ)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setNull(int32_t arg0, int32_t arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNull", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setNull(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNull", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setObject(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setObject(int32_t arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(ILjava/lang/Object;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setObject(int32_t arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(ILjava/lang/Object;II)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::sql::PreparedStatement::setRef(int32_t arg0, const ::java::sql::Ref& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRef", "(ILjava/sql/Ref;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setShort(int32_t arg0, int16_t arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShort", "(IS)V");
    int32_t _arg0 = arg0;
    int16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setString(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setString", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setTime(int32_t arg0, const ::java::sql::Time& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(ILjava/sql/Time;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setTime(int32_t arg0, const ::java::sql::Time& arg1, const ::java::util::Calendar& arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(ILjava/sql/Time;Ljava/util/Calendar;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setTimestamp(int32_t arg0, const ::java::sql::Timestamp& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimestamp", "(ILjava/sql/Timestamp;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setTimestamp(int32_t arg0, const ::java::sql::Timestamp& arg1, const ::java::util::Calendar& arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimestamp", "(ILjava/sql/Timestamp;Ljava/util/Calendar;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setUnicodeStream(int32_t arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUnicodeStream", "(ILjava/io/InputStream;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setURL(int32_t arg0, const ::java::net::URL& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setURL", "(ILjava/net/URL;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setRowId(int32_t arg0, const ::java::sql::RowId& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRowId", "(ILjava/sql/RowId;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setNString(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNString", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setNCharacterStream(int32_t arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNCharacterStream", "(ILjava/io/Reader;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setNClob(int32_t arg0, const ::java::sql::NClob& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNClob", "(ILjava/sql/NClob;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setClob(int32_t arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClob", "(ILjava/io/Reader;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setBlob(int32_t arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlob", "(ILjava/io/InputStream;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setNClob(int32_t arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNClob", "(ILjava/io/Reader;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setSQLXML(int32_t arg0, const ::java::sql::SQLXML& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSQLXML", "(ILjava/sql/SQLXML;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setAsciiStream(int32_t arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAsciiStream", "(ILjava/io/InputStream;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setBinaryStream(int32_t arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBinaryStream", "(ILjava/io/InputStream;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setCharacterStream(int32_t arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(ILjava/io/Reader;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::PreparedStatement::setAsciiStream(int32_t arg0, const ::java::io::InputStream& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAsciiStream", "(ILjava/io/InputStream;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setBinaryStream(int32_t arg0, const ::java::io::InputStream& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBinaryStream", "(ILjava/io/InputStream;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setCharacterStream(int32_t arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(ILjava/io/Reader;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setNCharacterStream(int32_t arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNCharacterStream", "(ILjava/io/Reader;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setClob(int32_t arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClob", "(ILjava/io/Reader;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setBlob(int32_t arg0, const ::java::io::InputStream& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlob", "(ILjava/io/InputStream;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::PreparedStatement::setNClob(int32_t arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::PreparedStatement::_class) ::java::sql::PreparedStatement::_class = java::fetch_class("java/sql/PreparedStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNClob", "(ILjava/io/Reader;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLFeatureNotSupportedException::SQLFeatureNotSupportedException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLFeatureNotSupportedException::_class) ::java::sql::SQLFeatureNotSupportedException::_class = java::fetch_class("java/sql/SQLFeatureNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLFeatureNotSupportedException::_class) ::java::sql::SQLFeatureNotSupportedException::_class = java::fetch_class("java/sql/SQLFeatureNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLFeatureNotSupportedException::_class) ::java::sql::SQLFeatureNotSupportedException::_class = java::fetch_class("java/sql/SQLFeatureNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLFeatureNotSupportedException::_class) ::java::sql::SQLFeatureNotSupportedException::_class = java::fetch_class("java/sql/SQLFeatureNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLFeatureNotSupportedException::_class) ::java::sql::SQLFeatureNotSupportedException::_class = java::fetch_class("java/sql/SQLFeatureNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLFeatureNotSupportedException::_class) ::java::sql::SQLFeatureNotSupportedException::_class = java::fetch_class("java/sql/SQLFeatureNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLFeatureNotSupportedException::_class) ::java::sql::SQLFeatureNotSupportedException::_class = java::fetch_class("java/sql/SQLFeatureNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLFeatureNotSupportedException::_class) ::java::sql::SQLFeatureNotSupportedException::_class = java::fetch_class("java/sql/SQLFeatureNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

void java::sql::Statement::addBatch(const ::java::lang::String& arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "addBatch", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Statement::cancel() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::Statement::clearBatch() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearBatch", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::Statement::clearWarnings() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearWarnings", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::Statement::close() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::sql::Statement::execute(const ::java::lang::String& arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::Statement::execute(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Ljava/lang/String;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::sql::Statement::execute(const ::java::lang::String& arg0, const std::vector< int32_t>& arg1) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Ljava/lang/String;[I)Z");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::sql::Statement::execute(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Ljava/lang/String;[Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

std::vector< int32_t> java::sql::Statement::executeBatch() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeBatch", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::sql::ResultSet java::sql::Statement::executeQuery(const ::java::lang::String& arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeQuery", "(Ljava/lang/String;)Ljava/sql/ResultSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

int32_t java::sql::Statement::executeUpdate(const ::java::lang::String& arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeUpdate", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::sql::Statement::executeUpdate(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeUpdate", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::sql::Statement::executeUpdate(const ::java::lang::String& arg0, const std::vector< int32_t>& arg1) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeUpdate", "(Ljava/lang/String;[I)I");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::sql::Statement::executeUpdate(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeUpdate", "(Ljava/lang/String;[Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::sql::Connection java::sql::Statement::getConnection() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnection", "()Ljava/sql/Connection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Connection _ret(ret);
    return _ret;
}

int32_t java::sql::Statement::getFetchDirection() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFetchDirection", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::Statement::getFetchSize() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFetchSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::sql::ResultSet java::sql::Statement::getGeneratedKeys() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGeneratedKeys", "()Ljava/sql/ResultSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

int32_t java::sql::Statement::getMaxFieldSize() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxFieldSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::Statement::getMaxRows() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxRows", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::sql::Statement::getMoreResults() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMoreResults", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::Statement::getMoreResults(int32_t arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMoreResults", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::sql::Statement::getQueryTimeout() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueryTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::sql::ResultSet java::sql::Statement::getResultSet() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultSet", "()Ljava/sql/ResultSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

int32_t java::sql::Statement::getResultSetConcurrency() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultSetConcurrency", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::Statement::getResultSetHoldability() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultSetHoldability", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::Statement::getResultSetType() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResultSetType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::Statement::getUpdateCount() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUpdateCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::sql::SQLWarning java::sql::Statement::getWarnings() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWarnings", "()Ljava/sql/SQLWarning;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::SQLWarning _ret(ret);
    return _ret;
}

void java::sql::Statement::setCursorName(const ::java::lang::String& arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCursorName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Statement::setEscapeProcessing(bool arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEscapeProcessing", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Statement::setFetchDirection(int32_t arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFetchDirection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Statement::setFetchSize(int32_t arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFetchSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Statement::setMaxFieldSize(int32_t arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxFieldSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Statement::setMaxRows(int32_t arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxRows", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Statement::setQueryTimeout(int32_t arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueryTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::sql::Statement::isClosed() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClosed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::sql::Statement::setPoolable(bool arg0) const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPoolable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::sql::Statement::isPoolable() const {
    if (!::java::sql::Statement::_class) ::java::sql::Statement::_class = java::fetch_class("java/sql/Statement");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPoolable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::sql::ParameterMetaData::getParameterClassName(int32_t arg0) const {
    if (!::java::sql::ParameterMetaData::_class) ::java::sql::ParameterMetaData::_class = java::fetch_class("java/sql/ParameterMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterClassName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::sql::ParameterMetaData::getParameterCount() const {
    if (!::java::sql::ParameterMetaData::_class) ::java::sql::ParameterMetaData::_class = java::fetch_class("java/sql/ParameterMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::ParameterMetaData::getParameterMode(int32_t arg0) const {
    if (!::java::sql::ParameterMetaData::_class) ::java::sql::ParameterMetaData::_class = java::fetch_class("java/sql/ParameterMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterMode", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::sql::ParameterMetaData::getParameterType(int32_t arg0) const {
    if (!::java::sql::ParameterMetaData::_class) ::java::sql::ParameterMetaData::_class = java::fetch_class("java/sql/ParameterMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::sql::ParameterMetaData::getParameterTypeName(int32_t arg0) const {
    if (!::java::sql::ParameterMetaData::_class) ::java::sql::ParameterMetaData::_class = java::fetch_class("java/sql/ParameterMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterTypeName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::sql::ParameterMetaData::getPrecision(int32_t arg0) const {
    if (!::java::sql::ParameterMetaData::_class) ::java::sql::ParameterMetaData::_class = java::fetch_class("java/sql/ParameterMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrecision", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::sql::ParameterMetaData::getScale(int32_t arg0) const {
    if (!::java::sql::ParameterMetaData::_class) ::java::sql::ParameterMetaData::_class = java::fetch_class("java/sql/ParameterMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScale", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::sql::ParameterMetaData::isNullable(int32_t arg0) const {
    if (!::java::sql::ParameterMetaData::_class) ::java::sql::ParameterMetaData::_class = java::fetch_class("java/sql/ParameterMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNullable", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::sql::ParameterMetaData::isSigned(int32_t arg0) const {
    if (!::java::sql::ParameterMetaData::_class) ::java::sql::ParameterMetaData::_class = java::fetch_class("java/sql/ParameterMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSigned", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientException::SQLNonTransientException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLNonTransientException::_class) ::java::sql::SQLNonTransientException::_class = java::fetch_class("java/sql/SQLNonTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientException::SQLNonTransientException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLNonTransientException::_class) ::java::sql::SQLNonTransientException::_class = java::fetch_class("java/sql/SQLNonTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientException::SQLNonTransientException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLNonTransientException::_class) ::java::sql::SQLNonTransientException::_class = java::fetch_class("java/sql/SQLNonTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientException::SQLNonTransientException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLNonTransientException::_class) ::java::sql::SQLNonTransientException::_class = java::fetch_class("java/sql/SQLNonTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientException::SQLNonTransientException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLNonTransientException::_class) ::java::sql::SQLNonTransientException::_class = java::fetch_class("java/sql/SQLNonTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientException::SQLNonTransientException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLNonTransientException::_class) ::java::sql::SQLNonTransientException::_class = java::fetch_class("java/sql/SQLNonTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientException::SQLNonTransientException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLNonTransientException::_class) ::java::sql::SQLNonTransientException::_class = java::fetch_class("java/sql/SQLNonTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientException::SQLNonTransientException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLNonTransientException::_class) ::java::sql::SQLNonTransientException::_class = java::fetch_class("java/sql/SQLNonTransientException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::Date::Date(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Date((jobject)0) {
    if (!::java::sql::Date::_class) ::java::sql::Date::_class = java::fetch_class("java/sql/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::Date::Date(int64_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Date((jobject)0) {
    if (!::java::sql::Date::_class) ::java::sql::Date::_class = java::fetch_class("java/sql/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(J)V");
    int64_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::sql::Date::getHours() const {
    if (!::java::sql::Date::_class) ::java::sql::Date::_class = java::fetch_class("java/sql/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHours", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::Date::getMinutes() const {
    if (!::java::sql::Date::_class) ::java::sql::Date::_class = java::fetch_class("java/sql/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinutes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::Date::getSeconds() const {
    if (!::java::sql::Date::_class) ::java::sql::Date::_class = java::fetch_class("java/sql/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSeconds", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::sql::Date::setHours(int32_t arg0) const {
    if (!::java::sql::Date::_class) ::java::sql::Date::_class = java::fetch_class("java/sql/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHours", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Date::setMinutes(int32_t arg0) const {
    if (!::java::sql::Date::_class) ::java::sql::Date::_class = java::fetch_class("java/sql/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinutes", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Date::setSeconds(int32_t arg0) const {
    if (!::java::sql::Date::_class) ::java::sql::Date::_class = java::fetch_class("java/sql/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSeconds", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Date::setTime(int64_t arg0) const {
    if (!::java::sql::Date::_class) ::java::sql::Date::_class = java::fetch_class("java/sql/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::sql::Date::toString() const {
    if (!::java::sql::Date::_class) ::java::sql::Date::_class = java::fetch_class("java/sql/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::Date java::sql::Date::valueOf(const ::java::lang::String& arg0){
    if (!::java::sql::Date::_class) ::java::sql::Date::_class = java::fetch_class("java/sql/Date");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/sql/Date;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::sql::Date _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientConnectionException::SQLNonTransientConnectionException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLNonTransientConnectionException::_class) ::java::sql::SQLNonTransientConnectionException::_class = java::fetch_class("java/sql/SQLNonTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientConnectionException::SQLNonTransientConnectionException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLNonTransientConnectionException::_class) ::java::sql::SQLNonTransientConnectionException::_class = java::fetch_class("java/sql/SQLNonTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientConnectionException::SQLNonTransientConnectionException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLNonTransientConnectionException::_class) ::java::sql::SQLNonTransientConnectionException::_class = java::fetch_class("java/sql/SQLNonTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientConnectionException::SQLNonTransientConnectionException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLNonTransientConnectionException::_class) ::java::sql::SQLNonTransientConnectionException::_class = java::fetch_class("java/sql/SQLNonTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientConnectionException::SQLNonTransientConnectionException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLNonTransientConnectionException::_class) ::java::sql::SQLNonTransientConnectionException::_class = java::fetch_class("java/sql/SQLNonTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientConnectionException::SQLNonTransientConnectionException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLNonTransientConnectionException::_class) ::java::sql::SQLNonTransientConnectionException::_class = java::fetch_class("java/sql/SQLNonTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientConnectionException::SQLNonTransientConnectionException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLNonTransientConnectionException::_class) ::java::sql::SQLNonTransientConnectionException::_class = java::fetch_class("java/sql/SQLNonTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLNonTransientConnectionException::SQLNonTransientConnectionException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0), ::java::sql::SQLNonTransientException((jobject)0) {
    if (!::java::sql::SQLNonTransientConnectionException::_class) ::java::sql::SQLNonTransientConnectionException::_class = java::fetch_class("java/sql/SQLNonTransientConnectionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::String java::sql::ResultSetMetaData::getCatalogName(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCatalogName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::ResultSetMetaData::getColumnClassName(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnClassName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::sql::ResultSetMetaData::getColumnCount() const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::ResultSetMetaData::getColumnDisplaySize(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnDisplaySize", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::sql::ResultSetMetaData::getColumnLabel(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnLabel", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::ResultSetMetaData::getColumnName(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::sql::ResultSetMetaData::getColumnType(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::sql::ResultSetMetaData::getColumnTypeName(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnTypeName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::sql::ResultSetMetaData::getPrecision(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrecision", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::sql::ResultSetMetaData::getScale(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScale", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::sql::ResultSetMetaData::getSchemaName(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemaName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::ResultSetMetaData::getTableName(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTableName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::sql::ResultSetMetaData::isAutoIncrement(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAutoIncrement", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::ResultSetMetaData::isCaseSensitive(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCaseSensitive", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::ResultSetMetaData::isCurrency(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCurrency", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::ResultSetMetaData::isDefinitelyWritable(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDefinitelyWritable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::sql::ResultSetMetaData::isNullable(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNullable", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::sql::ResultSetMetaData::isReadOnly(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReadOnly", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::ResultSetMetaData::isSearchable(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSearchable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::ResultSetMetaData::isSigned(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSigned", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::ResultSetMetaData::isWritable(int32_t arg0) const {
    if (!::java::sql::ResultSetMetaData::_class) ::java::sql::ResultSetMetaData::_class = java::fetch_class("java/sql/ResultSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWritable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::sql::Array java::sql::CallableStatement::getArray(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArray", "(I)Ljava/sql/Array;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Array _ret(ret);
    return _ret;
}

::java::sql::Array java::sql::CallableStatement::getArray(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArray", "(Ljava/lang/String;)Ljava/sql/Array;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Array _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::sql::CallableStatement::getBigDecimal(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBigDecimal", "(I)Ljava/math/BigDecimal;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::sql::CallableStatement::getBigDecimal(int32_t arg0, int32_t arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBigDecimal", "(II)Ljava/math/BigDecimal;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::sql::CallableStatement::getBigDecimal(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBigDecimal", "(Ljava/lang/String;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::sql::Blob java::sql::CallableStatement::getBlob(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlob", "(I)Ljava/sql/Blob;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Blob _ret(ret);
    return _ret;
}

::java::sql::Blob java::sql::CallableStatement::getBlob(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlob", "(Ljava/lang/String;)Ljava/sql/Blob;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Blob _ret(ret);
    return _ret;
}

bool java::sql::CallableStatement::getBoolean(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::CallableStatement::getBoolean(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int8_t java::sql::CallableStatement::getByte(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByte", "(I)B");
    int32_t _arg0 = arg0;
    return java::jni->CallByteMethod(obj, mid, _arg0);
}

int8_t java::sql::CallableStatement::getByte(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByte", "(Ljava/lang/String;)B");
    jobject _arg0 = arg0.obj;
    return java::jni->CallByteMethod(obj, mid, _arg0);
}

std::vector< int8_t> java::sql::CallableStatement::getBytes(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytes", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> java::sql::CallableStatement::getBytes(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytes", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::sql::Clob java::sql::CallableStatement::getClob(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClob", "(I)Ljava/sql/Clob;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Clob _ret(ret);
    return _ret;
}

::java::sql::Clob java::sql::CallableStatement::getClob(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClob", "(Ljava/lang/String;)Ljava/sql/Clob;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Clob _ret(ret);
    return _ret;
}

::java::sql::Date java::sql::CallableStatement::getDate(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "(I)Ljava/sql/Date;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Date _ret(ret);
    return _ret;
}

::java::sql::Date java::sql::CallableStatement::getDate(int32_t arg0, const ::java::util::Calendar& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "(ILjava/util/Calendar;)Ljava/sql/Date;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Date _ret(ret);
    return _ret;
}

::java::sql::Date java::sql::CallableStatement::getDate(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "(Ljava/lang/String;)Ljava/sql/Date;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Date _ret(ret);
    return _ret;
}

::java::sql::Date java::sql::CallableStatement::getDate(const ::java::lang::String& arg0, const ::java::util::Calendar& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Date;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Date _ret(ret);
    return _ret;
}

double java::sql::CallableStatement::getDouble(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

double java::sql::CallableStatement::getDouble(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(Ljava/lang/String;)D");
    jobject _arg0 = arg0.obj;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

float java::sql::CallableStatement::getFloat(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float java::sql::CallableStatement::getFloat(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(Ljava/lang/String;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

int32_t java::sql::CallableStatement::getInt(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::sql::CallableStatement::getInt(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t java::sql::CallableStatement::getLong(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::sql::CallableStatement::getLong(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::java::lang::Object java::sql::CallableStatement::getObject(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::CallableStatement::getObject(int32_t arg0, const ::java::util::Map& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(ILjava/util/Map;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::CallableStatement::getObject(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::CallableStatement::getObject(const ::java::lang::String& arg0, const ::java::util::Map& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::sql::Ref java::sql::CallableStatement::getRef(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRef", "(I)Ljava/sql/Ref;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Ref _ret(ret);
    return _ret;
}

::java::sql::Ref java::sql::CallableStatement::getRef(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRef", "(Ljava/lang/String;)Ljava/sql/Ref;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Ref _ret(ret);
    return _ret;
}

int16_t java::sql::CallableStatement::getShort(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int16_t java::sql::CallableStatement::getShort(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(Ljava/lang/String;)S");
    jobject _arg0 = arg0.obj;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

::java::lang::String java::sql::CallableStatement::getString(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::CallableStatement::getString(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::Time java::sql::CallableStatement::getTime(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "(I)Ljava/sql/Time;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Time _ret(ret);
    return _ret;
}

::java::sql::Time java::sql::CallableStatement::getTime(int32_t arg0, const ::java::util::Calendar& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "(ILjava/util/Calendar;)Ljava/sql/Time;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Time _ret(ret);
    return _ret;
}

::java::sql::Time java::sql::CallableStatement::getTime(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "(Ljava/lang/String;)Ljava/sql/Time;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Time _ret(ret);
    return _ret;
}

::java::sql::Time java::sql::CallableStatement::getTime(const ::java::lang::String& arg0, const ::java::util::Calendar& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Time;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Time _ret(ret);
    return _ret;
}

::java::sql::Timestamp java::sql::CallableStatement::getTimestamp(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestamp", "(I)Ljava/sql/Timestamp;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Timestamp _ret(ret);
    return _ret;
}

::java::sql::Timestamp java::sql::CallableStatement::getTimestamp(int32_t arg0, const ::java::util::Calendar& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestamp", "(ILjava/util/Calendar;)Ljava/sql/Timestamp;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Timestamp _ret(ret);
    return _ret;
}

::java::sql::Timestamp java::sql::CallableStatement::getTimestamp(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestamp", "(Ljava/lang/String;)Ljava/sql/Timestamp;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Timestamp _ret(ret);
    return _ret;
}

::java::sql::Timestamp java::sql::CallableStatement::getTimestamp(const ::java::lang::String& arg0, const ::java::util::Calendar& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestamp", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Timestamp;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Timestamp _ret(ret);
    return _ret;
}

::java::net::URL java::sql::CallableStatement::getURL(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURL", "(I)Ljava/net/URL;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::URL _ret(ret);
    return _ret;
}

::java::net::URL java::sql::CallableStatement::getURL(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURL", "(Ljava/lang/String;)Ljava/net/URL;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::URL _ret(ret);
    return _ret;
}

void java::sql::CallableStatement::registerOutParameter(int32_t arg0, int32_t arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerOutParameter", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::registerOutParameter(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerOutParameter", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::registerOutParameter(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerOutParameter", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::registerOutParameter(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerOutParameter", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::registerOutParameter(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerOutParameter", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::registerOutParameter(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerOutParameter", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setAsciiStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setBigDecimal(const ::java::lang::String& arg0, const ::java::math::BigDecimal& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBigDecimal", "(Ljava/lang/String;Ljava/math/BigDecimal;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setBinaryStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoolean", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setByte(const ::java::lang::String& arg0, int8_t arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setByte", "(Ljava/lang/String;B)V");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setBytes(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBytes", "(Ljava/lang/String;[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int32_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setDate(const ::java::lang::String& arg0, const ::java::sql::Date& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(Ljava/lang/String;Ljava/sql/Date;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setDate(const ::java::lang::String& arg0, const ::java::sql::Date& arg1, const ::java::util::Calendar& arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(Ljava/lang/String;Ljava/sql/Date;Ljava/util/Calendar;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDouble", "(Ljava/lang/String;D)V");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setFloat(const ::java::lang::String& arg0, float arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFloat", "(Ljava/lang/String;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInt", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLong", "(Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setNull(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNull", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setNull(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNull", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setObject(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setObject(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(Ljava/lang/String;Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setObject(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(Ljava/lang/String;Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::sql::CallableStatement::setShort(const ::java::lang::String& arg0, int16_t arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShort", "(Ljava/lang/String;S)V");
    jobject _arg0 = arg0.obj;
    int16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setString", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setTime(const ::java::lang::String& arg0, const ::java::sql::Time& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(Ljava/lang/String;Ljava/sql/Time;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setTime(const ::java::lang::String& arg0, const ::java::sql::Time& arg1, const ::java::util::Calendar& arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(Ljava/lang/String;Ljava/sql/Time;Ljava/util/Calendar;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setTimestamp(const ::java::lang::String& arg0, const ::java::sql::Timestamp& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setTimestamp(const ::java::lang::String& arg0, const ::java::sql::Timestamp& arg1, const ::java::util::Calendar& arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;Ljava/util/Calendar;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setURL(const ::java::lang::String& arg0, const ::java::net::URL& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setURL", "(Ljava/lang/String;Ljava/net/URL;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::sql::CallableStatement::wasNull() const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "wasNull", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::sql::RowId java::sql::CallableStatement::getRowId(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRowId", "(I)Ljava/sql/RowId;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::RowId _ret(ret);
    return _ret;
}

::java::sql::RowId java::sql::CallableStatement::getRowId(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRowId", "(Ljava/lang/String;)Ljava/sql/RowId;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::RowId _ret(ret);
    return _ret;
}

void java::sql::CallableStatement::setRowId(const ::java::lang::String& arg0, const ::java::sql::RowId& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRowId", "(Ljava/lang/String;Ljava/sql/RowId;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setNString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNString", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setNCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setNClob(const ::java::lang::String& arg0, const ::java::sql::NClob& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNClob", "(Ljava/lang/String;Ljava/sql/NClob;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setClob(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClob", "(Ljava/lang/String;Ljava/io/Reader;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setBlob(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlob", "(Ljava/lang/String;Ljava/io/InputStream;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setNClob(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNClob", "(Ljava/lang/String;Ljava/io/Reader;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::sql::NClob java::sql::CallableStatement::getNClob(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNClob", "(I)Ljava/sql/NClob;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::NClob _ret(ret);
    return _ret;
}

::java::sql::NClob java::sql::CallableStatement::getNClob(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNClob", "(Ljava/lang/String;)Ljava/sql/NClob;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::NClob _ret(ret);
    return _ret;
}

void java::sql::CallableStatement::setSQLXML(const ::java::lang::String& arg0, const ::java::sql::SQLXML& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSQLXML", "(Ljava/lang/String;Ljava/sql/SQLXML;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::sql::SQLXML java::sql::CallableStatement::getSQLXML(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSQLXML", "(I)Ljava/sql/SQLXML;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::SQLXML _ret(ret);
    return _ret;
}

::java::sql::SQLXML java::sql::CallableStatement::getSQLXML(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSQLXML", "(Ljava/lang/String;)Ljava/sql/SQLXML;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::SQLXML _ret(ret);
    return _ret;
}

::java::lang::String java::sql::CallableStatement::getNString(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::sql::CallableStatement::getNString(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::io::Reader java::sql::CallableStatement::getNCharacterStream(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNCharacterStream", "(I)Ljava/io/Reader;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Reader _ret(ret);
    return _ret;
}

::java::io::Reader java::sql::CallableStatement::getNCharacterStream(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNCharacterStream", "(Ljava/lang/String;)Ljava/io/Reader;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Reader _ret(ret);
    return _ret;
}

::java::io::Reader java::sql::CallableStatement::getCharacterStream(int32_t arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharacterStream", "(I)Ljava/io/Reader;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Reader _ret(ret);
    return _ret;
}

::java::io::Reader java::sql::CallableStatement::getCharacterStream(const ::java::lang::String& arg0) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharacterStream", "(Ljava/lang/String;)Ljava/io/Reader;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Reader _ret(ret);
    return _ret;
}

void java::sql::CallableStatement::setBlob(const ::java::lang::String& arg0, const ::java::sql::Blob& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlob", "(Ljava/lang/String;Ljava/sql/Blob;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setClob(const ::java::lang::String& arg0, const ::java::sql::Clob& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClob", "(Ljava/lang/String;Ljava/sql/Clob;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setAsciiStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setAsciiStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setBinaryStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setBinaryStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::sql::CallableStatement::setCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setNCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setClob(const ::java::lang::String& arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClob", "(Ljava/lang/String;Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setBlob(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlob", "(Ljava/lang/String;Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::CallableStatement::setNClob(const ::java::lang::String& arg0, const ::java::io::Reader& arg1) const {
    if (!::java::sql::CallableStatement::_class) ::java::sql::CallableStatement::_class = java::fetch_class("java/sql/CallableStatement");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNClob", "(Ljava/lang/String;Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::Time::Time(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Date((jobject)0) {
    if (!::java::sql::Time::_class) ::java::sql::Time::_class = java::fetch_class("java/sql/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::Time::Time(int64_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Date((jobject)0) {
    if (!::java::sql::Time::_class) ::java::sql::Time::_class = java::fetch_class("java/sql/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(J)V");
    int64_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::sql::Time::getDate() const {
    if (!::java::sql::Time::_class) ::java::sql::Time::_class = java::fetch_class("java/sql/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::Time::getDay() const {
    if (!::java::sql::Time::_class) ::java::sql::Time::_class = java::fetch_class("java/sql/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDay", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::Time::getMonth() const {
    if (!::java::sql::Time::_class) ::java::sql::Time::_class = java::fetch_class("java/sql/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMonth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::Time::getYear() const {
    if (!::java::sql::Time::_class) ::java::sql::Time::_class = java::fetch_class("java/sql/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYear", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::sql::Time::setDate(int32_t arg0) const {
    if (!::java::sql::Time::_class) ::java::sql::Time::_class = java::fetch_class("java/sql/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Time::setMonth(int32_t arg0) const {
    if (!::java::sql::Time::_class) ::java::sql::Time::_class = java::fetch_class("java/sql/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMonth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Time::setYear(int32_t arg0) const {
    if (!::java::sql::Time::_class) ::java::sql::Time::_class = java::fetch_class("java/sql/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "setYear", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Time::setTime(int64_t arg0) const {
    if (!::java::sql::Time::_class) ::java::sql::Time::_class = java::fetch_class("java/sql/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::sql::Time::toString() const {
    if (!::java::sql::Time::_class) ::java::sql::Time::_class = java::fetch_class("java/sql/Time");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::Time java::sql::Time::valueOf(const ::java::lang::String& arg0){
    if (!::java::sql::Time::_class) ::java::sql::Time::_class = java::fetch_class("java/sql/Time");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/sql/Time;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::sql::Time _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLException::SQLException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLException::SQLException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLException::SQLException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLException::SQLException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLException::SQLException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLException::SQLException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLException::SQLException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLException::SQLException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

int32_t java::sql::SQLException::getErrorCode() const {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::sql::SQLException java::sql::SQLException::getNextException() const {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextException", "()Ljava/sql/SQLException;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::SQLException _ret(ret);
    return _ret;
}

::java::lang::String java::sql::SQLException::getSQLState() const {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSQLState", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::sql::SQLException::setNextException(const ::java::sql::SQLException& arg0) const {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNextException", "(Ljava/sql/SQLException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Iterator java::sql::SQLException::iterator() const {
    if (!::java::sql::SQLException::_class) ::java::sql::SQLException::_class = java::fetch_class("java/sql/SQLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

int32_t java::sql::Savepoint::getSavepointId() const {
    if (!::java::sql::Savepoint::_class) ::java::sql::Savepoint::_class = java::fetch_class("java/sql/Savepoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSavepointId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::sql::Savepoint::getSavepointName() const {
    if (!::java::sql::Savepoint::_class) ::java::sql::Savepoint::_class = java::fetch_class("java/sql/Savepoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSavepointName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLPermission::SQLPermission(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::sql::SQLPermission::_class) ::java::sql::SQLPermission::_class = java::fetch_class("java/sql/SQLPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLPermission::SQLPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::sql::SQLPermission::_class) ::java::sql::SQLPermission::_class = java::fetch_class("java/sql/SQLPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::sql::SQLPermission::getActions() const {
    if (!::java::sql::SQLPermission::_class) ::java::sql::SQLPermission::_class = java::fetch_class("java/sql/SQLPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::sql::SQLPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::sql::SQLPermission::_class) ::java::sql::SQLPermission::_class = java::fetch_class("java/sql/SQLPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLClientInfoException::SQLClientInfoException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLClientInfoException::_class) ::java::sql::SQLClientInfoException::_class = java::fetch_class("java/sql/SQLClientInfoException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLClientInfoException::SQLClientInfoException(const ::java::util::Map& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLClientInfoException::_class) ::java::sql::SQLClientInfoException::_class = java::fetch_class("java/sql/SQLClientInfoException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLClientInfoException::SQLClientInfoException(const ::java::util::Map& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLClientInfoException::_class) ::java::sql::SQLClientInfoException::_class = java::fetch_class("java/sql/SQLClientInfoException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLClientInfoException::SQLClientInfoException(const ::java::lang::String& arg0, const ::java::util::Map& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLClientInfoException::_class) ::java::sql::SQLClientInfoException::_class = java::fetch_class("java/sql/SQLClientInfoException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLClientInfoException::SQLClientInfoException(const ::java::lang::String& arg0, const ::java::util::Map& arg1, const ::java::lang::Throwable& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLClientInfoException::_class) ::java::sql::SQLClientInfoException::_class = java::fetch_class("java/sql/SQLClientInfoException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLClientInfoException::SQLClientInfoException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::util::Map& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLClientInfoException::_class) ::java::sql::SQLClientInfoException::_class = java::fetch_class("java/sql/SQLClientInfoException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLClientInfoException::SQLClientInfoException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::util::Map& arg3, const ::java::lang::Throwable& arg4) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLClientInfoException::_class) ::java::sql::SQLClientInfoException::_class = java::fetch_class("java/sql/SQLClientInfoException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLClientInfoException::SQLClientInfoException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::util::Map& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLClientInfoException::_class) ::java::sql::SQLClientInfoException::_class = java::fetch_class("java/sql/SQLClientInfoException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::sql::SQLClientInfoException::SQLClientInfoException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::util::Map& arg2, const ::java::lang::Throwable& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Iterable((jobject)0), ::java::lang::Throwable((jobject)0), ::java::sql::SQLException((jobject)0) {
    if (!::java::sql::SQLClientInfoException::_class) ::java::sql::SQLClientInfoException::_class = java::fetch_class("java/sql/SQLClientInfoException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::util::Map java::sql::SQLClientInfoException::getFailedProperties() const {
    if (!::java::sql::SQLClientInfoException::_class) ::java::sql::SQLClientInfoException::_class = java::fetch_class("java/sql/SQLClientInfoException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFailedProperties", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

void java::sql::Connection::clearWarnings() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearWarnings", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::Connection::close() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::Connection::commit() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "commit", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::sql::Statement java::sql::Connection::createStatement() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "createStatement", "()Ljava/sql/Statement;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Statement _ret(ret);
    return _ret;
}

::java::sql::Statement java::sql::Connection::createStatement(int32_t arg0, int32_t arg1) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "createStatement", "(II)Ljava/sql/Statement;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Statement _ret(ret);
    return _ret;
}

::java::sql::Statement java::sql::Connection::createStatement(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "createStatement", "(III)Ljava/sql/Statement;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::Statement _ret(ret);
    return _ret;
}

bool java::sql::Connection::getAutoCommit() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAutoCommit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::sql::Connection::getCatalog() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCatalog", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::sql::Connection::getHoldability() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHoldability", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::sql::DatabaseMetaData java::sql::Connection::getMetaData() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetaData", "()Ljava/sql/DatabaseMetaData;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::DatabaseMetaData _ret(ret);
    return _ret;
}

int32_t java::sql::Connection::getTransactionIsolation() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransactionIsolation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Map java::sql::Connection::getTypeMap() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeMap", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::sql::SQLWarning java::sql::Connection::getWarnings() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWarnings", "()Ljava/sql/SQLWarning;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::SQLWarning _ret(ret);
    return _ret;
}

bool java::sql::Connection::isClosed() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClosed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::sql::Connection::isReadOnly() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReadOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::sql::Connection::nativeSQL(const ::java::lang::String& arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "nativeSQL", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::sql::CallableStatement java::sql::Connection::prepareCall(const ::java::lang::String& arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareCall", "(Ljava/lang/String;)Ljava/sql/CallableStatement;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::CallableStatement _ret(ret);
    return _ret;
}

::java::sql::CallableStatement java::sql::Connection::prepareCall(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareCall", "(Ljava/lang/String;II)Ljava/sql/CallableStatement;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::CallableStatement _ret(ret);
    return _ret;
}

::java::sql::CallableStatement java::sql::Connection::prepareCall(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareCall", "(Ljava/lang/String;III)Ljava/sql/CallableStatement;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::sql::CallableStatement _ret(ret);
    return _ret;
}

::java::sql::PreparedStatement java::sql::Connection::prepareStatement(const ::java::lang::String& arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareStatement", "(Ljava/lang/String;)Ljava/sql/PreparedStatement;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::PreparedStatement _ret(ret);
    return _ret;
}

::java::sql::PreparedStatement java::sql::Connection::prepareStatement(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareStatement", "(Ljava/lang/String;I)Ljava/sql/PreparedStatement;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::PreparedStatement _ret(ret);
    return _ret;
}

::java::sql::PreparedStatement java::sql::Connection::prepareStatement(const ::java::lang::String& arg0, const std::vector< int32_t>& arg1) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareStatement", "(Ljava/lang/String;[I)Ljava/sql/PreparedStatement;");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::PreparedStatement _ret(ret);
    return _ret;
}

::java::sql::PreparedStatement java::sql::Connection::prepareStatement(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareStatement", "(Ljava/lang/String;II)Ljava/sql/PreparedStatement;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::sql::PreparedStatement _ret(ret);
    return _ret;
}

::java::sql::PreparedStatement java::sql::Connection::prepareStatement(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareStatement", "(Ljava/lang/String;III)Ljava/sql/PreparedStatement;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::sql::PreparedStatement _ret(ret);
    return _ret;
}

::java::sql::PreparedStatement java::sql::Connection::prepareStatement(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "prepareStatement", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/sql/PreparedStatement;");
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
    ::java::sql::PreparedStatement _ret(ret);
    return _ret;
}

void java::sql::Connection::releaseSavepoint(const ::java::sql::Savepoint& arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseSavepoint", "(Ljava/sql/Savepoint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Connection::rollback() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "rollback", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::sql::Connection::rollback(const ::java::sql::Savepoint& arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "rollback", "(Ljava/sql/Savepoint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Connection::setAutoCommit(bool arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoCommit", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Connection::setCatalog(const ::java::lang::String& arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCatalog", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Connection::setHoldability(int32_t arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHoldability", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Connection::setReadOnly(bool arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReadOnly", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::sql::Savepoint java::sql::Connection::setSavepoint() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSavepoint", "()Ljava/sql/Savepoint;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Savepoint _ret(ret);
    return _ret;
}

::java::sql::Savepoint java::sql::Connection::setSavepoint(const ::java::lang::String& arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSavepoint", "(Ljava/lang/String;)Ljava/sql/Savepoint;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::sql::Savepoint _ret(ret);
    return _ret;
}

void java::sql::Connection::setTransactionIsolation(int32_t arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransactionIsolation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::sql::Connection::setTypeMap(const ::java::util::Map& arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTypeMap", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::sql::Clob java::sql::Connection::createClob() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "createClob", "()Ljava/sql/Clob;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Clob _ret(ret);
    return _ret;
}

::java::sql::Blob java::sql::Connection::createBlob() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "createBlob", "()Ljava/sql/Blob;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Blob _ret(ret);
    return _ret;
}

::java::sql::NClob java::sql::Connection::createNClob() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "createNClob", "()Ljava/sql/NClob;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::NClob _ret(ret);
    return _ret;
}

::java::sql::SQLXML java::sql::Connection::createSQLXML() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSQLXML", "()Ljava/sql/SQLXML;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::SQLXML _ret(ret);
    return _ret;
}

bool java::sql::Connection::isValid(int32_t arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValid", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::sql::Connection::setClientInfo(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClientInfo", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::sql::Connection::setClientInfo(const ::java::util::Properties& arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClientInfo", "(Ljava/util/Properties;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::sql::Connection::getClientInfo(const ::java::lang::String& arg0) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClientInfo", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Properties java::sql::Connection::getClientInfo() const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClientInfo", "()Ljava/util/Properties;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Properties _ret(ret);
    return _ret;
}

::java::sql::Array java::sql::Connection::createArrayOf(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "createArrayOf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/sql/Array;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Array _ret(ret);
    return _ret;
}

::java::sql::Struct java::sql::Connection::createStruct(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::java::sql::Connection::_class) ::java::sql::Connection::_class = java::fetch_class("java/sql/Connection");
    static jmethodID mid = java::jni->GetMethodID(_class, "createStruct", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/sql/Struct;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Struct _ret(ret);
    return _ret;
}

::java::lang::Object java::sql::Wrapper::unwrap(const ::java::lang::Class& arg0) const {
    if (!::java::sql::Wrapper::_class) ::java::sql::Wrapper::_class = java::fetch_class("java/sql/Wrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "unwrap", "(Ljava/lang/Class;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::sql::Wrapper::isWrapperFor(const ::java::lang::Class& arg0) const {
    if (!::java::sql::Wrapper::_class) ::java::sql::Wrapper::_class = java::fetch_class("java/sql/Wrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWrapperFor", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::sql::Driver::acceptsURL(const ::java::lang::String& arg0) const {
    if (!::java::sql::Driver::_class) ::java::sql::Driver::_class = java::fetch_class("java/sql/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "acceptsURL", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::sql::Connection java::sql::Driver::connect(const ::java::lang::String& arg0, const ::java::util::Properties& arg1) const {
    if (!::java::sql::Driver::_class) ::java::sql::Driver::_class = java::fetch_class("java/sql/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Connection _ret(ret);
    return _ret;
}

int32_t java::sql::Driver::getMajorVersion() const {
    if (!::java::sql::Driver::_class) ::java::sql::Driver::_class = java::fetch_class("java/sql/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMajorVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::sql::Driver::getMinorVersion() const {
    if (!::java::sql::Driver::_class) ::java::sql::Driver::_class = java::fetch_class("java/sql/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinorVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::sql::DriverPropertyInfo> java::sql::Driver::getPropertyInfo(const ::java::lang::String& arg0, const ::java::util::Properties& arg1) const {
    if (!::java::sql::Driver::_class) ::java::sql::Driver::_class = java::fetch_class("java/sql/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPropertyInfo", "(Ljava/lang/String;Ljava/util/Properties;)[Ljava/sql/DriverPropertyInfo;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::sql::DriverPropertyInfo> _ret(rets, ::java::sql::DriverPropertyInfo((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::sql::DriverPropertyInfo retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool java::sql::Driver::jdbcCompliant() const {
    if (!::java::sql::Driver::_class) ::java::sql::Driver::_class = java::fetch_class("java/sql/Driver");
    static jmethodID mid = java::jni->GetMethodID(_class, "jdbcCompliant", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

