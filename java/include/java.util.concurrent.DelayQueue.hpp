#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.AbstractQueue.hpp"
#include "java.util.concurrent.BlockingQueue.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { namespace concurrent { class Delayed; } } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class DelayQueue : public virtual ::java::lang::Object,
                   public virtual ::java::util::AbstractQueue,
                   public virtual ::java::util::concurrent::BlockingQueue {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DelayQueue(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractQueue(_obj), ::java::util::Collection(_obj), ::java::util::Queue(_obj), ::java::util::concurrent::BlockingQueue(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DelayQueue(const ::java::util::concurrent::DelayQueue& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {obj = x.obj;}
    DelayQueue(::java::util::concurrent::DelayQueue&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0), ::java::util::concurrent::BlockingQueue((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::DelayQueue& operator=(const ::java::util::concurrent::DelayQueue& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::DelayQueue& operator=(::java::util::concurrent::DelayQueue&& x) {obj = std::move(x.obj); return *this;}
    
    DelayQueue();
    DelayQueue(const ::java::util::Collection&);
    bool add(const ::java::util::concurrent::Delayed&) const;
    bool offer(const ::java::util::concurrent::Delayed&) const;
    void put(const ::java::util::concurrent::Delayed&) const;
    bool offer(const ::java::util::concurrent::Delayed&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::util::concurrent::Delayed poll() const;
    ::java::util::concurrent::Delayed take() const;
    ::java::util::concurrent::Delayed poll(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::java::util::concurrent::Delayed peek() const;
    int32_t size() const;
    int32_t drainTo(const ::java::util::Collection&) const;
    int32_t drainTo(const ::java::util::Collection&, int32_t) const;
    void clear() const;
    int32_t remainingCapacity() const;
    std::vector< ::java::lang::Object> toArray() const;
    std::vector< ::java::lang::Object> toArray(const std::vector< ::java::lang::Object>&) const;
    bool remove(const ::java::lang::Object&) const;
    ::java::util::Iterator iterator() const;
    bool add(const ::java::lang::Object&) const;
    bool offer(const ::java::lang::Object&) const;
    bool offer(const ::java::lang::Object&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    void put(const ::java::lang::Object&) const;

};
}
}
}


