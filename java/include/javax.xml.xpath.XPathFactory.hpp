#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace xpath { class XPath; } } }
namespace javax { namespace xml { namespace xpath { class XPathFactory; } } }
namespace javax { namespace xml { namespace xpath { class XPathFunctionResolver; } } }
namespace javax { namespace xml { namespace xpath { class XPathVariableResolver; } } }

namespace javax {
namespace xml {
namespace xpath {
class XPathFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XPathFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XPathFactory(const ::javax::xml::xpath::XPathFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XPathFactory(::javax::xml::xpath::XPathFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::xpath::XPathFactory& operator=(const ::javax::xml::xpath::XPathFactory& x) {obj = x.obj; return *this;}
    ::javax::xml::xpath::XPathFactory& operator=(::javax::xml::xpath::XPathFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::javax::xml::xpath::XPathFactory newInstance();
    static ::javax::xml::xpath::XPathFactory newInstance(const ::java::lang::String&);
    static ::javax::xml::xpath::XPathFactory newInstance(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::ClassLoader&);
    bool isObjectModelSupported(const ::java::lang::String&) const ;
    void setFeature(const ::java::lang::String&, bool) const ;
    bool getFeature(const ::java::lang::String&) const ;
    void setXPathVariableResolver(const ::javax::xml::xpath::XPathVariableResolver&) const ;
    void setXPathFunctionResolver(const ::javax::xml::xpath::XPathFunctionResolver&) const ;
    ::javax::xml::xpath::XPath newXPath() const ;

};
}
}
}


