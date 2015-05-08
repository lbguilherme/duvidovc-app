#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { class Properties; } }
namespace javax { namespace xml { namespace transform { class Transformer; } } }

namespace javax {
namespace xml {
namespace transform {
class Templates : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Templates(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Templates(const ::javax::xml::transform::Templates& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Templates(::javax::xml::transform::Templates&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::Templates& operator=(const ::javax::xml::transform::Templates& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::Templates& operator=(::javax::xml::transform::Templates&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::xml::transform::Transformer newTransformer() const ;
    ::java::util::Properties getOutputProperties() const ;

};
}
}
}


