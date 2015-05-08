#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class DOMConfiguration; } } }
namespace org { namespace w3c { namespace dom { class Node; } } }
namespace org { namespace w3c { namespace dom { namespace ls { class LSOutput; } } } }

namespace org {
namespace w3c {
namespace dom {
namespace ls {
class LSSerializer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LSSerializer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LSSerializer(const ::org::w3c::dom::ls::LSSerializer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LSSerializer(::org::w3c::dom::ls::LSSerializer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::ls::LSSerializer& operator=(const ::org::w3c::dom::ls::LSSerializer& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::ls::LSSerializer& operator=(::org::w3c::dom::ls::LSSerializer&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::w3c::dom::DOMConfiguration getDomConfig() const ;
    ::java::lang::String getNewLine() const ;
    void setNewLine(const ::java::lang::String&) const ;
    bool write(const ::org::w3c::dom::Node&, const ::org::w3c::dom::ls::LSOutput&) const ;
    bool writeToURI(const ::org::w3c::dom::Node&, const ::java::lang::String&) const ;
    ::java::lang::String writeToString(const ::org::w3c::dom::Node&) const ;

};
}
}
}
}


