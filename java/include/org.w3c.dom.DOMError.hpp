#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class DOMLocator; } } }

namespace org {
namespace w3c {
namespace dom {
class DOMError : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DOMError(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DOMError(const ::org::w3c::dom::DOMError& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DOMError(::org::w3c::dom::DOMError&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::DOMError& operator=(const ::org::w3c::dom::DOMError& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::DOMError& operator=(::org::w3c::dom::DOMError&& x) {obj = std::move(x.obj); return *this;}
    
    int16_t getSeverity() const ;
    ::java::lang::String getMessage() const ;
    ::java::lang::String getType() const ;
    ::java::lang::Object getRelatedException() const ;
    ::java::lang::Object getRelatedData() const ;
    ::org::w3c::dom::DOMLocator getLocation() const ;

};
}
}
}


