#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace parsers { class SAXParser; } } }
namespace javax { namespace xml { namespace parsers { class SAXParserFactory; } } }
namespace javax { namespace xml { namespace validation { class Schema; } } }

namespace javax {
namespace xml {
namespace parsers {
class SAXParserFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SAXParserFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SAXParserFactory(const ::javax::xml::parsers::SAXParserFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SAXParserFactory(::javax::xml::parsers::SAXParserFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::parsers::SAXParserFactory& operator=(const ::javax::xml::parsers::SAXParserFactory& x) {obj = x.obj; return *this;}
    ::javax::xml::parsers::SAXParserFactory& operator=(::javax::xml::parsers::SAXParserFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::javax::xml::parsers::SAXParserFactory newInstance();
    static ::javax::xml::parsers::SAXParserFactory newInstance(const ::java::lang::String&, const ::java::lang::ClassLoader&);
    ::javax::xml::parsers::SAXParser newSAXParser() const;
    void setNamespaceAware(bool) const;
    void setValidating(bool) const;
    bool isNamespaceAware() const;
    bool isValidating() const;
    void setFeature(const ::java::lang::String&, bool) const;
    bool getFeature(const ::java::lang::String&) const;
    ::javax::xml::validation::Schema getSchema() const;
    void setSchema(const ::javax::xml::validation::Schema&) const;
    void setXIncludeAware(bool) const;
    bool isXIncludeAware() const;

};
}
}
}


