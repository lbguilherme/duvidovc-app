#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class ObjectStreamClass; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class ObjectInputStream_GetField : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObjectInputStream_GetField(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObjectInputStream_GetField(const ::java::io::ObjectInputStream_GetField& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ObjectInputStream_GetField(::java::io::ObjectInputStream_GetField&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ObjectInputStream_GetField& operator=(const ::java::io::ObjectInputStream_GetField& x) {obj = x.obj; return *this;}
    ::java::io::ObjectInputStream_GetField& operator=(::java::io::ObjectInputStream_GetField&& x) {obj = std::move(x.obj); return *this;}
    
    ObjectInputStream_GetField();
    ::java::io::ObjectStreamClass getObjectStreamClass() const;
    bool defaulted(const ::java::lang::String&) const;
    bool get(const ::java::lang::String&, bool) const;
    uint16_t get(const ::java::lang::String&, uint16_t) const;
    int8_t get(const ::java::lang::String&, int8_t) const;
    int16_t get(const ::java::lang::String&, int16_t) const;
    int32_t get(const ::java::lang::String&, int32_t) const;
    int64_t get(const ::java::lang::String&, int64_t) const;
    float get(const ::java::lang::String&, float) const;
    double get(const ::java::lang::String&, double) const;
    ::java::lang::Object get(const ::java::lang::String&, const ::java::lang::Object&) const;

};
}
}


