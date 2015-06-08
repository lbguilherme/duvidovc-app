#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.AbstractSequentialList.hpp"
#include "java.util.Deque.hpp"
#include "java.util.List.hpp"
#include "java.util.Queue.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class ListIterator; } }

namespace java {
namespace util {
class LinkedList : public virtual ::java::lang::Object,
                   public virtual ::java::io::Serializable,
                   public virtual ::java::lang::Cloneable,
                   public virtual ::java::util::AbstractSequentialList,
                   public virtual ::java::util::Deque,
                   public virtual ::java::util::List,
                   public virtual ::java::util::Queue {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LinkedList(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractList(_obj), ::java::util::AbstractSequentialList(_obj), ::java::util::Collection(_obj), ::java::util::Deque(_obj), ::java::util::List(_obj), ::java::util::Queue(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LinkedList(const ::java::util::LinkedList& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::AbstractSequentialList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::List((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj;}
    LinkedList(::java::util::LinkedList&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::AbstractSequentialList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::List((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::LinkedList& operator=(const ::java::util::LinkedList& x) {obj = x.obj; return *this;}
    ::java::util::LinkedList& operator=(::java::util::LinkedList&& x) {obj = std::move(x.obj); return *this;}
    
    LinkedList();
    LinkedList(const ::java::util::Collection&);
    void add(int32_t, const ::java::lang::Object&) const;
    bool add(const ::java::lang::Object&) const;
    bool addAll(int32_t, const ::java::util::Collection&) const;
    bool addAll(const ::java::util::Collection&) const;
    void addFirst(const ::java::lang::Object&) const;
    void addLast(const ::java::lang::Object&) const;
    void clear() const;
    ::java::lang::Object clone() const;
    bool contains(const ::java::lang::Object&) const;
    ::java::lang::Object get(int32_t) const;
    ::java::lang::Object getFirst() const;
    ::java::lang::Object getLast() const;
    int32_t indexOf(const ::java::lang::Object&) const;
    int32_t lastIndexOf(const ::java::lang::Object&) const;
    ::java::util::ListIterator listIterator(int32_t) const;
    ::java::lang::Object remove(int32_t) const;
    bool remove(const ::java::lang::Object&) const;
    ::java::lang::Object removeFirst() const;
    ::java::lang::Object removeLast() const;
    ::java::util::Iterator descendingIterator() const;
    bool offerFirst(const ::java::lang::Object&) const;
    bool offerLast(const ::java::lang::Object&) const;
    ::java::lang::Object peekFirst() const;
    ::java::lang::Object peekLast() const;
    ::java::lang::Object pollFirst() const;
    ::java::lang::Object pollLast() const;
    ::java::lang::Object pop() const;
    void push(const ::java::lang::Object&) const;
    bool removeFirstOccurrence(const ::java::lang::Object&) const;
    bool removeLastOccurrence(const ::java::lang::Object&) const;
    ::java::lang::Object set(int32_t, const ::java::lang::Object&) const;
    int32_t size() const;
    bool offer(const ::java::lang::Object&) const;
    ::java::lang::Object poll() const;
    ::java::lang::Object remove() const;
    ::java::lang::Object peek() const;
    ::java::lang::Object element() const;
    std::vector< ::java::lang::Object> toArray() const;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const;

};
}
}


