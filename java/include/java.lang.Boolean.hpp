#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Comparable.hpp"

namespace java { namespace lang { class Boolean; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class Boolean : public virtual ::java::lang::Object,
                public virtual ::java::io::Serializable,
                public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Boolean(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Boolean(const ::java::lang::Boolean& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    Boolean(::java::lang::Boolean&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Boolean& operator=(const ::java::lang::Boolean& x) {obj = x.obj; return *this;}
    ::java::lang::Boolean& operator=(::java::lang::Boolean&& x) {obj = std::move(x.obj); return *this;}
    
    Boolean(const ::java::lang::String&);
    Boolean(bool);
    bool booleanValue() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t compareTo(const ::java::lang::Boolean&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;
    static bool getBoolean(const ::java::lang::String&);
    static bool parseBoolean(const ::java::lang::String&);
    static ::java::lang::String toString(bool);
    static ::java::lang::Boolean valueOf(const ::java::lang::String&);
    static ::java::lang::Boolean valueOf(bool);
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}


