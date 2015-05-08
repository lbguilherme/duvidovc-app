#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace xml {
namespace datatype {
class DatatypeConstants : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatatypeConstants(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatatypeConstants(const ::javax::xml::datatype::DatatypeConstants& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DatatypeConstants(::javax::xml::datatype::DatatypeConstants&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::datatype::DatatypeConstants& operator=(const ::javax::xml::datatype::DatatypeConstants& x) {obj = x.obj; return *this;}
    ::javax::xml::datatype::DatatypeConstants& operator=(::javax::xml::datatype::DatatypeConstants&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}

#include "javax.xml.datatype.DatatypeConstants_Field.hpp"

