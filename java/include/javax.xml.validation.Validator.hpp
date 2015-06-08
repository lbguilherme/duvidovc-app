#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace transform { class Result; } } }
namespace javax { namespace xml { namespace transform { class Source; } } }
namespace org { namespace w3c { namespace dom { namespace ls { class LSResourceResolver; } } } }
namespace org { namespace xml { namespace sax { class ErrorHandler; } } }

namespace javax {
namespace xml {
namespace validation {
class Validator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Validator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Validator(const ::javax::xml::validation::Validator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Validator(::javax::xml::validation::Validator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::validation::Validator& operator=(const ::javax::xml::validation::Validator& x) {obj = x.obj; return *this;}
    ::javax::xml::validation::Validator& operator=(::javax::xml::validation::Validator&& x) {obj = std::move(x.obj); return *this;}
    
    void reset() const;
    void validate(const ::javax::xml::transform::Source&) const;
    void validate(const ::javax::xml::transform::Source&, const ::javax::xml::transform::Result&) const;
    void setErrorHandler(const ::org::xml::sax::ErrorHandler&) const;
    ::org::xml::sax::ErrorHandler getErrorHandler() const;
    void setResourceResolver(const ::org::w3c::dom::ls::LSResourceResolver&) const;
    ::org::w3c::dom::ls::LSResourceResolver getResourceResolver() const;
    bool getFeature(const ::java::lang::String&) const;
    void setFeature(const ::java::lang::String&, bool) const;
    void setProperty(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::java::lang::Object getProperty(const ::java::lang::String&) const;

};
}
}
}


