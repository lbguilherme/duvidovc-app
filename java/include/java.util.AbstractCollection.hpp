#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Collection.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }

namespace java {
namespace util {
class AbstractCollection : public virtual ::java::lang::Object,
                           public virtual ::java::util::Collection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractCollection(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::Collection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractCollection(const ::java::util::AbstractCollection& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0) {obj = x.obj;}
    AbstractCollection(::java::util::AbstractCollection&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::AbstractCollection& operator=(const ::java::util::AbstractCollection& x) {obj = x.obj; return *this;}
    ::java::util::AbstractCollection& operator=(::java::util::AbstractCollection&& x) {obj = std::move(x.obj); return *this;}
    
    bool add(const ::java::lang::Object&) const;
    bool addAll(const ::java::util::Collection&) const;
    void clear() const;
    bool contains(const ::java::lang::Object&) const;
    bool containsAll(const ::java::util::Collection&) const;
    bool isEmpty() const;
    ::java::util::Iterator iterator() const;
    bool remove(const ::java::lang::Object&) const;
    bool removeAll(const ::java::util::Collection&) const;
    bool retainAll(const ::java::util::Collection&) const;
    int32_t size() const;
    std::vector< ::java::lang::Object> toArray() const;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const;
    ::java::lang::String toString() const;

};
}
}


