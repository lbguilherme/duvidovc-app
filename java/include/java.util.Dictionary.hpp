#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace util {
class Dictionary : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Dictionary(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Dictionary(const ::java::util::Dictionary& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Dictionary(::java::util::Dictionary&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Dictionary& operator=(const ::java::util::Dictionary& x) {obj = x.obj; return *this;}
    ::java::util::Dictionary& operator=(::java::util::Dictionary&& x) {obj = std::move(x.obj); return *this;}
    
    Dictionary();
    ::java::util::Enumeration elements() const;
    ::java::lang::Object get(const ::java::lang::Object&) const;
    bool isEmpty() const;
    ::java::util::Enumeration keys() const;
    ::java::lang::Object put(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::lang::Object remove(const ::java::lang::Object&) const;
    int32_t size() const;

};
}
}


