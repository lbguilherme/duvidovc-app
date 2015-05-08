#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.io.Reader.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.math.BigDecimal.hpp"
#include "java.net.URL.hpp"
#include "java.sql.Array.hpp"
#include "java.sql.Blob.hpp"
#include "java.sql.Clob.hpp"
#include "java.sql.Connection.hpp"
#include "java.sql.Date.hpp"
#include "java.sql.NClob.hpp"
#include "java.sql.PreparedStatement.hpp"
#include "java.sql.Ref.hpp"
#include "java.sql.ResultSet.hpp"
#include "java.sql.RowId.hpp"
#include "java.sql.SQLException.hpp"
#include "java.sql.SQLXML.hpp"
#include "java.sql.Time.hpp"
#include "java.sql.Timestamp.hpp"
#include "java.util.Calendar.hpp"
#include "java.util.Map.hpp"
#include "javax.sql.CommonDataSource.hpp"
#include "javax.sql.ConnectionEvent.hpp"
#include "javax.sql.ConnectionEventListener.hpp"
#include "javax.sql.ConnectionPoolDataSource.hpp"
#include "javax.sql.DataSource.hpp"
#include "javax.sql.PooledConnection.hpp"
#include "javax.sql.RowSet.hpp"
#include "javax.sql.RowSetEvent.hpp"
#include "javax.sql.RowSetInternal.hpp"
#include "javax.sql.RowSetListener.hpp"
#include "javax.sql.RowSetMetaData.hpp"
#include "javax.sql.RowSetReader.hpp"
#include "javax.sql.RowSetWriter.hpp"
#include "javax.sql.StatementEvent.hpp"
#include "javax.sql.StatementEventListener.hpp"

jclass javax::sql::ConnectionEventListener::_class = nullptr;
jclass javax::sql::PooledConnection::_class = nullptr;
jclass javax::sql::RowSetInternal::_class = nullptr;
jclass javax::sql::ConnectionPoolDataSource::_class = nullptr;
jclass javax::sql::ConnectionEvent::_class = nullptr;
jclass javax::sql::RowSetListener::_class = nullptr;
jclass javax::sql::CommonDataSource::_class = nullptr;
jclass javax::sql::StatementEventListener::_class = nullptr;
jclass javax::sql::RowSetReader::_class = nullptr;
jclass javax::sql::StatementEvent::_class = nullptr;
jclass javax::sql::RowSetEvent::_class = nullptr;
jclass javax::sql::RowSet::_class = nullptr;
jclass javax::sql::RowSetWriter::_class = nullptr;
jclass javax::sql::DataSource::_class = nullptr;
jclass javax::sql::RowSetMetaData::_class = nullptr;

void javax::sql::ConnectionEventListener::connectionClosed(const ::javax::sql::ConnectionEvent& arg0) const {
    if (!::javax::sql::ConnectionEventListener::_class) ::javax::sql::ConnectionEventListener::_class = java::fetch_class("javax/sql/ConnectionEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "connectionClosed", "(Ljavax/sql/ConnectionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::ConnectionEventListener::connectionErrorOccurred(const ::javax::sql::ConnectionEvent& arg0) const {
    if (!::javax::sql::ConnectionEventListener::_class) ::javax::sql::ConnectionEventListener::_class = java::fetch_class("javax/sql/ConnectionEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "connectionErrorOccurred", "(Ljavax/sql/ConnectionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::PooledConnection::addConnectionEventListener(const ::javax::sql::ConnectionEventListener& arg0) const {
    if (!::javax::sql::PooledConnection::_class) ::javax::sql::PooledConnection::_class = java::fetch_class("javax/sql/PooledConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "addConnectionEventListener", "(Ljavax/sql/ConnectionEventListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::PooledConnection::close() const {
    if (!::javax::sql::PooledConnection::_class) ::javax::sql::PooledConnection::_class = java::fetch_class("javax/sql/PooledConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::sql::Connection javax::sql::PooledConnection::getConnection() const {
    if (!::javax::sql::PooledConnection::_class) ::javax::sql::PooledConnection::_class = java::fetch_class("javax/sql/PooledConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnection", "()Ljava/sql/Connection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Connection _ret(ret);
    return _ret;
}

void javax::sql::PooledConnection::removeConnectionEventListener(const ::javax::sql::ConnectionEventListener& arg0) const {
    if (!::javax::sql::PooledConnection::_class) ::javax::sql::PooledConnection::_class = java::fetch_class("javax/sql/PooledConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeConnectionEventListener", "(Ljavax/sql/ConnectionEventListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::PooledConnection::addStatementEventListener(const ::javax::sql::StatementEventListener& arg0) const {
    if (!::javax::sql::PooledConnection::_class) ::javax::sql::PooledConnection::_class = java::fetch_class("javax/sql/PooledConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "addStatementEventListener", "(Ljavax/sql/StatementEventListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::PooledConnection::removeStatementEventListener(const ::javax::sql::StatementEventListener& arg0) const {
    if (!::javax::sql::PooledConnection::_class) ::javax::sql::PooledConnection::_class = java::fetch_class("javax/sql/PooledConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeStatementEventListener", "(Ljavax/sql/StatementEventListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::sql::Connection javax::sql::RowSetInternal::getConnection() const {
    if (!::javax::sql::RowSetInternal::_class) ::javax::sql::RowSetInternal::_class = java::fetch_class("javax/sql/RowSetInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnection", "()Ljava/sql/Connection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Connection _ret(ret);
    return _ret;
}

::java::sql::ResultSet javax::sql::RowSetInternal::getOriginal() const {
    if (!::javax::sql::RowSetInternal::_class) ::javax::sql::RowSetInternal::_class = java::fetch_class("javax/sql/RowSetInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOriginal", "()Ljava/sql/ResultSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

::java::sql::ResultSet javax::sql::RowSetInternal::getOriginalRow() const {
    if (!::javax::sql::RowSetInternal::_class) ::javax::sql::RowSetInternal::_class = java::fetch_class("javax/sql/RowSetInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOriginalRow", "()Ljava/sql/ResultSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::ResultSet _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> javax::sql::RowSetInternal::getParams() const {
    if (!::javax::sql::RowSetInternal::_class) ::javax::sql::RowSetInternal::_class = java::fetch_class("javax/sql/RowSetInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()[Ljava/lang/Object;");
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

void javax::sql::RowSetInternal::setMetaData(const ::javax::sql::RowSetMetaData& arg0) const {
    if (!::javax::sql::RowSetInternal::_class) ::javax::sql::RowSetInternal::_class = java::fetch_class("javax/sql/RowSetInternal");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMetaData", "(Ljavax/sql/RowSetMetaData;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::sql::PooledConnection javax::sql::ConnectionPoolDataSource::getPooledConnection() const {
    if (!::javax::sql::ConnectionPoolDataSource::_class) ::javax::sql::ConnectionPoolDataSource::_class = java::fetch_class("javax/sql/ConnectionPoolDataSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPooledConnection", "()Ljavax/sql/PooledConnection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::sql::PooledConnection _ret(ret);
    return _ret;
}

::javax::sql::PooledConnection javax::sql::ConnectionPoolDataSource::getPooledConnection(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::javax::sql::ConnectionPoolDataSource::_class) ::javax::sql::ConnectionPoolDataSource::_class = java::fetch_class("javax/sql/ConnectionPoolDataSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPooledConnection", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/sql/PooledConnection;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::javax::sql::PooledConnection _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::sql::ConnectionEvent::ConnectionEvent(const ::javax::sql::PooledConnection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {
    if (!::javax::sql::ConnectionEvent::_class) ::javax::sql::ConnectionEvent::_class = java::fetch_class("javax/sql/ConnectionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/sql/PooledConnection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::sql::ConnectionEvent::ConnectionEvent(const ::javax::sql::PooledConnection& arg0, const ::java::sql::SQLException& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {
    if (!::javax::sql::ConnectionEvent::_class) ::javax::sql::ConnectionEvent::_class = java::fetch_class("javax/sql/ConnectionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/sql/PooledConnection;Ljava/sql/SQLException;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::sql::SQLException javax::sql::ConnectionEvent::getSQLException() const {
    if (!::javax::sql::ConnectionEvent::_class) ::javax::sql::ConnectionEvent::_class = java::fetch_class("javax/sql/ConnectionEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSQLException", "()Ljava/sql/SQLException;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::SQLException _ret(ret);
    return _ret;
}

void javax::sql::RowSetListener::cursorMoved(const ::javax::sql::RowSetEvent& arg0) const {
    if (!::javax::sql::RowSetListener::_class) ::javax::sql::RowSetListener::_class = java::fetch_class("javax/sql/RowSetListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "cursorMoved", "(Ljavax/sql/RowSetEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSetListener::rowChanged(const ::javax::sql::RowSetEvent& arg0) const {
    if (!::javax::sql::RowSetListener::_class) ::javax::sql::RowSetListener::_class = java::fetch_class("javax/sql/RowSetListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "rowChanged", "(Ljavax/sql/RowSetEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSetListener::rowSetChanged(const ::javax::sql::RowSetEvent& arg0) const {
    if (!::javax::sql::RowSetListener::_class) ::javax::sql::RowSetListener::_class = java::fetch_class("javax/sql/RowSetListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "rowSetChanged", "(Ljavax/sql/RowSetEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t javax::sql::CommonDataSource::getLoginTimeout() const {
    if (!::javax::sql::CommonDataSource::_class) ::javax::sql::CommonDataSource::_class = java::fetch_class("javax/sql/CommonDataSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoginTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::io::PrintWriter javax::sql::CommonDataSource::getLogWriter() const {
    if (!::javax::sql::CommonDataSource::_class) ::javax::sql::CommonDataSource::_class = java::fetch_class("javax/sql/CommonDataSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLogWriter", "()Ljava/io/PrintWriter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::PrintWriter _ret(ret);
    return _ret;
}

void javax::sql::CommonDataSource::setLoginTimeout(int32_t arg0) const {
    if (!::javax::sql::CommonDataSource::_class) ::javax::sql::CommonDataSource::_class = java::fetch_class("javax/sql/CommonDataSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLoginTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::CommonDataSource::setLogWriter(const ::java::io::PrintWriter& arg0) const {
    if (!::javax::sql::CommonDataSource::_class) ::javax::sql::CommonDataSource::_class = java::fetch_class("javax/sql/CommonDataSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLogWriter", "(Ljava/io/PrintWriter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::StatementEventListener::statementClosed(const ::javax::sql::StatementEvent& arg0) const {
    if (!::javax::sql::StatementEventListener::_class) ::javax::sql::StatementEventListener::_class = java::fetch_class("javax/sql/StatementEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "statementClosed", "(Ljavax/sql/StatementEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::StatementEventListener::statementErrorOccurred(const ::javax::sql::StatementEvent& arg0) const {
    if (!::javax::sql::StatementEventListener::_class) ::javax::sql::StatementEventListener::_class = java::fetch_class("javax/sql/StatementEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "statementErrorOccurred", "(Ljavax/sql/StatementEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSetReader::readData(const ::javax::sql::RowSetInternal& arg0) const {
    if (!::javax::sql::RowSetReader::_class) ::javax::sql::RowSetReader::_class = java::fetch_class("javax/sql/RowSetReader");
    static jmethodID mid = java::jni->GetMethodID(_class, "readData", "(Ljavax/sql/RowSetInternal;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::sql::StatementEvent::StatementEvent(const ::javax::sql::PooledConnection& arg0, const ::java::sql::PreparedStatement& arg1, const ::java::sql::SQLException& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {
    if (!::javax::sql::StatementEvent::_class) ::javax::sql::StatementEvent::_class = java::fetch_class("javax/sql/StatementEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;Ljava/sql/SQLException;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::sql::StatementEvent::StatementEvent(const ::javax::sql::PooledConnection& arg0, const ::java::sql::PreparedStatement& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {
    if (!::javax::sql::StatementEvent::_class) ::javax::sql::StatementEvent::_class = java::fetch_class("javax/sql/StatementEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::sql::PreparedStatement javax::sql::StatementEvent::getStatement() const {
    if (!::javax::sql::StatementEvent::_class) ::javax::sql::StatementEvent::_class = java::fetch_class("javax/sql/StatementEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatement", "()Ljava/sql/PreparedStatement;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::PreparedStatement _ret(ret);
    return _ret;
}

::java::sql::SQLException javax::sql::StatementEvent::getSQLException() const {
    if (!::javax::sql::StatementEvent::_class) ::javax::sql::StatementEvent::_class = java::fetch_class("javax/sql/StatementEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSQLException", "()Ljava/sql/SQLException;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::SQLException _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::sql::RowSetEvent::RowSetEvent(const ::javax::sql::RowSet& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {
    if (!::javax::sql::RowSetEvent::_class) ::javax::sql::RowSetEvent::_class = java::fetch_class("javax/sql/RowSetEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/sql/RowSet;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void javax::sql::RowSet::addRowSetListener(const ::javax::sql::RowSetListener& arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRowSetListener", "(Ljavax/sql/RowSetListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::clearParameters() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearParameters", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::sql::RowSet::execute() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String javax::sql::RowSet::getCommand() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCommand", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::sql::RowSet::getDataSourceName() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDataSourceName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool javax::sql::RowSet::getEscapeProcessing() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEscapeProcessing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t javax::sql::RowSet::getMaxFieldSize() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxFieldSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::sql::RowSet::getMaxRows() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxRows", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String javax::sql::RowSet::getPassword() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPassword", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t javax::sql::RowSet::getQueryTimeout() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueryTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::sql::RowSet::getTransactionIsolation() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransactionIsolation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Map javax::sql::RowSet::getTypeMap() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeMap", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::lang::String javax::sql::RowSet::getUrl() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUrl", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::sql::RowSet::getUsername() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUsername", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool javax::sql::RowSet::isReadOnly() const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReadOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::sql::RowSet::removeRowSetListener(const ::javax::sql::RowSetListener& arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeRowSetListener", "(Ljavax/sql/RowSetListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setArray(int32_t arg0, const ::java::sql::Array& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setArray", "(ILjava/sql/Array;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setAsciiStream(int32_t arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAsciiStream", "(ILjava/io/InputStream;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setAsciiStream(int32_t arg0, const ::java::io::InputStream& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAsciiStream", "(ILjava/io/InputStream;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setAsciiStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setAsciiStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setBigDecimal(int32_t arg0, const ::java::math::BigDecimal& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBigDecimal", "(ILjava/math/BigDecimal;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setBigDecimal(const ::java::lang::String& arg0, const ::java::math::BigDecimal& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBigDecimal", "(Ljava/lang/String;Ljava/math/BigDecimal;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setBinaryStream(int32_t arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBinaryStream", "(ILjava/io/InputStream;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setBinaryStream(int32_t arg0, const ::java::io::InputStream& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBinaryStream", "(ILjava/io/InputStream;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setBinaryStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setBinaryStream(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int32_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setBlob(int32_t arg0, const ::java::sql::Blob& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlob", "(ILjava/sql/Blob;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setBlob(int32_t arg0, const ::java::io::InputStream& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlob", "(ILjava/io/InputStream;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setBlob(int32_t arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlob", "(ILjava/io/InputStream;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setBlob(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlob", "(Ljava/lang/String;Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setBlob(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1, int64_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlob", "(Ljava/lang/String;Ljava/io/InputStream;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setBlob(const ::java::lang::String& arg0, const ::java::sql::Blob& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlob", "(Ljava/lang/String;Ljava/sql/Blob;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setBoolean(int32_t arg0, bool arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoolean", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoolean", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setByte(int32_t arg0, int8_t arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setByte", "(IB)V");
    int32_t _arg0 = arg0;
    int8_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setByte(const ::java::lang::String& arg0, int8_t arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setByte", "(Ljava/lang/String;B)V");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setBytes(int32_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBytes", "(I[B)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setBytes(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBytes", "(Ljava/lang/String;[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setCharacterStream(int32_t arg0, const ::java::io::Reader& arg1, int32_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(ILjava/io/Reader;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setCharacterStream(int32_t arg0, const ::java::io::Reader& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(ILjava/io/Reader;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int32_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setClob(int32_t arg0, const ::java::sql::Clob& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClob", "(ILjava/sql/Clob;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setClob(int32_t arg0, const ::java::io::Reader& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClob", "(ILjava/io/Reader;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setClob(int32_t arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClob", "(ILjava/io/Reader;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setClob(const ::java::lang::String& arg0, const ::java::sql::Clob& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClob", "(Ljava/lang/String;Ljava/sql/Clob;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setClob(const ::java::lang::String& arg0, const ::java::io::Reader& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClob", "(Ljava/lang/String;Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setClob(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClob", "(Ljava/lang/String;Ljava/io/Reader;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setCommand(const ::java::lang::String& arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCommand", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setConcurrency(int32_t arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConcurrency", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setDataSourceName(const ::java::lang::String& arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataSourceName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setDate(int32_t arg0, const ::java::sql::Date& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(ILjava/sql/Date;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setDate(int32_t arg0, const ::java::sql::Date& arg1, const ::java::util::Calendar& arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(ILjava/sql/Date;Ljava/util/Calendar;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setDate(const ::java::lang::String& arg0, const ::java::sql::Date& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(Ljava/lang/String;Ljava/sql/Date;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setDate(const ::java::lang::String& arg0, const ::java::sql::Date& arg1, const ::java::util::Calendar& arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(Ljava/lang/String;Ljava/sql/Date;Ljava/util/Calendar;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setDouble(int32_t arg0, double arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDouble", "(ID)V");
    int32_t _arg0 = arg0;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDouble", "(Ljava/lang/String;D)V");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setEscapeProcessing(bool arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEscapeProcessing", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setFloat(int32_t arg0, float arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFloat", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setFloat(const ::java::lang::String& arg0, float arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFloat", "(Ljava/lang/String;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setInt(int32_t arg0, int32_t arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInt", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInt", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setLong(int32_t arg0, int64_t arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLong", "(IJ)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLong", "(Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setMaxFieldSize(int32_t arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxFieldSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setMaxRows(int32_t arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxRows", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setNCharacterStream(int32_t arg0, const ::java::io::Reader& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNCharacterStream", "(ILjava/io/Reader;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setNCharacterStream(int32_t arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNCharacterStream", "(ILjava/io/Reader;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setNCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setNCharacterStream(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setNClob(int32_t arg0, const ::java::sql::NClob& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNClob", "(ILjava/sql/NClob;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setNClob(int32_t arg0, const ::java::io::Reader& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNClob", "(ILjava/io/Reader;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setNClob(int32_t arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNClob", "(ILjava/io/Reader;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setNClob(const ::java::lang::String& arg0, const ::java::sql::NClob& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNClob", "(Ljava/lang/String;Ljava/sql/NClob;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setNClob(const ::java::lang::String& arg0, const ::java::io::Reader& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNClob", "(Ljava/lang/String;Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setNClob(const ::java::lang::String& arg0, const ::java::io::Reader& arg1, int64_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNClob", "(Ljava/lang/String;Ljava/io/Reader;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setNString(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNString", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setNString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNString", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setNull(int32_t arg0, int32_t arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNull", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setNull(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNull", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setNull(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNull", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setNull(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNull", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setObject(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setObject(int32_t arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(ILjava/lang/Object;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setObject(int32_t arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(ILjava/lang/Object;II)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::sql::RowSet::setObject(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setObject(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(Ljava/lang/String;Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setObject(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObject", "(Ljava/lang/String;Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::sql::RowSet::setPassword(const ::java::lang::String& arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setQueryTimeout(int32_t arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueryTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setReadOnly(bool arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReadOnly", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setRef(int32_t arg0, const ::java::sql::Ref& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRef", "(ILjava/sql/Ref;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setShort(int32_t arg0, int16_t arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShort", "(IS)V");
    int32_t _arg0 = arg0;
    int16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setShort(const ::java::lang::String& arg0, int16_t arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShort", "(Ljava/lang/String;S)V");
    jobject _arg0 = arg0.obj;
    int16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setString(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setString", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setString", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setRowId(int32_t arg0, const ::java::sql::RowId& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRowId", "(ILjava/sql/RowId;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setRowId(const ::java::lang::String& arg0, const ::java::sql::RowId& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRowId", "(Ljava/lang/String;Ljava/sql/RowId;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setSQLXML(int32_t arg0, const ::java::sql::SQLXML& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSQLXML", "(ILjava/sql/SQLXML;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setSQLXML(const ::java::lang::String& arg0, const ::java::sql::SQLXML& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSQLXML", "(Ljava/lang/String;Ljava/sql/SQLXML;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setTime(int32_t arg0, const ::java::sql::Time& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(ILjava/sql/Time;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setTime(int32_t arg0, const ::java::sql::Time& arg1, const ::java::util::Calendar& arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(ILjava/sql/Time;Ljava/util/Calendar;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setTime(const ::java::lang::String& arg0, const ::java::sql::Time& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(Ljava/lang/String;Ljava/sql/Time;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setTime(const ::java::lang::String& arg0, const ::java::sql::Time& arg1, const ::java::util::Calendar& arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(Ljava/lang/String;Ljava/sql/Time;Ljava/util/Calendar;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setTimestamp(int32_t arg0, const ::java::sql::Timestamp& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimestamp", "(ILjava/sql/Timestamp;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setTimestamp(int32_t arg0, const ::java::sql::Timestamp& arg1, const ::java::util::Calendar& arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimestamp", "(ILjava/sql/Timestamp;Ljava/util/Calendar;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setTimestamp(const ::java::lang::String& arg0, const ::java::sql::Timestamp& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setTimestamp(const ::java::lang::String& arg0, const ::java::sql::Timestamp& arg1, const ::java::util::Calendar& arg2) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;Ljava/util/Calendar;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::sql::RowSet::setTransactionIsolation(int32_t arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransactionIsolation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setType(int32_t arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setTypeMap(const ::java::util::Map& arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTypeMap", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setUrl(const ::java::lang::String& arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUrl", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSet::setURL(int32_t arg0, const ::java::net::URL& arg1) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setURL", "(ILjava/net/URL;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSet::setUsername(const ::java::lang::String& arg0) const {
    if (!::javax::sql::RowSet::_class) ::javax::sql::RowSet::_class = java::fetch_class("javax/sql/RowSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUsername", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::sql::RowSetWriter::writeData(const ::javax::sql::RowSetInternal& arg0) const {
    if (!::javax::sql::RowSetWriter::_class) ::javax::sql::RowSetWriter::_class = java::fetch_class("javax/sql/RowSetWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeData", "(Ljavax/sql/RowSetInternal;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::sql::Connection javax::sql::DataSource::getConnection() const {
    if (!::javax::sql::DataSource::_class) ::javax::sql::DataSource::_class = java::fetch_class("javax/sql/DataSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnection", "()Ljava/sql/Connection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::sql::Connection _ret(ret);
    return _ret;
}

::java::sql::Connection javax::sql::DataSource::getConnection(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::javax::sql::DataSource::_class) ::javax::sql::DataSource::_class = java::fetch_class("javax/sql/DataSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnection", "(Ljava/lang/String;Ljava/lang/String;)Ljava/sql/Connection;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::sql::Connection _ret(ret);
    return _ret;
}

void javax::sql::RowSetMetaData::setAutoIncrement(int32_t arg0, bool arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoIncrement", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setCaseSensitive(int32_t arg0, bool arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCaseSensitive", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setCatalogName(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCatalogName", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setColumnCount(int32_t arg0) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::sql::RowSetMetaData::setColumnDisplaySize(int32_t arg0, int32_t arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnDisplaySize", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setColumnLabel(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnLabel", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setColumnName(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnName", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setColumnType(int32_t arg0, int32_t arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnType", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setColumnTypeName(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnTypeName", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setCurrency(int32_t arg0, bool arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrency", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setNullable(int32_t arg0, int32_t arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNullable", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setPrecision(int32_t arg0, int32_t arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrecision", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setScale(int32_t arg0, int32_t arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScale", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setSchemaName(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSchemaName", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setSearchable(int32_t arg0, bool arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSearchable", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setSigned(int32_t arg0, bool arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSigned", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::sql::RowSetMetaData::setTableName(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::javax::sql::RowSetMetaData::_class) ::javax::sql::RowSetMetaData::_class = java::fetch_class("javax/sql/RowSetMetaData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTableName", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

