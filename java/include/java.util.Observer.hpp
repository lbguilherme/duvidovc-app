#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Observable; } }

namespace java {
namespace util {
class Observer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Observer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Observer(const ::java::util::Observer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Observer(::java::util::Observer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Observer& operator=(const ::java::util::Observer& x) {obj = x.obj; return *this;}
    ::java::util::Observer& operator=(::java::util::Observer&& x) {obj = std::move(x.obj); return *this;}
    
    void update(const ::java::util::Observable&, const ::java::lang::Object&) const ;

};
}
}


