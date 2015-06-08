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
class DOMLocator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DOMLocator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DOMLocator(const ::org::w3c::dom::DOMLocator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DOMLocator(::org::w3c::dom::DOMLocator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::DOMLocator& operator=(const ::org::w3c::dom::DOMLocator& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::DOMLocator& operator=(::org::w3c::dom::DOMLocator&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getLineNumber() const;
    int32_t getColumnNumber() const;
    int32_t getByteOffset() const;
    int32_t getUtf16Offset() const;
    ::org::w3c::dom::Node getRelatedNode() const;
    ::java::lang::String getUri() const;

};
}
}
}


