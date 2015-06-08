#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace util {
namespace concurrent {
class Callable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Callable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Callable(const ::java::util::concurrent::Callable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Callable(::java::util::concurrent::Callable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::Callable& operator=(const ::java::util::concurrent::Callable& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::Callable& operator=(::java::util::concurrent::Callable&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object call() const;

};
}
}
}


