#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.DocumentHandler.hpp"
#include "org.xml.sax.XMLReader.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class AttributeList; } } }
namespace org { namespace xml { namespace sax { class ContentHandler; } } }
namespace org { namespace xml { namespace sax { class DTDHandler; } } }
namespace org { namespace xml { namespace sax { class EntityResolver; } } }
namespace org { namespace xml { namespace sax { class ErrorHandler; } } }
namespace org { namespace xml { namespace sax { class InputSource; } } }
namespace org { namespace xml { namespace sax { class Locator; } } }
namespace org { namespace xml { namespace sax { class Parser; } } }

namespace org {
namespace xml {
namespace sax {
namespace helpers {
class ParserAdapter : public virtual ::java::lang::Object,
                      public virtual ::org::xml::sax::DocumentHandler,
                      public virtual ::org::xml::sax::XMLReader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParserAdapter(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::DocumentHandler(_obj), ::org::xml::sax::XMLReader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParserAdapter(const ::org::xml::sax::helpers::ParserAdapter& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::DocumentHandler((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {obj = x.obj;}
    ParserAdapter(::org::xml::sax::helpers::ParserAdapter&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::DocumentHandler((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::helpers::ParserAdapter& operator=(const ::org::xml::sax::helpers::ParserAdapter& x) {obj = x.obj; return *this;}
    ::org::xml::sax::helpers::ParserAdapter& operator=(::org::xml::sax::helpers::ParserAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    ParserAdapter();
    ParserAdapter(const ::org::xml::sax::Parser&);
    void setFeature(const ::java::lang::String&, bool) const;
    bool getFeature(const ::java::lang::String&) const;
    void setProperty(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::java::lang::Object getProperty(const ::java::lang::String&) const;
    void setEntityResolver(const ::org::xml::sax::EntityResolver&) const;
    ::org::xml::sax::EntityResolver getEntityResolver() const;
    void setDTDHandler(const ::org::xml::sax::DTDHandler&) const;
    ::org::xml::sax::DTDHandler getDTDHandler() const;
    void setContentHandler(const ::org::xml::sax::ContentHandler&) const;
    ::org::xml::sax::ContentHandler getContentHandler() const;
    void setErrorHandler(const ::org::xml::sax::ErrorHandler&) const;
    ::org::xml::sax::ErrorHandler getErrorHandler() const;
    void parse(const ::java::lang::String&) const;
    void parse(const ::org::xml::sax::InputSource&) const;
    void setDocumentLocator(const ::org::xml::sax::Locator&) const;
    void startDocument() const;
    void endDocument() const;
    void startElement(const ::java::lang::String&, const ::org::xml::sax::AttributeList&) const;
    void endElement(const ::java::lang::String&) const;
    void characters(const std::vector< uint16_t>&, int32_t, int32_t) const;
    void ignorableWhitespace(const std::vector< uint16_t>&, int32_t, int32_t) const;
    void processingInstruction(const ::java::lang::String&, const ::java::lang::String&) const;

};
}
}
}
}


