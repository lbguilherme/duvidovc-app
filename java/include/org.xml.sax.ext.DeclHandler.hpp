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
class DeclHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DeclHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DeclHandler(const ::org::xml::sax::ext::DeclHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DeclHandler(::org::xml::sax::ext::DeclHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::ext::DeclHandler& operator=(const ::org::xml::sax::ext::DeclHandler& x) {obj = x.obj; return *this;}
    ::org::xml::sax::ext::DeclHandler& operator=(::org::xml::sax::ext::DeclHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void elementDecl(const ::java::lang::String&, const ::java::lang::String&) const ;
    void attributeDecl(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void internalEntityDecl(const ::java::lang::String&, const ::java::lang::String&) const ;
    void externalEntityDecl(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}
}


