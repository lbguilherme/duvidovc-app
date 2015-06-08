#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace javax { namespace xml { namespace transform { class TransformerException; } } }

namespace javax {
namespace xml {
namespace transform {
class ErrorListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ErrorListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ErrorListener(const ::javax::xml::transform::ErrorListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ErrorListener(::javax::xml::transform::ErrorListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::ErrorListener& operator=(const ::javax::xml::transform::ErrorListener& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::ErrorListener& operator=(::javax::xml::transform::ErrorListener&& x) {obj = std::move(x.obj); return *this;}
    
    void warning(const ::javax::xml::transform::TransformerException&) const;
    void error(const ::javax::xml::transform::TransformerException&) const;
    void fatalError(const ::javax::xml::transform::TransformerException&) const;

};
}
}
}


