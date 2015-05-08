#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.AbstractQueue.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Comparator; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class SortedSet; } }

namespace java {
namespace util {
class PriorityQueue : public virtual ::java::lang::Object,
                      public virtual ::java::io::Serializable,
                      public virtual ::java::util::AbstractQueue {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PriorityQueue(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractQueue(_obj), ::java::util::Collection(_obj), ::java::util::Queue(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PriorityQueue(const ::java::util::PriorityQueue& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj;}
    PriorityQueue(::java::util::PriorityQueue&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::PriorityQueue& operator=(const ::java::util::PriorityQueue& x) {obj = x.obj; return *this;}
    ::java::util::PriorityQueue& operator=(::java::util::PriorityQueue&& x) {obj = std::move(x.obj); return *this;}
    
    PriorityQueue();
    PriorityQueue(int32_t);
    PriorityQueue(int32_t, const ::java::util::Comparator&);
    PriorityQueue(const ::java::util::Collection&);
    PriorityQueue(const ::java::util::SortedSet&);
    ::java::util::Iterator iterator() const ;
    int32_t size() const ;
    void clear() const ;
    bool offer(const ::java::lang::Object&) const ;
    ::java::lang::Object poll() const ;
    ::java::lang::Object peek() const ;
    ::java::util::Comparator comparator() const ;
    bool remove(const ::java::lang::Object&) const ;
    bool add(const ::java::lang::Object&) const ;

};
}
}


