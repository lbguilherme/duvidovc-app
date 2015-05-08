#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Collection.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class ListIterator; } }

namespace java {
namespace util {
class List : public virtual ::java::lang::Object,
             public virtual ::java::util::Collection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit List(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::Collection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    List(const ::java::util::List& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0) {obj = x.obj;}
    List(::java::util::List&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::List& operator=(const ::java::util::List& x) {obj = x.obj; return *this;}
    ::java::util::List& operator=(::java::util::List&& x) {obj = std::move(x.obj); return *this;}
    
    void add(int32_t, const ::java::lang::Object&) const ;
    bool add(const ::java::lang::Object&) const ;
    bool addAll(int32_t, const ::java::util::Collection&) const ;
    bool addAll(const ::java::util::Collection&) const ;
    void clear() const ;
    bool contains(const ::java::lang::Object&) const ;
    bool containsAll(const ::java::util::Collection&) const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::Object get(int32_t) const ;
    int32_t hashCode() const ;
    int32_t indexOf(const ::java::lang::Object&) const ;
    bool isEmpty() const ;
    ::java::util::Iterator iterator() const ;
    int32_t lastIndexOf(const ::java::lang::Object&) const ;
    ::java::util::ListIterator listIterator() const ;
    ::java::util::ListIterator listIterator(int32_t) const ;
    ::java::lang::Object remove(int32_t) const ;
    bool remove(const ::java::lang::Object&) const ;
    bool removeAll(const ::java::util::Collection&) const ;
    bool retainAll(const ::java::util::Collection&) const ;
    ::java::lang::Object set(int32_t, const ::java::lang::Object&) const ;
    int32_t size() const ;
    ::java::util::List subList(int32_t, int32_t) const ;
    std::vector< ::java::lang::Object> toArray() const ;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const ;

};
}
}


