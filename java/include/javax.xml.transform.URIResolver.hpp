#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace transform { class Source; } } }

namespace javax {
namespace xml {
namespace transform {
class URIResolver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URIResolver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URIResolver(const ::javax::xml::transform::URIResolver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    URIResolver(::javax::xml::transform::URIResolver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::URIResolver& operator=(const ::javax::xml::transform::URIResolver& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::URIResolver& operator=(::javax::xml::transform::URIResolver&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::xml::transform::Source resolve(const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}


