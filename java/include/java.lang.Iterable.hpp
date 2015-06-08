#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { class Iterator; } }

namespace java {
namespace lang {
class Iterable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Iterable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Iterable(const ::java::lang::Iterable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Iterable(::java::lang::Iterable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Iterable& operator=(const ::java::lang::Iterable& x) {obj = x.obj; return *this;}
    ::java::lang::Iterable& operator=(::java::lang::Iterable&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::Iterator iterator() const;

};
}
}


