#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Observer; } }

namespace java {
namespace util {
class Observable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Observable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Observable(const ::java::util::Observable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Observable(::java::util::Observable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Observable& operator=(const ::java::util::Observable& x) {obj = x.obj; return *this;}
    ::java::util::Observable& operator=(::java::util::Observable&& x) {obj = std::move(x.obj); return *this;}
    
    Observable();
    void addObserver(const ::java::util::Observer&) const;
    int32_t countObservers() const;
    void deleteObserver(const ::java::util::Observer&) const;
    void deleteObservers() const;
    bool hasChanged() const;
    void notifyObservers() const;
    void notifyObservers(const ::java::lang::Object&) const;

};
}
}


