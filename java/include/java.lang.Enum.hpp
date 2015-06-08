#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Comparable.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Enum; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class Enum : public virtual ::java::lang::Object,
             public virtual ::java::io::Serializable,
             public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Enum(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Enum(const ::java::lang::Enum& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    Enum(::java::lang::Enum&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Enum& operator=(const ::java::lang::Enum& x) {obj = x.obj; return *this;}
    ::java::lang::Enum& operator=(::java::lang::Enum&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String name() const;
    int32_t ordinal() const;
    ::java::lang::String toString() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    int32_t compareTo(const ::java::lang::Enum&) const;
    ::java::lang::Class getDeclaringClass() const;
    static ::java::lang::Enum valueOf(const ::java::lang::Class&, const ::java::lang::String&);
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}


