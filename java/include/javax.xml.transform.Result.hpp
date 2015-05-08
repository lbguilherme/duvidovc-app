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
namespace transform {
class Result : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Result(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Result(const ::javax::xml::transform::Result& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Result(::javax::xml::transform::Result&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::Result& operator=(const ::javax::xml::transform::Result& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::Result& operator=(::javax::xml::transform::Result&& x) {obj = std::move(x.obj); return *this;}
    
    void setSystemId(const ::java::lang::String&) const ;
    ::java::lang::String getSystemId() const ;

};
}
}
}


