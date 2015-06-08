#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Comparable.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class ObjectStreamField : public virtual ::java::lang::Object,
                          public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ObjectStreamField(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ObjectStreamField(const ::java::io::ObjectStreamField& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    ObjectStreamField(::java::io::ObjectStreamField&& x) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ObjectStreamField& operator=(const ::java::io::ObjectStreamField& x) {obj = x.obj; return *this;}
    ::java::io::ObjectStreamField& operator=(::java::io::ObjectStreamField&& x) {obj = std::move(x.obj); return *this;}
    
    ObjectStreamField(const ::java::lang::String&, const ::java::lang::Class&);
    ObjectStreamField(const ::java::lang::String&, const ::java::lang::Class&, bool);
    int32_t compareTo(const ::java::lang::Object&) const;
    ::java::lang::String getName() const;
    int32_t getOffset() const;
    ::java::lang::Class getType() const;
    uint16_t getTypeCode() const;
    ::java::lang::String getTypeString() const;
    bool isPrimitive() const;
    ::java::lang::String toString() const;
    bool isUnshared() const;

};
}
}


