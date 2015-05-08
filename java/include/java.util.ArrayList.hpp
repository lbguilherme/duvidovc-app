#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.util.AbstractList.hpp"
#include "java.util.RandomAccess.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }

namespace java {
namespace util {
class ArrayList : public virtual ::java::lang::Object,
                  public virtual ::java::io::Serializable,
                  public virtual ::java::lang::Cloneable,
                  public virtual ::java::util::AbstractList,
                  public virtual ::java::util::RandomAccess {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ArrayList(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractList(_obj), ::java::util::Collection(_obj), ::java::util::List(_obj), ::java::util::RandomAccess(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ArrayList(const ::java::util::ArrayList& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {obj = x.obj;}
    ArrayList(::java::util::ArrayList&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::ArrayList& operator=(const ::java::util::ArrayList& x) {obj = x.obj; return *this;}
    ::java::util::ArrayList& operator=(::java::util::ArrayList&& x) {obj = std::move(x.obj); return *this;}
    
    ArrayList(int32_t);
    ArrayList();
    ArrayList(const ::java::util::Collection&);
    bool add(const ::java::lang::Object&) const ;
    void add(int32_t, const ::java::lang::Object&) const ;
    bool addAll(const ::java::util::Collection&) const ;
    bool addAll(int32_t, const ::java::util::Collection&) const ;
    void clear() const ;
    ::java::lang::Object clone() const ;
    void ensureCapacity(int32_t) const ;
    ::java::lang::Object get(int32_t) const ;
    int32_t size() const ;
    bool isEmpty() const ;
    bool contains(const ::java::lang::Object&) const ;
    int32_t indexOf(const ::java::lang::Object&) const ;
    int32_t lastIndexOf(const ::java::lang::Object&) const ;
    ::java::lang::Object remove(int32_t) const ;
    bool remove(const ::java::lang::Object&) const ;
    ::java::lang::Object set(int32_t, const ::java::lang::Object&) const ;
    std::vector< ::java::lang::Object> toArray() const ;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const ;
    void trimToSize() const ;
    ::java::util::Iterator iterator() const ;
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;

};
}
}


