#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.xml.transform.Source.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace xml { namespace transform { class Source; } } }
namespace org { namespace xml { namespace sax { class InputSource; } } }
namespace org { namespace xml { namespace sax { class XMLReader; } } }

namespace javax {
namespace xml {
namespace transform {
namespace sax {
class SAXSource : public virtual ::java::lang::Object,
                  public virtual ::javax::xml::transform::Source {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SAXSource(jobject _obj) : ::java::lang::Object(_obj), ::javax::xml::transform::Source(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SAXSource(const ::javax::xml::transform::sax::SAXSource& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {obj = x.obj;}
    SAXSource(::javax::xml::transform::sax::SAXSource&& x) : ::java::lang::Object((jobject)0), ::javax::xml::transform::Source((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::transform::sax::SAXSource& operator=(const ::javax::xml::transform::sax::SAXSource& x) {obj = x.obj; return *this;}
    ::javax::xml::transform::sax::SAXSource& operator=(::javax::xml::transform::sax::SAXSource&& x) {obj = std::move(x.obj); return *this;}
    
    SAXSource();
    SAXSource(const ::org::xml::sax::XMLReader&, const ::org::xml::sax::InputSource&);
    SAXSource(const ::org::xml::sax::InputSource&);
    void setXMLReader(const ::org::xml::sax::XMLReader&) const ;
    ::org::xml::sax::XMLReader getXMLReader() const ;
    void setInputSource(const ::org::xml::sax::InputSource&) const ;
    ::org::xml::sax::InputSource getInputSource() const ;
    void setSystemId(const ::java::lang::String&) const ;
    ::java::lang::String getSystemId() const ;
    static ::org::xml::sax::InputSource sourceToInputSource(const ::javax::xml::transform::Source&);

};
}
}
}
}


