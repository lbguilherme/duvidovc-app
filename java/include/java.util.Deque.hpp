#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Queue.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Iterator; } }

namespace java {
namespace util {
class Deque : public virtual ::java::lang::Object,
              public virtual ::java::util::Queue {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Deque(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::Collection(_obj), ::java::util::Queue(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Deque(const ::java::util::Deque& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj;}
    Deque(::java::util::Deque&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Deque& operator=(const ::java::util::Deque& x) {obj = x.obj; return *this;}
    ::java::util::Deque& operator=(::java::util::Deque&& x) {obj = std::move(x.obj); return *this;}
    
    void addFirst(const ::java::lang::Object&) const;
    void addLast(const ::java::lang::Object&) const;
    bool offerFirst(const ::java::lang::Object&) const;
    bool offerLast(const ::java::lang::Object&) const;
    ::java::lang::Object removeFirst() const;
    ::java::lang::Object removeLast() const;
    ::java::lang::Object pollFirst() const;
    ::java::lang::Object pollLast() const;
    ::java::lang::Object getFirst() const;
    ::java::lang::Object getLast() const;
    ::java::lang::Object peekFirst() const;
    ::java::lang::Object peekLast() const;
    bool removeFirstOccurrence(const ::java::lang::Object&) const;
    bool removeLastOccurrence(const ::java::lang::Object&) const;
    bool add(const ::java::lang::Object&) const;
    bool offer(const ::java::lang::Object&) const;
    ::java::lang::Object remove() const;
    ::java::lang::Object poll() const;
    ::java::lang::Object element() const;
    ::java::lang::Object peek() const;
    void push(const ::java::lang::Object&) const;
    ::java::lang::Object pop() const;
    bool remove(const ::java::lang::Object&) const;
    bool contains(const ::java::lang::Object&) const;
    int32_t size() const;
    ::java::util::Iterator iterator() const;
    ::java::util::Iterator descendingIterator() const;

};
}
}


