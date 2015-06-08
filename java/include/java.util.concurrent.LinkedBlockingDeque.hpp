#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.AbstractQueue.hpp"
#include "java.util.concurrent.BlockingDeque.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class LinkedBlockingDeque : public virtual ::java::lang::Object,
                            public virtual ::java::io::Serializable,
                            public virtual ::java::util::AbstractQueue,
                            public virtual ::java::util::concurrent::BlockingDeque {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LinkedBlockingDeque(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractQueue(_obj), ::java::util::Collection(_obj), ::java::util::Deque(_obj), ::java::util::Queue(_obj), ::java::util::concurrent::BlockingDeque(_obj), ::java::util::concurrent::BlockingQueue(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LinkedBlockingDeque(const ::java::util::concurrent::LinkedBlockingDeque& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingDeque((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {obj = x.obj;}
    LinkedBlockingDeque(::java::util::concurrent::LinkedBlockingDeque&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingDeque((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::LinkedBlockingDeque& operator=(const ::java::util::concurrent::LinkedBlockingDeque& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::LinkedBlockingDeque& operator=(::java::util::concurrent::LinkedBlockingDeque&& x) {obj = std::move(x.obj); return *this;}
    
    LinkedBlockingDeque();
    LinkedBlockingDeque(int32_t);
    LinkedBlockingDeque(const ::java::util::Collection&);
    void addFirst(const ::java::lang::Object&) const;
    void addLast(const ::java::lang::Object&) const;
    bool offerFirst(const ::java::lang::Object&) const;
    bool offerLast(const ::java::lang::Object&) const;
    void putFirst(const ::java::lang::Object&) const;
    void putLast(const ::java::lang::Object&) const;
    bool offerFirst(const ::java::lang::Object&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    bool offerLast(const ::java::lang::Object&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::lang::Object removeFirst() const;
    ::java::lang::Object removeLast() const;
    ::java::lang::Object pollFirst() const;
    ::java::lang::Object pollLast() const;
    ::java::lang::Object takeFirst() const;
    ::java::lang::Object takeLast() const;
    ::java::lang::Object pollFirst(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::lang::Object pollLast(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::lang::Object getFirst() const;
    ::java::lang::Object getLast() const;
    ::java::lang::Object peekFirst() const;
    ::java::lang::Object peekLast() const;
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
    int32_t remainingCapacity() const;
    int32_t drainTo(const ::java::util::Collection&) const;
    int32_t drainTo(const ::java::util::Collection&, int32_t) const;
    void push(const ::java::lang::Object&) const;
    ::java::lang::Object pop() const;
    bool remove(const ::java::lang::Object&) const;
    int32_t size() const;
    bool contains(const ::java::lang::Object&) const;
    std::vector< ::java::lang::Object> toArray() const;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const;
    ::java::lang::String toString() const;
    void clear() const;
    ::java::util::Iterator iterator() const;
    ::java::util::Iterator descendingIterator() const;

};
}
}
}


