#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.AbstractSet.hpp"
#include "java.util.Set.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }

namespace java {
namespace util {
class HashSet : public virtual ::java::lang::Object,
                public virtual ::java::io::Serializable,
                public virtual ::java::lang::Cloneable,
                public virtual ::java::util::AbstractSet,
                public virtual ::java::util::Set {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HashSet(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractSet(_obj), ::java::util::Collection(_obj), ::java::util::Set(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HashSet(const ::java::util::HashSet& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj;}
    HashSet(::java::util::HashSet&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::HashSet& operator=(const ::java::util::HashSet& x) {obj = x.obj; return *this;}
    ::java::util::HashSet& operator=(::java::util::HashSet&& x) {obj = std::move(x.obj); return *this;}
    
    HashSet();
    HashSet(int32_t);
    HashSet(int32_t, float);
    HashSet(const ::java::util::Collection&);
    bool add(const ::java::lang::Object&) const ;
    void clear() const ;
    ::java::lang::Object clone() const ;
    bool contains(const ::java::lang::Object&) const ;
    bool isEmpty() const ;
    ::java::util::Iterator iterator() const ;
    bool remove(const ::java::lang::Object&) const ;
    int32_t size() const ;

};
}
}


