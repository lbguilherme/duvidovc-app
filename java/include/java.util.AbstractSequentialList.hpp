#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.AbstractList.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class ListIterator; } }

namespace java {
namespace util {
class AbstractSequentialList : public virtual ::java::lang::Object,
                               public virtual ::java::util::AbstractList {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractSequentialList(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractList(_obj), ::java::util::Collection(_obj), ::java::util::List(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractSequentialList(const ::java::util::AbstractSequentialList& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0) {obj = x.obj;}
    AbstractSequentialList(::java::util::AbstractSequentialList&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::AbstractSequentialList& operator=(const ::java::util::AbstractSequentialList& x) {obj = x.obj; return *this;}
    ::java::util::AbstractSequentialList& operator=(::java::util::AbstractSequentialList&& x) {obj = std::move(x.obj); return *this;}
    
    void add(int32_t, const ::java::lang::Object&) const;
    bool addAll(int32_t, const ::java::util::Collection&) const;
    ::java::lang::Object get(int32_t) const;
    ::java::util::Iterator iterator() const;
    ::java::util::ListIterator listIterator(int32_t) const;
    ::java::lang::Object remove(int32_t) const;
    ::java::lang::Object set(int32_t, const ::java::lang::Object&) const;

};
}
}


