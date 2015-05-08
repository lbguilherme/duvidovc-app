#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.w3c.dom.Node.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class Attr; } } }
namespace org { namespace w3c { namespace dom { class CDATASection; } } }
namespace org { namespace w3c { namespace dom { class Comment; } } }
namespace org { namespace w3c { namespace dom { class DOMConfiguration; } } }
namespace org { namespace w3c { namespace dom { class DOMImplementation; } } }
namespace org { namespace w3c { namespace dom { class DocumentFragment; } } }
namespace org { namespace w3c { namespace dom { class DocumentType; } } }
namespace org { namespace w3c { namespace dom { class Element; } } }
namespace org { namespace w3c { namespace dom { class EntityReference; } } }
namespace org { namespace w3c { namespace dom { class Node; } } }
namespace org { namespace w3c { namespace dom { class NodeList; } } }
namespace org { namespace w3c { namespace dom { class ProcessingInstruction; } } }
namespace org { namespace w3c { namespace dom { class Text; } } }

namespace org {
namespace w3c {
namespace dom {
class Document : public virtual ::java::lang::Object,
                 public virtual ::org::w3c::dom::Node {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Document(jobject _obj) : ::java::lang::Object(_obj), ::org::w3c::dom::Node(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Document(const ::org::w3c::dom::Document& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj;}
    Document(::org::w3c::dom::Document&& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::Document& operator=(const ::org::w3c::dom::Document& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::Document& operator=(::org::w3c::dom::Document&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::w3c::dom::DocumentType getDoctype() const ;
    ::org::w3c::dom::DOMImplementation getImplementation() const ;
    ::org::w3c::dom::Element getDocumentElement() const ;
    ::org::w3c::dom::Element createElement(const ::java::lang::String&) const ;
    ::org::w3c::dom::DocumentFragment createDocumentFragment() const ;
    ::org::w3c::dom::Text createTextNode(const ::java::lang::String&) const ;
    ::org::w3c::dom::Comment createComment(const ::java::lang::String&) const ;
    ::org::w3c::dom::CDATASection createCDATASection(const ::java::lang::String&) const ;
    ::org::w3c::dom::ProcessingInstruction createProcessingInstruction(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::org::w3c::dom::Attr createAttribute(const ::java::lang::String&) const ;
    ::org::w3c::dom::EntityReference createEntityReference(const ::java::lang::String&) const ;
    ::org::w3c::dom::NodeList getElementsByTagName(const ::java::lang::String&) const ;
    ::org::w3c::dom::Node importNode(const ::org::w3c::dom::Node&, bool) const ;
    ::org::w3c::dom::Element createElementNS(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::org::w3c::dom::Attr createAttributeNS(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::org::w3c::dom::NodeList getElementsByTagNameNS(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::org::w3c::dom::Element getElementById(const ::java::lang::String&) const ;
    ::java::lang::String getInputEncoding() const ;
    ::java::lang::String getXmlEncoding() const ;
    bool getXmlStandalone() const ;
    void setXmlStandalone(bool) const ;
    ::java::lang::String getXmlVersion() const ;
    void setXmlVersion(const ::java::lang::String&) const ;
    bool getStrictErrorChecking() const ;
    void setStrictErrorChecking(bool) const ;
    ::java::lang::String getDocumentURI() const ;
    void setDocumentURI(const ::java::lang::String&) const ;
    ::org::w3c::dom::Node adoptNode(const ::org::w3c::dom::Node&) const ;
    ::org::w3c::dom::DOMConfiguration getDomConfig() const ;
    void normalizeDocument() const ;
    ::org::w3c::dom::Node renameNode(const ::org::w3c::dom::Node&, const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}


