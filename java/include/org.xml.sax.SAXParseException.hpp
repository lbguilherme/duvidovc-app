#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.SAXException.hpp"

namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xml { namespace sax { class Locator; } } }

namespace org {
namespace xml {
namespace sax {
class SAXParseException : public virtual ::java::lang::Object,
                          public virtual ::org::xml::sax::SAXException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SAXParseException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::org::xml::sax::SAXException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SAXParseException(const ::org::xml::sax::SAXParseException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {obj = x.obj;}
    SAXParseException(::org::xml::sax::SAXParseException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::xml::sax::SAXException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::SAXParseException& operator=(const ::org::xml::sax::SAXParseException& x) {obj = x.obj; return *this;}
    ::org::xml::sax::SAXParseException& operator=(::org::xml::sax::SAXParseException&& x) {obj = std::move(x.obj); return *this;}
    
    SAXParseException(const ::java::lang::String&, const ::org::xml::sax::Locator&);
    SAXParseException(const ::java::lang::String&, const ::org::xml::sax::Locator&, const ::java::lang::Exception&);
    SAXParseException(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, int32_t, int32_t);
    SAXParseException(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, int32_t, int32_t, const ::java::lang::Exception&);
    ::java::lang::String getPublicId() const ;
    ::java::lang::String getSystemId() const ;
    int32_t getLineNumber() const ;
    int32_t getColumnNumber() const ;

};
}
}
}


