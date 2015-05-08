#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.util.AbstractQueue.hpp"
#include "java.util.concurrent.BlockingQueue.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class SynchronousQueue : public virtual ::java::lang::Object,
                         public virtual ::java::io::Serializable,
                         public virtual ::java::util::AbstractQueue,
                         public virtual ::java::util::concurrent::BlockingQueue {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SynchronousQueue(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractQueue(_obj), ::java::util::Collection(_obj), ::java::util::Queue(_obj), ::java::util::concurrent::BlockingQueue(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SynchronousQueue(const ::java::util::concurrent::SynchronousQueue& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {obj = x.obj;}
    SynchronousQueue(::java::util::concurrent::SynchronousQueue&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::SynchronousQueue& operator=(const ::java::util::concurrent::SynchronousQueue& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::SynchronousQueue& operator=(::java::util::concurrent::SynchronousQueue&& x) {obj = std::move(x.obj); return *this;}
    
    SynchronousQueue();
    SynchronousQueue(bool);
    void put(const ::java::lang::Object&) const ;
    bool offer(const ::java::lang::Object&, int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    bool offer(const ::java::lang::Object&) const ;
    ::java::lang::Object take() const ;
    ::java::lang::Object poll(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    ::java::lang::Object poll() const ;
    bool isEmpty() const ;
    int32_t size() const ;
    int32_t remainingCapacity() const ;
    void clear() const ;
    bool contains(const ::java::lang::Object&) const ;
    bool remove(const ::java::lang::Object&) const ;
    bool containsAll(const ::java::util::Collection&) const ;
    bool removeAll(const ::java::util::Collection&) const ;
    bool retainAll(const ::java::util::Collection&) const ;
    ::java::lang::Object peek() const ;
    ::java::util::Iterator iterator() const ;
    std::vector< ::java::lang::Object> toArray() const ;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const ;
    int32_t drainTo(const ::java::util::Collection&) const ;
    int32_t drainTo(const ::java::util::Collection&, int32_t) const ;

};
}
}
}


