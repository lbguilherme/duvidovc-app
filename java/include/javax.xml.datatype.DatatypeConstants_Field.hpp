#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace javax {
namespace xml {
namespace datatype {
class DatatypeConstants_Field : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatatypeConstants_Field(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatatypeConstants_Field(const ::javax::xml::datatype::DatatypeConstants_Field& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DatatypeConstants_Field(::javax::xml::datatype::DatatypeConstants_Field&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::datatype::DatatypeConstants_Field& operator=(const ::javax::xml::datatype::DatatypeConstants_Field& x) {obj = x.obj; return *this;}
    ::javax::xml::datatype::DatatypeConstants_Field& operator=(::javax::xml::datatype::DatatypeConstants_Field&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String toString() const ;
    int32_t getId() const ;

};
}
}
}


