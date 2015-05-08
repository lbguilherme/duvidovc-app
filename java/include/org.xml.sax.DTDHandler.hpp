#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace xml {
namespace sax {
class DTDHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DTDHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DTDHandler(const ::org::xml::sax::DTDHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DTDHandler(::org::xml::sax::DTDHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::DTDHandler& operator=(const ::org::xml::sax::DTDHandler& x) {obj = x.obj; return *this;}
    ::org::xml::sax::DTDHandler& operator=(::org::xml::sax::DTDHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void notationDecl(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void unparsedEntityDecl(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}


