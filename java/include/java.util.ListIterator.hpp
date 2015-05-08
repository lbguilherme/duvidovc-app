#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Iterator.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace util {
class ListIterator : public virtual ::java::lang::Object,
                     public virtual ::java::util::Iterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::util::Iterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListIterator(const ::java::util::ListIterator& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj;}
    ListIterator(::java::util::ListIterator&& x) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::ListIterator& operator=(const ::java::util::ListIterator& x) {obj = x.obj; return *this;}
    ::java::util::ListIterator& operator=(::java::util::ListIterator&& x) {obj = std::move(x.obj); return *this;}
    
    void add(const ::java::lang::Object&) const ;
    bool hasNext() const ;
    bool hasPrevious() const ;
    ::java::lang::Object next() const ;
    int32_t nextIndex() const ;
    ::java::lang::Object previous() const ;
    int32_t previousIndex() const ;
    void remove() const ;
    void set(const ::java::lang::Object&) const ;

};
}
}


