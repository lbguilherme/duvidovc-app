#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Thread.hpp"
#include "java.lang.ref.Reference.hpp"
#include "java.lang.ref.ReferenceQueue.hpp"
#include "java.util.Date.hpp"
#include "java.util.concurrent.TimeUnit.hpp"
#include "java.util.concurrent.locks.Condition.hpp"
#include "org.apache.http.conn.ClientConnectionOperator.hpp"
#include "org.apache.http.conn.ClientConnectionRequest.hpp"
#include "org.apache.http.conn.ManagedClientConnection.hpp"
#include "org.apache.http.conn.routing.HttpRoute.hpp"
#include "org.apache.http.conn.scheme.SchemeRegistry.hpp"
#include "org.apache.http.impl.conn.tsccm.AbstractConnPool.hpp"
#include "org.apache.http.impl.conn.tsccm.BasicPoolEntry.hpp"
#include "org.apache.http.impl.conn.tsccm.BasicPoolEntryRef.hpp"
#include "org.apache.http.impl.conn.tsccm.BasicPooledConnAdapter.hpp"
#include "org.apache.http.impl.conn.tsccm.ConnPoolByRoute.hpp"
#include "org.apache.http.impl.conn.tsccm.PoolEntryRequest.hpp"
#include "org.apache.http.impl.conn.tsccm.RefQueueHandler.hpp"
#include "org.apache.http.impl.conn.tsccm.RefQueueWorker.hpp"
#include "org.apache.http.impl.conn.tsccm.RouteSpecificPool.hpp"
#include "org.apache.http.impl.conn.tsccm.ThreadSafeClientConnManager.hpp"
#include "org.apache.http.impl.conn.tsccm.WaitingThread.hpp"
#include "org.apache.http.impl.conn.tsccm.WaitingThreadAborter.hpp"
#include "org.apache.http.params.HttpParams.hpp"

jclass org::apache::http::impl::conn::tsccm::BasicPoolEntryRef::_class = nullptr;
jclass org::apache::http::impl::conn::tsccm::WaitingThread::_class = nullptr;
jclass org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class = nullptr;
jclass org::apache::http::impl::conn::tsccm::BasicPoolEntry::_class = nullptr;
jclass org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class = nullptr;
jclass org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = nullptr;
jclass org::apache::http::impl::conn::tsccm::AbstractConnPool::_class = nullptr;
jclass org::apache::http::impl::conn::tsccm::PoolEntryRequest::_class = nullptr;
jclass org::apache::http::impl::conn::tsccm::RefQueueWorker::_class = nullptr;
jclass org::apache::http::impl::conn::tsccm::BasicPooledConnAdapter::_class = nullptr;
jclass org::apache::http::impl::conn::tsccm::WaitingThreadAborter::_class = nullptr;
jclass org::apache::http::impl::conn::tsccm::RefQueueHandler::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::tsccm::BasicPoolEntryRef::BasicPoolEntryRef(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry& arg0, const ::java::lang::ref::ReferenceQueue& arg1) : ::java::lang::Object((jobject)0), ::java::lang::ref::Reference((jobject)0), ::java::lang::ref::WeakReference((jobject)0) {
    if (!::org::apache::http::impl::conn::tsccm::BasicPoolEntryRef::_class) ::org::apache::http::impl::conn::tsccm::BasicPoolEntryRef::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/BasicPoolEntryRef");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;Ljava/lang/ref/ReferenceQueue;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::apache::http::conn::routing::HttpRoute org::apache::http::impl::conn::tsccm::BasicPoolEntryRef::getRoute() const {
    if (!::org::apache::http::impl::conn::tsccm::BasicPoolEntryRef::_class) ::org::apache::http::impl::conn::tsccm::BasicPoolEntryRef::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/BasicPoolEntryRef");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoute", "()Lorg/apache/http/conn/routing/HttpRoute;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::HttpRoute _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::tsccm::WaitingThread::WaitingThread(const ::java::util::concurrent::locks::Condition& arg0, const ::org::apache::http::impl::conn::tsccm::RouteSpecificPool& arg1) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::impl::conn::tsccm::WaitingThread::_class) ::org::apache::http::impl::conn::tsccm::WaitingThread::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/WaitingThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/concurrent/locks/Condition;Lorg/apache/http/impl/conn/tsccm/RouteSpecificPool;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::util::concurrent::locks::Condition org::apache::http::impl::conn::tsccm::WaitingThread::getCondition() const {
    if (!::org::apache::http::impl::conn::tsccm::WaitingThread::_class) ::org::apache::http::impl::conn::tsccm::WaitingThread::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/WaitingThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCondition", "()Ljava/util/concurrent/locks/Condition;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::locks::Condition _ret(ret);
    return _ret;
}

::org::apache::http::impl::conn::tsccm::RouteSpecificPool org::apache::http::impl::conn::tsccm::WaitingThread::getPool() const {
    if (!::org::apache::http::impl::conn::tsccm::WaitingThread::_class) ::org::apache::http::impl::conn::tsccm::WaitingThread::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/WaitingThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPool", "()Lorg/apache/http/impl/conn/tsccm/RouteSpecificPool;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::impl::conn::tsccm::RouteSpecificPool _ret(ret);
    return _ret;
}

::java::lang::Thread org::apache::http::impl::conn::tsccm::WaitingThread::getThread() const {
    if (!::org::apache::http::impl::conn::tsccm::WaitingThread::_class) ::org::apache::http::impl::conn::tsccm::WaitingThread::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/WaitingThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThread", "()Ljava/lang/Thread;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Thread _ret(ret);
    return _ret;
}

bool org::apache::http::impl::conn::tsccm::WaitingThread::await(const ::java::util::Date& arg0) const {
    if (!::org::apache::http::impl::conn::tsccm::WaitingThread::_class) ::org::apache::http::impl::conn::tsccm::WaitingThread::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/WaitingThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "await", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::tsccm::WaitingThread::wakeup() const {
    if (!::org::apache::http::impl::conn::tsccm::WaitingThread::_class) ::org::apache::http::impl::conn::tsccm::WaitingThread::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/WaitingThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "wakeup", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::tsccm::WaitingThread::interrupt() const {
    if (!::org::apache::http::impl::conn::tsccm::WaitingThread::_class) ::org::apache::http::impl::conn::tsccm::WaitingThread::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/WaitingThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "interrupt", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::ConnPoolByRoute(const ::org::apache::http::conn::ClientConnectionOperator& arg0, const ::org::apache::http::params::HttpParams& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::conn::tsccm::AbstractConnPool((jobject)0), ::org::apache::http::impl::conn::tsccm::RefQueueHandler((jobject)0) {
    if (!::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class) ::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ConnPoolByRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/conn/ClientConnectionOperator;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::impl::conn::tsccm::ConnPoolByRoute::getConnectionsInPool(const ::org::apache::http::conn::routing::HttpRoute& arg0) const {
    if (!::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class) ::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ConnPoolByRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionsInPool", "(Lorg/apache/http/conn/routing/HttpRoute;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::org::apache::http::impl::conn::tsccm::PoolEntryRequest org::apache::http::impl::conn::tsccm::ConnPoolByRoute::requestPoolEntry(const ::org::apache::http::conn::routing::HttpRoute& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class) ::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ConnPoolByRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestPoolEntry", "(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;)Lorg/apache/http/impl/conn/tsccm/PoolEntryRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::impl::conn::tsccm::PoolEntryRequest _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::tsccm::ConnPoolByRoute::freeEntry(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry& arg0, bool arg1, int64_t arg2, const ::java::util::concurrent::TimeUnit& arg3) const {
    if (!::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class) ::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ConnPoolByRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "freeEntry", "(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;ZJLjava/util/concurrent/TimeUnit;)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void org::apache::http::impl::conn::tsccm::ConnPoolByRoute::deleteClosedConnections() const {
    if (!::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class) ::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ConnPoolByRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteClosedConnections", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::tsccm::ConnPoolByRoute::shutdown() const {
    if (!::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class) ::org::apache::http::impl::conn::tsccm::ConnPoolByRoute::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ConnPoolByRoute");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::tsccm::BasicPoolEntry::BasicPoolEntry(const ::org::apache::http::conn::ClientConnectionOperator& arg0, const ::org::apache::http::conn::routing::HttpRoute& arg1, const ::java::lang::ref::ReferenceQueue& arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::conn::AbstractPoolEntry((jobject)0) {
    if (!::org::apache::http::impl::conn::tsccm::BasicPoolEntry::_class) ::org::apache::http::impl::conn::tsccm::BasicPoolEntry::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/BasicPoolEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/conn/ClientConnectionOperator;Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/ref/ReferenceQueue;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::ThreadSafeClientConnManager(const ::org::apache::http::params::HttpParams& arg0, const ::org::apache::http::conn::scheme::SchemeRegistry& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::ClientConnectionManager((jobject)0) {
    if (!::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class) ::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;Lorg/apache/http/conn/scheme/SchemeRegistry;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::apache::http::conn::scheme::SchemeRegistry org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::getSchemeRegistry() const {
    if (!::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class) ::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemeRegistry", "()Lorg/apache/http/conn/scheme/SchemeRegistry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::scheme::SchemeRegistry _ret(ret);
    return _ret;
}

::org::apache::http::conn::ClientConnectionRequest org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::requestConnection(const ::org::apache::http::conn::routing::HttpRoute& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class) ::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestConnection", "(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;)Lorg/apache/http/conn/ClientConnectionRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::conn::ClientConnectionRequest _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::releaseConnection(const ::org::apache::http::conn::ManagedClientConnection& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class) ::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseConnection", "(Lorg/apache/http/conn/ManagedClientConnection;JLjava/util/concurrent/TimeUnit;)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::shutdown() const {
    if (!::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class) ::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::getConnectionsInPool(const ::org::apache::http::conn::routing::HttpRoute& arg0) const {
    if (!::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class) ::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionsInPool", "(Lorg/apache/http/conn/routing/HttpRoute;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::getConnectionsInPool() const {
    if (!::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class) ::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionsInPool", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::closeIdleConnections(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class) ::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeIdleConnections", "(JLjava/util/concurrent/TimeUnit;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::closeExpiredConnections() const {
    if (!::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class) ::org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeExpiredConnections", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::tsccm::RouteSpecificPool::RouteSpecificPool(const ::org::apache::http::conn::routing::HttpRoute& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/conn/routing/HttpRoute;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::apache::http::conn::routing::HttpRoute org::apache::http::impl::conn::tsccm::RouteSpecificPool::getRoute() const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoute", "()Lorg/apache/http/conn/routing/HttpRoute;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::HttpRoute _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::conn::tsccm::RouteSpecificPool::getMaxEntries() const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxEntries", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::apache::http::impl::conn::tsccm::RouteSpecificPool::isUnused() const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "isUnused", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t org::apache::http::impl::conn::tsccm::RouteSpecificPool::getCapacity() const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCapacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::impl::conn::tsccm::RouteSpecificPool::getEntryCount() const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntryCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::impl::conn::tsccm::BasicPoolEntry org::apache::http::impl::conn::tsccm::RouteSpecificPool::allocEntry(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "allocEntry", "(Ljava/lang/Object;)Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::impl::conn::tsccm::BasicPoolEntry _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::tsccm::RouteSpecificPool::freeEntry(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry& arg0) const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "freeEntry", "(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::tsccm::RouteSpecificPool::createdEntry(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry& arg0) const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "createdEntry", "(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::conn::tsccm::RouteSpecificPool::deleteEntry(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry& arg0) const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteEntry", "(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::tsccm::RouteSpecificPool::dropEntry() const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "dropEntry", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::tsccm::RouteSpecificPool::queueThread(const ::org::apache::http::impl::conn::tsccm::WaitingThread& arg0) const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "queueThread", "(Lorg/apache/http/impl/conn/tsccm/WaitingThread;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::conn::tsccm::RouteSpecificPool::hasThread() const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasThread", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::impl::conn::tsccm::WaitingThread org::apache::http::impl::conn::tsccm::RouteSpecificPool::nextThread() const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextThread", "()Lorg/apache/http/impl/conn/tsccm/WaitingThread;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::impl::conn::tsccm::WaitingThread _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::tsccm::RouteSpecificPool::removeThread(const ::org::apache::http::impl::conn::tsccm::WaitingThread& arg0) const {
    if (!::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class) ::org::apache::http::impl::conn::tsccm::RouteSpecificPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RouteSpecificPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeThread", "(Lorg/apache/http/impl/conn/tsccm/WaitingThread;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::tsccm::AbstractConnPool::enableConnectionGC() const {
    if (!::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class) ::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/AbstractConnPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "enableConnectionGC", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::impl::conn::tsccm::BasicPoolEntry org::apache::http::impl::conn::tsccm::AbstractConnPool::getEntry(const ::org::apache::http::conn::routing::HttpRoute& arg0, const ::java::lang::Object& arg1, int64_t arg2, const ::java::util::concurrent::TimeUnit& arg3) const {
    if (!::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class) ::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/AbstractConnPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntry", "(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::org::apache::http::impl::conn::tsccm::BasicPoolEntry _ret(ret);
    return _ret;
}

::org::apache::http::impl::conn::tsccm::PoolEntryRequest org::apache::http::impl::conn::tsccm::AbstractConnPool::requestPoolEntry(const ::org::apache::http::conn::routing::HttpRoute& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class) ::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/AbstractConnPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestPoolEntry", "(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;)Lorg/apache/http/impl/conn/tsccm/PoolEntryRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::impl::conn::tsccm::PoolEntryRequest _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::tsccm::AbstractConnPool::freeEntry(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry& arg0, bool arg1, int64_t arg2, const ::java::util::concurrent::TimeUnit& arg3) const {
    if (!::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class) ::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/AbstractConnPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "freeEntry", "(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;ZJLjava/util/concurrent/TimeUnit;)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void org::apache::http::impl::conn::tsccm::AbstractConnPool::handleReference(const ::java::lang::ref::Reference& arg0) const {
    if (!::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class) ::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/AbstractConnPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleReference", "(Ljava/lang/ref/Reference;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::tsccm::AbstractConnPool::closeIdleConnections(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class) ::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/AbstractConnPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeIdleConnections", "(JLjava/util/concurrent/TimeUnit;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::conn::tsccm::AbstractConnPool::closeExpiredConnections() const {
    if (!::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class) ::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/AbstractConnPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeExpiredConnections", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::tsccm::AbstractConnPool::deleteClosedConnections() const {
    if (!::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class) ::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/AbstractConnPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteClosedConnections", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::tsccm::AbstractConnPool::shutdown() const {
    if (!::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class) ::org::apache::http::impl::conn::tsccm::AbstractConnPool::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/AbstractConnPool");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::impl::conn::tsccm::BasicPoolEntry org::apache::http::impl::conn::tsccm::PoolEntryRequest::getPoolEntry(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::org::apache::http::impl::conn::tsccm::PoolEntryRequest::_class) ::org::apache::http::impl::conn::tsccm::PoolEntryRequest::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/PoolEntryRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPoolEntry", "(JLjava/util/concurrent/TimeUnit;)Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::impl::conn::tsccm::BasicPoolEntry _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::tsccm::PoolEntryRequest::abortRequest() const {
    if (!::org::apache::http::impl::conn::tsccm::PoolEntryRequest::_class) ::org::apache::http::impl::conn::tsccm::PoolEntryRequest::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/PoolEntryRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortRequest", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::tsccm::RefQueueWorker::RefQueueWorker(const ::java::lang::ref::ReferenceQueue& arg0, const ::org::apache::http::impl::conn::tsccm::RefQueueHandler& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::org::apache::http::impl::conn::tsccm::RefQueueWorker::_class) ::org::apache::http::impl::conn::tsccm::RefQueueWorker::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RefQueueWorker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/ref/ReferenceQueue;Lorg/apache/http/impl/conn/tsccm/RefQueueHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::conn::tsccm::RefQueueWorker::run() const {
    if (!::org::apache::http::impl::conn::tsccm::RefQueueWorker::_class) ::org::apache::http::impl::conn::tsccm::RefQueueWorker::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RefQueueWorker");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::tsccm::RefQueueWorker::shutdown() const {
    if (!::org::apache::http::impl::conn::tsccm::RefQueueWorker::_class) ::org::apache::http::impl::conn::tsccm::RefQueueWorker::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RefQueueWorker");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String org::apache::http::impl::conn::tsccm::RefQueueWorker::toString() const {
    if (!::org::apache::http::impl::conn::tsccm::RefQueueWorker::_class) ::org::apache::http::impl::conn::tsccm::RefQueueWorker::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RefQueueWorker");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::tsccm::WaitingThreadAborter::WaitingThreadAborter() : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::impl::conn::tsccm::WaitingThreadAborter::_class) ::org::apache::http::impl::conn::tsccm::WaitingThreadAborter::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/WaitingThreadAborter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::conn::tsccm::WaitingThreadAborter::abort() const {
    if (!::org::apache::http::impl::conn::tsccm::WaitingThreadAborter::_class) ::org::apache::http::impl::conn::tsccm::WaitingThreadAborter::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/WaitingThreadAborter");
    static jmethodID mid = java::jni->GetMethodID(_class, "abort", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::tsccm::WaitingThreadAborter::setWaitingThread(const ::org::apache::http::impl::conn::tsccm::WaitingThread& arg0) const {
    if (!::org::apache::http::impl::conn::tsccm::WaitingThreadAborter::_class) ::org::apache::http::impl::conn::tsccm::WaitingThreadAborter::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/WaitingThreadAborter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWaitingThread", "(Lorg/apache/http/impl/conn/tsccm/WaitingThread;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::tsccm::RefQueueHandler::handleReference(const ::java::lang::ref::Reference& arg0) const {
    if (!::org::apache::http::impl::conn::tsccm::RefQueueHandler::_class) ::org::apache::http::impl::conn::tsccm::RefQueueHandler::_class = java::fetch_class("org/apache/http/impl/conn/tsccm/RefQueueHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleReference", "(Ljava/lang/ref/Reference;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

