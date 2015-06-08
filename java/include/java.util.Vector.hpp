#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.AbstractList.hpp"
#include "java.util.List.hpp"
#include "java.util.RandomAccess.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Enumeration; } }
namespace java { namespace util { class List; } }

namespace java {
namespace util {
class Vector : public virtual ::java::lang::Object,
               public virtual ::java::io::Serializable,
               public virtual ::java::lang::Cloneable,
               public virtual ::java::util::AbstractList,
               public virtual ::java::util::List,
               public virtual ::java::util::RandomAccess {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Vector(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractList(_obj), ::java::util::Collection(_obj), ::java::util::List(_obj), ::java::util::RandomAccess(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Vector(const ::java::util::Vector& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {obj = x.obj;}
    Vector(::java::util::Vector&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Vector& operator=(const ::java::util::Vector& x) {obj = x.obj; return *this;}
    ::java::util::Vector& operator=(::java::util::Vector&& x) {obj = std::move(x.obj); return *this;}
    
    Vector();
    Vector(int32_t);
    Vector(int32_t, int32_t);
    Vector(const ::java::util::Collection&);
    void add(int32_t, const ::java::lang::Object&) const;
    bool add(const ::java::lang::Object&) const;
    bool addAll(int32_t, const ::java::util::Collection&) const;
    bool addAll(const ::java::util::Collection&) const;
    void addElement(const ::java::lang::Object&) const;
    int32_t capacity() const;
    void clear() const;
    ::java::lang::Object clone() const;
    bool contains(const ::java::lang::Object&) const;
    bool containsAll(const ::java::util::Collection&) const;
    void copyInto(const std::vector< ::java::lang::Object>&) const;
    ::java::lang::Object elementAt(int32_t) const;
    ::java::util::Enumeration elements() const;
    void ensureCapacity(int32_t) const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::Object firstElement() const;
    ::java::lang::Object get(int32_t) const;
    int32_t hashCode() const;
    int32_t indexOf(const ::java::lang::Object&) const;
    int32_t indexOf(const ::java::lang::Object&, int32_t) const;
    void insertElementAt(const ::java::lang::Object&, int32_t) const;
    bool isEmpty() const;
    ::java::lang::Object lastElement() const;
    int32_t lastIndexOf(const ::java::lang::Object&) const;
    int32_t lastIndexOf(const ::java::lang::Object&, int32_t) const;
    ::java::lang::Object remove(int32_t) const;
    bool remove(const ::java::lang::Object&) const;
    bool removeAll(const ::java::util::Collection&) const;
    void removeAllElements() const;
    bool removeElement(const ::java::lang::Object&) const;
    void removeElementAt(int32_t) const;
    bool retainAll(const ::java::util::Collection&) const;
    ::java::lang::Object set(int32_t, const ::java::lang::Object&) const;
    void setElementAt(const ::java::lang::Object&, int32_t) const;
    void setSize(int32_t) const;
    int32_t size() const;
    ::java::util::List subList(int32_t, int32_t) const;
    std::vector< ::java::lang::Object> toArray() const;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const;
    ::java::lang::String toString() const;
    void trimToSize() const;

};
}
}


