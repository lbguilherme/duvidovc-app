#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.AbstractMap.hpp"
#include "java.util.NavigableMap.hpp"
#include "java.util.SortedMap.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Comparator; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Map_Entry; } }
namespace java { namespace util { class NavigableMap; } }
namespace java { namespace util { class NavigableSet; } }
namespace java { namespace util { class Set; } }
namespace java { namespace util { class SortedMap; } }

namespace java {
namespace util {
class TreeMap : public virtual ::java::lang::Object,
                public virtual ::java::io::Serializable,
                public virtual ::java::lang::Cloneable,
                public virtual ::java::util::AbstractMap,
                public virtual ::java::util::NavigableMap,
                public virtual ::java::util::SortedMap {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TreeMap(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::util::AbstractMap(_obj), ::java::util::Map(_obj), ::java::util::NavigableMap(_obj), ::java::util::SortedMap(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TreeMap(const ::java::util::TreeMap& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0) {obj = x.obj;}
    TreeMap(::java::util::TreeMap&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::TreeMap& operator=(const ::java::util::TreeMap& x) {obj = x.obj; return *this;}
    ::java::util::TreeMap& operator=(::java::util::TreeMap&& x) {obj = std::move(x.obj); return *this;}
    
    TreeMap();
    TreeMap(const ::java::util::Map&);
    TreeMap(const ::java::util::Comparator&);
    TreeMap(const ::java::util::SortedMap&);
    ::java::lang::Object clone() const ;
    int32_t size() const ;
    bool isEmpty() const ;
    ::java::lang::Object get(const ::java::lang::Object&) const ;
    bool containsKey(const ::java::lang::Object&) const ;
    ::java::lang::Object put(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    void clear() const ;
    ::java::lang::Object remove(const ::java::lang::Object&) const ;
    ::java::util::Map_Entry firstEntry() const ;
    ::java::util::Map_Entry pollFirstEntry() const ;
    ::java::lang::Object firstKey() const ;
    ::java::util::Map_Entry lastEntry() const ;
    ::java::util::Map_Entry pollLastEntry() const ;
    ::java::lang::Object lastKey() const ;
    ::java::util::Map_Entry lowerEntry(const ::java::lang::Object&) const ;
    ::java::lang::Object lowerKey(const ::java::lang::Object&) const ;
    ::java::util::Map_Entry floorEntry(const ::java::lang::Object&) const ;
    ::java::lang::Object floorKey(const ::java::lang::Object&) const ;
    ::java::util::Map_Entry ceilingEntry(const ::java::lang::Object&) const ;
    ::java::lang::Object ceilingKey(const ::java::lang::Object&) const ;
    ::java::util::Map_Entry higherEntry(const ::java::lang::Object&) const ;
    ::java::lang::Object higherKey(const ::java::lang::Object&) const ;
    ::java::util::Comparator comparator() const ;
    ::java::util::Set entrySet() const ;
    ::java::util::Set keySet() const ;
    ::java::util::NavigableSet navigableKeySet() const ;
    ::java::util::NavigableMap subMap(const ::java::lang::Object&, bool, const ::java::lang::Object&, bool) const ;
    ::java::util::SortedMap subMap(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    ::java::util::NavigableMap headMap(const ::java::lang::Object&, bool) const ;
    ::java::util::SortedMap headMap(const ::java::lang::Object&) const ;
    ::java::util::NavigableMap tailMap(const ::java::lang::Object&, bool) const ;
    ::java::util::SortedMap tailMap(const ::java::lang::Object&) const ;
    ::java::util::NavigableMap descendingMap() const ;
    ::java::util::NavigableSet descendingKeySet() const ;

};
}
}


