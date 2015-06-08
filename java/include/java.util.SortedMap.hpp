#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Map.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Comparator; } }
namespace java { namespace util { class SortedMap; } }

namespace java {
namespace util {
class SortedMap : public virtual ::java::lang::Object,
                  public virtual ::java::util::Map {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SortedMap(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Map(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SortedMap(const ::java::util::SortedMap& x) : ::java::lang::Object((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj;}
    SortedMap(::java::util::SortedMap&& x) : ::java::lang::Object((jobject)0), ::java::util::Map((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::SortedMap& operator=(const ::java::util::SortedMap& x) {obj = x.obj; return *this;}
    ::java::util::SortedMap& operator=(::java::util::SortedMap&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::Comparator comparator() const;
    ::java::lang::Object firstKey() const;
    ::java::util::SortedMap headMap(const ::java::lang::Object&) const;
    ::java::lang::Object lastKey() const;
    ::java::util::SortedMap subMap(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::util::SortedMap tailMap(const ::java::lang::Object&) const;

};
}
}


