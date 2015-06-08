#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.AbstractCollection.hpp"
#include "java.util.Deque.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class ArrayDeque; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }

namespace java {
namespace util {
class ArrayDeque : public virtual ::java::lang::Object,
                   public virtual ::java::io::Serializable,
                   public virtual ::java::lang::Cloneable,
                   public virtual ::java::util::AbstractCollection,
                   public virtual ::java::util::Deque {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ArrayDeque(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::Collection(_obj), ::java::util::Deque(_obj), ::java::util::Queue(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ArrayDeque(const ::java::util::ArrayDeque& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj;}
    ArrayDeque(::java::util::ArrayDeque&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::ArrayDeque& operator=(const ::java::util::ArrayDeque& x) {obj = x.obj; return *this;}
    ::java::util::ArrayDeque& operator=(::java::util::ArrayDeque&& x) {obj = std::move(x.obj); return *this;}
    
    ArrayDeque();
    ArrayDeque(int32_t);
    ArrayDeque(const ::java::util::Collection&);
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
    int32_t size() const;
    bool isEmpty() const;
    ::java::util::Iterator iterator() const;
    ::java::util::Iterator descendingIterator() const;
    bool contains(const ::java::lang::Object&) const;
    bool remove(const ::java::lang::Object&) const;
    void clear() const;
    std::vector< ::java::lang::Object> toArray() const;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const;
    ::java::util::ArrayDeque clone() const;

};
}
}


