#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Vector.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace util {
class Stack : public virtual ::java::lang::Object,
              public virtual ::java::util::Vector {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Stack(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Iterable(_obj), ::java::util::AbstractCollection(_obj), ::java::util::AbstractList(_obj), ::java::util::Collection(_obj), ::java::util::List(_obj), ::java::util::RandomAccess(_obj), ::java::util::Vector(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Stack(const ::java::util::Stack& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0), ::java::util::Vector((jobject)0) {obj = x.obj;}
    Stack(::java::util::Stack&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0), ::java::util::Vector((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Stack& operator=(const ::java::util::Stack& x) {obj = x.obj; return *this;}
    ::java::util::Stack& operator=(::java::util::Stack&& x) {obj = std::move(x.obj); return *this;}
    
    Stack();
    bool empty() const;
    ::java::lang::Object peek() const;
    ::java::lang::Object pop() const;
    ::java::lang::Object push(const ::java::lang::Object&) const;
    int32_t search(const ::java::lang::Object&) const;

};
}
}


