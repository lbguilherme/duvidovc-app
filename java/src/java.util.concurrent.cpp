#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Thread.hpp"
#include "java.lang.Throwable.hpp"
#include "java.security.PrivilegedAction.hpp"
#include "java.security.PrivilegedExceptionAction.hpp"
#include "java.util.Collection.hpp"
#include "java.util.Comparator.hpp"
#include "java.util.Enumeration.hpp"
#include "java.util.Iterator.hpp"
#include "java.util.List.hpp"
#include "java.util.ListIterator.hpp"
#include "java.util.Map.hpp"
#include "java.util.NavigableSet.hpp"
#include "java.util.Set.hpp"
#include "java.util.SortedMap.hpp"
#include "java.util.SortedSet.hpp"
#include "java.util.concurrent.AbstractExecutorService.hpp"
#include "java.util.concurrent.ArrayBlockingQueue.hpp"
#include "java.util.concurrent.BlockingDeque.hpp"
#include "java.util.concurrent.BlockingQueue.hpp"
#include "java.util.concurrent.BrokenBarrierException.hpp"
#include "java.util.concurrent.Callable.hpp"
#include "java.util.concurrent.CancellationException.hpp"
#include "java.util.concurrent.CompletionService.hpp"
#include "java.util.concurrent.ConcurrentHashMap.hpp"
#include "java.util.concurrent.ConcurrentLinkedQueue.hpp"
#include "java.util.concurrent.ConcurrentMap.hpp"
#include "java.util.concurrent.ConcurrentNavigableMap.hpp"
#include "java.util.concurrent.ConcurrentSkipListMap.hpp"
#include "java.util.concurrent.ConcurrentSkipListSet.hpp"
#include "java.util.concurrent.CopyOnWriteArrayList.hpp"
#include "java.util.concurrent.CopyOnWriteArraySet.hpp"
#include "java.util.concurrent.CountDownLatch.hpp"
#include "java.util.concurrent.CyclicBarrier.hpp"
#include "java.util.concurrent.DelayQueue.hpp"
#include "java.util.concurrent.Delayed.hpp"
#include "java.util.concurrent.Exchanger.hpp"
#include "java.util.concurrent.ExecutionException.hpp"
#include "java.util.concurrent.Executor.hpp"
#include "java.util.concurrent.ExecutorCompletionService.hpp"
#include "java.util.concurrent.ExecutorService.hpp"
#include "java.util.concurrent.Executors.hpp"
#include "java.util.concurrent.Future.hpp"
#include "java.util.concurrent.FutureTask.hpp"
#include "java.util.concurrent.LinkedBlockingDeque.hpp"
#include "java.util.concurrent.LinkedBlockingQueue.hpp"
#include "java.util.concurrent.PriorityBlockingQueue.hpp"
#include "java.util.concurrent.RejectedExecutionException.hpp"
#include "java.util.concurrent.RejectedExecutionHandler.hpp"
#include "java.util.concurrent.RunnableFuture.hpp"
#include "java.util.concurrent.RunnableScheduledFuture.hpp"
#include "java.util.concurrent.ScheduledExecutorService.hpp"
#include "java.util.concurrent.ScheduledFuture.hpp"
#include "java.util.concurrent.ScheduledThreadPoolExecutor.hpp"
#include "java.util.concurrent.Semaphore.hpp"
#include "java.util.concurrent.SynchronousQueue.hpp"
#include "java.util.concurrent.ThreadFactory.hpp"
#include "java.util.concurrent.ThreadPoolExecutor.hpp"
#include "java.util.concurrent.TimeUnit.hpp"
#include "java.util.concurrent.TimeoutException.hpp"

jclass java::util::concurrent::BlockingDeque::_class = nullptr;
jclass java::util::concurrent::ConcurrentHashMap::_class = nullptr;
jclass java::util::concurrent::DelayQueue::_class = nullptr;
jclass java::util::concurrent::ArrayBlockingQueue::_class = nullptr;
jclass java::util::concurrent::Executor::_class = nullptr;
jclass java::util::concurrent::AbstractExecutorService::_class = nullptr;
jclass java::util::concurrent::Delayed::_class = nullptr;
jclass java::util::concurrent::ThreadPoolExecutor_DiscardOldestPolicy::_class = nullptr;
jclass java::util::concurrent::SynchronousQueue::_class = nullptr;
jclass java::util::concurrent::LinkedBlockingQueue::_class = nullptr;
jclass java::util::concurrent::RejectedExecutionHandler::_class = nullptr;
jclass java::util::concurrent::CopyOnWriteArrayList::_class = nullptr;
jclass java::util::concurrent::ExecutionException::_class = nullptr;
jclass java::util::concurrent::RejectedExecutionException::_class = nullptr;
jclass java::util::concurrent::ThreadPoolExecutor_AbortPolicy::_class = nullptr;
jclass java::util::concurrent::Executors::_class = nullptr;
jclass java::util::concurrent::BlockingQueue::_class = nullptr;
jclass java::util::concurrent::PriorityBlockingQueue::_class = nullptr;
jclass java::util::concurrent::ExecutorCompletionService::_class = nullptr;
jclass java::util::concurrent::ConcurrentLinkedQueue::_class = nullptr;
jclass java::util::concurrent::BrokenBarrierException::_class = nullptr;
jclass java::util::concurrent::TimeoutException::_class = nullptr;
jclass java::util::concurrent::ConcurrentSkipListSet::_class = nullptr;
jclass java::util::concurrent::Semaphore::_class = nullptr;
jclass java::util::concurrent::Callable::_class = nullptr;
jclass java::util::concurrent::FutureTask::_class = nullptr;
jclass java::util::concurrent::CyclicBarrier::_class = nullptr;
jclass java::util::concurrent::ConcurrentMap::_class = nullptr;
jclass java::util::concurrent::LinkedBlockingDeque::_class = nullptr;
jclass java::util::concurrent::ConcurrentNavigableMap::_class = nullptr;
jclass java::util::concurrent::TimeUnit::_class = nullptr;
jclass java::util::concurrent::ScheduledExecutorService::_class = nullptr;
jclass java::util::concurrent::ConcurrentSkipListMap::_class = nullptr;
jclass java::util::concurrent::ExecutorService::_class = nullptr;
jclass java::util::concurrent::ThreadPoolExecutor::_class = nullptr;
jclass java::util::concurrent::ThreadPoolExecutor_DiscardPolicy::_class = nullptr;
jclass java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy::_class = nullptr;
jclass java::util::concurrent::RunnableScheduledFuture::_class = nullptr;
jclass java::util::concurrent::ThreadFactory::_class = nullptr;
jclass java::util::concurrent::Exchanger::_class = nullptr;
jclass java::util::concurrent::CompletionService::_class = nullptr;
jclass java::util::concurrent::ScheduledThreadPoolExecutor::_class = nullptr;
jclass java::util::concurrent::ScheduledFuture::_class = nullptr;
jclass java::util::concurrent::CopyOnWriteArraySet::_class = nullptr;
jclass java::util::concurrent::RunnableFuture::_class = nullptr;
jclass java::util::concurrent::CountDownLatch::_class = nullptr;
jclass java::util::concurrent::Future::_class = nullptr;
jclass java::util::concurrent::CancellationException::_class = nullptr;

void java::util::concurrent::BlockingDeque::addFirst(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFirst", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::BlockingDeque::addLast(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLast", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::BlockingDeque::offerFirst(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerFirst", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::BlockingDeque::offerLast(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerLast", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::BlockingDeque::putFirst(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFirst", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::BlockingDeque::putLast(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLast", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::BlockingDeque::offerFirst(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerFirst", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::util::concurrent::BlockingDeque::offerLast(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerLast", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object java::util::concurrent::BlockingDeque::takeFirst() const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "takeFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::BlockingDeque::takeLast() const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "takeLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::BlockingDeque::pollFirst(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollFirst", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::BlockingDeque::pollLast(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollLast", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::BlockingDeque::removeFirstOccurrence(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::BlockingDeque::removeLastOccurrence(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::BlockingDeque::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::BlockingDeque::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::BlockingDeque::put(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::BlockingDeque::offer(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object java::util::concurrent::BlockingDeque::remove() const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::BlockingDeque::poll() const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::BlockingDeque::take() const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "take", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::BlockingDeque::poll(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::BlockingDeque::element() const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "element", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::BlockingDeque::peek() const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::BlockingDeque::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::BlockingDeque::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::BlockingDeque::size() const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Iterator java::util::concurrent::BlockingDeque::iterator() const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

void java::util::concurrent::BlockingDeque::push(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingDeque::_class) ::java::util::concurrent::BlockingDeque::_class = java::fetch_class("java/util/concurrent/BlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "push", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentHashMap::ConcurrentHashMap(int32_t arg0, float arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0) {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IFI)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentHashMap::ConcurrentHashMap(int32_t arg0, float arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0) {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentHashMap::ConcurrentHashMap(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0) {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentHashMap::ConcurrentHashMap() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0) {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentHashMap::ConcurrentHashMap(const ::java::util::Map& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0) {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::util::concurrent::ConcurrentHashMap::isEmpty() const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::concurrent::ConcurrentHashMap::size() const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::util::concurrent::ConcurrentHashMap::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::ConcurrentHashMap::containsKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ConcurrentHashMap::containsValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsValue", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ConcurrentHashMap::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::concurrent::ConcurrentHashMap::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentHashMap::putIfAbsent(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::concurrent::ConcurrentHashMap::putAll(const ::java::util::Map& arg0) const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::concurrent::ConcurrentHashMap::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::ConcurrentHashMap::remove(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::ConcurrentHashMap::replace(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2) const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object java::util::concurrent::ConcurrentHashMap::replace(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::concurrent::ConcurrentHashMap::clear() const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::Set java::util::concurrent::ConcurrentHashMap::keySet() const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Collection java::util::concurrent::ConcurrentHashMap::values() const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "values", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Set java::util::concurrent::ConcurrentHashMap::entrySet() const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Enumeration java::util::concurrent::ConcurrentHashMap::keys() const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "keys", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::util::Enumeration java::util::concurrent::ConcurrentHashMap::elements() const {
    if (!::java::util::concurrent::ConcurrentHashMap::_class) ::java::util::concurrent::ConcurrentHashMap::_class = java::fetch_class("java/util/concurrent/ConcurrentHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "elements", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::DelayQueue::DelayQueue() : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::DelayQueue::DelayQueue(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::util::concurrent::DelayQueue::add(const ::java::util::concurrent::Delayed& arg0) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/util/concurrent/Delayed;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::DelayQueue::offer(const ::java::util::concurrent::Delayed& arg0) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/util/concurrent/Delayed;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::DelayQueue::put(const ::java::util::concurrent::Delayed& arg0) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/util/concurrent/Delayed;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::DelayQueue::offer(const ::java::util::concurrent::Delayed& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/util/concurrent/Delayed;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::util::concurrent::Delayed java::util::concurrent::DelayQueue::poll() const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/util/concurrent/Delayed;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::Delayed _ret(ret);
    return _ret;
}

::java::util::concurrent::Delayed java::util::concurrent::DelayQueue::take() const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "take", "()Ljava/util/concurrent/Delayed;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::Delayed _ret(ret);
    return _ret;
}

::java::util::concurrent::Delayed java::util::concurrent::DelayQueue::poll(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Delayed;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::Delayed _ret(ret);
    return _ret;
}

::java::util::concurrent::Delayed java::util::concurrent::DelayQueue::peek() const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/util/concurrent/Delayed;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::Delayed _ret(ret);
    return _ret;
}

int32_t java::util::concurrent::DelayQueue::size() const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::DelayQueue::drainTo(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::DelayQueue::drainTo(const ::java::util::Collection& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::DelayQueue::clear() const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::util::concurrent::DelayQueue::remainingCapacity() const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remainingCapacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::lang::Object> java::util::concurrent::DelayQueue::toArray() const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
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

std::vector< ::java::lang::Object> java::util::concurrent::DelayQueue::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
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

bool java::util::concurrent::DelayQueue::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Iterator java::util::concurrent::DelayQueue::iterator() const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool java::util::concurrent::DelayQueue::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::DelayQueue::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::DelayQueue::offer(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::concurrent::DelayQueue::put(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::DelayQueue::_class) ::java::util::concurrent::DelayQueue::_class = java::fetch_class("java/util/concurrent/DelayQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ArrayBlockingQueue::ArrayBlockingQueue(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ArrayBlockingQueue::ArrayBlockingQueue(int32_t arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ArrayBlockingQueue::ArrayBlockingQueue(int32_t arg0, bool arg1, const ::java::util::Collection& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IZLjava/util/Collection;)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool java::util::concurrent::ArrayBlockingQueue::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ArrayBlockingQueue::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::ArrayBlockingQueue::put(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ArrayBlockingQueue::offer(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object java::util::concurrent::ArrayBlockingQueue::poll() const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ArrayBlockingQueue::take() const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "take", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ArrayBlockingQueue::poll(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ArrayBlockingQueue::peek() const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::concurrent::ArrayBlockingQueue::size() const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::ArrayBlockingQueue::remainingCapacity() const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remainingCapacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::ArrayBlockingQueue::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ArrayBlockingQueue::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::Object> java::util::concurrent::ArrayBlockingQueue::toArray() const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
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

std::vector< ::java::lang::Object> java::util::concurrent::ArrayBlockingQueue::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
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

::java::lang::String java::util::concurrent::ArrayBlockingQueue::toString() const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::concurrent::ArrayBlockingQueue::clear() const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::util::concurrent::ArrayBlockingQueue::drainTo(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::ArrayBlockingQueue::drainTo(const ::java::util::Collection& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::util::Iterator java::util::concurrent::ArrayBlockingQueue::iterator() const {
    if (!::java::util::concurrent::ArrayBlockingQueue::_class) ::java::util::concurrent::ArrayBlockingQueue::_class = java::fetch_class("java/util/concurrent/ArrayBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

void java::util::concurrent::Executor::execute(const ::java::lang::Runnable& arg0) const {
    if (!::java::util::concurrent::Executor::_class) ::java::util::concurrent::Executor::_class = java::fetch_class("java/util/concurrent/Executor");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::AbstractExecutorService::AbstractExecutorService() : ::java::lang::Object((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0) {
    if (!::java::util::concurrent::AbstractExecutorService::_class) ::java::util::concurrent::AbstractExecutorService::_class = java::fetch_class("java/util/concurrent/AbstractExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::util::concurrent::Future java::util::concurrent::AbstractExecutorService::submit(const ::java::lang::Runnable& arg0) const {
    if (!::java::util::concurrent::AbstractExecutorService::_class) ::java::util::concurrent::AbstractExecutorService::_class = java::fetch_class("java/util/concurrent/AbstractExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::AbstractExecutorService::submit(const ::java::lang::Runnable& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::AbstractExecutorService::_class) ::java::util::concurrent::AbstractExecutorService::_class = java::fetch_class("java/util/concurrent/AbstractExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::AbstractExecutorService::submit(const ::java::util::concurrent::Callable& arg0) const {
    if (!::java::util::concurrent::AbstractExecutorService::_class) ::java::util::concurrent::AbstractExecutorService::_class = java::fetch_class("java/util/concurrent/AbstractExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::AbstractExecutorService::invokeAny(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::AbstractExecutorService::_class) ::java::util::concurrent::AbstractExecutorService::_class = java::fetch_class("java/util/concurrent/AbstractExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "invokeAny", "(Ljava/util/Collection;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::AbstractExecutorService::invokeAny(const ::java::util::Collection& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::AbstractExecutorService::_class) ::java::util::concurrent::AbstractExecutorService::_class = java::fetch_class("java/util/concurrent/AbstractExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "invokeAny", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::List java::util::concurrent::AbstractExecutorService::invokeAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::AbstractExecutorService::_class) ::java::util::concurrent::AbstractExecutorService::_class = java::fetch_class("java/util/concurrent/AbstractExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "invokeAll", "(Ljava/util/Collection;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List java::util::concurrent::AbstractExecutorService::invokeAll(const ::java::util::Collection& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::AbstractExecutorService::_class) ::java::util::concurrent::AbstractExecutorService::_class = java::fetch_class("java/util/concurrent/AbstractExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "invokeAll", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::util::List _ret(ret);
    return _ret;
}

int64_t java::util::concurrent::Delayed::getDelay(const ::java::util::concurrent::TimeUnit& arg0) const {
    if (!::java::util::concurrent::Delayed::_class) ::java::util::concurrent::Delayed::_class = java::fetch_class("java/util/concurrent/Delayed");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDelay", "(Ljava/util/concurrent/TimeUnit;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ThreadPoolExecutor_DiscardOldestPolicy::ThreadPoolExecutor_DiscardOldestPolicy() : ::java::lang::Object((jobject)0), ::java::util::concurrent::RejectedExecutionHandler((jobject)0) {
    if (!::java::util::concurrent::ThreadPoolExecutor_DiscardOldestPolicy::_class) ::java::util::concurrent::ThreadPoolExecutor_DiscardOldestPolicy::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor$DiscardOldestPolicy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::util::concurrent::ThreadPoolExecutor_DiscardOldestPolicy::rejectedExecution(const ::java::lang::Runnable& arg0, const ::java::util::concurrent::ThreadPoolExecutor& arg1) const {
    if (!::java::util::concurrent::ThreadPoolExecutor_DiscardOldestPolicy::_class) ::java::util::concurrent::ThreadPoolExecutor_DiscardOldestPolicy::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor$DiscardOldestPolicy");
    static jmethodID mid = java::jni->GetMethodID(_class, "rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::SynchronousQueue::SynchronousQueue() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::SynchronousQueue::SynchronousQueue(bool arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::concurrent::SynchronousQueue::put(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::SynchronousQueue::offer(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::util::concurrent::SynchronousQueue::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::concurrent::SynchronousQueue::take() const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "take", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::SynchronousQueue::poll(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::SynchronousQueue::poll() const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::SynchronousQueue::isEmpty() const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::concurrent::SynchronousQueue::size() const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::SynchronousQueue::remainingCapacity() const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remainingCapacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::concurrent::SynchronousQueue::clear() const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::concurrent::SynchronousQueue::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::SynchronousQueue::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::SynchronousQueue::containsAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::SynchronousQueue::removeAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::SynchronousQueue::retainAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::concurrent::SynchronousQueue::peek() const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Iterator java::util::concurrent::SynchronousQueue::iterator() const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> java::util::concurrent::SynchronousQueue::toArray() const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
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

std::vector< ::java::lang::Object> java::util::concurrent::SynchronousQueue::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
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

int32_t java::util::concurrent::SynchronousQueue::drainTo(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::SynchronousQueue::drainTo(const ::java::util::Collection& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::SynchronousQueue::_class) ::java::util::concurrent::SynchronousQueue::_class = java::fetch_class("java/util/concurrent/SynchronousQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::LinkedBlockingQueue::LinkedBlockingQueue() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::LinkedBlockingQueue::LinkedBlockingQueue(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::LinkedBlockingQueue::LinkedBlockingQueue(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::util::concurrent::LinkedBlockingQueue::size() const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::LinkedBlockingQueue::remainingCapacity() const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remainingCapacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::concurrent::LinkedBlockingQueue::put(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::LinkedBlockingQueue::offer(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::util::concurrent::LinkedBlockingQueue::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::concurrent::LinkedBlockingQueue::take() const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "take", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingQueue::poll(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingQueue::poll() const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingQueue::peek() const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::LinkedBlockingQueue::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::LinkedBlockingQueue::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::Object> java::util::concurrent::LinkedBlockingQueue::toArray() const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
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

std::vector< ::java::lang::Object> java::util::concurrent::LinkedBlockingQueue::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
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

::java::lang::String java::util::concurrent::LinkedBlockingQueue::toString() const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::concurrent::LinkedBlockingQueue::clear() const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::util::concurrent::LinkedBlockingQueue::drainTo(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::LinkedBlockingQueue::drainTo(const ::java::util::Collection& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::util::Iterator java::util::concurrent::LinkedBlockingQueue::iterator() const {
    if (!::java::util::concurrent::LinkedBlockingQueue::_class) ::java::util::concurrent::LinkedBlockingQueue::_class = java::fetch_class("java/util/concurrent/LinkedBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

void java::util::concurrent::RejectedExecutionHandler::rejectedExecution(const ::java::lang::Runnable& arg0, const ::java::util::concurrent::ThreadPoolExecutor& arg1) const {
    if (!::java::util::concurrent::RejectedExecutionHandler::_class) ::java::util::concurrent::RejectedExecutionHandler::_class = java::fetch_class("java/util/concurrent/RejectedExecutionHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::CopyOnWriteArrayList::CopyOnWriteArrayList() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::CopyOnWriteArrayList::CopyOnWriteArrayList(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::CopyOnWriteArrayList::CopyOnWriteArrayList(const std::vector< ::java::lang::Object>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::concurrent::CopyOnWriteArrayList::clone() const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::concurrent::CopyOnWriteArrayList::size() const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::util::concurrent::CopyOnWriteArrayList::get(int32_t arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::CopyOnWriteArrayList::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::CopyOnWriteArrayList::containsAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::CopyOnWriteArrayList::indexOf(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/Object;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::util::concurrent::CopyOnWriteArrayList::indexOf(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::CopyOnWriteArrayList::lastIndexOf(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/Object;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::util::concurrent::CopyOnWriteArrayList::lastIndexOf(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::util::concurrent::CopyOnWriteArrayList::isEmpty() const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Iterator java::util::concurrent::CopyOnWriteArrayList::iterator() const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::ListIterator java::util::concurrent::CopyOnWriteArrayList::listIterator(int32_t arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "listIterator", "(I)Ljava/util/ListIterator;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ListIterator _ret(ret);
    return _ret;
}

::java::util::ListIterator java::util::concurrent::CopyOnWriteArrayList::listIterator() const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "listIterator", "()Ljava/util/ListIterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ListIterator _ret(ret);
    return _ret;
}

::java::util::List java::util::concurrent::CopyOnWriteArrayList::subList(int32_t arg0, int32_t arg1) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "subList", "(II)Ljava/util/List;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> java::util::concurrent::CopyOnWriteArrayList::toArray() const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
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

std::vector< ::java::lang::Object> java::util::concurrent::CopyOnWriteArrayList::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
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

bool java::util::concurrent::CopyOnWriteArrayList::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::CopyOnWriteArrayList::hashCode() const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::concurrent::CopyOnWriteArrayList::toString() const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::concurrent::CopyOnWriteArrayList::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::CopyOnWriteArrayList::add(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::CopyOnWriteArrayList::addAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::CopyOnWriteArrayList::addAll(int32_t arg0, const ::java::util::Collection& arg1) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(ILjava/util/Collection;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t java::util::concurrent::CopyOnWriteArrayList::addAllAbsent(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAllAbsent", "(Ljava/util/Collection;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::util::concurrent::CopyOnWriteArrayList::addIfAbsent(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIfAbsent", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::CopyOnWriteArrayList::clear() const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object java::util::concurrent::CopyOnWriteArrayList::remove(int32_t arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::CopyOnWriteArrayList::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::CopyOnWriteArrayList::removeAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::CopyOnWriteArrayList::retainAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::concurrent::CopyOnWriteArrayList::set(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::CopyOnWriteArrayList::_class) ::java::util::concurrent::CopyOnWriteArrayList::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ExecutionException::ExecutionException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::concurrent::ExecutionException::_class) ::java::util::concurrent::ExecutionException::_class = java::fetch_class("java/util/concurrent/ExecutionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ExecutionException::ExecutionException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::concurrent::ExecutionException::_class) ::java::util::concurrent::ExecutionException::_class = java::fetch_class("java/util/concurrent/ExecutionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::RejectedExecutionException::RejectedExecutionException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::concurrent::RejectedExecutionException::_class) ::java::util::concurrent::RejectedExecutionException::_class = java::fetch_class("java/util/concurrent/RejectedExecutionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::RejectedExecutionException::RejectedExecutionException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::concurrent::RejectedExecutionException::_class) ::java::util::concurrent::RejectedExecutionException::_class = java::fetch_class("java/util/concurrent/RejectedExecutionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::RejectedExecutionException::RejectedExecutionException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::concurrent::RejectedExecutionException::_class) ::java::util::concurrent::RejectedExecutionException::_class = java::fetch_class("java/util/concurrent/RejectedExecutionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::RejectedExecutionException::RejectedExecutionException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::concurrent::RejectedExecutionException::_class) ::java::util::concurrent::RejectedExecutionException::_class = java::fetch_class("java/util/concurrent/RejectedExecutionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ThreadPoolExecutor_AbortPolicy::ThreadPoolExecutor_AbortPolicy() : ::java::lang::Object((jobject)0), ::java::util::concurrent::RejectedExecutionHandler((jobject)0) {
    if (!::java::util::concurrent::ThreadPoolExecutor_AbortPolicy::_class) ::java::util::concurrent::ThreadPoolExecutor_AbortPolicy::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor$AbortPolicy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::util::concurrent::ThreadPoolExecutor_AbortPolicy::rejectedExecution(const ::java::lang::Runnable& arg0, const ::java::util::concurrent::ThreadPoolExecutor& arg1) const {
    if (!::java::util::concurrent::ThreadPoolExecutor_AbortPolicy::_class) ::java::util::concurrent::ThreadPoolExecutor_AbortPolicy::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor$AbortPolicy");
    static jmethodID mid = java::jni->GetMethodID(_class, "rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::concurrent::ExecutorService java::util::concurrent::Executors::newFixedThreadPool(int32_t arg0){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newFixedThreadPool", "(I)Ljava/util/concurrent/ExecutorService;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::ExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ExecutorService java::util::concurrent::Executors::newFixedThreadPool(int32_t arg0, const ::java::util::concurrent::ThreadFactory& arg1){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newFixedThreadPool", "(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::concurrent::ExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ExecutorService java::util::concurrent::Executors::newSingleThreadExecutor(){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newSingleThreadExecutor", "()Ljava/util/concurrent/ExecutorService;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::concurrent::ExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ExecutorService java::util::concurrent::Executors::newSingleThreadExecutor(const ::java::util::concurrent::ThreadFactory& arg0){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newSingleThreadExecutor", "(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::ExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ExecutorService java::util::concurrent::Executors::newCachedThreadPool(){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newCachedThreadPool", "()Ljava/util/concurrent/ExecutorService;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::concurrent::ExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ExecutorService java::util::concurrent::Executors::newCachedThreadPool(const ::java::util::concurrent::ThreadFactory& arg0){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newCachedThreadPool", "(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::ExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ScheduledExecutorService java::util::concurrent::Executors::newSingleThreadScheduledExecutor(){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newSingleThreadScheduledExecutor", "()Ljava/util/concurrent/ScheduledExecutorService;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::concurrent::ScheduledExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ScheduledExecutorService java::util::concurrent::Executors::newSingleThreadScheduledExecutor(const ::java::util::concurrent::ThreadFactory& arg0){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newSingleThreadScheduledExecutor", "(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::ScheduledExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ScheduledExecutorService java::util::concurrent::Executors::newScheduledThreadPool(int32_t arg0){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newScheduledThreadPool", "(I)Ljava/util/concurrent/ScheduledExecutorService;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::ScheduledExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ScheduledExecutorService java::util::concurrent::Executors::newScheduledThreadPool(int32_t arg0, const ::java::util::concurrent::ThreadFactory& arg1){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newScheduledThreadPool", "(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::concurrent::ScheduledExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ExecutorService java::util::concurrent::Executors::unconfigurableExecutorService(const ::java::util::concurrent::ExecutorService& arg0){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unconfigurableExecutorService", "(Ljava/util/concurrent/ExecutorService;)Ljava/util/concurrent/ExecutorService;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::ExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ScheduledExecutorService java::util::concurrent::Executors::unconfigurableScheduledExecutorService(const ::java::util::concurrent::ScheduledExecutorService& arg0){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unconfigurableScheduledExecutorService", "(Ljava/util/concurrent/ScheduledExecutorService;)Ljava/util/concurrent/ScheduledExecutorService;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::ScheduledExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ThreadFactory java::util::concurrent::Executors::defaultThreadFactory(){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "defaultThreadFactory", "()Ljava/util/concurrent/ThreadFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::concurrent::ThreadFactory _ret(ret);
    return _ret;
}

::java::util::concurrent::ThreadFactory java::util::concurrent::Executors::privilegedThreadFactory(){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "privilegedThreadFactory", "()Ljava/util/concurrent/ThreadFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::concurrent::ThreadFactory _ret(ret);
    return _ret;
}

::java::util::concurrent::Callable java::util::concurrent::Executors::callable(const ::java::lang::Runnable& arg0, const ::java::lang::Object& arg1){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "callable", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Callable;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::concurrent::Callable _ret(ret);
    return _ret;
}

::java::util::concurrent::Callable java::util::concurrent::Executors::callable(const ::java::lang::Runnable& arg0){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "callable", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Callable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::Callable _ret(ret);
    return _ret;
}

::java::util::concurrent::Callable java::util::concurrent::Executors::callable(const ::java::security::PrivilegedAction& arg0){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "callable", "(Ljava/security/PrivilegedAction;)Ljava/util/concurrent/Callable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::Callable _ret(ret);
    return _ret;
}

::java::util::concurrent::Callable java::util::concurrent::Executors::callable(const ::java::security::PrivilegedExceptionAction& arg0){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "callable", "(Ljava/security/PrivilegedExceptionAction;)Ljava/util/concurrent/Callable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::Callable _ret(ret);
    return _ret;
}

::java::util::concurrent::Callable java::util::concurrent::Executors::privilegedCallable(const ::java::util::concurrent::Callable& arg0){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "privilegedCallable", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Callable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::Callable _ret(ret);
    return _ret;
}

::java::util::concurrent::Callable java::util::concurrent::Executors::privilegedCallableUsingCurrentClassLoader(const ::java::util::concurrent::Callable& arg0){
    if (!::java::util::concurrent::Executors::_class) ::java::util::concurrent::Executors::_class = java::fetch_class("java/util/concurrent/Executors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "privilegedCallableUsingCurrentClassLoader", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Callable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::Callable _ret(ret);
    return _ret;
}

bool java::util::concurrent::BlockingQueue::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingQueue::_class) ::java::util::concurrent::BlockingQueue::_class = java::fetch_class("java/util/concurrent/BlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::BlockingQueue::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingQueue::_class) ::java::util::concurrent::BlockingQueue::_class = java::fetch_class("java/util/concurrent/BlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::BlockingQueue::put(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingQueue::_class) ::java::util::concurrent::BlockingQueue::_class = java::fetch_class("java/util/concurrent/BlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::BlockingQueue::offer(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::BlockingQueue::_class) ::java::util::concurrent::BlockingQueue::_class = java::fetch_class("java/util/concurrent/BlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object java::util::concurrent::BlockingQueue::take() const {
    if (!::java::util::concurrent::BlockingQueue::_class) ::java::util::concurrent::BlockingQueue::_class = java::fetch_class("java/util/concurrent/BlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "take", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::BlockingQueue::poll(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::BlockingQueue::_class) ::java::util::concurrent::BlockingQueue::_class = java::fetch_class("java/util/concurrent/BlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::concurrent::BlockingQueue::remainingCapacity() const {
    if (!::java::util::concurrent::BlockingQueue::_class) ::java::util::concurrent::BlockingQueue::_class = java::fetch_class("java/util/concurrent/BlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remainingCapacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::BlockingQueue::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingQueue::_class) ::java::util::concurrent::BlockingQueue::_class = java::fetch_class("java/util/concurrent/BlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::BlockingQueue::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::BlockingQueue::_class) ::java::util::concurrent::BlockingQueue::_class = java::fetch_class("java/util/concurrent/BlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::BlockingQueue::drainTo(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::BlockingQueue::_class) ::java::util::concurrent::BlockingQueue::_class = java::fetch_class("java/util/concurrent/BlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::BlockingQueue::drainTo(const ::java::util::Collection& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::BlockingQueue::_class) ::java::util::concurrent::BlockingQueue::_class = java::fetch_class("java/util/concurrent/BlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::PriorityBlockingQueue::PriorityBlockingQueue() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::PriorityBlockingQueue::PriorityBlockingQueue(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::PriorityBlockingQueue::PriorityBlockingQueue(int32_t arg0, const ::java::util::Comparator& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/util/Comparator;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::PriorityBlockingQueue::PriorityBlockingQueue(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::util::concurrent::PriorityBlockingQueue::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::PriorityBlockingQueue::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::PriorityBlockingQueue::put(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::PriorityBlockingQueue::offer(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object java::util::concurrent::PriorityBlockingQueue::poll() const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::PriorityBlockingQueue::take() const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "take", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::PriorityBlockingQueue::poll(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::PriorityBlockingQueue::peek() const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Comparator java::util::concurrent::PriorityBlockingQueue::comparator() const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "comparator", "()Ljava/util/Comparator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Comparator _ret(ret);
    return _ret;
}

int32_t java::util::concurrent::PriorityBlockingQueue::size() const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::PriorityBlockingQueue::remainingCapacity() const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remainingCapacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::PriorityBlockingQueue::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::PriorityBlockingQueue::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::Object> java::util::concurrent::PriorityBlockingQueue::toArray() const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
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

::java::lang::String java::util::concurrent::PriorityBlockingQueue::toString() const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::concurrent::PriorityBlockingQueue::drainTo(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::PriorityBlockingQueue::drainTo(const ::java::util::Collection& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::PriorityBlockingQueue::clear() const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< ::java::lang::Object> java::util::concurrent::PriorityBlockingQueue::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
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

::java::util::Iterator java::util::concurrent::PriorityBlockingQueue::iterator() const {
    if (!::java::util::concurrent::PriorityBlockingQueue::_class) ::java::util::concurrent::PriorityBlockingQueue::_class = java::fetch_class("java/util/concurrent/PriorityBlockingQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ExecutorCompletionService::ExecutorCompletionService(const ::java::util::concurrent::Executor& arg0) : ::java::lang::Object((jobject)0), ::java::util::concurrent::CompletionService((jobject)0) {
    if (!::java::util::concurrent::ExecutorCompletionService::_class) ::java::util::concurrent::ExecutorCompletionService::_class = java::fetch_class("java/util/concurrent/ExecutorCompletionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/concurrent/Executor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ExecutorCompletionService::ExecutorCompletionService(const ::java::util::concurrent::Executor& arg0, const ::java::util::concurrent::BlockingQueue& arg1) : ::java::lang::Object((jobject)0), ::java::util::concurrent::CompletionService((jobject)0) {
    if (!::java::util::concurrent::ExecutorCompletionService::_class) ::java::util::concurrent::ExecutorCompletionService::_class = java::fetch_class("java/util/concurrent/ExecutorCompletionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/BlockingQueue;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::util::concurrent::Future java::util::concurrent::ExecutorCompletionService::submit(const ::java::util::concurrent::Callable& arg0) const {
    if (!::java::util::concurrent::ExecutorCompletionService::_class) ::java::util::concurrent::ExecutorCompletionService::_class = java::fetch_class("java/util/concurrent/ExecutorCompletionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::ExecutorCompletionService::submit(const ::java::lang::Runnable& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ExecutorCompletionService::_class) ::java::util::concurrent::ExecutorCompletionService::_class = java::fetch_class("java/util/concurrent/ExecutorCompletionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::ExecutorCompletionService::take() const {
    if (!::java::util::concurrent::ExecutorCompletionService::_class) ::java::util::concurrent::ExecutorCompletionService::_class = java::fetch_class("java/util/concurrent/ExecutorCompletionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "take", "()Ljava/util/concurrent/Future;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::ExecutorCompletionService::poll() const {
    if (!::java::util::concurrent::ExecutorCompletionService::_class) ::java::util::concurrent::ExecutorCompletionService::_class = java::fetch_class("java/util/concurrent/ExecutorCompletionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/util/concurrent/Future;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::ExecutorCompletionService::poll(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::ExecutorCompletionService::_class) ::java::util::concurrent::ExecutorCompletionService::_class = java::fetch_class("java/util/concurrent/ExecutorCompletionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentLinkedQueue::ConcurrentLinkedQueue() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentLinkedQueue::ConcurrentLinkedQueue(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::util::concurrent::ConcurrentLinkedQueue::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ConcurrentLinkedQueue::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::concurrent::ConcurrentLinkedQueue::poll() const {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentLinkedQueue::peek() const {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::ConcurrentLinkedQueue::isEmpty() const {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::concurrent::ConcurrentLinkedQueue::size() const {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::ConcurrentLinkedQueue::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ConcurrentLinkedQueue::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ConcurrentLinkedQueue::addAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::Object> java::util::concurrent::ConcurrentLinkedQueue::toArray() const {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
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

std::vector< ::java::lang::Object> java::util::concurrent::ConcurrentLinkedQueue::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
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

::java::util::Iterator java::util::concurrent::ConcurrentLinkedQueue::iterator() const {
    if (!::java::util::concurrent::ConcurrentLinkedQueue::_class) ::java::util::concurrent::ConcurrentLinkedQueue::_class = java::fetch_class("java/util/concurrent/ConcurrentLinkedQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::BrokenBarrierException::BrokenBarrierException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::concurrent::BrokenBarrierException::_class) ::java::util::concurrent::BrokenBarrierException::_class = java::fetch_class("java/util/concurrent/BrokenBarrierException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::BrokenBarrierException::BrokenBarrierException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::concurrent::BrokenBarrierException::_class) ::java::util::concurrent::BrokenBarrierException::_class = java::fetch_class("java/util/concurrent/BrokenBarrierException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::TimeoutException::TimeoutException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::concurrent::TimeoutException::_class) ::java::util::concurrent::TimeoutException::_class = java::fetch_class("java/util/concurrent/TimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::TimeoutException::TimeoutException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::concurrent::TimeoutException::_class) ::java::util::concurrent::TimeoutException::_class = java::fetch_class("java/util/concurrent/TimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentSkipListSet::ConcurrentSkipListSet() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::NavigableSet((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentSkipListSet::ConcurrentSkipListSet(const ::java::util::Comparator& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::NavigableSet((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Comparator;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentSkipListSet::ConcurrentSkipListSet(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::NavigableSet((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentSkipListSet::ConcurrentSkipListSet(const ::java::util::SortedSet& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::NavigableSet((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/SortedSet;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::concurrent::ConcurrentSkipListSet java::util::concurrent::ConcurrentSkipListSet::clone() const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/util/concurrent/ConcurrentSkipListSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::ConcurrentSkipListSet _ret(ret);
    return _ret;
}

int32_t java::util::concurrent::ConcurrentSkipListSet::size() const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::ConcurrentSkipListSet::isEmpty() const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::ConcurrentSkipListSet::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ConcurrentSkipListSet::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ConcurrentSkipListSet::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::ConcurrentSkipListSet::clear() const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::Iterator java::util::concurrent::ConcurrentSkipListSet::iterator() const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::Iterator java::util::concurrent::ConcurrentSkipListSet::descendingIterator() const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool java::util::concurrent::ConcurrentSkipListSet::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ConcurrentSkipListSet::removeAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListSet::lower(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListSet::floor(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListSet::ceiling(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListSet::higher(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListSet::pollFirst() const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListSet::pollLast() const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Comparator java::util::concurrent::ConcurrentSkipListSet::comparator() const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "comparator", "()Ljava/util/Comparator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Comparator _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListSet::first() const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "first", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListSet::last() const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "last", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::concurrent::ConcurrentSkipListSet::subSet(const ::java::lang::Object& arg0, bool arg1, const ::java::lang::Object& arg2, bool arg3) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::concurrent::ConcurrentSkipListSet::headSet(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::concurrent::ConcurrentSkipListSet::tailSet(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::concurrent::ConcurrentSkipListSet::subSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/NavigableSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::concurrent::ConcurrentSkipListSet::headSet(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "headSet", "(Ljava/lang/Object;)Ljava/util/NavigableSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::concurrent::ConcurrentSkipListSet::tailSet(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailSet", "(Ljava/lang/Object;)Ljava/util/NavigableSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::concurrent::ConcurrentSkipListSet::descendingSet() const {
    if (!::java::util::concurrent::ConcurrentSkipListSet::_class) ::java::util::concurrent::ConcurrentSkipListSet::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingSet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::Semaphore::Semaphore(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::Semaphore::Semaphore(int32_t arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::util::concurrent::Semaphore::acquire() const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquire", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::Semaphore::acquireUninterruptibly() const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireUninterruptibly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::concurrent::Semaphore::tryAcquire() const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryAcquire", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::Semaphore::tryAcquire(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryAcquire", "(JLjava/util/concurrent/TimeUnit;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::Semaphore::release() const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::concurrent::Semaphore::acquire(int32_t arg0) const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquire", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::Semaphore::acquireUninterruptibly(int32_t arg0) const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquireUninterruptibly", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::Semaphore::tryAcquire(int32_t arg0) const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryAcquire", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::Semaphore::tryAcquire(int32_t arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryAcquire", "(IJLjava/util/concurrent/TimeUnit;)Z");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::concurrent::Semaphore::release(int32_t arg0) const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::Semaphore::availablePermits() const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "availablePermits", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::Semaphore::drainPermits() const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainPermits", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::Semaphore::isFair() const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFair", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::Semaphore::hasQueuedThreads() const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasQueuedThreads", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::concurrent::Semaphore::getQueueLength() const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueueLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::concurrent::Semaphore::toString() const {
    if (!::java::util::concurrent::Semaphore::_class) ::java::util::concurrent::Semaphore::_class = java::fetch_class("java/util/concurrent/Semaphore");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::Callable::call() const {
    if (!::java::util::concurrent::Callable::_class) ::java::util::concurrent::Callable::_class = java::fetch_class("java/util/concurrent/Callable");
    static jmethodID mid = java::jni->GetMethodID(_class, "call", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::FutureTask::FutureTask(const ::java::util::concurrent::Callable& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0), ::java::util::concurrent::Future((jobject)0), ::java::util::concurrent::RunnableFuture((jobject)0) {
    if (!::java::util::concurrent::FutureTask::_class) ::java::util::concurrent::FutureTask::_class = java::fetch_class("java/util/concurrent/FutureTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/concurrent/Callable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::FutureTask::FutureTask(const ::java::lang::Runnable& arg0, const ::java::lang::Object& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0), ::java::util::concurrent::Future((jobject)0), ::java::util::concurrent::RunnableFuture((jobject)0) {
    if (!::java::util::concurrent::FutureTask::_class) ::java::util::concurrent::FutureTask::_class = java::fetch_class("java/util/concurrent/FutureTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Runnable;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool java::util::concurrent::FutureTask::isCancelled() const {
    if (!::java::util::concurrent::FutureTask::_class) ::java::util::concurrent::FutureTask::_class = java::fetch_class("java/util/concurrent/FutureTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCancelled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::FutureTask::isDone() const {
    if (!::java::util::concurrent::FutureTask::_class) ::java::util::concurrent::FutureTask::_class = java::fetch_class("java/util/concurrent/FutureTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDone", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::FutureTask::cancel(bool arg0) const {
    if (!::java::util::concurrent::FutureTask::_class) ::java::util::concurrent::FutureTask::_class = java::fetch_class("java/util/concurrent/FutureTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::concurrent::FutureTask::get() const {
    if (!::java::util::concurrent::FutureTask::_class) ::java::util::concurrent::FutureTask::_class = java::fetch_class("java/util/concurrent/FutureTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::FutureTask::get(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::FutureTask::_class) ::java::util::concurrent::FutureTask::_class = java::fetch_class("java/util/concurrent/FutureTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::concurrent::FutureTask::run() const {
    if (!::java::util::concurrent::FutureTask::_class) ::java::util::concurrent::FutureTask::_class = java::fetch_class("java/util/concurrent/FutureTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::CyclicBarrier::CyclicBarrier(int32_t arg0, const ::java::lang::Runnable& arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::util::concurrent::CyclicBarrier::_class) ::java::util::concurrent::CyclicBarrier::_class = java::fetch_class("java/util/concurrent/CyclicBarrier");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/Runnable;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::CyclicBarrier::CyclicBarrier(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::util::concurrent::CyclicBarrier::_class) ::java::util::concurrent::CyclicBarrier::_class = java::fetch_class("java/util/concurrent/CyclicBarrier");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::util::concurrent::CyclicBarrier::getParties() const {
    if (!::java::util::concurrent::CyclicBarrier::_class) ::java::util::concurrent::CyclicBarrier::_class = java::fetch_class("java/util/concurrent/CyclicBarrier");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParties", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::CyclicBarrier::await() const {
    if (!::java::util::concurrent::CyclicBarrier::_class) ::java::util::concurrent::CyclicBarrier::_class = java::fetch_class("java/util/concurrent/CyclicBarrier");
    static jmethodID mid = java::jni->GetMethodID(_class, "await", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::CyclicBarrier::await(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::CyclicBarrier::_class) ::java::util::concurrent::CyclicBarrier::_class = java::fetch_class("java/util/concurrent/CyclicBarrier");
    static jmethodID mid = java::jni->GetMethodID(_class, "await", "(JLjava/util/concurrent/TimeUnit;)I");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::CyclicBarrier::isBroken() const {
    if (!::java::util::concurrent::CyclicBarrier::_class) ::java::util::concurrent::CyclicBarrier::_class = java::fetch_class("java/util/concurrent/CyclicBarrier");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBroken", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::util::concurrent::CyclicBarrier::reset() const {
    if (!::java::util::concurrent::CyclicBarrier::_class) ::java::util::concurrent::CyclicBarrier::_class = java::fetch_class("java/util/concurrent/CyclicBarrier");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::util::concurrent::CyclicBarrier::getNumberWaiting() const {
    if (!::java::util::concurrent::CyclicBarrier::_class) ::java::util::concurrent::CyclicBarrier::_class = java::fetch_class("java/util/concurrent/CyclicBarrier");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumberWaiting", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::util::concurrent::ConcurrentMap::putIfAbsent(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentMap::_class) ::java::util::concurrent::ConcurrentMap::_class = java::fetch_class("java/util/concurrent/ConcurrentMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::ConcurrentMap::remove(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentMap::_class) ::java::util::concurrent::ConcurrentMap::_class = java::fetch_class("java/util/concurrent/ConcurrentMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::ConcurrentMap::replace(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2) const {
    if (!::java::util::concurrent::ConcurrentMap::_class) ::java::util::concurrent::ConcurrentMap::_class = java::fetch_class("java/util/concurrent/ConcurrentMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object java::util::concurrent::ConcurrentMap::replace(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentMap::_class) ::java::util::concurrent::ConcurrentMap::_class = java::fetch_class("java/util/concurrent/ConcurrentMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::LinkedBlockingDeque::LinkedBlockingDeque() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingDeque((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::LinkedBlockingDeque::LinkedBlockingDeque(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingDeque((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::LinkedBlockingDeque::LinkedBlockingDeque(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingDeque((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::concurrent::LinkedBlockingDeque::addFirst(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFirst", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::LinkedBlockingDeque::addLast(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLast", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::LinkedBlockingDeque::offerFirst(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerFirst", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::LinkedBlockingDeque::offerLast(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerLast", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::LinkedBlockingDeque::putFirst(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFirst", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::LinkedBlockingDeque::putLast(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLast", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::LinkedBlockingDeque::offerFirst(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerFirst", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::util::concurrent::LinkedBlockingDeque::offerLast(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerLast", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::removeFirst() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::removeLast() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::pollFirst() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::pollLast() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::takeFirst() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "takeFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::takeLast() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "takeLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::pollFirst(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollFirst", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::pollLast(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollLast", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::getFirst() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::getLast() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::peekFirst() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::peekLast() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::LinkedBlockingDeque::removeFirstOccurrence(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::LinkedBlockingDeque::removeLastOccurrence(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::LinkedBlockingDeque::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::LinkedBlockingDeque::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::LinkedBlockingDeque::put(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::LinkedBlockingDeque::offer(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::remove() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::poll() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::take() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "take", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::poll(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::element() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "element", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::peek() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::concurrent::LinkedBlockingDeque::remainingCapacity() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "remainingCapacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::LinkedBlockingDeque::drainTo(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::LinkedBlockingDeque::drainTo(const ::java::util::Collection& arg0, int32_t arg1) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "drainTo", "(Ljava/util/Collection;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::LinkedBlockingDeque::push(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "push", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::concurrent::LinkedBlockingDeque::pop() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pop", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::LinkedBlockingDeque::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::LinkedBlockingDeque::size() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::LinkedBlockingDeque::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::Object> java::util::concurrent::LinkedBlockingDeque::toArray() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
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

std::vector< ::java::lang::Object> java::util::concurrent::LinkedBlockingDeque::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
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

::java::lang::String java::util::concurrent::LinkedBlockingDeque::toString() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::concurrent::LinkedBlockingDeque::clear() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::Iterator java::util::concurrent::LinkedBlockingDeque::iterator() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::Iterator java::util::concurrent::LinkedBlockingDeque::descendingIterator() const {
    if (!::java::util::concurrent::LinkedBlockingDeque::_class) ::java::util::concurrent::LinkedBlockingDeque::_class = java::fetch_class("java/util/concurrent/LinkedBlockingDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentNavigableMap::subMap(const ::java::lang::Object& arg0, bool arg1, const ::java::lang::Object& arg2, bool arg3) const {
    if (!::java::util::concurrent::ConcurrentNavigableMap::_class) ::java::util::concurrent::ConcurrentNavigableMap::_class = java::fetch_class("java/util/concurrent/ConcurrentNavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentNavigableMap::headMap(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::concurrent::ConcurrentNavigableMap::_class) ::java::util::concurrent::ConcurrentNavigableMap::_class = java::fetch_class("java/util/concurrent/ConcurrentNavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "headMap", "(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentNavigableMap::tailMap(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::concurrent::ConcurrentNavigableMap::_class) ::java::util::concurrent::ConcurrentNavigableMap::_class = java::fetch_class("java/util/concurrent/ConcurrentNavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailMap", "(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentNavigableMap::subMap(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentNavigableMap::_class) ::java::util::concurrent::ConcurrentNavigableMap::_class = java::fetch_class("java/util/concurrent/ConcurrentNavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentNavigableMap::headMap(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentNavigableMap::_class) ::java::util::concurrent::ConcurrentNavigableMap::_class = java::fetch_class("java/util/concurrent/ConcurrentNavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "headMap", "(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentNavigableMap::tailMap(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentNavigableMap::_class) ::java::util::concurrent::ConcurrentNavigableMap::_class = java::fetch_class("java/util/concurrent/ConcurrentNavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailMap", "(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentNavigableMap::descendingMap() const {
    if (!::java::util::concurrent::ConcurrentNavigableMap::_class) ::java::util::concurrent::ConcurrentNavigableMap::_class = java::fetch_class("java/util/concurrent/ConcurrentNavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingMap", "()Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::concurrent::ConcurrentNavigableMap::navigableKeySet() const {
    if (!::java::util::concurrent::ConcurrentNavigableMap::_class) ::java::util::concurrent::ConcurrentNavigableMap::_class = java::fetch_class("java/util/concurrent/ConcurrentNavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "navigableKeySet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::concurrent::ConcurrentNavigableMap::keySet() const {
    if (!::java::util::concurrent::ConcurrentNavigableMap::_class) ::java::util::concurrent::ConcurrentNavigableMap::_class = java::fetch_class("java/util/concurrent/ConcurrentNavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::concurrent::ConcurrentNavigableMap::descendingKeySet() const {
    if (!::java::util::concurrent::ConcurrentNavigableMap::_class) ::java::util::concurrent::ConcurrentNavigableMap::_class = java::fetch_class("java/util/concurrent/ConcurrentNavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingKeySet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

std::vector< ::java::util::concurrent::TimeUnit> java::util::concurrent::TimeUnit::values(){
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljava/util/concurrent/TimeUnit;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::util::concurrent::TimeUnit> _ret(rets, ::java::util::concurrent::TimeUnit((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::util::concurrent::TimeUnit retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::util::concurrent::TimeUnit java::util::concurrent::TimeUnit::valueOf(const ::java::lang::String& arg0){
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/util/concurrent/TimeUnit;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::TimeUnit _ret(ret);
    return _ret;
}

int64_t java::util::concurrent::TimeUnit::convert(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetMethodID(_class, "convert", "(JLjava/util/concurrent/TimeUnit;)J");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

int64_t java::util::concurrent::TimeUnit::toNanos(int64_t arg0) const {
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetMethodID(_class, "toNanos", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::TimeUnit::toMicros(int64_t arg0) const {
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetMethodID(_class, "toMicros", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::TimeUnit::toMillis(int64_t arg0) const {
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetMethodID(_class, "toMillis", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::TimeUnit::toSeconds(int64_t arg0) const {
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetMethodID(_class, "toSeconds", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::TimeUnit::toMinutes(int64_t arg0) const {
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetMethodID(_class, "toMinutes", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::TimeUnit::toHours(int64_t arg0) const {
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetMethodID(_class, "toHours", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::util::concurrent::TimeUnit::toDays(int64_t arg0) const {
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetMethodID(_class, "toDays", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void java::util::concurrent::TimeUnit::timedWait(const ::java::lang::Object& arg0, int64_t arg1) const {
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetMethodID(_class, "timedWait", "(Ljava/lang/Object;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::TimeUnit::timedJoin(const ::java::lang::Thread& arg0, int64_t arg1) const {
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetMethodID(_class, "timedJoin", "(Ljava/lang/Thread;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::TimeUnit::sleep(int64_t arg0) const {
    if (!::java::util::concurrent::TimeUnit::_class) ::java::util::concurrent::TimeUnit::_class = java::fetch_class("java/util/concurrent/TimeUnit");
    static jmethodID mid = java::jni->GetMethodID(_class, "sleep", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::concurrent::ScheduledFuture java::util::concurrent::ScheduledExecutorService::schedule(const ::java::lang::Runnable& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::ScheduledExecutorService::_class) ::java::util::concurrent::ScheduledExecutorService::_class = java::fetch_class("java/util/concurrent/ScheduledExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "schedule", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::util::concurrent::ScheduledFuture _ret(ret);
    return _ret;
}

::java::util::concurrent::ScheduledFuture java::util::concurrent::ScheduledExecutorService::schedule(const ::java::util::concurrent::Callable& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::ScheduledExecutorService::_class) ::java::util::concurrent::ScheduledExecutorService::_class = java::fetch_class("java/util/concurrent/ScheduledExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "schedule", "(Ljava/util/concurrent/Callable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::util::concurrent::ScheduledFuture _ret(ret);
    return _ret;
}

::java::util::concurrent::ScheduledFuture java::util::concurrent::ScheduledExecutorService::scheduleAtFixedRate(const ::java::lang::Runnable& arg0, int64_t arg1, int64_t arg2, const ::java::util::concurrent::TimeUnit& arg3) const {
    if (!::java::util::concurrent::ScheduledExecutorService::_class) ::java::util::concurrent::ScheduledExecutorService::_class = java::fetch_class("java/util/concurrent/ScheduledExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleAtFixedRate", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::concurrent::ScheduledFuture _ret(ret);
    return _ret;
}

::java::util::concurrent::ScheduledFuture java::util::concurrent::ScheduledExecutorService::scheduleWithFixedDelay(const ::java::lang::Runnable& arg0, int64_t arg1, int64_t arg2, const ::java::util::concurrent::TimeUnit& arg3) const {
    if (!::java::util::concurrent::ScheduledExecutorService::_class) ::java::util::concurrent::ScheduledExecutorService::_class = java::fetch_class("java/util/concurrent/ScheduledExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleWithFixedDelay", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::concurrent::ScheduledFuture _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentSkipListMap::ConcurrentSkipListMap() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0), ::java::util::concurrent::ConcurrentNavigableMap((jobject)0) {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentSkipListMap::ConcurrentSkipListMap(const ::java::util::Comparator& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0), ::java::util::concurrent::ConcurrentNavigableMap((jobject)0) {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Comparator;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentSkipListMap::ConcurrentSkipListMap(const ::java::util::Map& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0), ::java::util::concurrent::ConcurrentNavigableMap((jobject)0) {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ConcurrentSkipListMap::ConcurrentSkipListMap(const ::java::util::SortedMap& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0), ::java::util::concurrent::ConcurrentNavigableMap((jobject)0) {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/SortedMap;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::concurrent::ConcurrentSkipListMap java::util::concurrent::ConcurrentSkipListMap::clone() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/util/concurrent/ConcurrentSkipListMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::ConcurrentSkipListMap _ret(ret);
    return _ret;
}

bool java::util::concurrent::ConcurrentSkipListMap::containsKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListMap::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListMap::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListMap::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::ConcurrentSkipListMap::containsValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsValue", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::ConcurrentSkipListMap::size() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::ConcurrentSkipListMap::isEmpty() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::util::concurrent::ConcurrentSkipListMap::clear() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::NavigableSet java::util::concurrent::ConcurrentSkipListMap::keySet() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::concurrent::ConcurrentSkipListMap::navigableKeySet() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "navigableKeySet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::Collection java::util::concurrent::ConcurrentSkipListMap::values() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "values", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Set java::util::concurrent::ConcurrentSkipListMap::entrySet() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentSkipListMap::descendingMap() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingMap", "()Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::concurrent::ConcurrentSkipListMap::descendingKeySet() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingKeySet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

bool java::util::concurrent::ConcurrentSkipListMap::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListMap::putIfAbsent(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::concurrent::ConcurrentSkipListMap::remove(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::ConcurrentSkipListMap::replace(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListMap::replace(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Comparator java::util::concurrent::ConcurrentSkipListMap::comparator() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "comparator", "()Ljava/util/Comparator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Comparator _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListMap::firstKey() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "firstKey", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListMap::lastKey() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastKey", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentSkipListMap::subMap(const ::java::lang::Object& arg0, bool arg1, const ::java::lang::Object& arg2, bool arg3) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentSkipListMap::headMap(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "headMap", "(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentSkipListMap::tailMap(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailMap", "(Ljava/lang/Object;Z)Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentSkipListMap::subMap(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentSkipListMap::headMap(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "headMap", "(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::concurrent::ConcurrentNavigableMap java::util::concurrent::ConcurrentSkipListMap::tailMap(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailMap", "(Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentNavigableMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::concurrent::ConcurrentNavigableMap _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::concurrent::ConcurrentSkipListMap::lowerEntry(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListMap::lowerKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::concurrent::ConcurrentSkipListMap::floorEntry(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListMap::floorKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::concurrent::ConcurrentSkipListMap::ceilingEntry(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListMap::ceilingKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::concurrent::ConcurrentSkipListMap::higherEntry(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ConcurrentSkipListMap::higherKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::concurrent::ConcurrentSkipListMap::firstEntry() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "firstEntry", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::concurrent::ConcurrentSkipListMap::lastEntry() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastEntry", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::concurrent::ConcurrentSkipListMap::pollFirstEntry() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollFirstEntry", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::concurrent::ConcurrentSkipListMap::pollLastEntry() const {
    if (!::java::util::concurrent::ConcurrentSkipListMap::_class) ::java::util::concurrent::ConcurrentSkipListMap::_class = java::fetch_class("java/util/concurrent/ConcurrentSkipListMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollLastEntry", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

void java::util::concurrent::ExecutorService::shutdown() const {
    if (!::java::util::concurrent::ExecutorService::_class) ::java::util::concurrent::ExecutorService::_class = java::fetch_class("java/util/concurrent/ExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::List java::util::concurrent::ExecutorService::shutdownNow() const {
    if (!::java::util::concurrent::ExecutorService::_class) ::java::util::concurrent::ExecutorService::_class = java::fetch_class("java/util/concurrent/ExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdownNow", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

bool java::util::concurrent::ExecutorService::isShutdown() const {
    if (!::java::util::concurrent::ExecutorService::_class) ::java::util::concurrent::ExecutorService::_class = java::fetch_class("java/util/concurrent/ExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShutdown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::ExecutorService::isTerminated() const {
    if (!::java::util::concurrent::ExecutorService::_class) ::java::util::concurrent::ExecutorService::_class = java::fetch_class("java/util/concurrent/ExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTerminated", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::ExecutorService::awaitTermination(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::ExecutorService::_class) ::java::util::concurrent::ExecutorService::_class = java::fetch_class("java/util/concurrent/ExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "awaitTermination", "(JLjava/util/concurrent/TimeUnit;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::util::concurrent::Future java::util::concurrent::ExecutorService::submit(const ::java::util::concurrent::Callable& arg0) const {
    if (!::java::util::concurrent::ExecutorService::_class) ::java::util::concurrent::ExecutorService::_class = java::fetch_class("java/util/concurrent/ExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::ExecutorService::submit(const ::java::lang::Runnable& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ExecutorService::_class) ::java::util::concurrent::ExecutorService::_class = java::fetch_class("java/util/concurrent/ExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::ExecutorService::submit(const ::java::lang::Runnable& arg0) const {
    if (!::java::util::concurrent::ExecutorService::_class) ::java::util::concurrent::ExecutorService::_class = java::fetch_class("java/util/concurrent/ExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::List java::util::concurrent::ExecutorService::invokeAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::ExecutorService::_class) ::java::util::concurrent::ExecutorService::_class = java::fetch_class("java/util/concurrent/ExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "invokeAll", "(Ljava/util/Collection;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List java::util::concurrent::ExecutorService::invokeAll(const ::java::util::Collection& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::ExecutorService::_class) ::java::util::concurrent::ExecutorService::_class = java::fetch_class("java/util/concurrent/ExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "invokeAll", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ExecutorService::invokeAny(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::ExecutorService::_class) ::java::util::concurrent::ExecutorService::_class = java::fetch_class("java/util/concurrent/ExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "invokeAny", "(Ljava/util/Collection;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::ExecutorService::invokeAny(const ::java::util::Collection& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::ExecutorService::_class) ::java::util::concurrent::ExecutorService::_class = java::fetch_class("java/util/concurrent/ExecutorService");
    static jmethodID mid = java::jni->GetMethodID(_class, "invokeAny", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ThreadPoolExecutor::ThreadPoolExecutor(int32_t arg0, int32_t arg1, int64_t arg2, const ::java::util::concurrent::TimeUnit& arg3, const ::java::util::concurrent::BlockingQueue& arg4) : ::java::lang::Object((jobject)0), ::java::util::concurrent::AbstractExecutorService((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0) {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ThreadPoolExecutor::ThreadPoolExecutor(int32_t arg0, int32_t arg1, int64_t arg2, const ::java::util::concurrent::TimeUnit& arg3, const ::java::util::concurrent::BlockingQueue& arg4, const ::java::util::concurrent::ThreadFactory& arg5) : ::java::lang::Object((jobject)0), ::java::util::concurrent::AbstractExecutorService((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0) {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ThreadPoolExecutor::ThreadPoolExecutor(int32_t arg0, int32_t arg1, int64_t arg2, const ::java::util::concurrent::TimeUnit& arg3, const ::java::util::concurrent::BlockingQueue& arg4, const ::java::util::concurrent::RejectedExecutionHandler& arg5) : ::java::lang::Object((jobject)0), ::java::util::concurrent::AbstractExecutorService((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0) {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ThreadPoolExecutor::ThreadPoolExecutor(int32_t arg0, int32_t arg1, int64_t arg2, const ::java::util::concurrent::TimeUnit& arg3, const ::java::util::concurrent::BlockingQueue& arg4, const ::java::util::concurrent::ThreadFactory& arg5, const ::java::util::concurrent::RejectedExecutionHandler& arg6) : ::java::lang::Object((jobject)0), ::java::util::concurrent::AbstractExecutorService((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0) {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}
#pragma GCC diagnostic pop

void java::util::concurrent::ThreadPoolExecutor::execute(const ::java::lang::Runnable& arg0) const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::ThreadPoolExecutor::shutdown() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::List java::util::concurrent::ThreadPoolExecutor::shutdownNow() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdownNow", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

bool java::util::concurrent::ThreadPoolExecutor::isShutdown() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShutdown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::ThreadPoolExecutor::isTerminating() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTerminating", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::ThreadPoolExecutor::isTerminated() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTerminated", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::ThreadPoolExecutor::awaitTermination(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "awaitTermination", "(JLjava/util/concurrent/TimeUnit;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::ThreadPoolExecutor::setThreadFactory(const ::java::util::concurrent::ThreadFactory& arg0) const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setThreadFactory", "(Ljava/util/concurrent/ThreadFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::concurrent::ThreadFactory java::util::concurrent::ThreadPoolExecutor::getThreadFactory() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThreadFactory", "()Ljava/util/concurrent/ThreadFactory;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::ThreadFactory _ret(ret);
    return _ret;
}

void java::util::concurrent::ThreadPoolExecutor::setRejectedExecutionHandler(const ::java::util::concurrent::RejectedExecutionHandler& arg0) const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRejectedExecutionHandler", "(Ljava/util/concurrent/RejectedExecutionHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::concurrent::RejectedExecutionHandler java::util::concurrent::ThreadPoolExecutor::getRejectedExecutionHandler() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRejectedExecutionHandler", "()Ljava/util/concurrent/RejectedExecutionHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::RejectedExecutionHandler _ret(ret);
    return _ret;
}

void java::util::concurrent::ThreadPoolExecutor::setCorePoolSize(int32_t arg0) const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCorePoolSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::ThreadPoolExecutor::getCorePoolSize() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCorePoolSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::ThreadPoolExecutor::prestartCoreThread() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "prestartCoreThread", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::concurrent::ThreadPoolExecutor::prestartAllCoreThreads() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "prestartAllCoreThreads", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::ThreadPoolExecutor::allowsCoreThreadTimeOut() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "allowsCoreThreadTimeOut", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::util::concurrent::ThreadPoolExecutor::allowCoreThreadTimeOut(bool arg0) const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "allowCoreThreadTimeOut", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::concurrent::ThreadPoolExecutor::setMaximumPoolSize(int32_t arg0) const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaximumPoolSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::util::concurrent::ThreadPoolExecutor::getMaximumPoolSize() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaximumPoolSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::concurrent::ThreadPoolExecutor::setKeepAliveTime(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeepAliveTime", "(JLjava/util/concurrent/TimeUnit;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int64_t java::util::concurrent::ThreadPoolExecutor::getKeepAliveTime(const ::java::util::concurrent::TimeUnit& arg0) const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeepAliveTime", "(Ljava/util/concurrent/TimeUnit;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::java::util::concurrent::BlockingQueue java::util::concurrent::ThreadPoolExecutor::getQueue() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueue", "()Ljava/util/concurrent/BlockingQueue;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::BlockingQueue _ret(ret);
    return _ret;
}

bool java::util::concurrent::ThreadPoolExecutor::remove(const ::java::lang::Runnable& arg0) const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Runnable;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::ThreadPoolExecutor::purge() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "purge", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::util::concurrent::ThreadPoolExecutor::getPoolSize() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPoolSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::ThreadPoolExecutor::getActiveCount() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActiveCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::concurrent::ThreadPoolExecutor::getLargestPoolSize() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLargestPoolSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::util::concurrent::ThreadPoolExecutor::getTaskCount() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTaskCount", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::util::concurrent::ThreadPoolExecutor::getCompletedTaskCount() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCompletedTaskCount", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::lang::String java::util::concurrent::ThreadPoolExecutor::toString() const {
    if (!::java::util::concurrent::ThreadPoolExecutor::_class) ::java::util::concurrent::ThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ThreadPoolExecutor_DiscardPolicy::ThreadPoolExecutor_DiscardPolicy() : ::java::lang::Object((jobject)0), ::java::util::concurrent::RejectedExecutionHandler((jobject)0) {
    if (!::java::util::concurrent::ThreadPoolExecutor_DiscardPolicy::_class) ::java::util::concurrent::ThreadPoolExecutor_DiscardPolicy::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor$DiscardPolicy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::util::concurrent::ThreadPoolExecutor_DiscardPolicy::rejectedExecution(const ::java::lang::Runnable& arg0, const ::java::util::concurrent::ThreadPoolExecutor& arg1) const {
    if (!::java::util::concurrent::ThreadPoolExecutor_DiscardPolicy::_class) ::java::util::concurrent::ThreadPoolExecutor_DiscardPolicy::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor$DiscardPolicy");
    static jmethodID mid = java::jni->GetMethodID(_class, "rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy::ThreadPoolExecutor_CallerRunsPolicy() : ::java::lang::Object((jobject)0), ::java::util::concurrent::RejectedExecutionHandler((jobject)0) {
    if (!::java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy::_class) ::java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor$CallerRunsPolicy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy::rejectedExecution(const ::java::lang::Runnable& arg0, const ::java::util::concurrent::ThreadPoolExecutor& arg1) const {
    if (!::java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy::_class) ::java::util::concurrent::ThreadPoolExecutor_CallerRunsPolicy::_class = java::fetch_class("java/util/concurrent/ThreadPoolExecutor$CallerRunsPolicy");
    static jmethodID mid = java::jni->GetMethodID(_class, "rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::concurrent::RunnableScheduledFuture::isPeriodic() const {
    if (!::java::util::concurrent::RunnableScheduledFuture::_class) ::java::util::concurrent::RunnableScheduledFuture::_class = java::fetch_class("java/util/concurrent/RunnableScheduledFuture");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPeriodic", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Thread java::util::concurrent::ThreadFactory::newThread(const ::java::lang::Runnable& arg0) const {
    if (!::java::util::concurrent::ThreadFactory::_class) ::java::util::concurrent::ThreadFactory::_class = java::fetch_class("java/util/concurrent/ThreadFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Thread _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::Exchanger::Exchanger() : ::java::lang::Object((jobject)0) {
    if (!::java::util::concurrent::Exchanger::_class) ::java::util::concurrent::Exchanger::_class = java::fetch_class("java/util/concurrent/Exchanger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::concurrent::Exchanger::exchange(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::Exchanger::_class) ::java::util::concurrent::Exchanger::_class = java::fetch_class("java/util/concurrent/Exchanger");
    static jmethodID mid = java::jni->GetMethodID(_class, "exchange", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::Exchanger::exchange(const ::java::lang::Object& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::Exchanger::_class) ::java::util::concurrent::Exchanger::_class = java::fetch_class("java/util/concurrent/Exchanger");
    static jmethodID mid = java::jni->GetMethodID(_class, "exchange", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::CompletionService::submit(const ::java::util::concurrent::Callable& arg0) const {
    if (!::java::util::concurrent::CompletionService::_class) ::java::util::concurrent::CompletionService::_class = java::fetch_class("java/util/concurrent/CompletionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::CompletionService::submit(const ::java::lang::Runnable& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::CompletionService::_class) ::java::util::concurrent::CompletionService::_class = java::fetch_class("java/util/concurrent/CompletionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::CompletionService::take() const {
    if (!::java::util::concurrent::CompletionService::_class) ::java::util::concurrent::CompletionService::_class = java::fetch_class("java/util/concurrent/CompletionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "take", "()Ljava/util/concurrent/Future;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::CompletionService::poll() const {
    if (!::java::util::concurrent::CompletionService::_class) ::java::util::concurrent::CompletionService::_class = java::fetch_class("java/util/concurrent/CompletionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/util/concurrent/Future;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::CompletionService::poll(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::CompletionService::_class) ::java::util::concurrent::CompletionService::_class = java::fetch_class("java/util/concurrent/CompletionService");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::util::concurrent::AbstractExecutorService((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0), ::java::util::concurrent::ScheduledExecutorService((jobject)0), ::java::util::concurrent::ThreadPoolExecutor((jobject)0) {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(int32_t arg0, const ::java::util::concurrent::ThreadFactory& arg1) : ::java::lang::Object((jobject)0), ::java::util::concurrent::AbstractExecutorService((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0), ::java::util::concurrent::ScheduledExecutorService((jobject)0), ::java::util::concurrent::ThreadPoolExecutor((jobject)0) {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/util/concurrent/ThreadFactory;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(int32_t arg0, const ::java::util::concurrent::RejectedExecutionHandler& arg1) : ::java::lang::Object((jobject)0), ::java::util::concurrent::AbstractExecutorService((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0), ::java::util::concurrent::ScheduledExecutorService((jobject)0), ::java::util::concurrent::ThreadPoolExecutor((jobject)0) {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/util/concurrent/RejectedExecutionHandler;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(int32_t arg0, const ::java::util::concurrent::ThreadFactory& arg1, const ::java::util::concurrent::RejectedExecutionHandler& arg2) : ::java::lang::Object((jobject)0), ::java::util::concurrent::AbstractExecutorService((jobject)0), ::java::util::concurrent::Executor((jobject)0), ::java::util::concurrent::ExecutorService((jobject)0), ::java::util::concurrent::ScheduledExecutorService((jobject)0), ::java::util::concurrent::ThreadPoolExecutor((jobject)0) {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::util::concurrent::ScheduledFuture java::util::concurrent::ScheduledThreadPoolExecutor::schedule(const ::java::lang::Runnable& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "schedule", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::util::concurrent::ScheduledFuture _ret(ret);
    return _ret;
}

::java::util::concurrent::ScheduledFuture java::util::concurrent::ScheduledThreadPoolExecutor::schedule(const ::java::util::concurrent::Callable& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "schedule", "(Ljava/util/concurrent/Callable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::util::concurrent::ScheduledFuture _ret(ret);
    return _ret;
}

::java::util::concurrent::ScheduledFuture java::util::concurrent::ScheduledThreadPoolExecutor::scheduleAtFixedRate(const ::java::lang::Runnable& arg0, int64_t arg1, int64_t arg2, const ::java::util::concurrent::TimeUnit& arg3) const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleAtFixedRate", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::concurrent::ScheduledFuture _ret(ret);
    return _ret;
}

::java::util::concurrent::ScheduledFuture java::util::concurrent::ScheduledThreadPoolExecutor::scheduleWithFixedDelay(const ::java::lang::Runnable& arg0, int64_t arg1, int64_t arg2, const ::java::util::concurrent::TimeUnit& arg3) const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleWithFixedDelay", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::concurrent::ScheduledFuture _ret(ret);
    return _ret;
}

void java::util::concurrent::ScheduledThreadPoolExecutor::execute(const ::java::lang::Runnable& arg0) const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::concurrent::Future java::util::concurrent::ScheduledThreadPoolExecutor::submit(const ::java::lang::Runnable& arg0) const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::ScheduledThreadPoolExecutor::submit(const ::java::lang::Runnable& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

::java::util::concurrent::Future java::util::concurrent::ScheduledThreadPoolExecutor::submit(const ::java::util::concurrent::Callable& arg0) const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::concurrent::Future _ret(ret);
    return _ret;
}

void java::util::concurrent::ScheduledThreadPoolExecutor::setContinueExistingPeriodicTasksAfterShutdownPolicy(bool arg0) const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContinueExistingPeriodicTasksAfterShutdownPolicy", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ScheduledThreadPoolExecutor::getContinueExistingPeriodicTasksAfterShutdownPolicy() const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContinueExistingPeriodicTasksAfterShutdownPolicy", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::util::concurrent::ScheduledThreadPoolExecutor::setExecuteExistingDelayedTasksAfterShutdownPolicy(bool arg0) const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExecuteExistingDelayedTasksAfterShutdownPolicy", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::concurrent::ScheduledThreadPoolExecutor::getExecuteExistingDelayedTasksAfterShutdownPolicy() const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExecuteExistingDelayedTasksAfterShutdownPolicy", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::util::concurrent::ScheduledThreadPoolExecutor::shutdown() const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::List java::util::concurrent::ScheduledThreadPoolExecutor::shutdownNow() const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdownNow", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::concurrent::BlockingQueue java::util::concurrent::ScheduledThreadPoolExecutor::getQueue() const {
    if (!::java::util::concurrent::ScheduledThreadPoolExecutor::_class) ::java::util::concurrent::ScheduledThreadPoolExecutor::_class = java::fetch_class("java/util/concurrent/ScheduledThreadPoolExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQueue", "()Ljava/util/concurrent/BlockingQueue;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::concurrent::BlockingQueue _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::CopyOnWriteArraySet::CopyOnWriteArraySet() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::CopyOnWriteArraySet::CopyOnWriteArraySet(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::util::concurrent::CopyOnWriteArraySet::size() const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::concurrent::CopyOnWriteArraySet::isEmpty() const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::CopyOnWriteArraySet::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::Object> java::util::concurrent::CopyOnWriteArraySet::toArray() const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
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

std::vector< ::java::lang::Object> java::util::concurrent::CopyOnWriteArraySet::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
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

void java::util::concurrent::CopyOnWriteArraySet::clear() const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::concurrent::CopyOnWriteArraySet::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::CopyOnWriteArraySet::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::CopyOnWriteArraySet::containsAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::CopyOnWriteArraySet::addAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::CopyOnWriteArraySet::removeAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::CopyOnWriteArraySet::retainAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Iterator java::util::concurrent::CopyOnWriteArraySet::iterator() const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool java::util::concurrent::CopyOnWriteArraySet::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::concurrent::CopyOnWriteArraySet::_class) ::java::util::concurrent::CopyOnWriteArraySet::_class = java::fetch_class("java/util/concurrent/CopyOnWriteArraySet");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::concurrent::RunnableFuture::run() const {
    if (!::java::util::concurrent::RunnableFuture::_class) ::java::util::concurrent::RunnableFuture::_class = java::fetch_class("java/util/concurrent/RunnableFuture");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::CountDownLatch::CountDownLatch(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::util::concurrent::CountDownLatch::_class) ::java::util::concurrent::CountDownLatch::_class = java::fetch_class("java/util/concurrent/CountDownLatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::concurrent::CountDownLatch::await() const {
    if (!::java::util::concurrent::CountDownLatch::_class) ::java::util::concurrent::CountDownLatch::_class = java::fetch_class("java/util/concurrent/CountDownLatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "await", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::concurrent::CountDownLatch::await(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::CountDownLatch::_class) ::java::util::concurrent::CountDownLatch::_class = java::fetch_class("java/util/concurrent/CountDownLatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "await", "(JLjava/util/concurrent/TimeUnit;)Z");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void java::util::concurrent::CountDownLatch::countDown() const {
    if (!::java::util::concurrent::CountDownLatch::_class) ::java::util::concurrent::CountDownLatch::_class = java::fetch_class("java/util/concurrent/CountDownLatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "countDown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t java::util::concurrent::CountDownLatch::getCount() const {
    if (!::java::util::concurrent::CountDownLatch::_class) ::java::util::concurrent::CountDownLatch::_class = java::fetch_class("java/util/concurrent/CountDownLatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::lang::String java::util::concurrent::CountDownLatch::toString() const {
    if (!::java::util::concurrent::CountDownLatch::_class) ::java::util::concurrent::CountDownLatch::_class = java::fetch_class("java/util/concurrent/CountDownLatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::concurrent::Future::cancel(bool arg0) const {
    if (!::java::util::concurrent::Future::_class) ::java::util::concurrent::Future::_class = java::fetch_class("java/util/concurrent/Future");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::concurrent::Future::isCancelled() const {
    if (!::java::util::concurrent::Future::_class) ::java::util::concurrent::Future::_class = java::fetch_class("java/util/concurrent/Future");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCancelled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::concurrent::Future::isDone() const {
    if (!::java::util::concurrent::Future::_class) ::java::util::concurrent::Future::_class = java::fetch_class("java/util/concurrent/Future");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDone", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::util::concurrent::Future::get() const {
    if (!::java::util::concurrent::Future::_class) ::java::util::concurrent::Future::_class = java::fetch_class("java/util/concurrent/Future");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::concurrent::Future::get(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::java::util::concurrent::Future::_class) ::java::util::concurrent::Future::_class = java::fetch_class("java/util/concurrent/Future");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::CancellationException::CancellationException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::concurrent::CancellationException::_class) ::java::util::concurrent::CancellationException::_class = java::fetch_class("java/util/concurrent/CancellationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::concurrent::CancellationException::CancellationException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::concurrent::CancellationException::_class) ::java::util::concurrent::CancellationException::_class = java::fetch_class("java/util/concurrent/CancellationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

