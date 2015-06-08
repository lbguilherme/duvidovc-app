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
class Comparator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Comparator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Comparator(const ::java::util::Comparator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Comparator(::java::util::Comparator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Comparator& operator=(const ::java::util::Comparator& x) {obj = x.obj; return *this;}
    ::java::util::Comparator& operator=(::java::util::Comparator&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t compare(const ::java::lang::Object&, const ::java::lang::Object&) const;
    bool equals(const ::java::lang::Object&) const;

};
}
}


