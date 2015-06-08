#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.xml.transform.TransformerFactory.hpp"

namespace javax { namespace xml { namespace transform { class Source; } } }
namespace javax { namespace xml { namespace transform { class Templates; } } }
namespace javax { namespace xml { namespace transform { namespace sax { class TemplatesHandler; } } } }
namespace javax { namespace xml { namespace transform { namespace sax { class TransformerHandler; } } } }
namespace org { namespace xml { namespace sax { class XMLFilter; } } }

namespace javax {
namespace xml {
namespace transform {
namespace sax {
class SAXTransformerFactory : public virtual ::java::lang::Object,
                              public virtual ::javax::xml::transform::TransformerFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SAXTransformerFactory(jobject _obj) : ::java::lang::Object(_obj), ::javax::xml::transform::TransformerFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SAXTransformerFactory(const ::javax::xml::transform::sax::SAXTransformerFactory& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::TransformerFactory((jobject)0) {obj = x.obj;}
    SAXTransformerFactory(::javax::xml::transform::sax::SAXTransformerFactory&& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::TransformerFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::sax::SAXTransformerFactory& operator=(const ::javax::xml::transform::sax::SAXTransformerFactory& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::sax::SAXTransformerFactory& operator=(::javax::xml::transform::sax::SAXTransformerFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::xml::transform::sax::TransformerHandler newTransformerHandler(const ::javax::xml::transform::Source&) const;
    ::javax::xml::transform::sax::TransformerHandler newTransformerHandler(const ::javax::xml::transform::Templates&) const;
    ::javax::xml::transform::sax::TransformerHandler newTransformerHandler() const;
    ::javax::xml::transform::sax::TemplatesHandler newTemplatesHandler() const;
    ::org::xml::sax::XMLFilter newXMLFilter(const ::javax::xml::transform::Source&) const;
    ::org::xml::sax::XMLFilter newXMLFilter(const ::javax::xml::transform::Templates&) const;

};
}
}
}
}


