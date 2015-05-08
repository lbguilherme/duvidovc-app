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
namespace ext {
class LexicalHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LexicalHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LexicalHandler(const ::org::xml::sax::ext::LexicalHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LexicalHandler(::org::xml::sax::ext::LexicalHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::ext::LexicalHandler& operator=(const ::org::xml::sax::ext::LexicalHandler& x) {obj = x.obj; return *this;}
    ::org::xml::sax::ext::LexicalHandler& operator=(::org::xml::sax::ext::LexicalHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void startDTD(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void endDTD() const ;
    void startEntity(const ::java::lang::String&) const ;
    void endEntity(const ::java::lang::String&) const ;
    void startCDATA() const ;
    void endCDATA() const ;
    void comment(const std::vector< uint16_t>&, int32_t, int32_t) const ;

};
}
}
}
}


