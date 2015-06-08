#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class Node; } } }

namespace org {
namespace w3c {
namespace dom {
class NamedNodeMap : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NamedNodeMap(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NamedNodeMap(const ::org::w3c::dom::NamedNodeMap& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NamedNodeMap(::org::w3c::dom::NamedNodeMap&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::NamedNodeMap& operator=(const ::org::w3c::dom::NamedNodeMap& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::NamedNodeMap& operator=(::org::w3c::dom::NamedNodeMap&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::w3c::dom::Node getNamedItem(const ::java::lang::String&) const;
    ::org::w3c::dom::Node setNamedItem(const ::org::w3c::dom::Node&) const;
    ::org::w3c::dom::Node removeNamedItem(const ::java::lang::String&) const;
    ::org::w3c::dom::Node item(int32_t) const;
    int32_t getLength() const;
    ::org::w3c::dom::Node getNamedItemNS(const ::java::lang::String&, const ::java::lang::String&) const;
    ::org::w3c::dom::Node setNamedItemNS(const ::org::w3c::dom::Node&) const;
    ::org::w3c::dom::Node removeNamedItemNS(const ::java::lang::String&, const ::java::lang::String&) const;

};
}
}
}


