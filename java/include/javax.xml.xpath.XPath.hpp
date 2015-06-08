#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace namespace_ { class NamespaceContext; } } }
namespace javax { namespace xml { namespace namespace_ { class QName; } } }
namespace javax { namespace xml { namespace xpath { class XPathExpression; } } }
namespace javax { namespace xml { namespace xpath { class XPathFunctionResolver; } } }
namespace javax { namespace xml { namespace xpath { class XPathVariableResolver; } } }
namespace org { namespace xml { namespace sax { class InputSource; } } }

namespace javax {
namespace xml {
namespace xpath {
class XPath : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XPath(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XPath(const ::javax::xml::xpath::XPath& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XPath(::javax::xml::xpath::XPath&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::xpath::XPath& operator=(const ::javax::xml::xpath::XPath& x) {obj = x.obj; return *this;}
    ::javax::xml::xpath::XPath& operator=(::javax::xml::xpath::XPath&& x) {obj = std::move(x.obj); return *this;}
    
    void reset() const;
    void setXPathVariableResolver(const ::javax::xml::xpath::XPathVariableResolver&) const;
    ::javax::xml::xpath::XPathVariableResolver getXPathVariableResolver() const;
    void setXPathFunctionResolver(const ::javax::xml::xpath::XPathFunctionResolver&) const;
    ::javax::xml::xpath::XPathFunctionResolver getXPathFunctionResolver() const;
    void setNamespaceContext(const ::javax::xml::namespace_::NamespaceContext&) const;
    ::javax::xml::namespace_::NamespaceContext getNamespaceContext() const;
    ::javax::xml::xpath::XPathExpression compile(const ::java::lang::String&) const;
    ::java::lang::Object evaluate(const ::java::lang::String&, const ::java::lang::Object&, const ::javax::xml::namespace_::QName&) const;
    ::java::lang::String evaluate(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::java::lang::Object evaluate(const ::java::lang::String&, const ::org::xml::sax::InputSource&, const ::javax::xml::namespace_::QName&) const;
    ::java::lang::String evaluate(const ::java::lang::String&, const ::org::xml::sax::InputSource&) const;

};
}
}
}


