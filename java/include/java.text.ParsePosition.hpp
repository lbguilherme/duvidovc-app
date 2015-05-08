#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace text {
class ParsePosition : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParsePosition(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParsePosition(const ::java::text::ParsePosition& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ParsePosition(::java::text::ParsePosition&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::ParsePosition& operator=(const ::java::text::ParsePosition& x) {obj = x.obj; return *this;}
    ::java::text::ParsePosition& operator=(::java::text::ParsePosition&& x) {obj = std::move(x.obj); return *this;}
    
    ParsePosition(int32_t);
    bool equals(const ::java::lang::Object&) const ;
    int32_t getErrorIndex() const ;
    int32_t getIndex() const ;
    int32_t hashCode() const ;
    void setErrorIndex(int32_t) const ;
    void setIndex(int32_t) const ;
    ::java::lang::String toString() const ;

};
}
}


