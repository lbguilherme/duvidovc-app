#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.NavigableMap.hpp"
#include "java.util.concurrent.ConcurrentMap.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class NavigableSet; } }
namespace java { namespace util { namespace concurrent { class ConcurrentNavigableMap; } } }

namespace java {
namespace util {
namespace concurrent {
class ConcurrentNavigableMap : public virtual ::java::lang::Object,
                               public virtual ::java::util::NavigableMap,
                               public virtual ::java::util::concurrent::ConcurrentMap {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConcurrentNavigableMap(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Map(_obj), ::java::util::NavigableMap(_obj), ::java::util::SortedMap(_obj), ::java::util::concurrent::ConcurrentMap(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConcurrentNavigableMap(const ::java::util::concurrent::ConcurrentNavigableMap& x) : ::java::lang::Object((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0) {obj = x.obj;}
    ConcurrentNavigableMap(::java::util::concurrent::ConcurrentNavigableMap&& x) : ::java::lang::Object((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0), ::java::util::concurrent::ConcurrentMap((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ConcurrentNavigableMap& operator=(const ::java::util::concurrent::ConcurrentNavigableMap& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ConcurrentNavigableMap& operator=(::java::util::concurrent::ConcurrentNavigableMap&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::concurrent::ConcurrentNavigableMap subMap(const ::java::lang::Object&, bool, const ::java::lang::Object&, bool) const ;
    ::java::util::concurrent::ConcurrentNavigableMap headMap(const ::java::lang::Object&, bool) const ;
    ::java::util::concurrent::ConcurrentNavigableMap tailMap(const ::java::lang::Object&, bool) const ;
    ::java::util::concurrent::ConcurrentNavigableMap subMap(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    ::java::util::concurrent::ConcurrentNavigableMap headMap(const ::java::lang::Object&) const ;
    ::java::util::concurrent::ConcurrentNavigableMap tailMap(const ::java::lang::Object&) const ;
    ::java::util::concurrent::ConcurrentNavigableMap descendingMap() const ;
    ::java::util::NavigableSet navigableKeySet() const ;
    ::java::util::NavigableSet keySet() const ;
    ::java::util::NavigableSet descendingKeySet() const ;

};
}
}
}


