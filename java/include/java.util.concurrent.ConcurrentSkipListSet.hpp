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
namespace java { namespace util { namespace concurrent { class ConcurrentSkipListSet; } } }

namespace java {
namespace util {
namespace concurrent {
class ConcurrentSkipListSet : public virtual ::java::lang::Object,
                              public virtual ::java::io::Serializable,
                              public virtual ::java::lang::Cloneable,
                              public virtual ::java::util::AbstractSet,
                              public virtual ::java::util::NavigableSet {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConcurrentSkipListSet(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractSet(_obj), ::java::util::Collection(_obj), ::java::util::NavigableSet(_obj), ::java::util::Set(_obj), ::java::util::SortedSet(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConcurrentSkipListSet(const ::java::util::concurrent::ConcurrentSkipListSet& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::NavigableSet((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {obj = x.obj;}
    ConcurrentSkipListSet(::java::util::concurrent::ConcurrentSkipListSet&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::NavigableSet((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ConcurrentSkipListSet& operator=(const ::java::util::concurrent::ConcurrentSkipListSet& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ConcurrentSkipListSet& operator=(::java::util::concurrent::ConcurrentSkipListSet&& x) {obj = std::move(x.obj); return *this;}
    
    ConcurrentSkipListSet();
    ConcurrentSkipListSet(const ::java::util::Comparator&);
    ConcurrentSkipListSet(const ::java::util::Collection&);
    ConcurrentSkipListSet(const ::java::util::SortedSet&);
    ::java::util::concurrent::ConcurrentSkipListSet clone() const;
    int32_t size() const;
    bool isEmpty() const;
    bool contains(const ::java::lang::Object&) const;
    bool add(const ::java::lang::Object&) const;
    bool remove(const ::java::lang::Object&) const;
    void clear() const;
    ::java::util::Iterator iterator() const;
    ::java::util::Iterator descendingIterator() const;
    bool equals(const ::java::lang::Object&) const;
    bool removeAll(const ::java::util::Collection&) const;
    ::java::lang::Object lower(const ::java::lang::Object&) const;
    ::java::lang::Object floor(const ::java::lang::Object&) const;
    ::java::lang::Object ceiling(const ::java::lang::Object&) const;
    ::java::lang::Object higher(const ::java::lang::Object&) const;
    ::java::lang::Object pollFirst() const;
    ::java::lang::Object pollLast() const;
    ::java::util::Comparator comparator() const;
    ::java::lang::Object first() const;
    ::java::lang::Object last() const;
    ::java::util::NavigableSet subSet(const ::java::lang::Object&, bool, const ::java::lang::Object&, bool) const;
    ::java::util::NavigableSet headSet(const ::java::lang::Object&, bool) const;
    ::java::util::NavigableSet tailSet(const ::java::lang::Object&, bool) const;
    ::java::util::NavigableSet subSet(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::util::NavigableSet headSet(const ::java::lang::Object&) const;
    ::java::util::NavigableSet tailSet(const ::java::lang::Object&) const;
    ::java::util::NavigableSet descendingSet() const;

};
}
}
}


