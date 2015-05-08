#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class ObjectOutput; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class ObjectOutputStream_PutField : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObjectOutputStream_PutField(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObjectOutputStream_PutField(const ::java::io::ObjectOutputStream_PutField& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ObjectOutputStream_PutField(::java::io::ObjectOutputStream_PutField&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ObjectOutputStream_PutField& operator=(const ::java::io::ObjectOutputStream_PutField& x) {obj = x.obj; return *this;}
    ::java::io::ObjectOutputStream_PutField& operator=(::java::io::ObjectOutputStream_PutField&& x) {obj = std::move(x.obj); return *this;}
    
    ObjectOutputStream_PutField();
    void put(const ::java::lang::String&, bool) const ;
    void put(const ::java::lang::String&, uint16_t) const ;
    void put(const ::java::lang::String&, int8_t) const ;
    void put(const ::java::lang::String&, int16_t) const ;
    void put(const ::java::lang::String&, int32_t) const ;
    void put(const ::java::lang::String&, int64_t) const ;
    void put(const ::java::lang::String&, float) const ;
    void put(const ::java::lang::String&, double) const ;
    void put(const ::java::lang::String&, const ::java::lang::Object&) const ;
    void write(const ::java::io::ObjectOutput&) const ;

};
}
}


