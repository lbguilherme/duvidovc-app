#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class DOMImplementation; } } }
namespace org { namespace w3c { namespace dom { class DOMImplementationList; } } }

namespace org {
namespace w3c {
namespace dom {
class DOMImplementationSource : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DOMImplementationSource(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DOMImplementationSource(const ::org::w3c::dom::DOMImplementationSource& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DOMImplementationSource(::org::w3c::dom::DOMImplementationSource&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::DOMImplementationSource& operator=(const ::org::w3c::dom::DOMImplementationSource& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::DOMImplementationSource& operator=(::org::w3c::dom::DOMImplementationSource&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::w3c::dom::DOMImplementation getDOMImplementation(const ::java::lang::String&) const;
    ::org::w3c::dom::DOMImplementationList getDOMImplementationList(const ::java::lang::String&) const;

};
}
}
}


