#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace validation { class Schema; } } }
namespace org { namespace xml { namespace sax { class HandlerBase; } } }
namespace org { namespace xml { namespace sax { class InputSource; } } }
namespace org { namespace xml { namespace sax { class Parser; } } }
namespace org { namespace xml { namespace sax { class XMLReader; } } }
namespace org { namespace xml { namespace sax { namespace helpers { class DefaultHandler; } } } }

namespace javax {
namespace xml {
namespace parsers {
class SAXParser : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SAXParser(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SAXParser(const ::javax::xml::parsers::SAXParser& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SAXParser(::javax::xml::parsers::SAXParser&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::parsers::SAXParser& operator=(const ::javax::xml::parsers::SAXParser& x) {obj = x.obj; return *this;}
    ::javax::xml::parsers::SAXParser& operator=(::javax::xml::parsers::SAXParser&& x) {obj = std::move(x.obj); return *this;}
    
    void reset() const ;
    void parse(const ::java::io::InputStream&, const ::org::xml::sax::HandlerBase&) const ;
    void parse(const ::java::io::InputStream&, const ::org::xml::sax::HandlerBase&, const ::java::lang::String&) const ;
    void parse(const ::java::io::InputStream&, const ::org::xml::sax::helpers::DefaultHandler&) const ;
    void parse(const ::java::io::InputStream&, const ::org::xml::sax::helpers::DefaultHandler&, const ::java::lang::String&) const ;
    void parse(const ::java::lang::String&, const ::org::xml::sax::HandlerBase&) const ;
    void parse(const ::java::lang::String&, const ::org::xml::sax::helpers::DefaultHandler&) const ;
    void parse(const ::java::io::File&, const ::org::xml::sax::HandlerBase&) const ;
    void parse(const ::java::io::File&, const ::org::xml::sax::helpers::DefaultHandler&) const ;
    void parse(const ::org::xml::sax::InputSource&, const ::org::xml::sax::HandlerBase&) const ;
    void parse(const ::org::xml::sax::InputSource&, const ::org::xml::sax::helpers::DefaultHandler&) const ;
    ::org::xml::sax::Parser getParser() const ;
    ::org::xml::sax::XMLReader getXMLReader() const ;
    bool isNamespaceAware() const ;
    bool isValidating() const ;
    void setProperty(const ::java::lang::String&, const ::java::lang::Object&) const ;
    ::java::lang::Object getProperty(const ::java::lang::String&) const ;
    ::javax::xml::validation::Schema getSchema() const ;
    bool isXIncludeAware() const ;

};
}
}
}


