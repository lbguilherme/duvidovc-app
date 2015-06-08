#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.SortedSet.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class NavigableSet; } }
namespace java { namespace util { class SortedSet; } }

namespace java {
namespace util {
class NavigableSet : public virtual ::java::lang::Object,
                     public virtual ::java::util::SortedSet {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NavigableSet(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::Collection(_obj), ::java::util::Set(_obj), ::java::util::SortedSet(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NavigableSet(const ::java::util::NavigableSet& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {obj = x.obj;}
    NavigableSet(::java::util::NavigableSet&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::NavigableSet& operator=(const ::java::util::NavigableSet& x) {obj = x.obj; return *this;}
    ::java::util::NavigableSet& operator=(::java::util::NavigableSet&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object lower(const ::java::lang::Object&) const;
    ::java::lang::Object floor(const ::java::lang::Object&) const;
    ::java::lang::Object ceiling(const ::java::lang::Object&) const;
    ::java::lang::Object higher(const ::java::lang::Object&) const;
    ::java::lang::Object pollFirst() const;
    ::java::lang::Object pollLast() const;
    ::java::util::Iterator iterator() const;
    ::java::util::NavigableSet descendingSet() const;
    ::java::util::Iterator descendingIterator() const;
    ::java::util::NavigableSet subSet(const ::java::lang::Object&, bool, const ::java::lang::Object&, bool) const;
    ::java::util::NavigableSet headSet(const ::java::lang::Object&, bool) const;
    ::java::util::NavigableSet tailSet(const ::java::lang::Object&, bool) const;
    ::java::util::SortedSet subSet(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::util::SortedSet headSet(const ::java::lang::Object&) const;
    ::java::util::SortedSet tailSet(const ::java::lang::Object&) const;

};
}
}


