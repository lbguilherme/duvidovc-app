#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class ContentHandler; } } }
namespace org { namespace xml { namespace sax { class DTDHandler; } } }
namespace org { namespace xml { namespace sax { class EntityResolver; } } }
namespace org { namespace xml { namespace sax { class ErrorHandler; } } }
namespace org { namespace xml { namespace sax { class InputSource; } } }

namespace org {
namespace xml {
namespace sax {
class XMLReader : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XMLReader(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XMLReader(const ::org::xml::sax::XMLReader& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    XMLReader(::org::xml::sax::XMLReader&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::XMLReader& operator=(const ::org::xml::sax::XMLReader& x) {obj = x.obj; return *this;}
    ::org::xml::sax::XMLReader& operator=(::org::xml::sax::XMLReader&& x) {obj = std::move(x.obj); return *this;}
    
    bool getFeature(const ::java::lang::String&) const;
    void setFeature(const ::java::lang::String&, bool) const;
    ::java::lang::Object getProperty(const ::java::lang::String&) const;
    void setProperty(const ::java::lang::String&, const ::java::lang::Object&) const;
    void setEntityResolver(const ::org::xml::sax::EntityResolver&) const;
    ::org::xml::sax::EntityResolver getEntityResolver() const;
    void setDTDHandler(const ::org::xml::sax::DTDHandler&) const;
    ::org::xml::sax::DTDHandler getDTDHandler() const;
    void setContentHandler(const ::org::xml::sax::ContentHandler&) const;
    ::org::xml::sax::ContentHandler getContentHandler() const;
    void setErrorHandler(const ::org::xml::sax::ErrorHandler&) const;
    ::org::xml::sax::ErrorHandler getErrorHandler() const;
    void parse(const ::org::xml::sax::InputSource&) const;
    void parse(const ::java::lang::String&) const;

};
}
}
}


