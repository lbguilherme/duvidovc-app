#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.ContentHandler.hpp"
#include "org.xml.sax.Parser.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }
namespace org { namespace xml { namespace sax { class Attributes; } } }
namespace org { namespace xml { namespace sax { class DTDHandler; } } }
namespace org { namespace xml { namespace sax { class DocumentHandler; } } }
namespace org { namespace xml { namespace sax { class EntityResolver; } } }
namespace org { namespace xml { namespace sax { class ErrorHandler; } } }
namespace org { namespace xml { namespace sax { class InputSource; } } }
namespace org { namespace xml { namespace sax { class Locator; } } }
namespace org { namespace xml { namespace sax { class XMLReader; } } }

namespace org {
namespace xml {
namespace sax {
namespace helpers {
class XMLReaderAdapter : public virtual ::java::lang::Object,
                         public virtual ::org::xml::sax::ContentHandler,
                         public virtual ::org::xml::sax::Parser {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XMLReaderAdapter(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::ContentHandler(_obj), ::org::xml::sax::Parser(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XMLReaderAdapter(const ::org::xml::sax::helpers::XMLReaderAdapter& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::Parser((jobject)0) {obj = x.obj;}
    XMLReaderAdapter(::org::xml::sax::helpers::XMLReaderAdapter&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0), ::org::xml::sax::Parser((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::helpers::XMLReaderAdapter& operator=(const ::org::xml::sax::helpers::XMLReaderAdapter& x) {obj = x.obj; return *this;}
    ::org::xml::sax::helpers::XMLReaderAdapter& operator=(::org::xml::sax::helpers::XMLReaderAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    XMLReaderAdapter();
    XMLReaderAdapter(const ::org::xml::sax::XMLReader&);
    void setLocale(const ::java::util::Locale&) const ;
    void setEntityResolver(const ::org::xml::sax::EntityResolver&) const ;
    void setDTDHandler(const ::org::xml::sax::DTDHandler&) const ;
    void setDocumentHandler(const ::org::xml::sax::DocumentHandler&) const ;
    void setErrorHandler(const ::org::xml::sax::ErrorHandler&) const ;
    void parse(const ::java::lang::String&) const ;
    void parse(const ::org::xml::sax::InputSource&) const ;
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

};
}
}
}
}


