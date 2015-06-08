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
namespace org { namespace w3c { namespace dom { class DocumentType; } } }

namespace org {
namespace w3c {
namespace dom {
class DOMImplementation : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DOMImplementation(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DOMImplementation(const ::org::w3c::dom::DOMImplementation& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DOMImplementation(::org::w3c::dom::DOMImplementation&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::DOMImplementation& operator=(const ::org::w3c::dom::DOMImplementation& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::DOMImplementation& operator=(::org::w3c::dom::DOMImplementation&& x) {obj = std::move(x.obj); return *this;}
    
    bool hasFeature(const ::java::lang::String&, const ::java::lang::String&) const;
    ::org::w3c::dom::DocumentType createDocumentType(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::org::w3c::dom::Document createDocument(const ::java::lang::String&, const ::java::lang::String&, const ::org::w3c::dom::DocumentType&) const;
    ::java::lang::Object getFeature(const ::java::lang::String&, const ::java::lang::String&) const;

};
}
}
}


