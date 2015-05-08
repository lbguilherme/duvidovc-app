#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.ext.DeclHandler.hpp"
#include "org.xml.sax.ext.EntityResolver2.hpp"
#include "org.xml.sax.ext.LexicalHandler.hpp"
#include "org.xml.sax.helpers.DefaultHandler.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class InputSource; } } }

namespace org {
namespace xml {
namespace sax {
namespace ext {
class DefaultHandler2 : public virtual ::java::lang::Object,
                        public virtual ::org::xml::sax::ext::DeclHandler,
                        public virtual ::org::xml::sax::ext::EntityResolver2,
                        public virtual ::org::xml::sax::ext::LexicalHandler,
                        public virtual ::org::xml::sax::helpers::DefaultHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultHandler2(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::ContentHandler(_obj), ::org::xml::sax::DTDHandler(_obj), ::org::xml::sax::EntityResolver(_obj), ::org::xml::sax::ErrorHandler(_obj), ::org::xml::sax::ext::DeclHandler(_obj), ::org::xml::sax::ext::EntityResolver2(_obj), ::org::xml::sax::ext::LexicalHandler(_obj), ::org::xml::sax::helpers::DefaultHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultHandler2(const ::org::xml::sax::ext::DefaultHandler2& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::EntityResolver((jobject)0), ::org::xml::sax::ErrorHandler((jobject)0), ::org::xml::sax::ext::DeclHandler((jobject)0), ::org::xml::sax::ext::EntityResolver2((jobject)0), ::org::xml::sax::ext::LexicalHandler((jobject)0), ::org::xml::sax::helpers::DefaultHandler((jobject)0) {obj = x.obj;}
    DefaultHandler2(::org::xml::sax::ext::DefaultHandler2&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::EntityResolver((jobject)0), ::org::xml::sax::ErrorHandler((jobject)0), ::org::xml::sax::ext::DeclHandler((jobject)0), ::org::xml::sax::ext::EntityResolver2((jobject)0), ::org::xml::sax::ext::LexicalHandler((jobject)0), ::org::xml::sax::helpers::DefaultHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::ext::DefaultHandler2& operator=(const ::org::xml::sax::ext::DefaultHandler2& x) {obj = x.obj; return *this;}
    ::org::xml::sax::ext::DefaultHandler2& operator=(::org::xml::sax::ext::DefaultHandler2&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultHandler2();
    void startCDATA() const ;
    void endCDATA() const ;
    void startDTD(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void endDTD() const ;
    void startEntity(const ::java::lang::String&) const ;
    void endEntity(const ::java::lang::String&) const ;
    void comment(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    void attributeDecl(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void elementDecl(const ::java::lang::String&, const ::java::lang::String&) const ;
    void externalEntityDecl(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void internalEntityDecl(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::org::xml::sax::InputSource getExternalSubset(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::org::xml::sax::InputSource resolveEntity(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::org::xml::sax::InputSource resolveEntity(const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}
}


