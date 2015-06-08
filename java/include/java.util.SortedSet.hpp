#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Set.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Comparator; } }
namespace java { namespace util { class SortedSet; } }

namespace java {
namespace util {
class SortedSet : public virtual ::java::lang::Object,
                  public virtual ::java::util::Set {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SortedSet(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::Collection(_obj), ::java::util::Set(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SortedSet(const ::java::util::SortedSet& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj;}
    SortedSet(::java::util::SortedSet&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::SortedSet& operator=(const ::java::util::SortedSet& x) {obj = x.obj; return *this;}
    ::java::util::SortedSet& operator=(::java::util::SortedSet&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::Comparator comparator() const;
    ::java::lang::Object first() const;
    ::java::util::SortedSet headSet(const ::java::lang::Object&) const;
    ::java::lang::Object last() const;
    ::java::util::SortedSet subSet(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::util::SortedSet tailSet(const ::java::lang::Object&) const;

};
}
}


