#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Thread.hpp"
#include "java.util.Collection.hpp"
#include "java.util.Date.hpp"
#include "java.util.concurrent.TimeUnit.hpp"
#include "java.util.concurrent.locks.AbstractOwnableSynchronizer.hpp"
#include "java.util.concurrent.locks.AbstractQueuedLongSynchronizer.hpp"
#include "java.util.concurrent.locks.AbstractQueuedSynchronizer.hpp"
#include "java.util.concurrent.locks.Condition.hpp"
#include "java.util.concurrent.locks.Lock.hpp"
#include "java.util.concurrent.locks.LockSupport.hpp"
#include "java.util.concurrent.locks.ReadWriteLock.hpp"
#include "java.util.concurrent.locks.ReentrantLock.hpp"
#include "java.util.concurrent.locks.ReentrantReadWriteLock.hpp"

jclass java::util::concurrent::locks::Condition::_class = nullptr;
jclass java::util::concurrent::locks::LockSupport::_class = nullptr;
jclass java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class = nullptr;
jclass java::util::concurrent::locks::AbstractOwnableSynchronizer::_class = nullptr;
jclass java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = nullptr;
jclass java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class = nullptr;
jclass java::util::concurrent::locks::ReentrantLock::_class = nullptr;
jclass java::util::concurrent::locks::Lock::_class = nullptr;
jclass java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class = nullptr;
jclass java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = nullptr;
jclass java::util::concurrent::locks::ReentrantReadWriteLock::_class = nullptr;
jclass java::util::concurrent::locks::ReadWriteLock::_class = nullptr;
jclass java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class = nullptr;

void java::util::concurrent::locks::Condition::await() const {
    if (!::java::util::concurrent::locks::Condition::_class) ::java::util::concurrent::locks::Condition::_class = java::fetch_class("java/util/concurrent/locks/Condition");
    static jmethodID mid = java::jni->GetMethodID(_class, "await", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::Condition::awaitUninterruptibly() const {
    if (!::java::util::concurrent::locks::Condition::_class) ::java::util::concurrent::locks::Condition::_class = java::fetch_class("java/util/concurrent/locks/Condition");
    static jmethodID mid = java::jni->GetMethodID(_class, "awaitUninterruptibly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::util::concurrent::locks::Condition::awaitNanos(int64_t arg0) const {
    if (!::java::util::concurrent::locks::Condition::_class) ::java::util::concurrent::locks::Condition::_class = java::fetch_class("java/util/concurrent/locks/Condition");
    static jmethodID mid = java::jni->GetMethodID(_class, "awaitNanos", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::Condition::await(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::locks::Condition::_class) ::java::util::concurrent::locks::Condition::_class = java::fetch_class("java/util/concurrent/locks/Condition");
    static jmethodID mid = java::jni->GetMethodID(_class, "await", "(JLjava/util/concurrent/TimeUnit;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::locks::Condition::awaitUntil(const ::java::util::Date& arg0) const {
    if (!::java::util::concurrent::locks::Condition::_class) ::java::util::concurrent::locks::Condition::_class = java::fetch_class("java/util/concurrent/locks/Condition");
    static jmethodID mid = java::jni->GetMethodID(_class, "awaitUntil", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::locks::Condition::signal() const {
    if (!::java::util::concurrent::locks::Condition::_class) ::java::util::concurrent::locks::Condition::_class = java::fetch_class("java/util/concurrent/locks/Condition");
    static jmethodID mid = java::jni->GetMethodID(_class, "signal", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::Condition::signalAll() const {
    if (!::java::util::concurrent::locks::Condition::_class) ::java::util::concurrent::locks::Condition::_class = java::fetch_class("java/util/concurrent/locks/Condition");
    static jmethodID mid = java::jni->GetMethodID(_class, "signalAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::LockSupport::unpark(const ::java::lang::Thread& arg0){
    if (!::java::util::concurrent::locks::LockSupport::_class) ::java::util::concurrent::locks::LockSupport::_class = java::fetch_class("java/util/concurrent/locks/LockSupport");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unpark", "(Ljava/lang/Thread;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::concurrent::locks::LockSupport::park(const ::java::lang::Object& arg0){
    if (!::java::util::concurrent::locks::LockSupport::_class) ::java::util::concurrent::locks::LockSupport::_class = java::fetch_class("java/util/concurrent/locks/LockSupport");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "park", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::concurrent::locks::LockSupport::parkNanos(const ::java::lang::Object& arg0, int64_t arg1){
    if (!::java::util::concurrent::locks::LockSupport::_class) ::java::util::concurrent::locks::LockSupport::_class = java::fetch_class("java/util/concurrent/locks/LockSupport");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parkNanos", "(Ljava/lang/Object;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::util::concurrent::locks::LockSupport::parkUntil(const ::java::lang::Object& arg0, int64_t arg1){
    if (!::java::util::concurrent::locks::LockSupport::_class) ::java::util::concurrent::locks::LockSupport::_class = java::fetch_class("java/util/concurrent/locks/LockSupport");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parkUntil", "(Ljava/lang/Object;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::Object java::util::concurrent::locks::LockSupport::getBlocker(const ::java::lang::Thread& arg0){
    if (!::java::util::concurrent::locks::LockSupport::_class) ::java::util::concurrent::locks::LockSupport::_class = java::fetch_class("java/util/concurrent/locks/LockSupport");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBlocker", "(Ljava/lang/Thread;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::concurrent::locks::LockSupport::park(){
    if (!::java::util::concurrent::locks::LockSupport::_class) ::java::util::concurrent::locks::LockSupport::_class = java::fetch_class("java/util/concurrent/locks/LockSupport");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "park", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void java::util::concurrent::locks::LockSupport::parkNanos(int64_t arg0){
    if (!::java::util::concurrent::locks::LockSupport::_class) ::java::util::concurrent::locks::LockSupport::_class = java::fetch_class("java/util/concurrent/locks/LockSupport");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parkNanos", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::concurrent::locks::LockSupport::parkUntil(int64_t arg0){
    if (!::java::util::concurrent::locks::LockSupport::_class) ::java::util::concurrent::locks::LockSupport::_class = java::fetch_class("java/util/concurrent/locks/LockSupport");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parkUntil", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::lock() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "lock", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::lockInterruptibly() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "lockInterruptibly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::tryLock() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryLock", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::tryLock(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryLock", "(JLjava/util/concurrent/TimeUnit;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::unlock() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "unlock", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::concurrent::locks::Condition java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::newCondition() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "newCondition", "()Ljava/util/concurrent/locks/Condition;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::locks::Condition _ret(ret);
    return _ret;
}

::java::lang::String java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::toString() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::isHeldByCurrentThread() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHeldByCurrentThread", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::getHoldCount() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHoldCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::concurrent::locks::AbstractQueuedLongSynchronizer::acquire(int64_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquire", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::locks::AbstractQueuedLongSynchronizer::acquireInterruptibly(int64_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireInterruptibly", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::AbstractQueuedLongSynchronizer::tryAcquireNanos(int64_t arg0, int64_t arg1) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryAcquireNanos", "(JJ)Z");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::locks::AbstractQueuedLongSynchronizer::release(int64_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "(J)Z");
    int64_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::locks::AbstractQueuedLongSynchronizer::acquireShared(int64_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireShared", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::locks::AbstractQueuedLongSynchronizer::acquireSharedInterruptibly(int64_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireSharedInterruptibly", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::AbstractQueuedLongSynchronizer::tryAcquireSharedNanos(int64_t arg0, int64_t arg1) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryAcquireSharedNanos", "(JJ)Z");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::locks::AbstractQueuedLongSynchronizer::releaseShared(int64_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseShared", "(J)Z");
    int64_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::AbstractQueuedLongSynchronizer::hasQueuedThreads() const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasQueuedThreads", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::locks::AbstractQueuedLongSynchronizer::hasContended() const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasContended", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Thread java::util::concurrent::locks::AbstractQueuedLongSynchronizer::getFirstQueuedThread() const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirstQueuedThread", "()Ljava/lang/Thread;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Thread _ret(ret);
    return _ret;
}

bool java::util::concurrent::locks::AbstractQueuedLongSynchronizer::isQueued(const ::java::lang::Thread& arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isQueued", "(Ljava/lang/Thread;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::locks::AbstractQueuedLongSynchronizer::getQueueLength() const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Collection java::util::concurrent::locks::AbstractQueuedLongSynchronizer::getQueuedThreads() const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueuedThreads", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Collection java::util::concurrent::locks::AbstractQueuedLongSynchronizer::getExclusiveQueuedThreads() const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExclusiveQueuedThreads", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Collection java::util::concurrent::locks::AbstractQueuedLongSynchronizer::getSharedQueuedThreads() const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSharedQueuedThreads", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::String java::util::concurrent::locks::AbstractQueuedLongSynchronizer::toString() const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::concurrent::locks::AbstractQueuedLongSynchronizer::owns(const ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject& arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "owns", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::AbstractQueuedLongSynchronizer::hasWaiters(const ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject& arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasWaiters", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::locks::AbstractQueuedLongSynchronizer::getWaitQueueLength(const ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject& arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWaitQueueLength", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::Collection java::util::concurrent::locks::AbstractQueuedLongSynchronizer::getWaitingThreads(const ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject& arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWaitingThreads", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

void java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::lock() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$ReadLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "lock", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::lockInterruptibly() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$ReadLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "lockInterruptibly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::tryLock() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$ReadLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryLock", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::tryLock(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$ReadLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryLock", "(JLjava/util/concurrent/TimeUnit;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::unlock() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$ReadLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "unlock", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::concurrent::locks::Condition java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::newCondition() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$ReadLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "newCondition", "()Ljava/util/concurrent/locks/Condition;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::locks::Condition _ret(ret);
    return _ret;
}

::java::lang::String java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::toString() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock$ReadLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::locks::ReentrantLock::ReentrantLock() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::Lock((jobject)0) {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::locks::ReentrantLock::ReentrantLock(bool arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::Lock((jobject)0) {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::concurrent::locks::ReentrantLock::lock() const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "lock", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::ReentrantLock::lockInterruptibly() const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "lockInterruptibly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantLock::tryLock() const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryLock", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantLock::tryLock(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryLock", "(JLjava/util/concurrent/TimeUnit;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::locks::ReentrantLock::unlock() const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "unlock", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::concurrent::locks::Condition java::util::concurrent::locks::ReentrantLock::newCondition() const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "newCondition", "()Ljava/util/concurrent/locks/Condition;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::locks::Condition _ret(ret);
    return _ret;
}

int32_t java::util::concurrent::locks::ReentrantLock::getHoldCount() const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHoldCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantLock::isHeldByCurrentThread() const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHeldByCurrentThread", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantLock::isLocked() const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLocked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantLock::isFair() const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFair", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantLock::hasQueuedThreads() const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasQueuedThreads", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantLock::hasQueuedThread(const ::java::lang::Thread& arg0) const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasQueuedThread", "(Ljava/lang/Thread;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::locks::ReentrantLock::getQueueLength() const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantLock::hasWaiters(const ::java::util::concurrent::locks::Condition& arg0) const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasWaiters", "(Ljava/util/concurrent/locks/Condition;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::locks::ReentrantLock::getWaitQueueLength(const ::java::util::concurrent::locks::Condition& arg0) const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWaitQueueLength", "(Ljava/util/concurrent/locks/Condition;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::util::concurrent::locks::ReentrantLock::toString() const {
    if (!::java::util::concurrent::locks::ReentrantLock::_class) ::java::util::concurrent::locks::ReentrantLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::concurrent::locks::Lock::lock() const {
    if (!::java::util::concurrent::locks::Lock::_class) ::java::util::concurrent::locks::Lock::_class = java::fetch_class("java/util/concurrent/locks/Lock");
    static jmethodID mid = java::jni->GetMethodID(_class, "lock", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::Lock::lockInterruptibly() const {
    if (!::java::util::concurrent::locks::Lock::_class) ::java::util::concurrent::locks::Lock::_class = java::fetch_class("java/util/concurrent/locks/Lock");
    static jmethodID mid = java::jni->GetMethodID(_class, "lockInterruptibly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::concurrent::locks::Lock::tryLock() const {
    if (!::java::util::concurrent::locks::Lock::_class) ::java::util::concurrent::locks::Lock::_class = java::fetch_class("java/util/concurrent/locks/Lock");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryLock", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::locks::Lock::tryLock(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::locks::Lock::_class) ::java::util::concurrent::locks::Lock::_class = java::fetch_class("java/util/concurrent/locks/Lock");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryLock", "(JLjava/util/concurrent/TimeUnit;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::locks::Lock::unlock() const {
    if (!::java::util::concurrent::locks::Lock::_class) ::java::util::concurrent::locks::Lock::_class = java::fetch_class("java/util/concurrent/locks/Lock");
    static jmethodID mid = java::jni->GetMethodID(_class, "unlock", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::concurrent::locks::Condition java::util::concurrent::locks::Lock::newCondition() const {
    if (!::java::util::concurrent::locks::Lock::_class) ::java::util::concurrent::locks::Lock::_class = java::fetch_class("java/util/concurrent/locks/Lock");
    static jmethodID mid = java::jni->GetMethodID(_class, "newCondition", "()Ljava/util/concurrent/locks/Condition;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::locks::Condition _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::AbstractQueuedSynchronizer_ConditionObject(const ::java::util::concurrent::locks::AbstractQueuedSynchronizer& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::Condition((jobject)0) {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::signal() const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "signal", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::signalAll() const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "signalAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::awaitUninterruptibly() const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "awaitUninterruptibly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::await() const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "await", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::awaitNanos(int64_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "awaitNanos", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::awaitUntil(const ::java::util::Date& arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "awaitUntil", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::await(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "await", "(JLjava/util/concurrent/TimeUnit;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer::acquire(int32_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquire", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer::acquireInterruptibly(int32_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireInterruptibly", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::AbstractQueuedSynchronizer::tryAcquireNanos(int32_t arg0, int64_t arg1) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryAcquireNanos", "(IJ)Z");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::locks::AbstractQueuedSynchronizer::release(int32_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer::acquireShared(int32_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireShared", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer::acquireSharedInterruptibly(int32_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireSharedInterruptibly", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::AbstractQueuedSynchronizer::tryAcquireSharedNanos(int32_t arg0, int64_t arg1) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryAcquireSharedNanos", "(IJ)Z");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::locks::AbstractQueuedSynchronizer::releaseShared(int32_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseShared", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::AbstractQueuedSynchronizer::hasQueuedThreads() const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasQueuedThreads", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::locks::AbstractQueuedSynchronizer::hasContended() const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasContended", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Thread java::util::concurrent::locks::AbstractQueuedSynchronizer::getFirstQueuedThread() const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirstQueuedThread", "()Ljava/lang/Thread;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Thread _ret(ret);
    return _ret;
}

bool java::util::concurrent::locks::AbstractQueuedSynchronizer::isQueued(const ::java::lang::Thread& arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isQueued", "(Ljava/lang/Thread;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::locks::AbstractQueuedSynchronizer::getQueueLength() const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Collection java::util::concurrent::locks::AbstractQueuedSynchronizer::getQueuedThreads() const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueuedThreads", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Collection java::util::concurrent::locks::AbstractQueuedSynchronizer::getExclusiveQueuedThreads() const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExclusiveQueuedThreads", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Collection java::util::concurrent::locks::AbstractQueuedSynchronizer::getSharedQueuedThreads() const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSharedQueuedThreads", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::String java::util::concurrent::locks::AbstractQueuedSynchronizer::toString() const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::concurrent::locks::AbstractQueuedSynchronizer::owns(const ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject& arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "owns", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::AbstractQueuedSynchronizer::hasWaiters(const ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject& arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasWaiters", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::locks::AbstractQueuedSynchronizer::getWaitQueueLength(const ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject& arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWaitQueueLength", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::Collection java::util::concurrent::locks::AbstractQueuedSynchronizer::getWaitingThreads(const ::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject& arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class) ::java::util::concurrent::locks::AbstractQueuedSynchronizer::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedSynchronizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWaitingThreads", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::locks::ReentrantReadWriteLock::ReentrantReadWriteLock() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::ReadWriteLock((jobject)0) {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::locks::ReentrantReadWriteLock::ReentrantReadWriteLock(bool arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::ReadWriteLock((jobject)0) {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock java::util::concurrent::locks::ReentrantReadWriteLock::writeLock() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLock", "()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock _ret(ret);
    return _ret;
}

::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock java::util::concurrent::locks::ReentrantReadWriteLock::readLock() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLock", "()Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock _ret(ret);
    return _ret;
}

bool java::util::concurrent::locks::ReentrantReadWriteLock::isFair() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFair", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::concurrent::locks::ReentrantReadWriteLock::getReadLockCount() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReadLockCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantReadWriteLock::isWriteLocked() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWriteLocked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantReadWriteLock::isWriteLockedByCurrentThread() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWriteLockedByCurrentThread", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::concurrent::locks::ReentrantReadWriteLock::getWriteHoldCount() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWriteHoldCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::locks::ReentrantReadWriteLock::getReadHoldCount() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReadHoldCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantReadWriteLock::hasQueuedThreads() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasQueuedThreads", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantReadWriteLock::hasQueuedThread(const ::java::lang::Thread& arg0) const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasQueuedThread", "(Ljava/lang/Thread;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::locks::ReentrantReadWriteLock::getQueueLength() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::locks::ReentrantReadWriteLock::hasWaiters(const ::java::util::concurrent::locks::Condition& arg0) const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasWaiters", "(Ljava/util/concurrent/locks/Condition;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::locks::ReentrantReadWriteLock::getWaitQueueLength(const ::java::util::concurrent::locks::Condition& arg0) const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWaitQueueLength", "(Ljava/util/concurrent/locks/Condition;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::util::concurrent::locks::ReentrantReadWriteLock::toString() const {
    if (!::java::util::concurrent::locks::ReentrantReadWriteLock::_class) ::java::util::concurrent::locks::ReentrantReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReentrantReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::concurrent::locks::Lock java::util::concurrent::locks::ReadWriteLock::readLock() const {
    if (!::java::util::concurrent::locks::ReadWriteLock::_class) ::java::util::concurrent::locks::ReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLock", "()Ljava/util/concurrent/locks/Lock;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::locks::Lock _ret(ret);
    return _ret;
}

::java::util::concurrent::locks::Lock java::util::concurrent::locks::ReadWriteLock::writeLock() const {
    if (!::java::util::concurrent::locks::ReadWriteLock::_class) ::java::util::concurrent::locks::ReadWriteLock::_class = java::fetch_class("java/util/concurrent/locks/ReadWriteLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLock", "()Ljava/util/concurrent/locks/Lock;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::locks::Lock _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::AbstractQueuedLongSynchronizer_ConditionObject(const ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::concurrent::locks::Condition((jobject)0) {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::signal() const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "signal", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::signalAll() const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "signalAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::awaitUninterruptibly() const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "awaitUninterruptibly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::await() const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "await", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::awaitNanos(int64_t arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "awaitNanos", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::awaitUntil(const ::java::util::Date& arg0) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "awaitUntil", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::await(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class) ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject::_class = java::fetch_class("java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "await", "(JLjava/util/concurrent/TimeUnit;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

