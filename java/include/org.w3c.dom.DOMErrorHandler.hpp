#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace w3c { namespace dom { class DOMError; } } }

namespace org {
namespace w3c {
namespace dom {
class DOMErrorHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DOMErrorHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DOMErrorHandler(const ::org::w3c::dom::DOMErrorHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DOMErrorHandler(::org::w3c::dom::DOMErrorHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::DOMErrorHandler& operator=(const ::org::w3c::dom::DOMErrorHandler& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::DOMErrorHandler& operator=(::org::w3c::dom::DOMErrorHandler&& x) {obj = std::move(x.obj); return *this;}
    
    bool handleError(const ::org::w3c::dom::DOMError&) const;

};
}
}
}


