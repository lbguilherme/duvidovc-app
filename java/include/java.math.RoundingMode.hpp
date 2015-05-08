#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace math { class RoundingMode; } }

namespace java {
namespace math {
class RoundingMode : public virtual ::java::lang::Object,
                     public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RoundingMode(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RoundingMode(const ::java::math::RoundingMode& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    RoundingMode(::java::math::RoundingMode&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::math::RoundingMode& operator=(const ::java::math::RoundingMode& x) {obj = x.obj; return *this;}
    ::java::math::RoundingMode& operator=(::java::math::RoundingMode&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::java::math::RoundingMode> values();
    static ::java::math::RoundingMode valueOf(const ::java::lang::String&);
    static ::java::math::RoundingMode valueOf(int32_t);

};
}
}


