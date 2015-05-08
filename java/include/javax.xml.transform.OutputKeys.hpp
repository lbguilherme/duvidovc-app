#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace xml {
namespace transform {
class OutputKeys : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OutputKeys(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OutputKeys(const ::javax::xml::transform::OutputKeys& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    OutputKeys(::javax::xml::transform::OutputKeys&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::OutputKeys& operator=(const ::javax::xml::transform::OutputKeys& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::OutputKeys& operator=(::javax::xml::transform::OutputKeys&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


