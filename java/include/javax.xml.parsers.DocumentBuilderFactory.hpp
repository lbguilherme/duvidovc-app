#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace parsers { class DocumentBuilder; } } }
namespace javax { namespace xml { namespace parsers { class DocumentBuilderFactory; } } }
namespace javax { namespace xml { namespace validation { class Schema; } } }

namespace javax {
namespace xml {
namespace parsers {
class DocumentBuilderFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DocumentBuilderFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DocumentBuilderFactory(const ::javax::xml::parsers::DocumentBuilderFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DocumentBuilderFactory(::javax::xml::parsers::DocumentBuilderFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::parsers::DocumentBuilderFactory& operator=(const ::javax::xml::parsers::DocumentBuilderFactory& x) {obj = x.obj; return *this;}
    ::javax::xml::parsers::DocumentBuilderFactory& operator=(::javax::xml::parsers::DocumentBuilderFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::javax::xml::parsers::DocumentBuilderFactory newInstance();
    static ::javax::xml::parsers::DocumentBuilderFactory newInstance(const ::java::lang::String&, const ::java::lang::ClassLoader&);
    ::javax::xml::parsers::DocumentBuilder newDocumentBuilder() const ;
    void setNamespaceAware(bool) const ;
    void setValidating(bool) const ;
    void setIgnoringElementContentWhitespace(bool) const ;
    void setExpandEntityReferences(bool) const ;
    void setIgnoringComments(bool) const ;
    void setCoalescing(bool) const ;
    bool isNamespaceAware() const ;
    bool isValidating() const ;
    bool isIgnoringElementContentWhitespace() const ;
    bool isExpandEntityReferences() const ;
    bool isIgnoringComments() const ;
    bool isCoalescing() const ;
    void setAttribute(const ::java::lang::String&, const ::java::lang::Object&) const ;
    ::java::lang::Object getAttribute(const ::java::lang::String&) const ;
    void setFeature(const ::java::lang::String&, bool) const ;
    bool getFeature(const ::java::lang::String&) const ;
    ::javax::xml::validation::Schema getSchema() const ;
    void setSchema(const ::javax::xml::validation::Schema&) const ;
    void setXIncludeAware(bool) const ;
    bool isXIncludeAware() const ;

};
}
}
}


