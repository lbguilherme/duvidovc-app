#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace awt { namespace font { class NumericShaper; } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace awt {
namespace font {
class NumericShaper : public virtual ::java::lang::Object,
                      public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NumericShaper(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NumericShaper(const ::java::awt::font::NumericShaper& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    NumericShaper(::java::awt::font::NumericShaper&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::awt::font::NumericShaper& operator=(const ::java::awt::font::NumericShaper& x) {obj = x.obj; return *this;}
    ::java::awt::font::NumericShaper& operator=(::java::awt::font::NumericShaper&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::String toString() const ;
    static ::java::awt::font::NumericShaper getContextualShaper(int32_t, int32_t);
    static ::java::awt::font::NumericShaper getContextualShaper(int32_t);
    int32_t getRanges() const ;
    static ::java::awt::font::NumericShaper getShaper(int32_t);
    bool isContextual() const ;
    void shape(const std::vector< uint16_t>&, int32_t, int32_t, int32_t) const ;
    void shape(const std::vector< uint16_t>&, int32_t, int32_t) const ;

};
}
}
}


