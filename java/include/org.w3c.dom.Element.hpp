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
namespace org { namespace w3c { namespace dom { class NodeList; } } }
namespace org { namespace w3c { namespace dom { class TypeInfo; } } }

namespace org {
namespace w3c {
namespace dom {
class Element : public virtual ::java::lang::Object,
                public virtual ::org::w3c::dom::Node {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Element(jobject _obj) : ::java::lang::Object(_obj), ::org::w3c::dom::Node(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Element(const ::org::w3c::dom::Element& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj;}
    Element(::org::w3c::dom::Element&& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::Element& operator=(const ::org::w3c::dom::Element& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::Element& operator=(::org::w3c::dom::Element&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getTagName() const;
    ::java::lang::String getAttribute(const ::java::lang::String&) const;
    void setAttribute(const ::java::lang::String&, const ::java::lang::String&) const;
    void removeAttribute(const ::java::lang::String&) const;
    ::org::w3c::dom::Attr getAttributeNode(const ::java::lang::String&) const;
    ::org::w3c::dom::Attr setAttributeNode(const ::org::w3c::dom::Attr&) const;
    ::org::w3c::dom::Attr removeAttributeNode(const ::org::w3c::dom::Attr&) const;
    ::org::w3c::dom::NodeList getElementsByTagName(const ::java::lang::String&) const;
    ::java::lang::String getAttributeNS(const ::java::lang::String&, const ::java::lang::String&) const;
    void setAttributeNS(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    void removeAttributeNS(const ::java::lang::String&, const ::java::lang::String&) const;
    ::org::w3c::dom::Attr getAttributeNodeNS(const ::java::lang::String&, const ::java::lang::String&) const;
    ::org::w3c::dom::Attr setAttributeNodeNS(const ::org::w3c::dom::Attr&) const;
    ::org::w3c::dom::NodeList getElementsByTagNameNS(const ::java::lang::String&, const ::java::lang::String&) const;
    bool hasAttribute(const ::java::lang::String&) const;
    bool hasAttributeNS(const ::java::lang::String&, const ::java::lang::String&) const;
    ::org::w3c::dom::TypeInfo getSchemaTypeInfo() const;
    void setIdAttribute(const ::java::lang::String&, bool) const;
    void setIdAttributeNS(const ::java::lang::String&, const ::java::lang::String&, bool) const;
    void setIdAttributeNode(const ::org::w3c::dom::Attr&, bool) const;

};
}
}
}


