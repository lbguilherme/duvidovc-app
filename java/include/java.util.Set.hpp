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

namespace java {
namespace util {
class Set : public virtual ::java::lang::Object,
            public virtual ::java::util::Collection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Set(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::Collection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Set(const ::java::util::Set& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0) {obj = x.obj;}
    Set(::java::util::Set&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Set& operator=(const ::java::util::Set& x) {obj = x.obj; return *this;}
    ::java::util::Set& operator=(::java::util::Set&& x) {obj = std::move(x.obj); return *this;}
    
    bool add(const ::java::lang::Object&) const ;
    bool addAll(const ::java::util::Collection&) const ;
    void clear() const ;
    bool contains(const ::java::lang::Object&) const ;
    bool containsAll(const ::java::util::Collection&) const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    bool isEmpty() const ;
    ::java::util::Iterator iterator() const ;
    bool remove(const ::java::lang::Object&) const ;
    bool removeAll(const ::java::util::Collection&) const ;
    bool retainAll(const ::java::util::Collection&) const ;
    int32_t size() const ;
    std::vector< ::java::lang::Object> toArray() const ;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const ;

};
}
}


