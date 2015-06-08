#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class List; } }

namespace javax {
namespace xml {
namespace xpath {
class XPathFunction : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XPathFunction(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XPathFunction(const ::javax::xml::xpath::XPathFunction& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XPathFunction(::javax::xml::xpath::XPathFunction&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::xpath::XPathFunction& operator=(const ::javax::xml::xpath::XPathFunction& x) {obj = x.obj; return *this;}
    ::javax::xml::xpath::XPathFunction& operator=(::javax::xml::xpath::XPathFunction&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object evaluate(const ::java::util::List&) const;

};
}
}
}


