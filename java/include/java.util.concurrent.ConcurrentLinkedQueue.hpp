#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.AbstractQueue.hpp"
#include "java.util.Queue.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }

namespace java {
namespace util {
namespace concurrent {
class ConcurrentLinkedQueue : public virtual ::java::lang::Object,
                              public virtual ::java::io::Serializable,
                              public virtual ::java::util::AbstractQueue,
                              public virtual ::java::util::Queue {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConcurrentLinkedQueue(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractQueue(_obj), ::java::util::Collection(_obj), ::java::util::Queue(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConcurrentLinkedQueue(const ::java::util::concurrent::ConcurrentLinkedQueue& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj;}
    ConcurrentLinkedQueue(::java::util::concurrent::ConcurrentLinkedQueue&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::ConcurrentLinkedQueue& operator=(const ::java::util::concurrent::ConcurrentLinkedQueue& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::ConcurrentLinkedQueue& operator=(::java::util::concurrent::ConcurrentLinkedQueue&& x) {obj = std::move(x.obj); return *this;}
    
    ConcurrentLinkedQueue();
    ConcurrentLinkedQueue(const ::java::util::Collection&);
    bool add(const ::java::lang::Object&) const;
    bool offer(const ::java::lang::Object&) const;
    ::java::lang::Object poll() const;
    ::java::lang::Object peek() const;
    bool isEmpty() const;
    int32_t size() const;
    bool contains(const ::java::lang::Object&) const;
    bool remove(const ::java::lang::Object&) const;
    bool addAll(const ::java::util::Collection&) const;
    std::vector< ::java::lang::Object> toArray() const;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const;
    ::java::util::Iterator iterator() const;

};
}
}
}


