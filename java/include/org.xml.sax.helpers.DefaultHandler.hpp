#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.ContentHandler.hpp"
#include "org.xml.sax.DTDHandler.hpp"
#include "org.xml.sax.EntityResolver.hpp"
#include "org.xml.sax.ErrorHandler.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class Attributes; } } }
namespace org { namespace xml { namespace sax { class InputSource; } } }
namespace org { namespace xml { namespace sax { class Locator; } } }
namespace org { namespace xml { namespace sax { class SAXParseException; } } }

namespace org {
namespace xml {
namespace sax {
namespace helpers {
class DefaultHandler : public virtual ::java::lang::Object,
                       public virtual ::org::xml::sax::ContentHandler,
                       public virtual ::org::xml::sax::DTDHandler,
                       public virtual ::org::xml::sax::EntityResolver,
                       public virtual ::org::xml::sax::ErrorHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::ContentHandler(_obj), ::org::xml::sax::DTDHandler(_obj), ::org::xml::sax::EntityResolver(_obj), ::org::xml::sax::ErrorHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultHandler(const ::org::xml::sax::helpers::DefaultHandler& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::EntityResolver((jobject)0), ::org::xml::sax::ErrorHandler((jobject)0) {obj = x.obj;}
    DefaultHandler(::org::xml::sax::helpers::DefaultHandler&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::EntityResolver((jobject)0), ::org::xml::sax::ErrorHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::helpers::DefaultHandler& operator=(const ::org::xml::sax::helpers::DefaultHandler& x) {obj = x.obj; return *this;}
    ::org::xml::sax::helpers::DefaultHandler& operator=(::org::xml::sax::helpers::DefaultHandler&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultHandler();
    ::org::xml::sax::InputSource resolveEntity(const ::java::lang::String&, const ::java::lang::String&) const ;
    void notationDecl(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void unparsedEntityDecl(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void setDocumentLocator(const ::org::xml::sax::Locator&) const ;
    void startDocument() const ;
    void endDocument() const ;
    void startPrefixMapping(const ::java::lang::String&, const ::java::lang::String&) const ;
    void endPrefixMapping(const ::java::lang::String&) const ;
    void startElement(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::org::xml::sax::Attributes&) const ;
    void endElement(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;
    void characters(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    void ignorableWhitespace(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    void processingInstruction(const ::java::lang::String&, const ::java::lang::String&) const ;
    void skippedEntity(const ::java::lang::String&) const ;
    void warning(const ::org::xml::sax::SAXParseException&) const ;
    void error(const ::org::xml::sax::SAXParseException&) const ;
    void fatalError(const ::org::xml::sax::SAXParseException&) const ;

};
}
}
}
}


