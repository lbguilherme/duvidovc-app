#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace validation { class Schema; } } }
namespace org { namespace w3c { namespace dom { class DOMImplementation; } } }
namespace org { namespace w3c { namespace dom { class Document; } } }
namespace org { namespace xml { namespace sax { class EntityResolver; } } }
namespace org { namespace xml { namespace sax { class ErrorHandler; } } }
namespace org { namespace xml { namespace sax { class InputSource; } } }

namespace javax {
namespace xml {
namespace parsers {
class DocumentBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DocumentBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DocumentBuilder(const ::javax::xml::parsers::DocumentBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DocumentBuilder(::javax::xml::parsers::DocumentBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::parsers::DocumentBuilder& operator=(const ::javax::xml::parsers::DocumentBuilder& x) {obj = x.obj; return *this;}
    ::javax::xml::parsers::DocumentBuilder& operator=(::javax::xml::parsers::DocumentBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    void reset() const;
    ::org::w3c::dom::Document parse(const ::java::io::InputStream&) const;
    ::org::w3c::dom::Document parse(const ::java::io::InputStream&, const ::java::lang::String&) const;
    ::org::w3c::dom::Document parse(const ::java::lang::String&) const;
    ::org::w3c::dom::Document parse(const ::java::io::File&) const;
    ::org::w3c::dom::Document parse(const ::org::xml::sax::InputSource&) const;
    bool isNamespaceAware() const;
    bool isValidating() const;
    void setEntityResolver(const ::org::xml::sax::EntityResolver&) const;
    void setErrorHandler(const ::org::xml::sax::ErrorHandler&) const;
    ::org::w3c::dom::Document newDocument() const;
    ::org::w3c::dom::DOMImplementation getDOMImplementation() const;
    ::javax::xml::validation::Schema getSchema() const;
    bool isXIncludeAware() const;

};
}
}
}


