#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace namespace_ { class QName; } } }
namespace org { namespace xml { namespace sax { class InputSource; } } }

namespace javax {
namespace xml {
namespace xpath {
class XPathExpression : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XPathExpression(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XPathExpression(const ::javax::xml::xpath::XPathExpression& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XPathExpression(::javax::xml::xpath::XPathExpression&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::xpath::XPathExpression& operator=(const ::javax::xml::xpath::XPathExpression& x) {obj = x.obj; return *this;}
    ::javax::xml::xpath::XPathExpression& operator=(::javax::xml::xpath::XPathExpression&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object evaluate(const ::java::lang::Object&, const ::javax::xml::namespace_::QName&) const;
    ::java::lang::String evaluate(const ::java::lang::Object&) const;
    ::java::lang::Object evaluate(const ::org::xml::sax::InputSource&, const ::javax::xml::namespace_::QName&) const;
    ::java::lang::String evaluate(const ::org::xml::sax::InputSource&) const;

};
}
}
}


