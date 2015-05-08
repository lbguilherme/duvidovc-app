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
#include "org.xml.sax.XMLFilter.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class Attributes; } } }
namespace org { namespace xml { namespace sax { class ContentHandler; } } }
namespace org { namespace xml { namespace sax { class DTDHandler; } } }
namespace org { namespace xml { namespace sax { class EntityResolver; } } }
namespace org { namespace xml { namespace sax { class ErrorHandler; } } }
namespace org { namespace xml { namespace sax { class InputSource; } } }
namespace org { namespace xml { namespace sax { class Locator; } } }
namespace org { namespace xml { namespace sax { class SAXParseException; } } }
namespace org { namespace xml { namespace sax { class XMLReader; } } }

namespace org {
namespace xml {
namespace sax {
namespace helpers {
class XMLFilterImpl : public virtual ::java::lang::Object,
                      public virtual ::org::xml::sax::ContentHandler,
                      public virtual ::org::xml::sax::DTDHandler,
                      public virtual ::org::xml::sax::EntityResolver,
                      public virtual ::org::xml::sax::ErrorHandler,
                      public virtual ::org::xml::sax::XMLFilter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XMLFilterImpl(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::ContentHandler(_obj), ::org::xml::sax::DTDHandler(_obj), ::org::xml::sax::EntityResolver(_obj), ::org::xml::sax::ErrorHandler(_obj), ::org::xml::sax::XMLFilter(_obj), ::org::xml::sax::XMLReader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XMLFilterImpl(const ::org::xml::sax::helpers::XMLFilterImpl& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::EntityResolver((jobject)0), ::org::xml::sax::ErrorHandler((jobject)0), ::org::xml::sax::XMLFilter((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {obj = x.obj;}
    XMLFilterImpl(::org::xml::sax::helpers::XMLFilterImpl&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::DTDHandler((jobject)0), ::org::xml::sax::EntityResolver((jobject)0), ::org::xml::sax::ErrorHandler((jobject)0), ::org::xml::sax::XMLFilter((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::helpers::XMLFilterImpl& operator=(const ::org::xml::sax::helpers::XMLFilterImpl& x) {obj = x.obj; return *this;}
    ::org::xml::sax::helpers::XMLFilterImpl& operator=(::org::xml::sax::helpers::XMLFilterImpl&& x) {obj = std::move(x.obj); return *this;}
    
    XMLFilterImpl();
    XMLFilterImpl(const ::org::xml::sax::XMLReader&);
    void setParent(const ::org::xml::sax::XMLReader&) const ;
    ::org::xml::sax::XMLReader getParent() const ;
    void setFeature(const ::java::lang::String&, bool) const ;
    bool getFeature(const ::java::lang::String&) const ;
    void setProperty(const ::java::lang::String&, const ::java::lang::Object&) const ;
    ::java::lang::Object getProperty(const ::java::lang::String&) const ;
    void setEntityResolver(const ::org::xml::sax::EntityResolver&) const ;
    ::org::xml::sax::EntityResolver getEntityResolver() const ;
    void setDTDHandler(const ::org::xml::sax::DTDHandler&) const ;
    ::org::xml::sax::DTDHandler getDTDHandler() const ;
    void setContentHandler(const ::org::xml::sax::ContentHandler&) const ;
    ::org::xml::sax::ContentHandler getContentHandler() const ;
    void setErrorHandler(const ::org::xml::sax::ErrorHandler&) const ;
    ::org::xml::sax::ErrorHandler getErrorHandler() const ;
    void parse(const ::org::xml::sax::InputSource&) const ;
    void parse(const ::java::lang::String&) const ;
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


