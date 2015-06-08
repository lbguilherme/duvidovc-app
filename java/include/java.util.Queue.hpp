#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Collection.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace util {
class Queue : public virtual ::java::lang::Object,
              public virtual ::java::util::Collection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Queue(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Iterable(_obj), ::java::util::Collection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Queue(const ::java::util::Queue& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0) {obj = x.obj;}
    Queue(::java::util::Queue&& x) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::Collection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Queue& operator=(const ::java::util::Queue& x) {obj = x.obj; return *this;}
    ::java::util::Queue& operator=(::java::util::Queue&& x) {obj = std::move(x.obj); return *this;}
    
    bool add(const ::java::lang::Object&) const;
    bool offer(const ::java::lang::Object&) const;
    ::java::lang::Object remove() const;
    ::java::lang::Object poll() const;
    ::java::lang::Object element() const;
    ::java::lang::Object peek() const;

};
}
}


