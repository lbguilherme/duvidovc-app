#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.List.hpp"
#include "java.util.RandomAccess.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class ListIterator; } }

namespace java {
namespace util {
namespace concurrent {
class CopyOnWriteArrayList : public virtual ::java::lang::Object,
                             public virtual ::java::io::Serializable,
                             public virtual ::java::lang::Cloneable,
                             public virtual ::java::util::List,
                             public virtual ::java::util::RandomAccess {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CopyOnWriteArrayList(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Iterable(_obj), ::java::util::Collection(_obj), ::java::util::List(_obj), ::java::util::RandomAccess(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CopyOnWriteArrayList(const ::java::util::concurrent::CopyOnWriteArrayList& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {obj = x.obj;}
    CopyOnWriteArrayList(::java::util::concurrent::CopyOnWriteArrayList&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::CopyOnWriteArrayList& operator=(const ::java::util::concurrent::CopyOnWriteArrayList& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::CopyOnWriteArrayList& operator=(::java::util::concurrent::CopyOnWriteArrayList&& x) {obj = std::move(x.obj); return *this;}
    
    CopyOnWriteArrayList();
    CopyOnWriteArrayList(const ::java::util::Collection&);
    CopyOnWriteArrayList(const std::vector< ::java::lang::Object>&);
    ::java::lang::Object clone() const;
    int32_t size() const;
    ::java::lang::Object get(int32_t) const;
    bool contains(const ::java::lang::Object&) const;
    bool containsAll(const ::java::util::Collection&) const;
    int32_t indexOf(const ::java::lang::Object&, int32_t) const;
    int32_t indexOf(const ::java::lang::Object&) const;
    int32_t lastIndexOf(const ::java::lang::Object&, int32_t) const;
    int32_t lastIndexOf(const ::java::lang::Object&) const;
    bool isEmpty() const;
    ::java::util::Iterator iterator() const;
    ::java::util::ListIterator listIterator(int32_t) const;
    ::java::util::ListIterator listIterator() const;
    ::java::util::List subList(int32_t, int32_t) const;
    std::vector< ::java::lang::Object> toArray() const;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;
    bool add(const ::java::lang::Object&) const;
    void add(int32_t, const ::java::lang::Object&) const;
    bool addAll(const ::java::util::Collection&) const;
    bool addAll(int32_t, const ::java::util::Collection&) const;
    int32_t addAllAbsent(const ::java::util::Collection&) const;
    bool addIfAbsent(const ::java::lang::Object&) const;
    void clear() const;
    ::java::lang::Object remove(int32_t) const;
    bool remove(const ::java::lang::Object&) const;
    bool removeAll(const ::java::util::Collection&) const;
    bool retainAll(const ::java::util::Collection&) const;
    ::java::lang::Object set(int32_t, const ::java::lang::Object&) const;

};
}
}
}


