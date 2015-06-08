#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.AbstractCollection.hpp"
#include "java.util.Queue.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }

namespace java {
namespace util {
class AbstractQueue : public virtual ::java::lang::Object,
                      public virtual ::java::util::AbstractCollection,
                      public virtual ::java::util::Queue {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractQueue(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::Collection(_obj), ::java::util::Queue(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractQueue(const ::java::util::AbstractQueue& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj;}
    AbstractQueue(::java::util::AbstractQueue&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::AbstractQueue& operator=(const ::java::util::AbstractQueue& x) {obj = x.obj; return *this;}
    ::java::util::AbstractQueue& operator=(::java::util::AbstractQueue&& x) {obj = std::move(x.obj); return *this;}
    
    bool add(const ::java::lang::Object&) const;
    ::java::lang::Object remove() const;
    ::java::lang::Object element() const;
    void clear() const;
    bool addAll(const ::java::util::Collection&) const;

};
}
}


