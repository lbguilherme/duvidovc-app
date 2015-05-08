#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Queue.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class BlockingQueue : public virtual ::java::lang::Object,
                      public virtual ::java::util::Queue {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BlockingQueue(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::Collection(_obj), ::java::util::Queue(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BlockingQueue(const ::java::util::concurrent::BlockingQueue& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj;}
    BlockingQueue(::java::util::concurrent::BlockingQueue&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::BlockingQueue& operator=(const ::java::util::concurrent::BlockingQueue& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::BlockingQueue& operator=(::java::util::concurrent::BlockingQueue&& x) {obj = std::move(x.obj); return *this;}
    
    bool add(const ::java::lang::Object&) const ;
    bool offer(const ::java::lang::Object&) const ;
    void put(const ::java::lang::Object&) const ;
    bool offer(const ::java::lang::Object&, int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    ::java::lang::Object take() const ;
    ::java::lang::Object poll(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    int32_t remainingCapacity() const ;
    bool remove(const ::java::lang::Object&) const ;
    bool contains(const ::java::lang::Object&) const ;
    int32_t drainTo(const ::java::util::Collection&) const ;
    int32_t drainTo(const ::java::util::Collection&, int32_t) const ;

};
}
}
}


