#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.Attributes.hpp"
#include "org.xml.sax.Locator.hpp"
#include "org.xml.sax.XMLReader.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class ContentHandler; } } }
namespace org { namespace xml { namespace sax { class DTDHandler; } } }
namespace org { namespace xml { namespace sax { class EntityResolver; } } }
namespace org { namespace xml { namespace sax { class ErrorHandler; } } }
namespace org { namespace xml { namespace sax { class InputSource; } } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace org {
namespace xmlpull {
namespace v1 {
namespace sax2 {
class Driver : public virtual ::java::lang::Object,
               public virtual ::org::xml::sax::Attributes,
               public virtual ::org::xml::sax::Locator,
               public virtual ::org::xml::sax::XMLReader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Driver(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::Attributes(_obj), ::org::xml::sax::Locator(_obj), ::org::xml::sax::XMLReader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Driver(const ::org::xmlpull::v1::sax2::Driver& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0), ::org::xml::sax::Locator((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {obj = x.obj;}
    Driver(::org::xmlpull::v1::sax2::Driver&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::Attributes((jobject)0), ::org::xml::sax::Locator((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xmlpull::v1::sax2::Driver& operator=(const ::org::xmlpull::v1::sax2::Driver& x) {obj = x.obj; return *this;}
    ::org::xmlpull::v1::sax2::Driver& operator=(::org::xmlpull::v1::sax2::Driver&& x) {obj = std::move(x.obj); return *this;}
    
    Driver();
    Driver(const ::org::xmlpull::v1::XmlPullParser&);
    int32_t getLength() const;
    ::java::lang::String getURI(int32_t) const;
    ::java::lang::String getLocalName(int32_t) const;
    ::java::lang::String getQName(int32_t) const;
    ::java::lang::String getType(int32_t) const;
    ::java::lang::String getValue(int32_t) const;
    int32_t getIndex(const ::java::lang::String&, const ::java::lang::String&) const;
    int32_t getIndex(const ::java::lang::String&) const;
    ::java::lang::String getType(const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::lang::String getType(const ::java::lang::String&) const;
    ::java::lang::String getValue(const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::lang::String getValue(const ::java::lang::String&) const;
    ::java::lang::String getPublicId() const;
    ::java::lang::String getSystemId() const;
    int32_t getLineNumber() const;
    int32_t getColumnNumber() const;
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
    void parseSubTree(const ::org::xmlpull::v1::XmlPullParser&) const;

};
}
}
}
}


