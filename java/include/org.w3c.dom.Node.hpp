#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class Document; } } }
namespace org { namespace w3c { namespace dom { class NamedNodeMap; } } }
namespace org { namespace w3c { namespace dom { class Node; } } }
namespace org { namespace w3c { namespace dom { class NodeList; } } }
namespace org { namespace w3c { namespace dom { class UserDataHandler; } } }

namespace org {
namespace w3c {
namespace dom {
class Node : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Node(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Node(const ::org::w3c::dom::Node& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Node(::org::w3c::dom::Node&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::Node& operator=(const ::org::w3c::dom::Node& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::Node& operator=(::org::w3c::dom::Node&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getNodeName() const ;
    ::java::lang::String getNodeValue() const ;
    void setNodeValue(const ::java::lang::String&) const ;
    int16_t getNodeType() const ;
    ::org::w3c::dom::Node getParentNode() const ;
    ::org::w3c::dom::NodeList getChildNodes() const ;
    ::org::w3c::dom::Node getFirstChild() const ;
    ::org::w3c::dom::Node getLastChild() const ;
    ::org::w3c::dom::Node getPreviousSibling() const ;
    ::org::w3c::dom::Node getNextSibling() const ;
    ::org::w3c::dom::NamedNodeMap getAttributes() const ;
    ::org::w3c::dom::Document getOwnerDocument() const ;
    ::org::w3c::dom::Node insertBefore(const ::org::w3c::dom::Node&, const ::org::w3c::dom::Node&) const ;
    ::org::w3c::dom::Node replaceChild(const ::org::w3c::dom::Node&, const ::org::w3c::dom::Node&) const ;
    ::org::w3c::dom::Node removeChild(const ::org::w3c::dom::Node&) const ;
    ::org::w3c::dom::Node appendChild(const ::org::w3c::dom::Node&) const ;
    bool hasChildNodes() const ;
    ::org::w3c::dom::Node cloneNode(bool) const ;
    void normalize() const ;
    bool isSupported(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::String getNamespaceURI() const ;
    ::java::lang::String getPrefix() const ;
    void setPrefix(const ::java::lang::String&) const ;
    ::java::lang::String getLocalName() const ;
    bool hasAttributes() const ;
    ::java::lang::String getBaseURI() const ;
    int16_t compareDocumentPosition(const ::org::w3c::dom::Node&) const ;
    ::java::lang::String getTextContent() const ;
    void setTextContent(const ::java::lang::String&) const ;
    bool isSameNode(const ::org::w3c::dom::Node&) const ;
    ::java::lang::String lookupPrefix(const ::java::lang::String&) const ;
    bool isDefaultNamespace(const ::java::lang::String&) const ;
    ::java::lang::String lookupNamespaceURI(const ::java::lang::String&) const ;
    bool isEqualNode(const ::org::w3c::dom::Node&) const ;
    ::java::lang::Object getFeature(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::java::lang::Object setUserData(const ::java::lang::String&, const ::java::lang::Object&, const ::org::w3c::dom::UserDataHandler&) const ;
    ::java::lang::Object getUserData(const ::java::lang::String&) const ;

};
}
}
}


