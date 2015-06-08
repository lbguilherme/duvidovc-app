#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class URL; } }
namespace javax { namespace xml { namespace transform { class Source; } } }
namespace javax { namespace xml { namespace validation { class Schema; } } }
namespace javax { namespace xml { namespace validation { class SchemaFactory; } } }
namespace org { namespace w3c { namespace dom { namespace ls { class LSResourceResolver; } } } }
namespace org { namespace xml { namespace sax { class ErrorHandler; } } }

namespace javax {
namespace xml {
namespace validation {
class SchemaFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SchemaFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SchemaFactory(const ::javax::xml::validation::SchemaFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SchemaFactory(::javax::xml::validation::SchemaFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::validation::SchemaFactory& operator=(const ::javax::xml::validation::SchemaFactory& x) {obj = x.obj; return *this;}
    ::javax::xml::validation::SchemaFactory& operator=(::javax::xml::validation::SchemaFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::javax::xml::validation::SchemaFactory newInstance(const ::java::lang::String&);
    static ::javax::xml::validation::SchemaFactory newInstance(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::ClassLoader&);
    bool isSchemaLanguageSupported(const ::java::lang::String&) const;
    bool getFeature(const ::java::lang::String&) const;
    void setFeature(const ::java::lang::String&, bool) const;
    void setProperty(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::java::lang::Object getProperty(const ::java::lang::String&) const;
    void setErrorHandler(const ::org::xml::sax::ErrorHandler&) const;
    ::org::xml::sax::ErrorHandler getErrorHandler() const;
    void setResourceResolver(const ::org::w3c::dom::ls::LSResourceResolver&) const;
    ::org::w3c::dom::ls::LSResourceResolver getResourceResolver() const;
    ::javax::xml::validation::Schema newSchema(const ::javax::xml::transform::Source&) const;
    ::javax::xml::validation::Schema newSchema(const ::java::io::File&) const;
    ::javax::xml::validation::Schema newSchema(const ::java::net::URL&) const;
    ::javax::xml::validation::Schema newSchema(const std::vector< ::javax::xml::transform::Source>&) const;
    ::javax::xml::validation::Schema newSchema() const;

};
}
}
}


