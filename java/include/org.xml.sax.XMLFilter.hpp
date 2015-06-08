#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.xml.sax.XMLReader.hpp"

namespace org { namespace xml { namespace sax { class XMLReader; } } }

namespace org {
namespace xml {
namespace sax {
class XMLFilter : public virtual ::java::lang::Object,
                  public virtual ::org::xml::sax::XMLReader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XMLFilter(jobject _obj) : ::java::lang::Object(_obj), ::org::xml::sax::XMLReader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XMLFilter(const ::org::xml::sax::XMLFilter& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {obj = x.obj;}
    XMLFilter(::org::xml::sax::XMLFilter&& x) : ::java::lang::Object((jobject)0), ::org::xml::sax::XMLReader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::xml::sax::XMLFilter& operator=(const ::org::xml::sax::XMLFilter& x) {obj = x.obj; return *this;}
    ::org::xml::sax::XMLFilter& operator=(::org::xml::sax::XMLFilter&& x) {obj = std::move(x.obj); return *this;}
    
    void setParent(const ::org::xml::sax::XMLReader&) const;
    ::org::xml::sax::XMLReader getParent() const;

};
}
}
}


