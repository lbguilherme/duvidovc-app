#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace xml { namespace sax { class SAXParseException; } } }

namespace org {
namespace xml {
namespace sax {
class ErrorHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ErrorHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ErrorHandler(const ::org::xml::sax::ErrorHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ErrorHandler(::org::xml::sax::ErrorHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::ErrorHandler& operator=(const ::org::xml::sax::ErrorHandler& x) {obj = x.obj; return *this;}
    ::org::xml::sax::ErrorHandler& operator=(::org::xml::sax::ErrorHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void warning(const ::org::xml::sax::SAXParseException&) const;
    void error(const ::org::xml::sax::SAXParseException&) const;
    void fatalError(const ::org::xml::sax::SAXParseException&) const;

};
}
}
}


