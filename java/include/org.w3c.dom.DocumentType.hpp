#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.w3c.dom.Node.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class NamedNodeMap; } } }

namespace org {
namespace w3c {
namespace dom {
class DocumentType : public virtual ::java::lang::Object,
                     public virtual ::org::w3c::dom::Node {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DocumentType(jobject _obj) : ::java::lang::Object(_obj), ::org::w3c::dom::Node(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DocumentType(const ::org::w3c::dom::DocumentType& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj;}
    DocumentType(::org::w3c::dom::DocumentType&& x) : ::java::lang::Object((jobject)0), ::org::w3c::dom::Node((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::DocumentType& operator=(const ::org::w3c::dom::DocumentType& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::DocumentType& operator=(::org::w3c::dom::DocumentType&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName() const ;
    ::org::w3c::dom::NamedNodeMap getEntities() const ;
    ::org::w3c::dom::NamedNodeMap getNotations() const ;
    ::java::lang::String getPublicId() const ;
    ::java::lang::String getSystemId() const ;
    ::java::lang::String getInternalSubset() const ;

};
}
}
}


