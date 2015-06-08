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
#include "java.util.concurrent.ConcurrentNavigableMap.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Comparator; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Map_Entry; } }
namespace java { namespace util { class NavigableSet; } }
namespace java { namespace util { class Set; } }
namespace java { namespace util { class SortedMap; } }
namespace java { namespace util { namespace concurrent { class ConcurrentNavigableMap; } } }
namespace java { namespace util { namespace concurrent { class ConcurrentSkipListMap; } } }

namespace java {
namespace util {
namespace concurrent {
class ConcurrentSkipListMap : public virtual ::java::lang::Object,
                              public virtual ::java::io::Serializable,
                              public virtual ::java::lang::Cloneable,
                              public virtual ::java::util::AbstractMap,
                              public virtual ::java::util::concurrent::ConcurrentNavigableMap {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConcurrentSkipListMap(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::util::AbstractMap(_obj), ::java::util::Map(_obj), ::java::util::NavigableMap(_obj), ::java::util::SortedMap(_obj), ::java::util::concurrent::ConcurrentMap(_obj), ::java::util::concurrent::ConcurrentNavigableMap(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConcurrentSkipListMap(const ::java::util::concurrent::ConcurrentSkipListMap& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0), ::java::util::concurrent::ConcurrentNavigableMap((jobject)0) {obj = x.obj;}
    ConcurrentSkipListMap(::java::util::concurrent::ConcurrentSkipListMap&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0), ::java::util::concurrent::ConcurrentNavigableMap((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ConcurrentSkipListMap& operator=(const ::java::util::concurrent::ConcurrentSkipListMap& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ConcurrentSkipListMap& operator=(::java::util::concurrent::ConcurrentSkipListMap&& x) {obj = std::move(x.obj); return *this;}
    
    ConcurrentSkipListMap();
    ConcurrentSkipListMap(const ::java::util::Comparator&);
    ConcurrentSkipListMap(const ::java::util::Map&);
    ConcurrentSkipListMap(const ::java::util::SortedMap&);
    ::java::util::concurrent::ConcurrentSkipListMap clone() const;
    bool containsKey(const ::java::lang::Object&) const;
    ::java::lang::Object get(const ::java::lang::Object&) const;
    ::java::lang::Object put(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::lang::Object remove(const ::java::lang::Object&) const;
    bool containsValue(const ::java::lang::Object&) const;
    int32_t size() const;
    bool isEmpty() const;
    void clear() const;
    ::java::util::NavigableSet keySet() const;
    ::java::util::NavigableSet navigableKeySet() const;
    ::java::util::Collection values() const;
    ::java::util::Set entrySet() const;
    ::java::util::concurrent::ConcurrentNavigableMap descendingMap() const;
    ::java::util::NavigableSet descendingKeySet() const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::Object putIfAbsent(const ::java::lang::Object&, const ::java::lang::Object&) const;
    bool remove(const ::java::lang::Object&, const ::java::lang::Object&) const;
    bool replace(const ::java::lang::Object&, const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::lang::Object replace(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::util::Comparator comparator() const;
    ::java::lang::Object firstKey() const;
    ::java::lang::Object lastKey() const;
    ::java::util::concurrent::ConcurrentNavigableMap subMap(const ::java::lang::Object&, bool, const ::java::lang::Object&, bool) const;
    ::java::util::concurrent::ConcurrentNavigableMap headMap(const ::java::lang::Object&, bool) const;
    ::java::util::concurrent::ConcurrentNavigableMap tailMap(const ::java::lang::Object&, bool) const;
    ::java::util::concurrent::ConcurrentNavigableMap subMap(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::util::concurrent::ConcurrentNavigableMap headMap(const ::java::lang::Object&) const;
    ::java::util::concurrent::ConcurrentNavigableMap tailMap(const ::java::lang::Object&) const;
    ::java::util::Map_Entry lowerEntry(const ::java::lang::Object&) const;
    ::java::lang::Object lowerKey(const ::java::lang::Object&) const;
    ::java::util::Map_Entry floorEntry(const ::java::lang::Object&) const;
    ::java::lang::Object floorKey(const ::java::lang::Object&) const;
    ::java::util::Map_Entry ceilingEntry(const ::java::lang::Object&) const;
    ::java::lang::Object ceilingKey(const ::java::lang::Object&) const;
    ::java::util::Map_Entry higherEntry(const ::java::lang::Object&) const;
    ::java::lang::Object higherKey(const ::java::lang::Object&) const;
    ::java::util::Map_Entry firstEntry() const;
    ::java::util::Map_Entry lastEntry() const;
    ::java::util::Map_Entry pollFirstEntry() const;
    ::java::util::Map_Entry pollLastEntry() const;

};
}
}
}


