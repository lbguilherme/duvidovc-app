#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.AbstractSet.hpp"
#include "java.util.NavigableSet.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Comparator; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class NavigableSet; } }
namespace java { namespace util { class SortedSet; } }

namespace java {
namespace util {
class TreeSet : public virtual ::java::lang::Object,
                public virtual ::java::io::Serializable,
                public virtual ::java::lang::Cloneable,
                public virtual ::java::util::AbstractSet,
                public virtual ::java::util::NavigableSet {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TreeSet(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractSet(_obj), ::java::util::Collection(_obj), ::java::util::NavigableSet(_obj), ::java::util::Set(_obj), ::java::util::SortedSet(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TreeSet(const ::java::util::TreeSet& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::NavigableSet((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {obj = x.obj;}
    TreeSet(::java::util::TreeSet&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::NavigableSet((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::TreeSet& operator=(const ::java::util::TreeSet& x) {obj = x.obj; return *this;}
    ::java::util::TreeSet& operator=(::java::util::TreeSet&& x) {obj = std::move(x.obj); return *this;}
    
    TreeSet();
    TreeSet(const ::java::util::Collection&);
    TreeSet(const ::java::util::Comparator&);
    TreeSet(const ::java::util::SortedSet&);
    bool add(const ::java::lang::Object&) const;
    bool addAll(const ::java::util::Collection&) const;
    void clear() const;
    ::java::lang::Object clone() const;
    ::java::util::Comparator comparator() const;
    bool contains(const ::java::lang::Object&) const;
    bool isEmpty() const;
    ::java::util::Iterator iterator() const;
    ::java::util::Iterator descendingIterator() const;
    bool remove(const ::java::lang::Object&) const;
    int32_t size() const;
    ::java::lang::Object first() const;
    ::java::lang::Object last() const;
    ::java::lang::Object pollFirst() const;
    ::java::lang::Object pollLast() const;
    ::java::lang::Object higher(const ::java::lang::Object&) const;
    ::java::lang::Object lower(const ::java::lang::Object&) const;
    ::java::lang::Object ceiling(const ::java::lang::Object&) const;
    ::java::lang::Object floor(const ::java::lang::Object&) const;
    ::java::util::NavigableSet descendingSet() const;
    ::java::util::NavigableSet subSet(const ::java::lang::Object&, bool, const ::java::lang::Object&, bool) const;
    ::java::util::NavigableSet headSet(const ::java::lang::Object&, bool) const;
    ::java::util::NavigableSet tailSet(const ::java::lang::Object&, bool) const;
    ::java::util::SortedSet subSet(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::util::SortedSet headSet(const ::java::lang::Object&) const;
    ::java::util::SortedSet tailSet(const ::java::lang::Object&) const;

};
}
}


