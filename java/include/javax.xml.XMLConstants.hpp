#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace xml {
class XMLConstants : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XMLConstants(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XMLConstants(const ::javax::xml::XMLConstants& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XMLConstants(::javax::xml::XMLConstants&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::XMLConstants& operator=(const ::javax::xml::XMLConstants& x) {obj = x.obj; return *this;}
    ::javax::xml::XMLConstants& operator=(::javax::xml::XMLConstants&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


