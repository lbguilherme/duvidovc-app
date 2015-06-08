#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.w3c.dom.Node.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class Element; } } }
namespace org { namespace w3c { namespace dom { class TypeInfo; } } }

namespace org {
namespace w3c {
namespace dom {
class Attr : public virtual ::java::lang::Object,
             public virtual ::org::w3c::dom::Node {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Attr(jobject _obj) : ::java::lang::Object(_obj), ::org::w3c::dom::Node(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Attr(const ::org::w3c::dom::Attr& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj;}
    Attr(::org::w3c::dom::Attr&& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::Attr& operator=(const ::org::w3c::dom::Attr& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::Attr& operator=(::org::w3c::dom::Attr&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName() const;
    bool getSpecified() const;
    ::java::lang::String getValue() const;
    void setValue(const ::java::lang::String&) const;
    ::org::w3c::dom::Element getOwnerElement() const;
    ::org::w3c::dom::TypeInfo getSchemaTypeInfo() const;
    bool isId() const;

};
}
}
}


