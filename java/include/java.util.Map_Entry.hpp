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
class Map_Entry : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Map_Entry(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Map_Entry(const ::java::util::Map_Entry& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Map_Entry(::java::util::Map_Entry&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Map_Entry& operator=(const ::java::util::Map_Entry& x) {obj = x.obj; return *this;}
    ::java::util::Map_Entry& operator=(::java::util::Map_Entry&& x) {obj = std::move(x.obj); return *this;}
    
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::Object getKey() const ;
    ::java::lang::Object getValue() const ;
    int32_t hashCode() const ;
    ::java::lang::Object setValue(const ::java::lang::Object&) const ;

};
}
}


