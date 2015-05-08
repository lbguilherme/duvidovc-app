#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace text { class Format_Field; } }

namespace java {
namespace text {
class FieldPosition : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FieldPosition(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FieldPosition(const ::java::text::FieldPosition& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FieldPosition(::java::text::FieldPosition&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::FieldPosition& operator=(const ::java::text::FieldPosition& x) {obj = x.obj; return *this;}
    ::java::text::FieldPosition& operator=(::java::text::FieldPosition&& x) {obj = std::move(x.obj); return *this;}
    
    FieldPosition(int32_t);
    FieldPosition(const ::java::text::Format_Field&);
    FieldPosition(const ::java::text::Format_Field&, int32_t);
    bool equals(const ::java::lang::Object&) const ;
    int32_t getBeginIndex() const ;
    int32_t getEndIndex() const ;
    int32_t getField() const ;
    ::java::text::Format_Field getFieldAttribute() const ;
    int32_t hashCode() const ;
    void setBeginIndex(int32_t) const ;
    void setEndIndex(int32_t) const ;
    ::java::lang::String toString() const ;

};
}
}


