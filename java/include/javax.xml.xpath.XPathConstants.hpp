#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace xml {
namespace xpath {
class XPathConstants : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XPathConstants(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XPathConstants(const ::javax::xml::xpath::XPathConstants& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XPathConstants(::javax::xml::xpath::XPathConstants&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::xpath::XPathConstants& operator=(const ::javax::xml::xpath::XPathConstants& x) {obj = x.obj; return *this;}
    ::javax::xml::xpath::XPathConstants& operator=(::javax::xml::xpath::XPathConstants&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


