#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class Attributes; } } }
namespace org { namespace xml { namespace sax { class Locator; } } }

namespace org {
namespace xml {
namespace sax {
class ContentHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentHandler(const ::org::xml::sax::ContentHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContentHandler(::org::xml::sax::ContentHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::ContentHandler& operator=(const ::org::xml::sax::ContentHandler& x) {obj = x.obj; return *this;}
    ::org::xml::sax::ContentHandler& operator=(::org::xml::sax::ContentHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void setDocumentLocator(const ::org::xml::sax::Locator&) const;
    void startDocument() const;
    void endDocument() const;
    void startPrefixMapping(const ::java::lang::String&, const ::java::lang::String&) const;
    void endPrefixMapping(const ::java::lang::String&) const;
    void startElement(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::org::xml::sax::Attributes&) const;
    void endElement(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    void characters(const std::vector< uint16_t>&, int32_t, int32_t) const;
    void ignorableWhitespace(const std::vector< uint16_t>&, int32_t, int32_t) const;
    void processingInstruction(const ::java::lang::String&, const ::java::lang::String&) const;
    void skippedEntity(const ::java::lang::String&) const;

};
}
}
}


