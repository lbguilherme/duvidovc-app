#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.ContentHandler.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace transform { class Templates; } } }

namespace javax {
namespace xml {
namespace transform {
namespace sax {
class TemplatesHandler : public virtual ::java::lang::Object,
                         public virtual ::org::xml::sax::ContentHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TemplatesHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::ContentHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TemplatesHandler(const ::javax::xml::transform::sax::TemplatesHandler& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0) {obj = x.obj;}
    TemplatesHandler(::javax::xml::transform::sax::TemplatesHandler&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::ContentHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::sax::TemplatesHandler& operator=(const ::javax::xml::transform::sax::TemplatesHandler& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::sax::TemplatesHandler& operator=(::javax::xml::transform::sax::TemplatesHandler&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::xml::transform::Templates getTemplates() const;
    void setSystemId(const ::java::lang::String&) const;
    ::java::lang::String getSystemId() const;

};
}
}
}
}


