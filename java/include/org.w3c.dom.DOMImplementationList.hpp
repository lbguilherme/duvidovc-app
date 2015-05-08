#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace w3c { namespace dom { class DOMImplementation; } } }

namespace org {
namespace w3c {
namespace dom {
class DOMImplementationList : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DOMImplementationList(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DOMImplementationList(const ::org::w3c::dom::DOMImplementationList& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DOMImplementationList(::org::w3c::dom::DOMImplementationList&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::DOMImplementationList& operator=(const ::org::w3c::dom::DOMImplementationList& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::DOMImplementationList& operator=(::org::w3c::dom::DOMImplementationList&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::w3c::dom::DOMImplementation item(int32_t) const ;
    int32_t getLength() const ;

};
}
}
}


