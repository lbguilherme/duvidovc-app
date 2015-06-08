#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.ContentHandler.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace validation { class TypeInfoProvider; } } }
namespace org { namespace w3c { namespace dom { namespace ls { class LSResourceResolver; } } } }
namespace org { namespace xml { namespace sax { class ContentHandler; } } }
namespace org { namespace xml { namespace sax { class ErrorHandler; } } }

namespace javax {
namespace xml {
namespace validation {
class ValidatorHandler : public virtual ::java::lang::Object,
                         public virtual ::org::xml::sax::ContentHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ValidatorHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::ContentHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ValidatorHandler(const ::javax::xml::validation::ValidatorHandler& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0) {obj = x.obj;}
    ValidatorHandler(::javax::xml::validation::ValidatorHandler&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::validation::ValidatorHandler& operator=(const ::javax::xml::validation::ValidatorHandler& x) {obj = x.obj; return *this;}
    ::javax::xml::validation::ValidatorHandler& operator=(::javax::xml::validation::ValidatorHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void setContentHandler(const ::org::xml::sax::ContentHandler&) const;
    ::org::xml::sax::ContentHandler getContentHandler() const;
    void setErrorHandler(const ::org::xml::sax::ErrorHandler&) const;
    ::org::xml::sax::ErrorHandler getErrorHandler() const;
    void setResourceResolver(const ::org::w3c::dom::ls::LSResourceResolver&) const;
    ::org::w3c::dom::ls::LSResourceResolver getResourceResolver() const;
    ::javax::xml::validation::TypeInfoProvider getTypeInfoProvider() const;
    bool getFeature(const ::java::lang::String&) const;
    void setFeature(const ::java::lang::String&, bool) const;
    void setProperty(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::java::lang::Object getProperty(const ::java::lang::String&) const;

};
}
}
}


