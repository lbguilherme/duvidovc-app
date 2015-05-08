#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.AbstractSet.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }

namespace java {
namespace util {
namespace concurrent {
class CopyOnWriteArraySet : public virtual ::java::lang::Object,
                            public virtual ::java::io::Serializable,
                            public virtual ::java::util::AbstractSet {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CopyOnWriteArraySet(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractSet(_obj), ::java::util::Collection(_obj), ::java::util::Set(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CopyOnWriteArraySet(const ::java::util::concurrent::CopyOnWriteArraySet& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj;}
    CopyOnWriteArraySet(::java::util::concurrent::CopyOnWriteArraySet&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::CopyOnWriteArraySet& operator=(const ::java::util::concurrent::CopyOnWriteArraySet& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::CopyOnWriteArraySet& operator=(::java::util::concurrent::CopyOnWriteArraySet&& x) {obj = std::move(x.obj); return *this;}
    
    CopyOnWriteArraySet();
    CopyOnWriteArraySet(const ::java::util::Collection&);
    int32_t size() const ;
    bool isEmpty() const ;
    bool contains(const ::java::lang::Object&) const ;
    std::vector< ::java::lang::Object> toArray() const ;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const ;
    void clear() const ;
    bool remove(const ::java::lang::Object&) const ;
    bool add(const ::java::lang::Object&) const ;
    bool containsAll(const ::java::util::Collection&) const ;
    bool addAll(const ::java::util::Collection&) const ;
    bool removeAll(const ::java::util::Collection&) const ;
    bool retainAll(const ::java::util::Collection&) const ;
    ::java::util::Iterator iterator() const ;
    bool equals(const ::java::lang::Object&) const ;

};
}
}
}


