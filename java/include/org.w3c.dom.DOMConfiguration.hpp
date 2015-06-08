#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace w3c { namespace dom { class DOMStringList; } } }

namespace org {
namespace w3c {
namespace dom {
class DOMConfiguration : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DOMConfiguration(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DOMConfiguration(const ::org::w3c::dom::DOMConfiguration& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DOMConfiguration(::org::w3c::dom::DOMConfiguration&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::w3c::dom::DOMConfiguration& operator=(const ::org::w3c::dom::DOMConfiguration& x) {obj = x.obj; return *this;}
    ::org::w3c::dom::DOMConfiguration& operator=(::org::w3c::dom::DOMConfiguration&& x) {obj = std::move(x.obj); return *this;}
    
    void setParameter(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::java::lang::Object getParameter(const ::java::lang::String&) const;
    bool canSetParameter(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::org::w3c::dom::DOMStringList getParameterNames() const;

};
}
}
}


