#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace math { class RoundingMode; } }

namespace java {
namespace math {
class MathContext : public virtual ::java::lang::Object,
                    public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MathContext(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MathContext(const ::java::math::MathContext& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    MathContext(::java::math::MathContext&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::math::MathContext& operator=(const ::java::math::MathContext& x) {obj = x.obj; return *this;}
    ::java::math::MathContext& operator=(::java::math::MathContext&& x) {obj = std::move(x.obj); return *this;}
    
    MathContext(int32_t);
    MathContext(int32_t, const ::java::math::RoundingMode&);
    MathContext(const ::java::lang::String&);
    int32_t getPrecision() const ;
    ::java::math::RoundingMode getRoundingMode() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;

};
}
}


