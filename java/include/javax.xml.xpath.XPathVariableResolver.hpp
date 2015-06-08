#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace javax { namespace xml { namespace namespace_ { class QName; } } }

namespace javax {
namespace xml {
namespace xpath {
class XPathVariableResolver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XPathVariableResolver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XPathVariableResolver(const ::javax::xml::xpath::XPathVariableResolver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XPathVariableResolver(::javax::xml::xpath::XPathVariableResolver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::xpath::XPathVariableResolver& operator=(const ::javax::xml::xpath::XPathVariableResolver& x) {obj = x.obj; return *this;}
    ::javax::xml::xpath::XPathVariableResolver& operator=(::javax::xml::xpath::XPathVariableResolver&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object resolveVariable(const ::javax::xml::namespace_::QName&) const;

};
}
}
}


