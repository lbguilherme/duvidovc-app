#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace javax { namespace xml { namespace namespace_ { class QName; } } }
namespace javax { namespace xml { namespace xpath { class XPathFunction; } } }

namespace javax {
namespace xml {
namespace xpath {
class XPathFunctionResolver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XPathFunctionResolver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XPathFunctionResolver(const ::javax::xml::xpath::XPathFunctionResolver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XPathFunctionResolver(::javax::xml::xpath::XPathFunctionResolver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::xpath::XPathFunctionResolver& operator=(const ::javax::xml::xpath::XPathFunctionResolver& x) {obj = x.obj; return *this;}
    ::javax::xml::xpath::XPathFunctionResolver& operator=(::javax::xml::xpath::XPathFunctionResolver&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::xml::xpath::XPathFunction resolveFunction(const ::javax::xml::namespace_::QName&, int32_t) const;

};
}
}
}


