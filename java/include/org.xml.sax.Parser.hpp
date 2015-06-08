#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }
namespace org { namespace xml { namespace sax { class DTDHandler; } } }
namespace org { namespace xml { namespace sax { class DocumentHandler; } } }
namespace org { namespace xml { namespace sax { class EntityResolver; } } }
namespace org { namespace xml { namespace sax { class ErrorHandler; } } }
namespace org { namespace xml { namespace sax { class InputSource; } } }

namespace org {
namespace xml {
namespace sax {
class Parser : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Parser(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Parser(const ::org::xml::sax::Parser& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Parser(::org::xml::sax::Parser&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::Parser& operator=(const ::org::xml::sax::Parser& x) {obj = x.obj; return *this;}
    ::org::xml::sax::Parser& operator=(::org::xml::sax::Parser&& x) {obj = std::move(x.obj); return *this;}
    
    void setLocale(const ::java::util::Locale&) const;
    void setEntityResolver(const ::org::xml::sax::EntityResolver&) const;
    void setDTDHandler(const ::org::xml::sax::DTDHandler&) const;
    void setDocumentHandler(const ::org::xml::sax::DocumentHandler&) const;
    void setErrorHandler(const ::org::xml::sax::ErrorHandler&) const;
    void parse(const ::org::xml::sax::InputSource&) const;
    void parse(const ::java::lang::String&) const;

};
}
}
}


