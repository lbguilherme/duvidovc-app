#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Deque.hpp"
#include "java.util.concurrent.BlockingQueue.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class BlockingDeque : public virtual ::java::lang::Object,
                      public virtual ::java::util::Deque,
                      public virtual ::java::util::concurrent::BlockingQueue {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BlockingDeque(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::Collection(_obj), ::java::util::Deque(_obj), ::java::util::Queue(_obj), ::java::util::concurrent::BlockingQueue(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BlockingDeque(const ::java::util::concurrent::BlockingDeque& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {obj = x.obj;}
    BlockingDeque(::java::util::concurrent::BlockingDeque&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::BlockingDeque& operator=(const ::java::util::concurrent::BlockingDeque& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::BlockingDeque& operator=(::java::util::concurrent::BlockingDeque&& x) {obj = std::move(x.obj); return *this;}
    
    void addFirst(const ::java::lang::Object&) const;
    void addLast(const ::java::lang::Object&) const;
    bool offerFirst(const ::java::lang::Object&) const;
    bool offerLast(const ::java::lang::Object&) const;
    void putFirst(const ::java::lang::Object&) const;
    void putLast(const ::java::lang::Object&) const;
    bool offerFirst(const ::java::lang::Object&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    bool offerLast(const ::java::lang::Object&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::lang::Object takeFirst() const;
    ::java::lang::Object takeLast() const;
    ::java::lang::Object pollFirst(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::lang::Object pollLast(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    bool removeFirstOccurrence(const ::java::lang::Object&) const;
    bool removeLastOccurrence(const ::java::lang::Object&) const;
    bool add(const ::java::lang::Object&) const;
    bool offer(const ::java::lang::Object&) const;
    void put(const ::java::lang::Object&) const;
    bool offer(const ::java::lang::Object&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::lang::Object remove() const;
    ::java::lang::Object poll() const;
    ::java::lang::Object take() const;
    ::java::lang::Object poll(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::lang::Object element() const;
    ::java::lang::Object peek() const;
    bool remove(const ::java::lang::Object&) const;
    bool contains(const ::java::lang::Object&) const;
    int32_t size() const;
    ::java::util::Iterator iterator() const;
    void push(const ::java::lang::Object&) const;

};
}
}
}


