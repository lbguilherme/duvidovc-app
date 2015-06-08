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
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Comparator; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class PriorityBlockingQueue : public virtual ::java::lang::Object,
                              public virtual ::java::io::Serializable,
                              public virtual ::java::util::AbstractQueue,
                              public virtual ::java::util::concurrent::BlockingQueue {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PriorityBlockingQueue(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractQueue(_obj), ::java::util::Collection(_obj), ::java::util::Queue(_obj), ::java::util::concurrent::BlockingQueue(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PriorityBlockingQueue(const ::java::util::concurrent::PriorityBlockingQueue& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {obj = x.obj;}
    PriorityBlockingQueue(::java::util::concurrent::PriorityBlockingQueue&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::PriorityBlockingQueue& operator=(const ::java::util::concurrent::PriorityBlockingQueue& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::PriorityBlockingQueue& operator=(::java::util::concurrent::PriorityBlockingQueue&& x) {obj = std::move(x.obj); return *this;}
    
    PriorityBlockingQueue();
    PriorityBlockingQueue(int32_t);
    PriorityBlockingQueue(int32_t, const ::java::util::Comparator&);
    PriorityBlockingQueue(const ::java::util::Collection&);
    bool add(const ::java::lang::Object&) const;
    bool offer(const ::java::lang::Object&) const;
    void put(const ::java::lang::Object&) const;
    bool offer(const ::java::lang::Object&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::lang::Object poll() const;
    ::java::lang::Object take() const;
    ::java::lang::Object poll(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::lang::Object peek() const;
    ::java::util::Comparator comparator() const;
    int32_t size() const;
    int32_t remainingCapacity() const;
    bool remove(const ::java::lang::Object&) const;
    bool contains(const ::java::lang::Object&) const;
    std::vector< ::java::lang::Object> toArray() const;
    ::java::lang::String toString() const;
    int32_t drainTo(const ::java::util::Collection&) const;
    int32_t drainTo(const ::java::util::Collection&, int32_t) const;
    void clear() const;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const;
    ::java::util::Iterator iterator() const;

};
}
}
}


