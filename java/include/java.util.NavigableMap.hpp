#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.SortedMap.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Map_Entry; } }
namespace java { namespace util { class NavigableMap; } }
namespace java { namespace util { class NavigableSet; } }
namespace java { namespace util { class SortedMap; } }

namespace java {
namespace util {
class NavigableMap : public virtual ::java::lang::Object,
                     public virtual ::java::util::SortedMap {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NavigableMap(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Map(_obj), ::java::util::SortedMap(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NavigableMap(const ::java::util::NavigableMap& x) : ::java::lang::Object((jobject)0), ::java::util::Map((jobject)0), ::java::util::SortedMap((jobject)0) {obj = x.obj;}
    NavigableMap(::java::util::NavigableMap&& x) : ::java::lang::Object((jobject)0), ::java::util::Map((jobject)0), ::java::util::SortedMap((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::NavigableMap& operator=(const ::java::util::NavigableMap& x) {obj = x.obj; return *this;}
    ::java::util::NavigableMap& operator=(::java::util::NavigableMap&& x) {obj = std::move(x.obj); return *this;}
    
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
    ::java::util::NavigableMap descendingMap() const;
    ::java::util::NavigableSet navigableKeySet() const;
    ::java::util::NavigableSet descendingKeySet() const;
    ::java::util::NavigableMap subMap(const ::java::lang::Object&, bool, const ::java::lang::Object&, bool) const;
    ::java::util::NavigableMap headMap(const ::java::lang::Object&, bool) const;
    ::java::util::NavigableMap tailMap(const ::java::lang::Object&, bool) const;
    ::java::util::SortedMap subMap(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::util::SortedMap headMap(const ::java::lang::Object&) const;
    ::java::util::SortedMap tailMap(const ::java::lang::Object&) const;

};
}
}


